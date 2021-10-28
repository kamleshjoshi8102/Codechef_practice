public class Bingo {
    public int[][] arr;
    int path = 1;

    // initialize the solution matrix in constructor.
    public Bingo(int N) {
        arr = new int[N][N];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                arr[i][j] = 0;
            }
        }
    }

    public boolean findallWord(char[][] matrix, String word) {
        int N = matrix.length;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (findall(matrix, word, i, j, 0, N)) {
                    return true;
                }
            }
        }
        return false;
    }

    public boolean findall(char[][] matrix, String word, int row, int col,
                           int index, int N) {

        // check if current cell not already used or character in it is not not

        if (arr[row][col] != 0 || word.charAt(index) != matrix[row][col]) {
            return false;
        }

        if (index == word.length() - 1) {
            // word is found, return true
            arr[row][col] = path++;
            return true;
        }

        // mark the current cell as 1
        arr[row][col] = path++;
        // check if cell is already used

        if (row + 1 < N && findall(matrix, word, row + 1, col, index + 1, N)) { // go
            // down
            return true;
        }
        if (row - 1 >= 0 && findall(matrix, word, row - 1, col, index + 1, N)) { // go
            // up
            return true;
        }
        if (col + 1 < N && findall(matrix, word, row, col + 1, index + 1, N)) { // go
            // right
            return true;
        }
        if (col - 1 >= 0 && findall(matrix, word, row, col - 1, index + 1, N)) { // go
            // left
            return true;
        }
        if (row - 1 >= 0 && col + 1 < N
                && findall(matrix, word, row - 1, col + 1, index + 1, N)) {
            // go diagonally up right
            return true;
        }
        if (row - 1 >= 0 && col - 1 >= 0
                && findall(matrix, word, row - 1, col - 1, index + 1, N)) {
            // go diagonally up left
            return true;
        }
		if (row + 1 < N && col - 1 >= 0
				&& findall(matrix, word, row + 1, col - 1, index + 1, N)) {
			// go diagonally down left
			return true;
		}
		if (row + 1 < N && col + 1 < N
				&& findall(matrix, word, row + 1, col + 1, index + 1, N)) {
			// go diagonally down right
			return true;
		}

        // if none of the option works out, BACKTRACK and return false
        arr[row][col] = 0;
        path--;
        return false;
    }

    public void print() {
        for (int[] ints : arr) {
            for (int j = 0; j < arr.length; j++) {
                System.out.print(" " + ints[j]);
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        char[][] matrix = { { 'a', 'z', 'y', 'c', 'd' },
                            { 'b', 'h', 'n', 'z', 'x' },
                            { 'h', 'w', 'o', 'i', 'o' },
                            { 'o', 'r', 'n', 'r', 'n' },
                            { 'j', 'a', 'v', 'a', 'n' } };
        Bingo w = new Bingo(matrix.length);
        if (w.findallWord(matrix, "horizon")) {
            w.print();
        } else {
            System.out.println("NO PATH FOUND");
        }

	}

    }

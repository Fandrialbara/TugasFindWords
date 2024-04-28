for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            string diagonal = "";
            for (int k = 0; i + k < rows && j + k < cols; k++) {
                diagonal += matrix[i + k][j + k];
                if (diagonal == word) {
                    return true;
                }
            }
        }
    }

    for (int i = rows - 1; i >= 0; i--) {
        for (int j = 0; j < cols; j++) {
            string diagonal = "";
            for (int k = 0; i - k >= 0 && j + k < cols; k++) {
                diagonal += matrix[i - k][j + k];
                if (diagonal == word) {
                    return true;
                }
            }
        }
    }

    return false;
}

int main() {
    int N;
    cin >> N;

    vector<string> words(N);
    for (int i = 0; i < N; i++) {
        cin >> words[i];
    }

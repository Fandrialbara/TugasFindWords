vector<string> matrix = {
        "aaflkhpfssuficiclesgnnh","sfvreomrwlrttsxqqnaoao","qeiaifxaeirfvfysximinji",
		"wstrlgocapbiafiwiwtuacm","feyaeapistpcrlujkoakcers","rvdakpndeehdemsnckkfoah",
		"mrnedslcrriwnrsaafitmmi","yaaecieahymotavhrsstisb","rjsewelccennietohwsglse",
		"atanyymoieesnesioireltr","utenewebhmybetnnraieben","rclkuteaeqjlsgshtgdskoa",
		"bhoicatnrrsddecehoolgit","ensluarirsetalocohctohe","fzfudqjymadoyiwyglovesu",
		"tekalfwonsnaebmiejtzntg","eswposjxeutuyozuwakezhm","kzuhbpezeerflmsnowballh",
		"nsnowboardytvwyclevohsa","acocrolgziychodrazzilbi","lbvkkwanzaaqinwolpwonsl",
		"bfreezingrainslilgtmelt","hqpylwhfmnffufpswxnummv",
    };

    for (int i = 0; i < N; i++) {
        if (searchWord(matrix, words[i])) {
            cout << "Ada" << endl;
        } else {
            cout << "Tidak Ada" << endl;
        }
    }

    return 0;
}

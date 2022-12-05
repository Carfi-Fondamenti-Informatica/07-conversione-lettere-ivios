bool lettera (char &a) {
    bool flag = false;
    if (((a>=65)and(a<=90))or((a>=97)and(a<=122))){
        flag = true;
        if ((a>=65)and(a<=90)){
            a += 32;
        } else {
            a -= 32;
        }
    }
    return flag;
}

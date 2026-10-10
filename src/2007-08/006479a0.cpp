// from server: 71% by colin
struct CXTPCommandBar {
    int sub_647510();
    int sub_63023e();
    int sub_67a9a0(int, int);
    int OnSomething(int, int);
};

extern "C" int __stdcall ScreenToClient(int, int*);

int CXTPCommandBar::OnSomething(int a, int b) {
    if (sub_647510() != 0) {
        int pt[2];
        ScreenToClient(*(int*)((char*)this + 0x20), pt);
        int result = sub_67a9a0(pt[0], pt[1]);
        if (result != 0) {
            if (*(int*)((char*)result + 0x84) <= 0) {
                int v = *(int*)((char*)result + 0xf8);
                if (v == 2 || v == 3 || v == 4)
                    return 5;
            }
        }
        return 1;
    }
    sub_63023e();
    return 1;
}

// from server: 71% by colin
struct RakPeer {
    void f(int, bool);
};

void RakPeer::f(int a, bool b) {
    char* base = reinterpret_cast<char*>(this) + 0x8e8;
    if (b) {
        int zero = 0;
        int* p = &a;
        extern void __stdcall sub_4C4D80(char*, int*, int);
        sub_4C4D80(base, p, zero);
    } else {
        extern void __stdcall sub_4C4CB0(char*, int*);
        sub_4C4CB0(base, &a);
    }
}

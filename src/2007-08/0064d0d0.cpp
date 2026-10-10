// from server: 41% by colin
struct CXTPImageManagerIconSet {
    void func(int, int, int, int, int);
};

extern "C" void __stdcall sub_64CE50(int);
extern "C" void __stdcall sub_6485E0(void*, void*);
extern "C" void __stdcall sub_64B7F0(void*);
extern "C" void __stdcall sub_6496A0(void*);

void CXTPImageManagerIconSet::func(int a, int b, int c, int d, int e) {
    void* p = 0;
    sub_64CE50(e);
    sub_6485E0(&p, &p);
    sub_64B7F0(&p);
    sub_6496A0(&p);
}

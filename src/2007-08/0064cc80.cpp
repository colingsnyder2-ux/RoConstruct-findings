// from server: 27% by colin
struct CXTPImageManagerIconSet {
    void sub_64CB90();
    void sub_64ACD0();
    void sub_64ACA0();
    void sub_63069A();
    void func();
};

extern "C" int __stdcall FreeLibrary(void*);

void CXTPImageManagerIconSet::func() {
    sub_64CB90();
    void* p = *(void**)((char*)this + 0x58);
    if (p != 0) {
        FreeLibrary(p);
    }
    sub_64ACD0();
    sub_64ACA0();
    sub_63069A();
}

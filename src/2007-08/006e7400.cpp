// from server: 4% by colin
struct CXTPDockingPaneDefaultTheme {
    char pad0[0x24];
    int field24;
    char pad28[0x50];
    int field78;
    char pad7c[0x18];
    int field94;
    char pad98[0x108];
    int field1a0;
    int GetXtremeColor(unsigned int);
    int sub_6e54b0(int);
    void sub_7383ca(int, int, int, int, int, int, int, int);
    void sub_6e7400(int, int, int, int, int, int);
};

extern "C" {
    void __stdcall sub_77ddb8(void*);
    void __stdcall sub_77ddbc(void*);
}

int CXTPDockingPaneDefaultTheme::GetXtremeColor(unsigned int idx) {
    if (idx <= 0x3e) {
        return *(int*)((char*)this + idx * 4 + 0xa4);
    }
    return 0;
}

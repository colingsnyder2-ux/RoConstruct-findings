// from server: 79% by colin
struct CXTPCommandBarKeyboardTip {
    char pad[0x74];
    void* field_74;
    void* getAt(int index);
    void setSelected(int index);
};

void CXTPCommandBarKeyboardTip::setSelected(int index) {
    void* p = getAt(index);
    if (p != 0) {
        int (__stdcall *fn1)(void*) = *(int (__stdcall **)(void*))((char*)(*(void**)p) + 0x160);
        int r = fn1(p);
        int flag = (r == 0) ? 1 : 0;
        void (__stdcall *fn2)(void*, int) = *(void (__stdcall **)(void*, int))((char*)(*(void**)p) + 0x15c);
        fn2(p, flag);
    }
    *(int*)((char*)field_74 + 0x4c) = 1;
}

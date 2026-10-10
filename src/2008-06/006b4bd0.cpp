// from server: 44% by Cezant64gamejr
struct CXTPCommandBarCmdUI {
    void* vtable;

    int SomeFunction();
};

extern "C" int __stdcall CallFunction(int, int);

int CXTPCommandBarCmdUI::SomeFunction() {
    int* vtable = reinterpret_cast<int*>(this);
    int func = vtable[0x1f4 / 4];
    CallFunction(0, 1);
    return 0;
}

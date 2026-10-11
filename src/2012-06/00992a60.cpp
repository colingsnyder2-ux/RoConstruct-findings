// from server: 85% by atomic.potato
struct CCommandBarCmdUI {
    void Set(int value);
};

void CCommandBarCmdUI::Set(int value) {
    *(int*)((char*)this + 0x2c) = 1;
    int commandBar = *(int*)((char*)this + 0x28);

    if (commandBar != 0 && *(int*)((char*)commandBar + 0xa0) != value) {
        *(int*)((char*)commandBar + 0xa0) = value;
        ((void (__thiscall *)(void*, int))0x985030)((void*)commandBar, 1);
    }
}

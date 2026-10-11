// from server: 64% by atomic.potato
struct CCommandBarCmdUI {
    int m_value;
    void Set(int value);
};

void CCommandBarCmdUI::Set(int value) {
    *(int*)((char*)this + 0x2c) = 1;
    int* p = *(int**)((char*)this + 0x28);
    if (p != 0 && p[0x28] != value) {
        p[0x28] = value;
        *(int*)((char*)this + 0x28) = 1;
    }
}

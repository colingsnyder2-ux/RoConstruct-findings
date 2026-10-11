// from server: 62% by atomic.potato
struct CXTPImageEditorDlg {
    char pad[0xa54];
    void* field_a54;
    void SetToolBar(void* p);
};

void CXTPImageEditorDlg::SetToolBar(void* p)
{
    if (field_a54)
        ((void (__thiscall*)(void*, int))0x8c1f50)(field_a54, 0);
    if (p)
        ((void (__thiscall*)(void*, int))0x8c1f50)(p, 1);
    field_a54 = p;
}

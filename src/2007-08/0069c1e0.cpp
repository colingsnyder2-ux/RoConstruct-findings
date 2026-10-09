// from server: 100% by colin
// roc 2007-08 0069c1e0  unit: CXTPPropertyGridView  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069c1e0
//
// 0069c1e0  56                   push esi
// 0069c1e1  57                   push edi
// 0069c1e2  8bf9                 mov edi, ecx
// 0069c1e4  e887fcffff           call 0x69be70
// 0069c1e9  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 0069c1ef  85c9                 test ecx, ecx
// 0069c1f1  8bf0                 mov esi, eax
// 0069c1f3  740a                 je 0x69c1ff
// 0069c1f5  8b01                 mov eax, dword ptr [ecx]
// 0069c1f7  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 0069c1fd  ffd2                 call edx
// 0069c1ff  85f6                 test esi, esi
// 0069c201  740c                 je 0x69c20f
// 0069c203  8b06                 mov eax, dword ptr [esi]
// 0069c205  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 0069c20b  8bce                 mov ecx, esi
// 0069c20d  ffd2                 call edx
// 0069c20f  85f6                 test esi, esi
// 0069c211  89b7e0000000         mov dword ptr [edi + 0xe0], esi
// 0069c217  7411                 je 0x69c22a
// 0069c219  8b8fb0000000         mov ecx, dword ptr [edi + 0xb0]
// 0069c21f  8b01                 mov eax, dword ptr [ecx]
// 0069c221  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 0069c227  56                   push esi
// 0069c228  ffd2                 call edx
// 0069c22a  5f                   pop edi
// 0069c22b  5e                   pop esi
// 0069c22c  c3                   ret 

struct CXTPPropertyGridView
{
    char pad[0xb0];
    void* m_pItem;
    char pad2[0x2c];
    void* m_pSelected;

    void Refresh();
};

extern void* __fastcall sub_69be70(void* self);

void CXTPPropertyGridView::Refresh()
{
    void* p = sub_69be70(this);
    if (m_pSelected)
    {
        void** vt = *(void***)m_pSelected;
        void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vt[0x2c];
        fn(m_pSelected);
    }
    if (p)
    {
        void** vt = *(void***)p;
        void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vt[0x2b];
        fn(p);
    }
    m_pSelected = p;
    if (p)
    {
        void** vt = *(void***)m_pItem;
        void (__thiscall *fn)(void*, void*) = (void (__thiscall *)(void*, void*))vt[0x56];
        fn(m_pItem, p);
    }
}

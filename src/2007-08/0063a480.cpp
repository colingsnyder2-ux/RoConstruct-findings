// from server: 88% by colin
// roc 2007-08 0063a480  unit: CPatchedControlComboBox  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063a480
//
// 0063a480  837c240400           cmp dword ptr [esp + 4], 0
// 0063a485  56                   push esi
// 0063a486  8bf1                 mov esi, ecx
// 0063a488  8b06                 mov eax, dword ptr [esi]
// 0063a48a  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0063a490  57                   push edi
// 0063a491  8bbed0000000         mov edi, dword ptr [esi + 0xd0]
// 0063a497  8bcf                 mov ecx, edi
// 0063a499  7505                 jne 0x63a4a0
// 0063a49b  83c901               or ecx, 1
// 0063a49e  eb03                 jmp 0x63a4a3
// 0063a4a0  83e1fe               and ecx, 0xfffffffe
// 0063a4a3  51                   push ecx
// 0063a4a4  8bce                 mov ecx, esi
// 0063a4a6  ffd2                 call edx
// 0063a4a8  3bbed0000000         cmp edi, dword ptr [esi + 0xd0]
// 0063a4ae  7407                 je 0x63a4b7
// 0063a4b0  8bce                 mov ecx, esi
// 0063a4b2  e8f9f8ffff           call 0x639db0
// 0063a4b7  5f                   pop edi
// 0063a4b8  5e                   pop esi
// 0063a4b9  c20400               ret 4

struct CPatchedControlComboBox
{
    void SetDirty(int dirty);
    void sub_00639db0();
};

void CPatchedControlComboBox::SetDirty(int dirty)
{
    void (__thiscall **vtbl)(void*, unsigned int) = *(void (__thiscall ***)(void*, unsigned int))this;
    void (__thiscall *fn)(void*, unsigned int) = vtbl[0x94 / 4];

    unsigned int flags = *(unsigned int*)((char*)this + 0xd0);
    unsigned int newFlags;
    if (dirty == 0)
        newFlags = flags | 1;
    else
        newFlags = flags & 0xfffffffe;

    fn(this, newFlags);

    if (flags != *(unsigned int*)((char*)this + 0xd0))
        sub_00639db0();
}

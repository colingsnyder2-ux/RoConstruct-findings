// from server: 100% by tester
// roc 2008-06 006a8230  unit: CPatchedControlComboBox  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a8230
//
// 006a8230  56                   push esi
// 006a8231  57                   push edi
// 006a8232  8bf1                 mov esi, ecx
// 006a8234  e8c7ffffff           call 0x6a8200
// 006a8239  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a823d  3bc7                 cmp eax, edi
// 006a823f  7508                 jne 0x6a8249
// 006a8241  39bed8010000         cmp dword ptr [esi + 0x1d8], edi
// 006a8247  742a                 je 0x6a8273
// 006a8249  8bce                 mov ecx, esi
// 006a824b  89bed8010000         mov dword ptr [esi + 0x1d8], edi
// 006a8251  e88affffff           call 0x6a81e0
// 006a8256  85c0                 test eax, eax
// 006a8258  740d                 je 0x6a8267
// 006a825a  8b10                 mov edx, dword ptr [eax]
// 006a825c  8bc8                 mov ecx, eax
// 006a825e  8b8220020000         mov eax, dword ptr [edx + 0x220]
// 006a8264  57                   push edi
// 006a8265  ffd0                 call eax
// 006a8267  8b16                 mov edx, dword ptr [esi]
// 006a8269  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 006a826f  8bce                 mov ecx, esi
// 006a8271  ffd0                 call eax
// 006a8273  5f                   pop edi
// 006a8274  5e                   pop esi
// 006a8275  c20400               ret 4

struct CPatchedControlComboBox {
    char pad[0x1d8];
    int field_1cc;
    int sub_637300();
    int sub_637320();
    void setValue(int);
};

void CPatchedControlComboBox::setValue(int value)
{
    int current = sub_637320();
    if (current == value && this->field_1cc == value)
        return;

    this->field_1cc = value;
    int obj = sub_637300();
    if (obj != 0) {
        int* vtbl = *(int**)obj;
        int (__thiscall *fn)(void*, int) = (int (__thiscall *)(void*, int))vtbl[0x220 / 4];
        fn((void*)obj, value);
    }
    int* vtbl2 = *(int**)this;
    void (__thiscall *fn2)(void*) = (void (__thiscall *)(void*))vtbl2[0x164 / 4];
    fn2(this);
}

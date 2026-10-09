// from server: 100% by colin
// roc 2007-08 00637350  unit: CPatchedControlComboBox  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00637350
//
// 00637350  56                   push esi
// 00637351  57                   push edi
// 00637352  8bf1                 mov esi, ecx
// 00637354  e8c7ffffff           call 0x637320
// 00637359  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0063735d  3bc7                 cmp eax, edi
// 0063735f  7508                 jne 0x637369
// 00637361  39becc010000         cmp dword ptr [esi + 0x1cc], edi
// 00637367  742a                 je 0x637393
// 00637369  8bce                 mov ecx, esi
// 0063736b  89becc010000         mov dword ptr [esi + 0x1cc], edi
// 00637371  e88affffff           call 0x637300
// 00637376  85c0                 test eax, eax
// 00637378  740d                 je 0x637387
// 0063737a  8b10                 mov edx, dword ptr [eax]
// 0063737c  8bc8                 mov ecx, eax
// 0063737e  8b8208020000         mov eax, dword ptr [edx + 0x208]
// 00637384  57                   push edi
// 00637385  ffd0                 call eax
// 00637387  8b16                 mov edx, dword ptr [esi]
// 00637389  8b825c010000         mov eax, dword ptr [edx + 0x15c]
// 0063738f  8bce                 mov ecx, esi
// 00637391  ffd0                 call eax
// 00637393  5f                   pop edi
// 00637394  5e                   pop esi
// 00637395  c20400               ret 4

struct CPatchedControlComboBox {
    char pad[0x1cc];
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
        int (__thiscall *fn)(void*, int) = (int (__thiscall *)(void*, int))vtbl[0x208 / 4];
        fn((void*)obj, value);
    }
    int* vtbl2 = *(int**)this;
    void (__thiscall *fn2)(void*) = (void (__thiscall *)(void*))vtbl2[0x15c / 4];
    fn2(this);
}

// roc 2009-12 007faa50  unit: CPatchedControlComboBox  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007faa50
//
// 007faa50  56                   push esi
// 007faa51  57                   push edi
// 007faa52  8bf1                 mov esi, ecx
// 007faa54  e8c7ffffff           call 0x7faa20
// 007faa59  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007faa5d  3bc7                 cmp eax, edi
// 007faa5f  7508                 jne 0x7faa69
// 007faa61  39bed8010000         cmp dword ptr [esi + 0x1d8], edi
// 007faa67  742a                 je 0x7faa93
// 007faa69  8bce                 mov ecx, esi
// 007faa6b  89bed8010000         mov dword ptr [esi + 0x1d8], edi
// 007faa71  e88affffff           call 0x7faa00
// 007faa76  85c0                 test eax, eax
// 007faa78  740d                 je 0x7faa87
// 007faa7a  8b10                 mov edx, dword ptr [eax]
// 007faa7c  8bc8                 mov ecx, eax
// 007faa7e  8b8220020000         mov eax, dword ptr [edx + 0x220]
// 007faa84  57                   push edi
// 007faa85  ffd0                 call eax
// 007faa87  8b16                 mov edx, dword ptr [esi]
// 007faa89  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 007faa8f  8bce                 mov ecx, esi
// 007faa91  ffd0                 call eax
// 007faa93  5f                   pop edi
// 007faa94  5e                   pop esi
// 007faa95  c20400               ret 4
// copied from an identical function in another client (function ?setValue@CPatchedControlComboBox@@QAEXH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// from server: 100% by tester
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
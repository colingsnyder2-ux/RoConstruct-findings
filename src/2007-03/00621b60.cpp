// roc 2007-03 00621b60  unit: seg_00620000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00621b60
//
// 00621b60  56                   push esi
// 00621b61  57                   push edi
// 00621b62  8bf1                 mov esi, ecx
// 00621b64  e8c7ffffff           call 0x621b30
// 00621b69  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00621b6d  3bc7                 cmp eax, edi
// 00621b6f  7508                 jne 0x621b79
// 00621b71  39becc010000         cmp dword ptr [esi + 0x1cc], edi
// 00621b77  742a                 je 0x621ba3
// 00621b79  8bce                 mov ecx, esi
// 00621b7b  89becc010000         mov dword ptr [esi + 0x1cc], edi
// 00621b81  e88affffff           call 0x621b10
// 00621b86  85c0                 test eax, eax
// 00621b88  740d                 je 0x621b97
// 00621b8a  8b10                 mov edx, dword ptr [eax]
// 00621b8c  8bc8                 mov ecx, eax
// 00621b8e  8b8208020000         mov eax, dword ptr [edx + 0x208]
// 00621b94  57                   push edi
// 00621b95  ffd0                 call eax
// 00621b97  8b16                 mov edx, dword ptr [esi]
// 00621b99  8b825c010000         mov eax, dword ptr [edx + 0x15c]
// 00621b9f  8bce                 mov ecx, esi
// 00621ba1  ffd0                 call eax
// 00621ba3  5f                   pop edi
// 00621ba4  5e                   pop esi
// 00621ba5  c20400               ret 4
// copied from an identical function in another client (function ?setValue@CPatchedControlComboBox@ns_ROCX000031@@QAEXH@Z)

namespace ns_ROCX000031 {
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
}

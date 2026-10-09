// roc 2009-06 00765180  unit: CXTPCustomizeSheet  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00765180
//
// 00765180  56                   push esi
// 00765181  6a01                 push 1
// 00765183  8bf1                 mov esi, ecx
// 00765185  e8363bfbff           call 0x718cc0
// 0076518a  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00765190  50                   push eax
// 00765191  6a69                 push 0x69
// 00765193  8bce                 mov ecx, esi
// 00765195  e86247fbff           call 0x7198fc
// 0076519a  8bc8                 mov ecx, eax
// 0076519c  e8153ffbff           call 0x7190b6
// 007651a1  8bce                 mov ecx, esi
// 007651a3  e8f8feffff           call 0x7650a0
// 007651a8  8b9694000000         mov edx, dword ptr [esi + 0x94]
// 007651ae  8b4874               mov ecx, dword ptr [eax + 0x74]
// 007651b1  895128               mov dword ptr [ecx + 0x28], edx
// 007651b4  5e                   pop esi
// 007651b5  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00001a@CXTPCustomizeSheet@ns_ROCX00001a@@QAEXXZ)

namespace ns_ROCX00001a {
struct CXTPCustomizeSheet {
    void sub_62FEEA(int);
    int sub_63096A(int, int);
    void sub_6302EC();
    int sub_675880();
    char pad[0x94];
    int field_94;
    void fn_ROCX00001a();
};

void CXTPCustomizeSheet::fn_ROCX00001a()
{
    sub_62FEEA(1);
    int v = sub_63096A(0x69, field_94);
    ((CXTPCustomizeSheet *)v)->sub_6302EC();
    int r = sub_675880();
    *(int *)(*(int *)(r + 0x74) + 0x28) = field_94;
}
}

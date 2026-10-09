// roc 2008-06 006ec790  unit: CXTPCustomizeSheet  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ec790
//
// 006ec790  56                   push esi
// 006ec791  6a01                 push 1
// 006ec793  8bf1                 mov esi, ecx
// 006ec795  e87441fbff           call 0x6a090e
// 006ec79a  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 006ec7a0  50                   push eax
// 006ec7a1  6a69                 push 0x69
// 006ec7a3  8bce                 mov ecx, esi
// 006ec7a5  e86e4cfbff           call 0x6a1418
// 006ec7aa  8bc8                 mov ecx, eax
// 006ec7ac  e86545fbff           call 0x6a0d16
// 006ec7b1  8bce                 mov ecx, esi
// 006ec7b3  e8f8feffff           call 0x6ec6b0
// 006ec7b8  8b9694000000         mov edx, dword ptr [esi + 0x94]
// 006ec7be  8b4874               mov ecx, dword ptr [eax + 0x74]
// 006ec7c1  895128               mov dword ptr [ecx + 0x28], edx
// 006ec7c4  5e                   pop esi
// 006ec7c5  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00000d@CXTPCustomizeSheet@ns_ROCX00000d@@QAEXXZ)

namespace ns_ROCX00000d {
struct CXTPCustomizeSheet {
    void sub_62FEEA(int);
    int sub_63096A(int, int);
    void sub_6302EC();
    int sub_675880();
    char pad[0x94];
    int field_94;
    void fn_ROCX00000d();
};

void CXTPCustomizeSheet::fn_ROCX00000d()
{
    sub_62FEEA(1);
    int v = sub_63096A(0x69, field_94);
    ((CXTPCustomizeSheet *)v)->sub_6302EC();
    int r = sub_675880();
    *(int *)(*(int *)(r + 0x74) + 0x28) = field_94;
}
}

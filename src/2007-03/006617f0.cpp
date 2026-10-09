// roc 2007-03 006617f0  unit: seg_00660000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006617f0
//
// 006617f0  56                   push esi
// 006617f1  6a01                 push 1
// 006617f3  8bf1                 mov esi, ecx
// 006617f5  e884cbfbff           call 0x61e37e
// 006617fa  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00661800  50                   push eax
// 00661801  6a69                 push 0x69
// 00661803  8bce                 mov ecx, esi
// 00661805  e8dcd5fbff           call 0x61ede6
// 0066180a  8bc8                 mov ecx, eax
// 0066180c  e86fcffbff           call 0x61e780
// 00661811  8bce                 mov ecx, esi
// 00661813  e808ffffff           call 0x661720
// 00661818  8b9694000000         mov edx, dword ptr [esi + 0x94]
// 0066181e  8b4874               mov ecx, dword ptr [eax + 0x74]
// 00661821  895128               mov dword ptr [ecx + 0x28], edx
// 00661824  5e                   pop esi
// 00661825  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000003@CXTPCustomizeSheet@ns_ROCX000003@@QAEXXZ)

namespace ns_ROCX000003 {
struct CXTPCustomizeSheet {
    void sub_62FEEA(int);
    int sub_63096A(int, int);
    void sub_6302EC();
    int sub_675880();
    char pad[0x94];
    int field_94;
    void fn_ROCX000003();
};

void CXTPCustomizeSheet::fn_ROCX000003()
{
    sub_62FEEA(1);
    int v = sub_63096A(0x69, field_94);
    ((CXTPCustomizeSheet *)v)->sub_6302EC();
    int r = sub_675880();
    *(int *)(*(int *)(r + 0x74) + 0x28) = field_94;
}
}

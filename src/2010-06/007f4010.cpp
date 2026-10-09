// roc 2010-06 007f4010  unit: CXTPCustomizeSheet  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f4010
//
// 007f4010  56                   push esi
// 007f4011  6a01                 push 1
// 007f4013  8bf1                 mov esi, ecx
// 007f4015  e80e3cfbff           call 0x7a7c28
// 007f401a  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 007f4020  50                   push eax
// 007f4021  6a69                 push 0x69
// 007f4023  8bce                 mov ecx, esi
// 007f4025  e84048fbff           call 0x7a886a
// 007f402a  8bc8                 mov ecx, eax
// 007f402c  e8ed3ffbff           call 0x7a801e
// 007f4031  8bce                 mov ecx, esi
// 007f4033  e8f8feffff           call 0x7f3f30
// 007f4038  8b9694000000         mov edx, dword ptr [esi + 0x94]
// 007f403e  8b4874               mov ecx, dword ptr [eax + 0x74]
// 007f4041  895128               mov dword ptr [ecx + 0x28], edx
// 007f4044  5e                   pop esi
// 007f4045  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000018@CXTPCustomizeSheet@ns_ROCX000018@@QAEXXZ)

namespace ns_ROCX000018 {
struct CXTPCustomizeSheet {
    void sub_62FEEA(int);
    int sub_63096A(int, int);
    void sub_6302EC();
    int sub_675880();
    char pad[0x94];
    int field_94;
    void fn_ROCX000018();
};

void CXTPCustomizeSheet::fn_ROCX000018()
{
    sub_62FEEA(1);
    int v = sub_63096A(0x69, field_94);
    ((CXTPCustomizeSheet *)v)->sub_6302EC();
    int r = sub_675880();
    *(int *)(*(int *)(r + 0x74) + 0x28) = field_94;
}
}

// roc 2007-03 00622680  unit: seg_00620000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00622680
//
// 00622680  8b442404             mov eax, dword ptr [esp + 4]
// 00622684  56                   push esi
// 00622685  50                   push eax
// 00622686  8bf1                 mov esi, ecx
// 00622688  e803ecffff           call 0x621290
// 0062268d  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00622690  8b11                 mov edx, dword ptr [ecx]
// 00622692  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 00622698  ffd0                 call eax
// 0062269a  5e                   pop esi
// 0062269b  c20400               ret 4
// copied from an identical function in another client (function ?sub_00637e80@CXTPControlComboBoxList@ns_ROCX000037@@QAEXH@Z)

namespace ns_ROCX000037 {
struct CXTPControlComboBoxList
{
    void fn_ROCX000037(int);
    void sub_00637e80(int);
};

void CXTPControlComboBoxList::sub_00637e80(int a)
{
    fn_ROCX000037(a);
    (*(void (__thiscall **)(void *))(*(int *)(*(int *)((char *)this + 0x5c)) + 0x168))(*(void **)((char *)this + 0x5c));
}
}

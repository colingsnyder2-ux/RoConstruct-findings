// roc 2011-06 0087d760  unit: CXTPPropertyGridItemEnum  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087d760
//
// 0087d760  56                   push esi
// 0087d761  e8caffffff           call 0x87d730
// 0087d766  8bf0                 mov esi, eax
// 0087d768  8b460c               mov eax, dword ptr [esi + 0xc]
// 0087d76b  85c0                 test eax, eax
// 0087d76d  7413                 je 0x87d782
// 0087d76f  833e00               cmp dword ptr [esi], 0
// 0087d772  750e                 jne 0x87d782
// 0087d774  6824e8ac00           push 0xace824
// 0087d779  50                   push eax
// 0087d77a  ff156c03a400         call dword ptr [0xa4036c]
// 0087d780  8906                 mov dword ptr [esi], eax
// 0087d782  8b36                 mov esi, dword ptr [esi]
// 0087d784  85f6                 test esi, esi
// 0087d786  741f                 je 0x87d7a7
// 0087d788  8b442418             mov eax, dword ptr [esp + 0x18]
// 0087d78c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087d790  8b542410             mov edx, dword ptr [esp + 0x10]
// 0087d794  50                   push eax
// 0087d795  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087d799  51                   push ecx
// 0087d79a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0087d79e  52                   push edx
// 0087d79f  50                   push eax
// 0087d7a0  51                   push ecx
// 0087d7a1  ffd6                 call esi
// 0087d7a3  5e                   pop esi
// 0087d7a4  c21400               ret 0x14
// 0087d7a7  b805400080           mov eax, 0x80004005
// 0087d7ac  5e                   pop esi
// 0087d7ad  c21400               ret 0x14
// copied from an identical function in another client (function ?step@Kernel@ns_ROCX000005@ns_ROCX000051@@QAEHHHHHH@Z)

namespace ns_ROCX000005 {
struct S_func_00709ee0 {

    unsigned int f(int a1, int a2, int a3, int a4);
};
unsigned int S_func_00709ee0::f(int a1, int a2, int a3, int a4)
{
    return 0x80004001u;
}
}

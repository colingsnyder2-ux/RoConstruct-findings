// roc 2009-06 00731490  unit: CXTPCommandBar  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00731490
//
// 00731490  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00731494  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00731498  8b542404             mov edx, dword ptr [esp + 4]
// 0073149c  50                   push eax
// 0073149d  51                   push ecx
// 0073149e  50                   push eax
// 0073149f  52                   push edx
// 007314a0  ff1590e98900         call dword ptr [0x89e990]
// 007314a6  83c410               add esp, 0x10
// 007314a9  c3                   ret 
// copied from an identical function in another client (function ?sub_00647a90@ns_ROCX000016@ns_ROCX00000b@@YAXHHH@Z)

namespace ns_ROCX000016 {
namespace ns_ROCX000006 {
struct S_func_007435e0 {
    char pad0[448];
    int m_x;
    void f(int a1);
};
void S_func_007435e0::f(int a1)
{
    m_x = (int)a1;
}
}
}

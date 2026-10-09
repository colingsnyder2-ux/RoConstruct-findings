// roc 2008-06 0061a3b0  unit: RBX::InletTool  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061a3b0
//
// 0061a3b0  51                   push ecx
// 0061a3b1  a120608700           mov eax, dword ptr [0x876020]
// 0061a3b6  890424               mov dword ptr [esp], eax
// 0061a3b9  33c0                 xor eax, eax
// 0061a3bb  59                   pop ecx
// 0061a3bc  c3                   ret 
// copied from an identical function in another client (function ?f@boost_thread_resource_error@ns_ROCX000000@@QAEHXZ)

namespace ns_ROCX000000 {
extern int g_7e8ff0;

struct boost_thread_resource_error {
    int f();
};

int boost_thread_resource_error::f()
{
    int tmp = g_7e8ff0;
    *(volatile int*)&tmp = tmp;
    return 0;
}
}

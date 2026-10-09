// roc 2009-06 00710730  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00710730
//
// 00710730  51                   push ecx
// 00710731  a1784f9200           mov eax, dword ptr [0x924f78]
// 00710736  890424               mov dword ptr [esp], eax
// 00710739  33c0                 xor eax, eax
// 0071073b  59                   pop ecx
// 0071073c  c3                   ret 
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

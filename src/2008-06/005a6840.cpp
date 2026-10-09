// roc 2008-06 005a6840  unit: RBX::Workspace  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a6840
//
// 005a6840  80790800             cmp byte ptr [ecx + 8], 0
// 005a6844  7409                 je 0x5a684f
// 005a6846  8b01                 mov eax, dword ptr [ecx]
// 005a6848  50                   push eax
// 005a6849  ff1534228000         call dword ptr [0x802234]
// 005a684f  c3                   ret 
// copied from an identical function in another client (function ?destroy@boost_thread_resource_error@ns_ROCX000006@@QAEXXZ)

namespace ns_ROCX000006 {
extern "C" __declspec(dllimport) int __stdcall CloseHandle(void*);

struct boost_thread_resource_error
{
    void* handle;
    int field_4;
    char flag_8;
    void destroy();
};

void boost_thread_resource_error::destroy()
{
    if (flag_8 != 0)
    {
        CloseHandle(handle);
    }
}
}

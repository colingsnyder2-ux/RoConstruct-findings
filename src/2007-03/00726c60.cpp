// roc 2007-03 00726c60  unit: seg_00720000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00726c60
//
// 00726c60  80790800             cmp byte ptr [ecx + 8], 0
// 00726c64  7409                 je 0x726c6f
// 00726c66  8b01                 mov eax, dword ptr [ecx]
// 00726c68  50                   push eax
// 00726c69  ff15fcd17700         call dword ptr [0x77d1fc]
// 00726c6f  c3                   ret 
// copied from an identical function in another client (function ?destroy@boost_thread_resource_error@ns_ROCX000003@@QAEXXZ)

namespace ns_ROCX000003 {
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

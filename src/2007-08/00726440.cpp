// from server: 100% by colin
// roc 2007-08 00726440  unit: boost::thread_resource_error  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00726440
//
// 00726440  80790800             cmp byte ptr [ecx + 8], 0
// 00726444  7409                 je 0x72644f
// 00726446  8b01                 mov eax, dword ptr [ecx]
// 00726448  50                   push eax
// 00726449  ff153cd27700         call dword ptr [0x77d23c]
// 0072644f  c3                   ret 

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

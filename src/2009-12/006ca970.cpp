// roc 2009-12 006ca970  unit: RBX::Profiling::Profiler  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ca970
//
// 006ca970  8a442404             mov al, byte ptr [esp + 4]
// 006ca974  a22026b900           mov byte ptr [0xb92620], al
// 006ca979  ff1578b39800         call dword ptr [0x98b378]
// 006ca97f  a31c26b900           mov dword ptr [0xb9261c], eax
// 006ca984  c3                   ret 
// copied from an identical function in another client (function ?set_flag_and_alloc@ns_ROCX00000c@@YAXD@Z)

namespace ns_ROCX00000c {
// from server: 100% by why2
extern "C" unsigned long (__stdcall *TlsAlloc)();

char g_flag;
unsigned long g_index;

void set_flag_and_alloc(char v)
{
    g_flag = v;
    g_index = TlsAlloc();
}
}

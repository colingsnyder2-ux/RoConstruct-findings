// from server: 100% by atomic.potato
// roc 2008-06 007a8270  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a8270
//
// 007a8270  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007a8274  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007a8278  8b542404             mov edx, dword ptr [esp + 4]
// 007a827c  50                   push eax
// 007a827d  51                   push ecx
// 007a827e  6a0f                 push 0xf
// 007a8280  52                   push edx
// 007a8281  e81affffff           call 0x7a81a0
// 007a8286  c20c00               ret 0xc

extern "C" int __stdcall func_007a81a0(int, int, int, int);

int __stdcall func_007a8270(int a, int b, int c)
{
    return func_007a81a0(a, 15, b, c);
}

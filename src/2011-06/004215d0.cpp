// roc 2011-06 004215d0  unit: RBX::DSVideoCaptureEngine  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004215d0
//
// 004215d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004215d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004215d8  8b542404             mov edx, dword ptr [esp + 4]
// 004215dc  50                   push eax
// 004215dd  687842a600           push 0xa64278
// 004215e2  51                   push ecx
// 004215e3  52                   push edx
// 004215e4  ff15e009a400         call dword ptr [0xa409e0]
// 004215ea  83c410               add esp, 0x10
// 004215ed  c3                   ret 
// copied from an identical function in another client (function ?sub_00413760@ns_ROCX00000a@@YAHPADIPBDZZ)

namespace ns_ROCX00000a {
extern "C" int __cdecl sprintf_s(char*, unsigned int, const char*, ...);

extern const char ATL_FMT[];
extern int (__stdcall *sprintf_s_ptr)(char*, unsigned int, const char*, ...);

int __cdecl sub_00413760(char* buf, unsigned int size, const char* fmt, ...)
{
    return sprintf_s_ptr(buf, size, ATL_FMT, fmt);
}
}

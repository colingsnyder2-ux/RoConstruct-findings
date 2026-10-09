// roc 2012-06 00424d50  unit: RBX::DSVideoCaptureEngine  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00424d50
//
// 00424d50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00424d54  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00424d58  8b542404             mov edx, dword ptr [esp + 4]
// 00424d5c  50                   push eax
// 00424d5d  6844d8b400           push 0xb4d844
// 00424d62  51                   push ecx
// 00424d63  52                   push edx
// 00424d64  ff15b42ab200         call dword ptr [0xb22ab4]
// 00424d6a  83c410               add esp, 0x10
// 00424d6d  c3                   ret 
// copied from an identical function in another client (function ?sub_00413760@ns_ROCX000014@@YAHPADIPBDZZ)

namespace ns_ROCX000014 {
extern "C" int __cdecl sprintf_s(char*, unsigned int, const char*, ...);

extern const char ATL_FMT[];
extern int (__stdcall *sprintf_s_ptr)(char*, unsigned int, const char*, ...);

int __cdecl sub_00413760(char* buf, unsigned int size, const char* fmt, ...)
{
    return sprintf_s_ptr(buf, size, ATL_FMT, fmt);
}
}

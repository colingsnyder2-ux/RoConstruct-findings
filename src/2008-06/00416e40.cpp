// roc 2008-06 00416e40  unit: VCContent::?$CComAggObject  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416e40
//
// 00416e40  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00416e44  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00416e48  8b542404             mov edx, dword ptr [esp + 4]
// 00416e4c  50                   push eax
// 00416e4d  6898eb8000           push 0x80eb98
// 00416e52  51                   push ecx
// 00416e53  52                   push edx
// 00416e54  ff1554288000         call dword ptr [0x802854]
// 00416e5a  83c410               add esp, 0x10
// 00416e5d  c3                   ret 
// copied from an identical function in another client (function ?sub_00413760@ns_ROCX000017@@YAHPADIPBDZZ)

namespace ns_ROCX000017 {
extern "C" int __cdecl sprintf_s(char*, unsigned int, const char*, ...);

extern const char ATL_FMT[];
extern int (__stdcall *sprintf_s_ptr)(char*, unsigned int, const char*, ...);

int __cdecl sub_00413760(char* buf, unsigned int size, const char* fmt, ...)
{
    return sprintf_s_ptr(buf, size, ATL_FMT, fmt);
}
}

// roc 2007-03 00414670  unit: seg_00410000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00414670
//
// 00414670  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00414674  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00414678  8b542404             mov edx, dword ptr [esp + 4]
// 0041467c  50                   push eax
// 0041467d  6888617800           push 0x786188
// 00414682  51                   push ecx
// 00414683  52                   push edx
// 00414684  ff15b4e97700         call dword ptr [0x77e9b4]
// 0041468a  83c410               add esp, 0x10
// 0041468d  c3                   ret 
// copied from an identical function in another client (function ?sub_00413760@ns_ROCX000007@@YAHPADIPBDZZ)

namespace ns_ROCX000007 {
extern "C" int __cdecl sprintf_s(char*, unsigned int, const char*, ...);

extern const char ATL_FMT[];
extern int (__stdcall *sprintf_s_ptr)(char*, unsigned int, const char*, ...);

int __cdecl sub_00413760(char* buf, unsigned int size, const char* fmt, ...)
{
    return sprintf_s_ptr(buf, size, ATL_FMT, fmt);
}
}

// from server: 100% by colin
// roc 2007-08 00413760  unit: std::runtime_error  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00413760
//
// 00413760  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00413764  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00413768  8b542404             mov edx, dword ptr [esp + 4]
// 0041376c  50                   push eax
// 0041376d  68c8707800           push 0x7870c8
// 00413772  51                   push ecx
// 00413773  52                   push edx
// 00413774  ff1584e97700         call dword ptr [0x77e984]
// 0041377a  83c410               add esp, 0x10
// 0041377d  c3                   ret 

extern "C" int __cdecl sprintf_s(char*, unsigned int, const char*, ...);

extern const char ATL_FMT[];
extern int (__stdcall *sprintf_s_ptr)(char*, unsigned int, const char*, ...);

int __cdecl sub_00413760(char* buf, unsigned int size, const char* fmt, ...)
{
    return sprintf_s_ptr(buf, size, ATL_FMT, fmt);
}

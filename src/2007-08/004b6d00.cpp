// from server: 83% by colin
// roc 2007-08 004b6d00  unit: Exposer  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b6d00
//
// 004b6d00  8b442404             mov eax, dword ptr [esp + 4]
// 004b6d04  50                   push eax
// 004b6d05  685ca07800           push 0x78a05c
// 004b6d0a  ff1520e97700         call dword ptr [0x77e920]
// 004b6d10  83c408               add esp, 8
// 004b6d13  c20400               ret 4

extern "C" int __cdecl printf(const char*, ...);

int __stdcall func_004b6d00(int a)
{
    return printf("HRESULT = %d: %s", a, (const char*)0x78a05c);
}

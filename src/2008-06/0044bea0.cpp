// from server: 100% by king_originala
// roc 2008-06 0044bea0  unit: CRobloxModule  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044bea0
//
// 0044bea0  8b442408             mov eax, dword ptr [esp + 8]
// 0044bea4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0044bea8  50                   push eax
// 0044bea9  51                   push ecx
// 0044beaa  6840f39700           push 0x97f340
// 0044beaf  e8fcf7ffff           call 0x44b6b0
// 0044beb4  85c0                 test eax, eax
// 0044beb6  7c16                 jl 0x44bece
// 0044beb8  8b0dfcdc9600         mov ecx, dword ptr [0x96dcfc]
// 0044bebe  85c9                 test ecx, ecx
// 0044bec0  740c                 je 0x44bece
// 0044bec2  8b15acf29700         mov edx, dword ptr [0x97f2ac]
// 0044bec8  52                   push edx
// 0044bec9  ffd1                 call ecx
// 0044becb  83c404               add esp, 4
// 0044bece  c20800               ret 8

extern unsigned long moduleData;
extern void* callbackArgument;
extern long (__cdecl *registrationCallback)(void*);

extern "C" long __stdcall registerClasses(void*, unsigned long, unsigned long);

long __stdcall registerModuleClasses(unsigned long context, unsigned long flags)
{
    long result = registerClasses(&moduleData, context, flags);
    if (result >= 0 && registrationCallback)
        result = registrationCallback(callbackArgument);
    return result;
}

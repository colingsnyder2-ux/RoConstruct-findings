// from server: 100% by colin
// roc 2007-08 0067f830  unit: CXTPControlSelector  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f830
//
// 0067f830  6820eb7c00           push 0x7ceb20
// 0067f835  ff15c8d27700         call dword ptr [0x77d2c8]
// 0067f83b  682ceb7c00           push 0x7ceb2c
// 0067f840  50                   push eax
// 0067f841  ff1588d27700         call dword ptr [0x77d288]
// 0067f847  85c0                 test eax, eax
// 0067f849  740c                 je 0x67f857
// 0067f84b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0067f84f  8b542404             mov edx, dword ptr [esp + 4]
// 0067f853  51                   push ecx
// 0067f854  52                   push edx
// 0067f855  ffd0                 call eax
// 0067f857  c3                   ret 

extern "C" __declspec(dllimport) void* __stdcall GetModuleHandleA(const char*);
extern "C" __declspec(dllimport) void* __stdcall GetProcAddress(void*, const char*);

void func_0067f830(int a, int b)
{
    void* h = GetModuleHandleA("GDI32.DLL");
    void* p = GetProcAddress(h, "SetLayout");
    if (p)
        ((void (__stdcall*)(int, int))p)(a, b);
}

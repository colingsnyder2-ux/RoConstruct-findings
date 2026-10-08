// from server: 100% by colin
// roc 2007-08 0067f800  unit: CXTPControlSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f800
//
// 0067f800  6820eb7c00           push 0x7ceb20
// 0067f805  ff15c8d27700         call dword ptr [0x77d2c8]
// 0067f80b  6814eb7c00           push 0x7ceb14
// 0067f810  50                   push eax
// 0067f811  ff1588d27700         call dword ptr [0x77d288]
// 0067f817  85c0                 test eax, eax
// 0067f819  7501                 jne 0x67f81c
// 0067f81b  c3                   ret 
// 0067f81c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0067f820  51                   push ecx
// 0067f821  ffd0                 call eax
// 0067f823  c3                   ret 

extern "C" void* (__stdcall *GetModuleHandleA)(const char*);
extern "C" void* (__stdcall *GetProcAddress)(void*, const char*);

typedef int (__stdcall *GetLayoutFn)(void*);

int __cdecl sub_0067f800(void* arg)
{
    void* h = GetModuleHandleA("GDI32.DLL");
    GetLayoutFn fn = (GetLayoutFn)GetProcAddress(h, "GetLayout");
    if (fn == 0)
        return 0;
    return fn(arg);
}

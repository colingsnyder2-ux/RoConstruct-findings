// from server: 89% by atomic.potato
// roc 2011-06 0049be60  unit: VCWorkspace::?$CComObject  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049be60
//
// 0049be60  e8b7e43600           call 0x80a31c
// 0049be65  8b4004               mov eax, dword ptr [eax + 4]
// 0049be68  8b4020               mov eax, dword ptr [eax + 0x20]
// 0049be6b  6a00                 push 0
// 0049be6d  6810e1c000           push 0xc0e110
// 0049be72  688060c000           push 0xc06080
// 0049be77  6a00                 push 0
// 0049be79  50                   push eax
// 0049be7a  e86bf43600           call 0x80b2ea
// 0049be7f  83c414               add esp, 0x14
// 0049be82  8bc8                 mov ecx, eax
// 0049be84  e8774df9ff           call 0x430c00
// 0049be89  33c0                 xor eax, eax
// 0049be8b  c20400               ret 4

extern "C" void* __stdcall func_0080a31c();
extern "C" void* __stdcall func_0080b2ea(void*, void*, void*, void*, void*);

struct T {
    void __thiscall func_00430c00();
};

struct S {
    int f(int);
};

int S::f(int)
{
    char* p = (char*)func_0080a31c();
    p = *(char**)(p + 4);
    p = *(char**)(p + 0x20);
    void* r = func_0080b2ea(p, 0, (void*)0xc06080, (void*)0xc0e110, 0);
    ((T*)r)->func_00430c00();
    return 0;
}

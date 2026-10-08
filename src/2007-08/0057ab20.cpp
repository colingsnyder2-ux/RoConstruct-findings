// from server: 50% by colin
// roc 2007-08 0057ab20  unit: RBX::Workspace  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057ab20
//
// 0057ab20  8bc1                 mov eax, ecx
// 0057ab22  8d8828020000         lea ecx, [eax + 0x228]
// 0057ab28  056c020000           add eax, 0x26c
// 0057ab2d  50                   push eax
// 0057ab2e  8b01                 mov eax, dword ptr [ecx]
// 0057ab30  8b5004               mov edx, dword ptr [eax + 4]
// 0057ab33  ffd2                 call edx
// 0057ab35  8bc8                 mov ecx, eax
// 0057ab37  e8b4140200           call 0x59bff0
// 0057ab3c  c3                   ret 

struct Sub228 {
    virtual void unused0();
    virtual void* get();
};

struct Sub26c {
    int dummy;
};

struct S_func_0057ab20 {
    char pad[0x228];
    Sub228 sub228;
    char pad2[0x26c - 0x228 - sizeof(Sub228)];
    Sub26c sub26c;
    void* method();
};

extern "C" void* __cdecl func_0059bff0(void*);

void* S_func_0057ab20::method()
{
    void* p = sub228.get();
    return func_0059bff0(p);
}

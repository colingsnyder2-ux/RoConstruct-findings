// from server: 100% by tester
// roc 2010-06 006d2b10  unit: RBX::SkateboardPlatform  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d2b10
//
// 006d2b10  8b81c0feffff         mov eax, dword ptr [ecx - 0x140]
// 006d2b16  8b88f4000000         mov ecx, dword ptr [eax + 0xf4]
// 006d2b1c  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 006d2b1f  c3                   ret 

struct S
{
    int get();
};

int S::get()
{
    struct T
    {
        int pad[66];
    };

    T* value = *(T**)((char*)this - 0x140);
    T* object = *(T**)((char*)value + 0xf4);
    return *(int*)((char*)object + 0x2c);
}
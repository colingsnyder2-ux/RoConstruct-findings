// from server: 100% by colin
// roc 2009-12 006d6a80  unit: RBX::VLaserTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d6a80
//
// 006d6a80  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006d6a83  8b88900a0000         mov ecx, dword ptr [eax + 0xa90]
// 006d6a89  8b81b4010000         mov eax, dword ptr [ecx + 0x1b4]
// 006d6a8f  85c0                 test eax, eax
// 006d6a91  7416                 je 0x6d6aa9
// 006d6a93  50                   push eax
// 006d6a94  e8ede71100           call 0x7f5286
// 006d6a99  83c404               add esp, 4
// 006d6a9c  50                   push eax
// 006d6a9d  b97cffb300           mov ecx, 0xb3ff7c
// 006d6aa2  ff1568b79800         call dword ptr [0x98b768]
// 006d6aa8  c3                   ret 
// 006d6aa9  32c0                 xor al, al
// 006d6aab  c3                   ret 

// from server: 97% by atomic.potato
typedef char BOOL;

extern "C" int __cdecl sub_7f5286(int);
extern "C" int (__thiscall *global_98b768)(void*, int);

struct S
{
    int pad0[3];
    void* data;
    char value();
};

char S::value()
{
    void* a = *(void**)((char*)this + 0x0C);
    a = *(void**)((char*)a + 0xA90);
    void* b = *(void**)((char*)a + 0x1B4);
    if (b)
        return global_98b768((void*)0xB3FF7C, sub_7f5286((int)b));
    return 0;
}
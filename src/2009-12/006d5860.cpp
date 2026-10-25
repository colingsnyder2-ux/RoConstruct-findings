// from server: 100% by colin
// roc 2009-12 006d5860  unit: RBX::VHingeTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d5860
//
// 006d5860  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006d5863  8b88900a0000         mov ecx, dword ptr [eax + 0xa90]
// 006d5869  8b81b4010000         mov eax, dword ptr [ecx + 0x1b4]
// 006d586f  85c0                 test eax, eax
// 006d5871  7416                 je 0x6d5889
// 006d5873  50                   push eax
// 006d5874  e80dfa1100           call 0x7f5286
// 006d5879  83c404               add esp, 4
// 006d587c  50                   push eax
// 006d587d  b918f5b300           mov ecx, 0xb3f518
// 006d5882  ff1568b79800         call dword ptr [0x98b768]
// 006d5888  c3                   ret 
// 006d5889  32c0                 xor al, al
// 006d588b  c3                   ret 

// from server: 97% by atomic.potato
typedef char BOOL;

extern "C" int __cdecl sub_007f5286(int);
extern "C" int (__thiscall *g_call)(void*, int);

struct S
{
    int pad0[3];
    int p;
    char f();
};

char S::f()
{
    int a = *(int *)((char *)p + 0xa90);
    int b = *(int *)((char *)a + 0x1b4);
    if (b)
        return g_call((void *)0xb3f518, sub_007f5286(b));
    return 0;
}
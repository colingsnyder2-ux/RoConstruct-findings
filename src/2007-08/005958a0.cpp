// from server: 85% by colin
// roc 2007-08 005958a0  unit: RBX::LaserTool  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005958a0
//
// 005958a0  51                   push ecx
// 005958a1  56                   push esi
// 005958a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005958a6  68000f7b00           push 0x7b0f00
// 005958ab  8bce                 mov ecx, esi
// 005958ad  c744240800000000     mov dword ptr [esp + 8], 0
// 005958b5  ff1598e67700         call dword ptr [0x77e698]
// 005958bb  8bc6                 mov eax, esi
// 005958bd  5e                   pop esi
// 005958be  59                   pop ecx
// 005958bf  c20400               ret 4

struct S {
    char pad[4];
    void* field4;
    S* m(void* arg);
};

extern "C" void* __stdcall sub_77E698(void*, const char*);

S* S::m(void* arg)
{
    char local[4];
    *(int*)local = 0;
    sub_77E698(local, "GunCursor");
    return this;
}

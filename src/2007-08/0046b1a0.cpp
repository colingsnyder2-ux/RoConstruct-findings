// from server: 33% by colin
// roc 2007-08 0046b1a0  unit: RBX::LDraw2Lua::LuaObjectWriter  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046b1a0
//
// 0046b1a0  6aff                 push -1
// 0046b1a2  68483e7400           push 0x743e48
// 0046b1a7  64a100000000         mov eax, dword ptr fs:[0]
// 0046b1ad  50                   push eax
// 0046b1ae  51                   push ecx
// 0046b1af  56                   push esi
// 0046b1b0  a188518b00           mov eax, dword ptr [0x8b5188]
// 0046b1b5  33c4                 xor eax, esp
// 0046b1b7  50                   push eax
// 0046b1b8  8d44240c             lea eax, [esp + 0xc]
// 0046b1bc  64a300000000         mov dword ptr fs:[0], eax
// 0046b1c2  8bf1                 mov esi, ecx
// 0046b1c4  89742408             mov dword ptr [esp + 8], esi
// 0046b1c8  c706b4617900         mov dword ptr [esi], 0x7961b4
// 0046b1ce  8d4e70               lea ecx, [esi + 0x70]
// 0046b1d1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0046b1d9  ff15ace67700         call dword ptr [0x77e6ac]
// 0046b1df  c706a8617900         mov dword ptr [esi], 0x7961a8
// 0046b1e5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0046b1e9  64890d00000000       mov dword ptr fs:[0], ecx
// 0046b1f0  59                   pop ecx
// 0046b1f1  5e                   pop esi
// 0046b1f2  83c410               add esp, 0x10
// 0046b1f5  c3                   ret 

struct LuaObjectWriter
{
    void* vtable;
    char pad0[0x6c];
    void* field70;
    void construct();
};

extern "C" void __stdcall sub_77e6ac(void*);

void LuaObjectWriter::construct()
{
    vtable = (void*)0x7961b4;
    field70 = 0;
    sub_77e6ac(&field70);
    vtable = (void*)0x7961a8;
}

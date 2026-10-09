// from server: 28% by colin
// roc 2007-08 0050d490  unit: G3D::BinaryInput  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050d490
//
// 0050d490  6aff                 push -1
// 0050d492  685cfd7400           push 0x74fd5c
// 0050d497  64a100000000         mov eax, dword ptr fs:[0]
// 0050d49d  50                   push eax
// 0050d49e  51                   push ecx
// 0050d49f  56                   push esi
// 0050d4a0  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050d4a5  33c4                 xor eax, esp
// 0050d4a7  50                   push eax
// 0050d4a8  8d44240c             lea eax, [esp + 0xc]
// 0050d4ac  64a300000000         mov dword ptr fs:[0], eax
// 0050d4b2  8bf1                 mov esi, ecx
// 0050d4b4  89742408             mov dword ptr [esp + 8], esi
// 0050d4b8  c706300d7a00         mov dword ptr [esi], 0x7a0d30
// 0050d4be  8d4e28               lea ecx, [esi + 0x28]
// 0050d4c1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0050d4c9  ff15ace67700         call dword ptr [0x77e6ac]
// 0050d4cf  8d4e04               lea ecx, [esi + 4]
// 0050d4d2  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0050d4da  ff15ace67700         call dword ptr [0x77e6ac]
// 0050d4e0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0050d4e4  64890d00000000       mov dword ptr fs:[0], ecx
// 0050d4eb  59                   pop ecx
// 0050d4ec  5e                   pop esi
// 0050d4ed  83c410               add esp, 0x10
// 0050d4f0  c3                   ret 

struct G3D_BinaryInput {
    void construct();
};

extern "C" void __stdcall G3D_string_dtor(void*);
extern "C" void __stdcall G3D_string_dtor2(void*);

void G3D_BinaryInput::construct()
{
    *(void**)this = (void*)0x7a0d30;
    G3D_string_dtor((char*)this + 0x28);
    G3D_string_dtor2((char*)this + 4);
}

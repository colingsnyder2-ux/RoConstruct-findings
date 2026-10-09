// from server: 23% by colin
// roc 2007-08 004f0f90  unit: RBX::Render::AggregatingSceneManager  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f0f90
//
// 004f0f90  6aff                 push -1
// 004f0f92  6878e67400           push 0x74e678
// 004f0f97  64a100000000         mov eax, dword ptr fs:[0]
// 004f0f9d  50                   push eax
// 004f0f9e  51                   push ecx
// 004f0f9f  a188518b00           mov eax, dword ptr [0x8b5188]
// 004f0fa4  33c4                 xor eax, esp
// 004f0fa6  50                   push eax
// 004f0fa7  8d442408             lea eax, [esp + 8]
// 004f0fab  64a300000000         mov dword ptr fs:[0], eax
// 004f0fb1  8bc1                 mov eax, ecx
// 004f0fb3  33c9                 xor ecx, ecx
// 004f0fb5  c70084797900         mov dword ptr [eax], 0x797984
// 004f0fbb  894804               mov dword ptr [eax + 4], ecx
// 004f0fbe  894808               mov dword ptr [eax + 8], ecx
// 004f0fc1  c70048f57900         mov dword ptr [eax], 0x79f548
// 004f0fc7  894810               mov dword ptr [eax + 0x10], ecx
// 004f0fca  894814               mov dword ptr [eax + 0x14], ecx
// 004f0fcd  894818               mov dword ptr [eax + 0x18], ecx
// 004f0fd0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f0fd4  64890d00000000       mov dword ptr fs:[0], ecx
// 004f0fdb  59                   pop ecx
// 004f0fdc  83c410               add esp, 0x10
// 004f0fdf  c3                   ret 

struct AggregatingSceneManager {
    void construct();
};

void AggregatingSceneManager::construct() {
    *(int*)this = 0x797984;
    *(int*)((char*)this + 4) = 0;
    *(int*)((char*)this + 8) = 0;
    *(int*)this = 0x79f548;
    *(int*)((char*)this + 0x10) = 0;
    *(int*)((char*)this + 0x14) = 0;
    *(int*)((char*)this + 0x18) = 0;
}

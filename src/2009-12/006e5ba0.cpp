// roc 2009-12 006e5ba0  unit: RBX::VPartInstance::?$FilteredSelection  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e5ba0
//
// 006e5ba0  6aff                 push -1
// 006e5ba2  6840b39400           push 0x94b340
// 006e5ba7  64a100000000         mov eax, dword ptr fs:[0]
// 006e5bad  50                   push eax
// 006e5bae  64892500000000       mov dword ptr fs:[0], esp
// 006e5bb5  51                   push ecx
// 006e5bb6  56                   push esi
// 006e5bb7  8bf1                 mov esi, ecx
// 006e5bb9  89742404             mov dword ptr [esp + 4], esi
// 006e5bbd  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 006e5bc0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006e5bc8  85c9                 test ecx, ecx
// 006e5bca  7408                 je 0x6e5bd4
// 006e5bcc  8b01                 mov eax, dword ptr [ecx]
// 006e5bce  8b10                 mov edx, dword ptr [eax]
// 006e5bd0  6a01                 push 1
// 006e5bd2  ffd2                 call edx
// 006e5bd4  8d4e18               lea ecx, [esi + 0x18]
// 006e5bd7  c744241001000000     mov dword ptr [esp + 0x10], 1
// 006e5bdf  e8bc6ee1ff           call 0x4fcaa0
// 006e5be4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e5be8  c70670fd9900         mov dword ptr [esi], 0x99fd70
// 006e5bee  5e                   pop esi
// 006e5bef  64890d00000000       mov dword ptr fs:[0], ecx
// 006e5bf6  83c410               add esp, 0x10
// 006e5bf9  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??1?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXVVector3@G3D@@@Z$00@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp

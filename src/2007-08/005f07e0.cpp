// roc 2007-08 005f07e0  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f07e0
//
// 005f07e0  64a100000000         mov eax, dword ptr fs:[0]
// 005f07e6  6aff                 push -1
// 005f07e8  68ceb47500           push 0x75b4ce
// 005f07ed  50                   push eax
// 005f07ee  b801000000           mov eax, 1
// 005f07f3  64892500000000       mov dword ptr fs:[0], esp
// 005f07fa  8405dc778c00         test byte ptr [0x8c77dc], al
// 005f0800  7530                 jne 0x5f0832
// 005f0802  0905dc778c00         or dword ptr [0x8c77dc], eax
// 005f0808  6aff                 push -1
// 005f080a  68e4058b00           push 0x8b05e4
// 005f080f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f0817  e824c1f3ff           call 0x52c940
// 005f081c  83c408               add esp, 8
// 005f081f  a3d8778c00           mov dword ptr [0x8c77d8], eax
// 005f0824  8b0c24               mov ecx, dword ptr [esp]
// 005f0827  64890d00000000       mov dword ptr fs:[0], ecx
// 005f082e  83c40c               add esp, 0xc
// 005f0831  c3                   ret 
// 005f0832  8b0c24               mov ecx, dword ptr [esp]
// 005f0835  a1d8778c00           mov eax, dword ptr [0x8c77d8]
// 005f083a  64890d00000000       mov dword ptr fs:[0], ecx
// 005f0841  83c40c               add esp, 0xc
// 005f0844  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

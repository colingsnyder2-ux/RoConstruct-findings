// roc 2007-08 005f0770  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f0770
//
// 005f0770  64a100000000         mov eax, dword ptr fs:[0]
// 005f0776  6aff                 push -1
// 005f0778  68aeb47500           push 0x75b4ae
// 005f077d  50                   push eax
// 005f077e  b801000000           mov eax, 1
// 005f0783  64892500000000       mov dword ptr fs:[0], esp
// 005f078a  8405d4778c00         test byte ptr [0x8c77d4], al
// 005f0790  7530                 jne 0x5f07c2
// 005f0792  0905d4778c00         or dword ptr [0x8c77d4], eax
// 005f0798  6aff                 push -1
// 005f079a  68d8058b00           push 0x8b05d8
// 005f079f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f07a7  e894c1f3ff           call 0x52c940
// 005f07ac  83c408               add esp, 8
// 005f07af  a3d0778c00           mov dword ptr [0x8c77d0], eax
// 005f07b4  8b0c24               mov ecx, dword ptr [esp]
// 005f07b7  64890d00000000       mov dword ptr fs:[0], ecx
// 005f07be  83c40c               add esp, 0xc
// 005f07c1  c3                   ret 
// 005f07c2  8b0c24               mov ecx, dword ptr [esp]
// 005f07c5  a1d0778c00           mov eax, dword ptr [0x8c77d0]
// 005f07ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005f07d1  83c40c               add esp, 0xc
// 005f07d4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

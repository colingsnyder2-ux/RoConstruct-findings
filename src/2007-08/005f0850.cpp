// roc 2007-08 005f0850  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f0850
//
// 005f0850  64a100000000         mov eax, dword ptr fs:[0]
// 005f0856  6aff                 push -1
// 005f0858  68eeb47500           push 0x75b4ee
// 005f085d  50                   push eax
// 005f085e  b801000000           mov eax, 1
// 005f0863  64892500000000       mov dword ptr fs:[0], esp
// 005f086a  8405e4778c00         test byte ptr [0x8c77e4], al
// 005f0870  7530                 jne 0x5f08a2
// 005f0872  0905e4778c00         or dword ptr [0x8c77e4], eax
// 005f0878  6aff                 push -1
// 005f087a  68f0058b00           push 0x8b05f0
// 005f087f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f0887  e8b4c0f3ff           call 0x52c940
// 005f088c  83c408               add esp, 8
// 005f088f  a3e0778c00           mov dword ptr [0x8c77e0], eax
// 005f0894  8b0c24               mov ecx, dword ptr [esp]
// 005f0897  64890d00000000       mov dword ptr fs:[0], ecx
// 005f089e  83c40c               add esp, 0xc
// 005f08a1  c3                   ret 
// 005f08a2  8b0c24               mov ecx, dword ptr [esp]
// 005f08a5  a1e0778c00           mov eax, dword ptr [0x8c77e0]
// 005f08aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005f08b1  83c40c               add esp, 0xc
// 005f08b4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

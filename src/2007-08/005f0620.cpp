// roc 2007-08 005f0620  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f0620
//
// 005f0620  64a100000000         mov eax, dword ptr fs:[0]
// 005f0626  6aff                 push -1
// 005f0628  684eb47500           push 0x75b44e
// 005f062d  50                   push eax
// 005f062e  b801000000           mov eax, 1
// 005f0633  64892500000000       mov dword ptr fs:[0], esp
// 005f063a  8405bc778c00         test byte ptr [0x8c77bc], al
// 005f0640  7530                 jne 0x5f0672
// 005f0642  0905bc778c00         or dword ptr [0x8c77bc], eax
// 005f0648  6aff                 push -1
// 005f064a  68b0058b00           push 0x8b05b0
// 005f064f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f0657  e8e4c2f3ff           call 0x52c940
// 005f065c  83c408               add esp, 8
// 005f065f  a3b8778c00           mov dword ptr [0x8c77b8], eax
// 005f0664  8b0c24               mov ecx, dword ptr [esp]
// 005f0667  64890d00000000       mov dword ptr fs:[0], ecx
// 005f066e  83c40c               add esp, 0xc
// 005f0671  c3                   ret 
// 005f0672  8b0c24               mov ecx, dword ptr [esp]
// 005f0675  a1b8778c00           mov eax, dword ptr [0x8c77b8]
// 005f067a  64890d00000000       mov dword ptr fs:[0], ecx
// 005f0681  83c40c               add esp, 0xc
// 005f0684  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

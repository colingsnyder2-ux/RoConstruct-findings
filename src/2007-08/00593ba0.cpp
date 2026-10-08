// roc 2007-08 00593ba0  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593ba0
//
// 00593ba0  64a100000000         mov eax, dword ptr fs:[0]
// 00593ba6  6aff                 push -1
// 00593ba8  680e727500           push 0x75720e
// 00593bad  50                   push eax
// 00593bae  b801000000           mov eax, 1
// 00593bb3  64892500000000       mov dword ptr fs:[0], esp
// 00593bba  8405ac4d8c00         test byte ptr [0x8c4dac], al
// 00593bc0  7530                 jne 0x593bf2
// 00593bc2  0905ac4d8c00         or dword ptr [0x8c4dac], eax
// 00593bc8  6aff                 push -1
// 00593bca  68c0428b00           push 0x8b42c0
// 00593bcf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593bd7  e8648df9ff           call 0x52c940
// 00593bdc  83c408               add esp, 8
// 00593bdf  a3a84d8c00           mov dword ptr [0x8c4da8], eax
// 00593be4  8b0c24               mov ecx, dword ptr [esp]
// 00593be7  64890d00000000       mov dword ptr fs:[0], ecx
// 00593bee  83c40c               add esp, 0xc
// 00593bf1  c3                   ret 
// 00593bf2  8b0c24               mov ecx, dword ptr [esp]
// 00593bf5  a1a84d8c00           mov eax, dword ptr [0x8c4da8]
// 00593bfa  64890d00000000       mov dword ptr fs:[0], ecx
// 00593c01  83c40c               add esp, 0xc
// 00593c04  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

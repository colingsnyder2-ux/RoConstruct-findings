// roc 2007-03 00554e50  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554e50
//
// 00554e50  64a100000000         mov eax, dword ptr fs:[0]
// 00554e56  6aff                 push -1
// 00554e58  68ee3d7500           push 0x753dee
// 00554e5d  50                   push eax
// 00554e5e  b801000000           mov eax, 1
// 00554e63  64892500000000       mov dword ptr fs:[0], esp
// 00554e6a  8405acc18b00         test byte ptr [0x8bc1ac], al
// 00554e70  7530                 jne 0x554ea2
// 00554e72  0905acc18b00         or dword ptr [0x8bc1ac], eax
// 00554e78  6aff                 push -1
// 00554e7a  6808858a00           push 0x8a8508
// 00554e7f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00554e87  e8548afdff           call 0x52d8e0
// 00554e8c  83c408               add esp, 8
// 00554e8f  a3a8c18b00           mov dword ptr [0x8bc1a8], eax
// 00554e94  8b0c24               mov ecx, dword ptr [esp]
// 00554e97  64890d00000000       mov dword ptr fs:[0], ecx
// 00554e9e  83c40c               add esp, 0xc
// 00554ea1  c3                   ret 
// 00554ea2  8b0c24               mov ecx, dword ptr [esp]
// 00554ea5  a1a8c18b00           mov eax, dword ptr [0x8bc1a8]
// 00554eaa  64890d00000000       mov dword ptr fs:[0], ecx
// 00554eb1  83c40c               add esp, 0xc
// 00554eb4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

// roc 2007-03 00554f30  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554f30
//
// 00554f30  64a100000000         mov eax, dword ptr fs:[0]
// 00554f36  6aff                 push -1
// 00554f38  682e3e7500           push 0x753e2e
// 00554f3d  50                   push eax
// 00554f3e  b801000000           mov eax, 1
// 00554f43  64892500000000       mov dword ptr fs:[0], esp
// 00554f4a  8405bcc18b00         test byte ptr [0x8bc1bc], al
// 00554f50  7530                 jne 0x554f82
// 00554f52  0905bcc18b00         or dword ptr [0x8bc1bc], eax
// 00554f58  6aff                 push -1
// 00554f5a  685c868a00           push 0x8a865c
// 00554f5f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00554f67  e87489fdff           call 0x52d8e0
// 00554f6c  83c408               add esp, 8
// 00554f6f  a3b8c18b00           mov dword ptr [0x8bc1b8], eax
// 00554f74  8b0c24               mov ecx, dword ptr [esp]
// 00554f77  64890d00000000       mov dword ptr fs:[0], ecx
// 00554f7e  83c40c               add esp, 0xc
// 00554f81  c3                   ret 
// 00554f82  8b0c24               mov ecx, dword ptr [esp]
// 00554f85  a1b8c18b00           mov eax, dword ptr [0x8bc1b8]
// 00554f8a  64890d00000000       mov dword ptr fs:[0], ecx
// 00554f91  83c40c               add esp, 0xc
// 00554f94  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

// roc 2007-03 00555010  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00555010
//
// 00555010  64a100000000         mov eax, dword ptr fs:[0]
// 00555016  6aff                 push -1
// 00555018  686e3e7500           push 0x753e6e
// 0055501d  50                   push eax
// 0055501e  b801000000           mov eax, 1
// 00555023  64892500000000       mov dword ptr fs:[0], esp
// 0055502a  8405ccc18b00         test byte ptr [0x8bc1cc], al
// 00555030  7530                 jne 0x555062
// 00555032  0905ccc18b00         or dword ptr [0x8bc1cc], eax
// 00555038  6aff                 push -1
// 0055503a  6848878a00           push 0x8a8748
// 0055503f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00555047  e89488fdff           call 0x52d8e0
// 0055504c  83c408               add esp, 8
// 0055504f  a3c8c18b00           mov dword ptr [0x8bc1c8], eax
// 00555054  8b0c24               mov ecx, dword ptr [esp]
// 00555057  64890d00000000       mov dword ptr fs:[0], ecx
// 0055505e  83c40c               add esp, 0xc
// 00555061  c3                   ret 
// 00555062  8b0c24               mov ecx, dword ptr [esp]
// 00555065  a1c8c18b00           mov eax, dword ptr [0x8bc1c8]
// 0055506a  64890d00000000       mov dword ptr fs:[0], ecx
// 00555071  83c40c               add esp, 0xc
// 00555074  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

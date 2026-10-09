// roc 2007-03 00554520  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554520
//
// 00554520  64a100000000         mov eax, dword ptr fs:[0]
// 00554526  6aff                 push -1
// 00554528  684e3b7500           push 0x753b4e
// 0055452d  50                   push eax
// 0055452e  b801000000           mov eax, 1
// 00554533  64892500000000       mov dword ptr fs:[0], esp
// 0055453a  840504c18b00         test byte ptr [0x8bc104], al
// 00554540  7530                 jne 0x554572
// 00554542  090504c18b00         or dword ptr [0x8bc104], eax
// 00554548  6aff                 push -1
// 0055454a  6838098a00           push 0x8a0938
// 0055454f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00554557  e88493fdff           call 0x52d8e0
// 0055455c  83c408               add esp, 8
// 0055455f  a300c18b00           mov dword ptr [0x8bc100], eax
// 00554564  8b0c24               mov ecx, dword ptr [esp]
// 00554567  64890d00000000       mov dword ptr fs:[0], ecx
// 0055456e  83c40c               add esp, 0xc
// 00554571  c3                   ret 
// 00554572  8b0c24               mov ecx, dword ptr [esp]
// 00554575  a100c18b00           mov eax, dword ptr [0x8bc100]
// 0055457a  64890d00000000       mov dword ptr fs:[0], ecx
// 00554581  83c40c               add esp, 0xc
// 00554584  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

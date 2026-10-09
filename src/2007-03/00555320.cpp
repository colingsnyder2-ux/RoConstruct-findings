// roc 2007-03 00555320  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00555320
//
// 00555320  64a100000000         mov eax, dword ptr fs:[0]
// 00555326  6aff                 push -1
// 00555328  684e3f7500           push 0x753f4e
// 0055532d  50                   push eax
// 0055532e  b801000000           mov eax, 1
// 00555333  64892500000000       mov dword ptr fs:[0], esp
// 0055533a  840504c28b00         test byte ptr [0x8bc204], al
// 00555340  7530                 jne 0x555372
// 00555342  090504c28b00         or dword ptr [0x8bc204], eax
// 00555348  6aff                 push -1
// 0055534a  6824ac7b00           push 0x7bac24
// 0055534f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00555357  e88485fdff           call 0x52d8e0
// 0055535c  83c408               add esp, 8
// 0055535f  a300c28b00           mov dword ptr [0x8bc200], eax
// 00555364  8b0c24               mov ecx, dword ptr [esp]
// 00555367  64890d00000000       mov dword ptr fs:[0], ecx
// 0055536e  83c40c               add esp, 0xc
// 00555371  c3                   ret 
// 00555372  8b0c24               mov ecx, dword ptr [esp]
// 00555375  a100c28b00           mov eax, dword ptr [0x8bc200]
// 0055537a  64890d00000000       mov dword ptr fs:[0], ecx
// 00555381  83c40c               add esp, 0xc
// 00555384  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

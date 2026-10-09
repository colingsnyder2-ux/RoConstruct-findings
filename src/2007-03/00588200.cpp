// roc 2007-03 00588200  unit: seg_00580000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00588200
//
// 00588200  64a100000000         mov eax, dword ptr fs:[0]
// 00588206  6aff                 push -1
// 00588208  681e747500           push 0x75741e
// 0058820d  50                   push eax
// 0058820e  b801000000           mov eax, 1
// 00588213  64892500000000       mov dword ptr fs:[0], esp
// 0058821a  840538d88b00         test byte ptr [0x8bd838], al
// 00588220  7530                 jne 0x588252
// 00588222  090538d88b00         or dword ptr [0x8bd838], eax
// 00588228  6aff                 push -1
// 0058822a  68d0a88a00           push 0x8aa8d0
// 0058822f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00588237  e8a456faff           call 0x52d8e0
// 0058823c  83c408               add esp, 8
// 0058823f  a334d88b00           mov dword ptr [0x8bd834], eax
// 00588244  8b0c24               mov ecx, dword ptr [esp]
// 00588247  64890d00000000       mov dword ptr fs:[0], ecx
// 0058824e  83c40c               add esp, 0xc
// 00588251  c3                   ret 
// 00588252  8b0c24               mov ecx, dword ptr [esp]
// 00588255  a134d88b00           mov eax, dword ptr [0x8bd834]
// 0058825a  64890d00000000       mov dword ptr fs:[0], ecx
// 00588261  83c40c               add esp, 0xc
// 00588264  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

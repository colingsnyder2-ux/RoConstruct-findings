// roc 2007-03 005decc0  unit: seg_005d0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005decc0
//
// 005decc0  64a100000000         mov eax, dword ptr fs:[0]
// 005decc6  6aff                 push -1
// 005decc8  68cebb7500           push 0x75bbce
// 005deccd  50                   push eax
// 005decce  b801000000           mov eax, 1
// 005decd3  64892500000000       mov dword ptr fs:[0], esp
// 005decda  840594078c00         test byte ptr [0x8c0794], al
// 005dece0  7530                 jne 0x5ded12
// 005dece2  090594078c00         or dword ptr [0x8c0794], eax
// 005dece8  6aff                 push -1
// 005decea  6880aa8a00           push 0x8aaa80
// 005decef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005decf7  e8e4ebf4ff           call 0x52d8e0
// 005decfc  83c408               add esp, 8
// 005decff  a390078c00           mov dword ptr [0x8c0790], eax
// 005ded04  8b0c24               mov ecx, dword ptr [esp]
// 005ded07  64890d00000000       mov dword ptr fs:[0], ecx
// 005ded0e  83c40c               add esp, 0xc
// 005ded11  c3                   ret 
// 005ded12  8b0c24               mov ecx, dword ptr [esp]
// 005ded15  a190078c00           mov eax, dword ptr [0x8c0790]
// 005ded1a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ded21  83c40c               add esp, 0xc
// 005ded24  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

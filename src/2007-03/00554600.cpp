// roc 2007-03 00554600  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554600
//
// 00554600  64a100000000         mov eax, dword ptr fs:[0]
// 00554606  6aff                 push -1
// 00554608  688e3b7500           push 0x753b8e
// 0055460d  50                   push eax
// 0055460e  b801000000           mov eax, 1
// 00554613  64892500000000       mov dword ptr fs:[0], esp
// 0055461a  840514c18b00         test byte ptr [0x8bc114], al
// 00554620  7530                 jne 0x554652
// 00554622  090514c18b00         or dword ptr [0x8bc114], eax
// 00554628  6aff                 push -1
// 0055462a  6848098a00           push 0x8a0948
// 0055462f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00554637  e8a492fdff           call 0x52d8e0
// 0055463c  83c408               add esp, 8
// 0055463f  a310c18b00           mov dword ptr [0x8bc110], eax
// 00554644  8b0c24               mov ecx, dword ptr [esp]
// 00554647  64890d00000000       mov dword ptr fs:[0], ecx
// 0055464e  83c40c               add esp, 0xc
// 00554651  c3                   ret 
// 00554652  8b0c24               mov ecx, dword ptr [esp]
// 00554655  a110c18b00           mov eax, dword ptr [0x8bc110]
// 0055465a  64890d00000000       mov dword ptr fs:[0], ecx
// 00554661  83c40c               add esp, 0xc
// 00554664  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

// roc 2008-06 004ab320  unit: RBX::Network::Replicator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ab320
//
// 004ab320  64a100000000         mov eax, dword ptr fs:[0]
// 004ab326  6aff                 push -1
// 004ab328  68ce817c00           push 0x7c81ce
// 004ab32d  50                   push eax
// 004ab32e  b801000000           mov eax, 1
// 004ab333  64892500000000       mov dword ptr fs:[0], esp
// 004ab33a  840544149700         test byte ptr [0x971444], al
// 004ab340  7530                 jne 0x4ab372
// 004ab342  090544149700         or dword ptr [0x971444], eax
// 004ab348  6aff                 push -1
// 004ab34a  6860e08300           push 0x83e060
// 004ab34f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004ab357  e8348c0a00           call 0x553f90
// 004ab35c  83c408               add esp, 8
// 004ab35f  a340149700           mov dword ptr [0x971440], eax
// 004ab364  8b0c24               mov ecx, dword ptr [esp]
// 004ab367  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab36e  83c40c               add esp, 0xc
// 004ab371  c3                   ret 
// 004ab372  8b0c24               mov ecx, dword ptr [esp]
// 004ab375  a140149700           mov eax, dword ptr [0x971440]
// 004ab37a  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab381  83c40c               add esp, 0xc
// 004ab384  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

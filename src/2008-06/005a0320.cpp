// roc 2008-06 005a0320  unit: RBX::Workspace  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0320
//
// 005a0320  64a100000000         mov eax, dword ptr fs:[0]
// 005a0326  6aff                 push -1
// 005a0328  68de287d00           push 0x7d28de
// 005a032d  50                   push eax
// 005a032e  b801000000           mov eax, 1
// 005a0333  64892500000000       mov dword ptr fs:[0], esp
// 005a033a  84054c6a9700         test byte ptr [0x976a4c], al
// 005a0340  7530                 jne 0x5a0372
// 005a0342  09054c6a9700         or dword ptr [0x976a4c], eax
// 005a0348  6aff                 push -1
// 005a034a  68903c8400           push 0x843c90
// 005a034f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005a0357  e8343cfbff           call 0x553f90
// 005a035c  83c408               add esp, 8
// 005a035f  a3486a9700           mov dword ptr [0x976a48], eax
// 005a0364  8b0c24               mov ecx, dword ptr [esp]
// 005a0367  64890d00000000       mov dword ptr fs:[0], ecx
// 005a036e  83c40c               add esp, 0xc
// 005a0371  c3                   ret 
// 005a0372  8b0c24               mov ecx, dword ptr [esp]
// 005a0375  a1486a9700           mov eax, dword ptr [0x976a48]
// 005a037a  64890d00000000       mov dword ptr fs:[0], ecx
// 005a0381  83c40c               add esp, 0xc
// 005a0384  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

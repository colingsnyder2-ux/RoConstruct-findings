// roc 2007-08 00557710  unit: ChatEnter  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00557710
//
// 00557710  64a100000000         mov eax, dword ptr fs:[0]
// 00557716  6aff                 push -1
// 00557718  68ee317500           push 0x7531ee
// 0055771d  50                   push eax
// 0055771e  b801000000           mov eax, 1
// 00557723  64892500000000       mov dword ptr fs:[0], esp
// 0055772a  8405e81e8c00         test byte ptr [0x8c1ee8], al
// 00557730  7530                 jne 0x557762
// 00557732  0905e81e8c00         or dword ptr [0x8c1ee8], eax
// 00557738  6aff                 push -1
// 0055773a  6840a67b00           push 0x7ba640
// 0055773f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00557747  e8f451fdff           call 0x52c940
// 0055774c  83c408               add esp, 8
// 0055774f  a3e41e8c00           mov dword ptr [0x8c1ee4], eax
// 00557754  8b0c24               mov ecx, dword ptr [esp]
// 00557757  64890d00000000       mov dword ptr fs:[0], ecx
// 0055775e  83c40c               add esp, 0xc
// 00557761  c3                   ret 
// 00557762  8b0c24               mov ecx, dword ptr [esp]
// 00557765  a1e41e8c00           mov eax, dword ptr [0x8c1ee4]
// 0055776a  64890d00000000       mov dword ptr fs:[0], ecx
// 00557771  83c40c               add esp, 0xc
// 00557774  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

// roc 2007-08 00593120  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593120
//
// 00593120  64a100000000         mov eax, dword ptr fs:[0]
// 00593126  6aff                 push -1
// 00593128  680e6f7500           push 0x756f0e
// 0059312d  50                   push eax
// 0059312e  b801000000           mov eax, 1
// 00593133  64892500000000       mov dword ptr fs:[0], esp
// 0059313a  8405ec4c8c00         test byte ptr [0x8c4cec], al
// 00593140  7530                 jne 0x593172
// 00593142  0905ec4c8c00         or dword ptr [0x8c4cec], eax
// 00593148  6aff                 push -1
// 0059314a  68fc278a00           push 0x8a27fc
// 0059314f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593157  e8e497f9ff           call 0x52c940
// 0059315c  83c408               add esp, 8
// 0059315f  a3e84c8c00           mov dword ptr [0x8c4ce8], eax
// 00593164  8b0c24               mov ecx, dword ptr [esp]
// 00593167  64890d00000000       mov dword ptr fs:[0], ecx
// 0059316e  83c40c               add esp, 0xc
// 00593171  c3                   ret 
// 00593172  8b0c24               mov ecx, dword ptr [esp]
// 00593175  a1e84c8c00           mov eax, dword ptr [0x8c4ce8]
// 0059317a  64890d00000000       mov dword ptr fs:[0], ecx
// 00593181  83c40c               add esp, 0xc
// 00593184  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

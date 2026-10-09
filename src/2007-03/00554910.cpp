// roc 2007-03 00554910  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554910
//
// 00554910  64a100000000         mov eax, dword ptr fs:[0]
// 00554916  6aff                 push -1
// 00554918  686e3c7500           push 0x753c6e
// 0055491d  50                   push eax
// 0055491e  b801000000           mov eax, 1
// 00554923  64892500000000       mov dword ptr fs:[0], esp
// 0055492a  84054cc18b00         test byte ptr [0x8bc14c], al
// 00554930  7530                 jne 0x554962
// 00554932  09054cc18b00         or dword ptr [0x8bc14c], eax
// 00554938  6aff                 push -1
// 0055493a  6864848a00           push 0x8a8464
// 0055493f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00554947  e8948ffdff           call 0x52d8e0
// 0055494c  83c408               add esp, 8
// 0055494f  a348c18b00           mov dword ptr [0x8bc148], eax
// 00554954  8b0c24               mov ecx, dword ptr [esp]
// 00554957  64890d00000000       mov dword ptr fs:[0], ecx
// 0055495e  83c40c               add esp, 0xc
// 00554961  c3                   ret 
// 00554962  8b0c24               mov ecx, dword ptr [esp]
// 00554965  a148c18b00           mov eax, dword ptr [0x8bc148]
// 0055496a  64890d00000000       mov dword ptr fs:[0], ecx
// 00554971  83c40c               add esp, 0xc
// 00554974  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

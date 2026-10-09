// roc 2008-06 00633180  unit: RBX::VExplosion::?$BoundPropGetSet  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633180
//
// 00633180  64a100000000         mov eax, dword ptr fs:[0]
// 00633186  6aff                 push -1
// 00633188  680e9f7d00           push 0x7d9f0e
// 0063318d  50                   push eax
// 0063318e  b801000000           mov eax, 1
// 00633193  64892500000000       mov dword ptr fs:[0], esp
// 0063319a  840514cb9700         test byte ptr [0x97cb14], al
// 006331a0  7530                 jne 0x6331d2
// 006331a2  090514cb9700         or dword ptr [0x97cb14], eax
// 006331a8  6aff                 push -1
// 006331aa  68e4d99500           push 0x95d9e4
// 006331af  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006331b7  e8d40df2ff           call 0x553f90
// 006331bc  83c408               add esp, 8
// 006331bf  a310cb9700           mov dword ptr [0x97cb10], eax
// 006331c4  8b0c24               mov ecx, dword ptr [esp]
// 006331c7  64890d00000000       mov dword ptr fs:[0], ecx
// 006331ce  83c40c               add esp, 0xc
// 006331d1  c3                   ret 
// 006331d2  8b0c24               mov ecx, dword ptr [esp]
// 006331d5  a110cb9700           mov eax, dword ptr [0x97cb10]
// 006331da  64890d00000000       mov dword ptr fs:[0], ecx
// 006331e1  83c40c               add esp, 0xc
// 006331e4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

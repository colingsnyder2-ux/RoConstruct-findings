// roc 2008-06 005c5830  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5830
//
// 005c5830  64a100000000         mov eax, dword ptr fs:[0]
// 005c5836  6aff                 push -1
// 005c5838  687e4b7d00           push 0x7d4b7e
// 005c583d  50                   push eax
// 005c583e  b801000000           mov eax, 1
// 005c5843  64892500000000       mov dword ptr fs:[0], esp
// 005c584a  8405b4959700         test byte ptr [0x9795b4], al
// 005c5850  7530                 jne 0x5c5882
// 005c5852  0905b4959700         or dword ptr [0x9795b4], eax
// 005c5858  6aff                 push -1
// 005c585a  6814af9500           push 0x95af14
// 005c585f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5867  e824e7f8ff           call 0x553f90
// 005c586c  83c408               add esp, 8
// 005c586f  a3b0959700           mov dword ptr [0x9795b0], eax
// 005c5874  8b0c24               mov ecx, dword ptr [esp]
// 005c5877  64890d00000000       mov dword ptr fs:[0], ecx
// 005c587e  83c40c               add esp, 0xc
// 005c5881  c3                   ret 
// 005c5882  8b0c24               mov ecx, dword ptr [esp]
// 005c5885  a1b0959700           mov eax, dword ptr [0x9795b0]
// 005c588a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c5891  83c40c               add esp, 0xc
// 005c5894  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

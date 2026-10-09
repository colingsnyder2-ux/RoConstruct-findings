// roc 2007-03 005ded30  unit: seg_005d0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ded30
//
// 005ded30  64a100000000         mov eax, dword ptr fs:[0]
// 005ded36  6aff                 push -1
// 005ded38  68eebb7500           push 0x75bbee
// 005ded3d  50                   push eax
// 005ded3e  b801000000           mov eax, 1
// 005ded43  64892500000000       mov dword ptr fs:[0], esp
// 005ded4a  84059c078c00         test byte ptr [0x8c079c], al
// 005ded50  7530                 jne 0x5ded82
// 005ded52  09059c078c00         or dword ptr [0x8c079c], eax
// 005ded58  6aff                 push -1
// 005ded5a  6890aa8a00           push 0x8aaa90
// 005ded5f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005ded67  e874ebf4ff           call 0x52d8e0
// 005ded6c  83c408               add esp, 8
// 005ded6f  a398078c00           mov dword ptr [0x8c0798], eax
// 005ded74  8b0c24               mov ecx, dword ptr [esp]
// 005ded77  64890d00000000       mov dword ptr fs:[0], ecx
// 005ded7e  83c40c               add esp, 0xc
// 005ded81  c3                   ret 
// 005ded82  8b0c24               mov ecx, dword ptr [esp]
// 005ded85  a198078c00           mov eax, dword ptr [0x8c0798]
// 005ded8a  64890d00000000       mov dword ptr fs:[0], ecx
// 005ded91  83c40c               add esp, 0xc
// 005ded94  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

// roc 2008-06 004137a0  unit: CutVerb  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004137a0
//
// 004137a0  64a100000000         mov eax, dword ptr fs:[0]
// 004137a6  6aff                 push -1
// 004137a8  689ed87b00           push 0x7bd89e
// 004137ad  50                   push eax
// 004137ae  b801000000           mov eax, 1
// 004137b3  64892500000000       mov dword ptr fs:[0], esp
// 004137ba  840514cc9600         test byte ptr [0x96cc14], al
// 004137c0  7530                 jne 0x4137f2
// 004137c2  090514cc9600         or dword ptr [0x96cc14], eax
// 004137c8  6aff                 push -1
// 004137ca  68f88d9400           push 0x948df8
// 004137cf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004137d7  e8b4071400           call 0x553f90
// 004137dc  83c408               add esp, 8
// 004137df  a310cc9600           mov dword ptr [0x96cc10], eax
// 004137e4  8b0c24               mov ecx, dword ptr [esp]
// 004137e7  64890d00000000       mov dword ptr fs:[0], ecx
// 004137ee  83c40c               add esp, 0xc
// 004137f1  c3                   ret 
// 004137f2  8b0c24               mov ecx, dword ptr [esp]
// 004137f5  a110cc9600           mov eax, dword ptr [0x96cc10]
// 004137fa  64890d00000000       mov dword ptr fs:[0], ecx
// 00413801  83c40c               add esp, 0xc
// 00413804  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

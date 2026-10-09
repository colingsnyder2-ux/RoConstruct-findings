// roc 2008-06 0044f2f0  unit: CRobloxDoc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044f2f0
//
// 0044f2f0  64a100000000         mov eax, dword ptr fs:[0]
// 0044f2f6  6aff                 push -1
// 0044f2f8  682e167c00           push 0x7c162e
// 0044f2fd  50                   push eax
// 0044f2fe  b801000000           mov eax, 1
// 0044f303  64892500000000       mov dword ptr fs:[0], esp
// 0044f30a  840544dd9600         test byte ptr [0x96dd44], al
// 0044f310  7530                 jne 0x44f342
// 0044f312  090544dd9600         or dword ptr [0x96dd44], eax
// 0044f318  6aff                 push -1
// 0044f31a  68ccf69400           push 0x94f6cc
// 0044f31f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0044f327  e8644c1000           call 0x553f90
// 0044f32c  83c408               add esp, 8
// 0044f32f  a340dd9600           mov dword ptr [0x96dd40], eax
// 0044f334  8b0c24               mov ecx, dword ptr [esp]
// 0044f337  64890d00000000       mov dword ptr fs:[0], ecx
// 0044f33e  83c40c               add esp, 0xc
// 0044f341  c3                   ret 
// 0044f342  8b0c24               mov ecx, dword ptr [esp]
// 0044f345  a140dd9600           mov eax, dword ptr [0x96dd40]
// 0044f34a  64890d00000000       mov dword ptr fs:[0], ecx
// 0044f351  83c40c               add esp, 0xc
// 0044f354  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

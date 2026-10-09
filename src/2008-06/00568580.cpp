// roc 2008-06 00568580  unit: boost::thread_resource_error  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568580
//
// 00568580  64a100000000         mov eax, dword ptr fs:[0]
// 00568586  6aff                 push -1
// 00568588  685ef67c00           push 0x7cf65e
// 0056858d  50                   push eax
// 0056858e  b801000000           mov eax, 1
// 00568593  64892500000000       mov dword ptr fs:[0], esp
// 0056859a  84057c4a9700         test byte ptr [0x974a7c], al
// 005685a0  7530                 jne 0x5685d2
// 005685a2  09057c4a9700         or dword ptr [0x974a7c], eax
// 005685a8  6aff                 push -1
// 005685aa  68d8f78200           push 0x82f7d8
// 005685af  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005685b7  e8d4b9feff           call 0x553f90
// 005685bc  83c408               add esp, 8
// 005685bf  a3784a9700           mov dword ptr [0x974a78], eax
// 005685c4  8b0c24               mov ecx, dword ptr [esp]
// 005685c7  64890d00000000       mov dword ptr fs:[0], ecx
// 005685ce  83c40c               add esp, 0xc
// 005685d1  c3                   ret 
// 005685d2  8b0c24               mov ecx, dword ptr [esp]
// 005685d5  a1784a9700           mov eax, dword ptr [0x974a78]
// 005685da  64890d00000000       mov dword ptr fs:[0], ecx
// 005685e1  83c40c               add esp, 0xc
// 005685e4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

// roc 2007-03 00554980  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554980
//
// 00554980  64a100000000         mov eax, dword ptr fs:[0]
// 00554986  6aff                 push -1
// 00554988  688e3c7500           push 0x753c8e
// 0055498d  50                   push eax
// 0055498e  b801000000           mov eax, 1
// 00554993  64892500000000       mov dword ptr fs:[0], esp
// 0055499a  840554c18b00         test byte ptr [0x8bc154], al
// 005549a0  7530                 jne 0x5549d2
// 005549a2  090554c18b00         or dword ptr [0x8bc154], eax
// 005549a8  6aff                 push -1
// 005549aa  6870848a00           push 0x8a8470
// 005549af  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005549b7  e8248ffdff           call 0x52d8e0
// 005549bc  83c408               add esp, 8
// 005549bf  a350c18b00           mov dword ptr [0x8bc150], eax
// 005549c4  8b0c24               mov ecx, dword ptr [esp]
// 005549c7  64890d00000000       mov dword ptr fs:[0], ecx
// 005549ce  83c40c               add esp, 0xc
// 005549d1  c3                   ret 
// 005549d2  8b0c24               mov ecx, dword ptr [esp]
// 005549d5  a150c18b00           mov eax, dword ptr [0x8bc150]
// 005549da  64890d00000000       mov dword ptr fs:[0], ecx
// 005549e1  83c40c               add esp, 0xc
// 005549e4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp

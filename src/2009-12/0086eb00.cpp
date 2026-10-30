// roc 2009-12 0086eb00  unit: CXTPResourceManager  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086eb00
//
// 0086eb00  6aff                 push -1
// 0086eb02  6888fa9500           push 0x95fa88
// 0086eb07  64a100000000         mov eax, dword ptr fs:[0]
// 0086eb0d  50                   push eax
// 0086eb0e  83ec08               sub esp, 8
// 0086eb11  56                   push esi
// 0086eb12  a10052b600           mov eax, dword ptr [0xb65200]
// 0086eb17  33c4                 xor eax, esp
// 0086eb19  50                   push eax
// 0086eb1a  8d442410             lea eax, [esp + 0x10]
// 0086eb1e  64a300000000         mov dword ptr fs:[0], eax
// 0086eb24  8d4c2408             lea ecx, [esp + 8]
// 0086eb28  e8d3feffff           call 0x86ea00
// 0086eb2d  0fb7442424           movzx eax, word ptr [esp + 0x24]
// 0086eb32  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0086eb36  50                   push eax
// 0086eb37  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0086eb3f  e83e810b00           call 0x926c82
// 0086eb44  8d4c2408             lea ecx, [esp + 8]
// 0086eb48  8bf0                 mov esi, eax
// 0086eb4a  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0086eb52  e8e9faffff           call 0x86e640
// 0086eb57  8bc6                 mov eax, esi
// 0086eb59  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086eb5d  64890d00000000       mov dword ptr fs:[0], ecx
// 0086eb64  59                   pop ecx
// 0086eb65  5e                   pop esi
// 0086eb66  83c414               add esp, 0x14
// 0086eb69  c20800               ret 8
// copied from an identical function in another client (function ?LoadToolBar@CXTPResourceManager@@UAEHPAVCToolBar@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPResourceManager.cpp
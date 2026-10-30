// roc 2010-06 00897a60  unit: CXTShadowHook  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00897a60
//
// 00897a60  56                   push esi
// 00897a61  57                   push edi
// 00897a62  6a0a                 push 0xa
// 00897a64  8bf1                 mov esi, ecx
// 00897a66  e8a5fdffff           call 0x897810
// 00897a6b  8d7e1c               lea edi, [esi + 0x1c]
// 00897a6e  6a0a                 push 0xa
// 00897a70  8bcf                 mov ecx, edi
// 00897a72  c7067405a700         mov dword ptr [esi], 0xa70574
// 00897a78  e893fdffff           call 0x897810
// 00897a7d  68d85da500           push 0xa55dd8
// 00897a82  c7077405a700         mov dword ptr [edi], 0xa70574
// 00897a88  ff158ca39e00         call dword ptr [0x9ea38c]
// 00897a8e  c7463800000000       mov dword ptr [esi + 0x38], 0
// 00897a95  85c0                 test eax, eax
// 00897a97  740f                 je 0x897aa8
// 00897a99  6818cca600           push 0xa6cc18
// 00897a9e  50                   push eax
// 00897a9f  ff1590a39e00         call dword ptr [0x9ea390]
// 00897aa5  894638               mov dword ptr [esi + 0x38], eax
// 00897aa8  5f                   pop edi
// 00897aa9  8bc6                 mov eax, esi
// 00897aab  5e                   pop esi
// 00897aac  c3                   ret 
// copied from an identical function in another client (function ??0CXTShadowsManager@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp
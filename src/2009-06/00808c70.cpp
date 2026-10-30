// roc 2009-06 00808c70  unit: CXTShadowHook  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00808c70
//
// 00808c70  56                   push esi
// 00808c71  57                   push edi
// 00808c72  6a0a                 push 0xa
// 00808c74  8bf1                 mov esi, ecx
// 00808c76  e8e5fdffff           call 0x808a60
// 00808c7b  8d7e1c               lea edi, [esi + 0x1c]
// 00808c7e  6a0a                 push 0xa
// 00808c80  8bcf                 mov ecx, edi
// 00808c82  c7060cbe9000         mov dword ptr [esi], 0x90be0c
// 00808c88  e8d3fdffff           call 0x808a60
// 00808c8d  6898248f00           push 0x8f2498
// 00808c92  c7070cbe9000         mov dword ptr [edi], 0x90be0c
// 00808c98  ff15e4e18900         call dword ptr [0x89e1e4]
// 00808c9e  c7463800000000       mov dword ptr [esi + 0x38], 0
// 00808ca5  85c0                 test eax, eax
// 00808ca7  740f                 je 0x808cb8
// 00808ca9  68c0849000           push 0x9084c0
// 00808cae  50                   push eax
// 00808caf  ff15e8e18900         call dword ptr [0x89e1e8]
// 00808cb5  894638               mov dword ptr [esi + 0x38], eax
// 00808cb8  5f                   pop edi
// 00808cb9  8bc6                 mov eax, esi
// 00808cbb  5e                   pop esi
// 00808cbc  c3                   ret 
// copied from an identical function in another client (function ??0CXTShadowsManager@@AAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp
// roc 2010-06 008a7c60  unit: CXTShadowHook  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a7c60
//
// 008a7c60  56                   push esi
// 008a7c61  8bf1                 mov esi, ecx
// 008a7c63  8b4604               mov eax, dword ptr [esi + 4]
// 008a7c66  c706343da700         mov dword ptr [esi], 0xa73d34
// 008a7c6c  85c0                 test eax, eax
// 008a7c6e  7414                 je 0x8a7c84
// 008a7c70  50                   push eax
// 008a7c71  ff1528bc9e00         call dword ptr [0x9ebc28]
// 008a7c77  85c0                 test eax, eax
// 008a7c79  7409                 je 0x8a7c84
// 008a7c7b  6a00                 push 0
// 008a7c7d  8bce                 mov ecx, esi
// 008a7c7f  e88cffffff           call 0x8a7c10
// 008a7c84  5e                   pop esi
// 008a7c85  c3                   ret 
// copied from an identical function in another client (function ??1CXTWndHook@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndHook.cpp
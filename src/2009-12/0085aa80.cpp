// roc 2009-12 0085aa80  unit: CXTPStatusBar  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085aa80
//
// 0085aa80  56                   push esi
// 0085aa81  57                   push edi
// 0085aa82  8bf1                 mov esi, ecx
// 0085aa84  e8b9b90c00           call 0x926442
// 0085aa89  8d4e30               lea ecx, [esi + 0x30]
// 0085aa8c  c70664d29f00         mov dword ptr [esi], 0x9fd264
// 0085aa92  ff1574de9800         call dword ptr [0x98de74]
// 0085aa98  8d4e40               lea ecx, [esi + 0x40]
// 0085aa9b  ff1574de9800         call dword ptr [0x98de74]
// 0085aaa1  c7465c98019b00       mov dword ptr [esi + 0x5c], 0x9b0198
// 0085aaa8  33ff                 xor edi, edi
// 0085aaaa  897e60               mov dword ptr [esi + 0x60], edi
// 0085aaad  6a01                 push 1
// 0085aaaf  83c8ff               or eax, 0xffffffff
// 0085aab2  6a02                 push 2
// 0085aab4  6a01                 push 1
// 0085aab6  894654               mov dword ptr [esi + 0x54], eax
// 0085aab9  894658               mov dword ptr [esi + 0x58], eax
// 0085aabc  894638               mov dword ptr [esi + 0x38], eax
// 0085aabf  89463c               mov dword ptr [esi + 0x3c], eax
// 0085aac2  894664               mov dword ptr [esi + 0x64], eax
// 0085aac5  6a02                 push 2
// 0085aac7  8d4668               lea eax, [esi + 0x68]
// 0085aaca  50                   push eax
// 0085aacb  897e20               mov dword ptr [esi + 0x20], edi
// 0085aace  897e24               mov dword ptr [esi + 0x24], edi
// 0085aad1  897e28               mov dword ptr [esi + 0x28], edi
// 0085aad4  897e2c               mov dword ptr [esi + 0x2c], edi
// 0085aad7  897e50               mov dword ptr [esi + 0x50], edi
// 0085aada  897e44               mov dword ptr [esi + 0x44], edi
// 0085aadd  897e48               mov dword ptr [esi + 0x48], edi
// 0085aae0  c7463401000000       mov dword ptr [esi + 0x34], 1
// 0085aae7  897e4c               mov dword ptr [esi + 0x4c], edi
// 0085aaea  ff1538ca9800         call dword ptr [0x98ca38]
// 0085aaf0  897e78               mov dword ptr [esi + 0x78], edi
// 0085aaf3  897e7c               mov dword ptr [esi + 0x7c], edi
// 0085aaf6  5f                   pop edi
// 0085aaf7  8bc6                 mov eax, esi
// 0085aaf9  5e                   pop esi
// 0085aafa  c3                   ret 
// copied from an identical function in another client (function ??0CXTPStatusBarPane@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp
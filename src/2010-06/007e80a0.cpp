// roc 2010-06 007e80a0  unit: CRobloxTreeCtrl  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e80a0
//
// 007e80a0  83ec48               sub esp, 0x48
// 007e80a3  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007e80a8  33c4                 xor eax, esp
// 007e80aa  89442444             mov dword ptr [esp + 0x44], eax
// 007e80ae  53                   push ebx
// 007e80af  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 007e80b3  56                   push esi
// 007e80b4  57                   push edi
// 007e80b5  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 007e80b9  6a3c                 push 0x3c
// 007e80bb  8d442410             lea eax, [esp + 0x10]
// 007e80bf  6a00                 push 0
// 007e80c1  50                   push eax
// 007e80c2  8bf1                 mov esi, ecx
// 007e80c4  e81b0bfcff           call 0x7a8be4
// 007e80c9  83c40c               add esp, 0xc
// 007e80cc  8d4c240c             lea ecx, [esp + 0xc]
// 007e80d0  51                   push ecx
// 007e80d1  53                   push ebx
// 007e80d2  8d4e18               lea ecx, [esi + 0x18]
// 007e80d5  e846fdffff           call 0x7e7e20
// 007e80da  85c0                 test eax, eax
// 007e80dc  7516                 jne 0x7e80f4
// 007e80de  5f                   pop edi
// 007e80df  5e                   pop esi
// 007e80e0  33c0                 xor eax, eax
// 007e80e2  5b                   pop ebx
// 007e80e3  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007e80e7  33cc                 xor ecx, esp
// 007e80e9  e8e613fcff           call 0x7a94d4
// 007e80ee  83c448               add esp, 0x48
// 007e80f1  c20800               ret 8
// 007e80f4  807c242800           cmp byte ptr [esp + 0x28], 0
// 007e80f9  74e3                 je 0x7e80de
// 007e80fb  b90f000000           mov ecx, 0xf
// 007e8100  8d74240c             lea esi, [esp + 0xc]
// 007e8104  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 007e8106  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007e810a  5f                   pop edi
// 007e810b  5e                   pop esi
// 007e810c  5b                   pop ebx
// 007e810d  33cc                 xor ecx, esp
// 007e810f  b801000000           mov eax, 1
// 007e8114  e8bb13fcff           call 0x7a94d4
// 007e8119  83c448               add esp, 0x48
// 007e811c  c20800               ret 8
// copied from an identical function in another client (function ?GetItemFont@CXTTreeBase@@UAEHPAU_TREEITEM@@PAUtagLOGFONTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp
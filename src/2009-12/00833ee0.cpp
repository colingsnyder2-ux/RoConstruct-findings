// roc 2009-12 00833ee0  unit: CRobloxTreeCtrl  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00833ee0
//
// 00833ee0  83ec48               sub esp, 0x48
// 00833ee3  a10052b600           mov eax, dword ptr [0xb65200]
// 00833ee8  33c4                 xor eax, esp
// 00833eea  89442444             mov dword ptr [esp + 0x44], eax
// 00833eee  53                   push ebx
// 00833eef  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00833ef3  56                   push esi
// 00833ef4  57                   push edi
// 00833ef5  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 00833ef9  6a3c                 push 0x3c
// 00833efb  8d442410             lea eax, [esp + 0x10]
// 00833eff  6a00                 push 0
// 00833f01  50                   push eax
// 00833f02  8bf1                 mov esi, ecx
// 00833f04  e89b0bfcff           call 0x7f4aa4
// 00833f09  83c40c               add esp, 0xc
// 00833f0c  8d4c240c             lea ecx, [esp + 0xc]
// 00833f10  51                   push ecx
// 00833f11  53                   push ebx
// 00833f12  8d4e18               lea ecx, [esi + 0x18]
// 00833f15  e846fdffff           call 0x833c60
// 00833f1a  85c0                 test eax, eax
// 00833f1c  7516                 jne 0x833f34
// 00833f1e  5f                   pop edi
// 00833f1f  5e                   pop esi
// 00833f20  33c0                 xor eax, eax
// 00833f22  5b                   pop ebx
// 00833f23  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00833f27  33cc                 xor ecx, esp
// 00833f29  e86c14fcff           call 0x7f539a
// 00833f2e  83c448               add esp, 0x48
// 00833f31  c20800               ret 8
// 00833f34  807c242800           cmp byte ptr [esp + 0x28], 0
// 00833f39  74e3                 je 0x833f1e
// 00833f3b  b90f000000           mov ecx, 0xf
// 00833f40  8d74240c             lea esi, [esp + 0xc]
// 00833f44  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00833f46  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00833f4a  5f                   pop edi
// 00833f4b  5e                   pop esi
// 00833f4c  5b                   pop ebx
// 00833f4d  33cc                 xor ecx, esp
// 00833f4f  b801000000           mov eax, 1
// 00833f54  e84114fcff           call 0x7f539a
// 00833f59  83c448               add esp, 0x48
// 00833f5c  c20800               ret 8
// copied from an identical function in another client (function ?GetItemFont@CXTTreeBase@@UAEHPAU_TREEITEM@@PAUtagLOGFONTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp
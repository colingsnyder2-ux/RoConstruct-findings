// roc 2010-06 007c6f50  unit: CXTPToolBar  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c6f50
//
// 007c6f50  83ec10               sub esp, 0x10
// 007c6f53  56                   push esi
// 007c6f54  8bf1                 mov esi, ecx
// 007c6f56  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 007c6f5d  7418                 je 0x7c6f77
// 007c6f5f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007c6f63  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007c6f67  50                   push eax
// 007c6f68  51                   push ecx
// 007c6f69  8bce                 mov ecx, esi
// 007c6f6b  e85057ffff           call 0x7bc6c0
// 007c6f70  5e                   pop esi
// 007c6f71  83c410               add esp, 0x10
// 007c6f74  c20800               ret 8
// 007c6f77  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 007c6f7e  7516                 jne 0x7c6f96
// 007c6f80  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007c6f84  8b442418             mov eax, dword ptr [esp + 0x18]
// 007c6f88  52                   push edx
// 007c6f89  50                   push eax
// 007c6f8a  e83157ffff           call 0x7bc6c0
// 007c6f8f  5e                   pop esi
// 007c6f90  83c410               add esp, 0x10
// 007c6f93  c20800               ret 8
// 007c6f96  8b5620               mov edx, dword ptr [esi + 0x20]
// 007c6f99  8d4c2404             lea ecx, [esp + 4]
// 007c6f9d  51                   push ecx
// 007c6f9e  52                   push edx
// 007c6f9f  ff153cbc9e00         call dword ptr [0x9ebc3c]
// 007c6fa5  6afd                 push -3
// 007c6fa7  6afd                 push -3
// 007c6fa9  8d44240c             lea eax, [esp + 0xc]
// 007c6fad  50                   push eax
// 007c6fae  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 007c6fb4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007c6fb8  3b442408             cmp eax, dword ptr [esp + 8]
// 007c6fbc  7d0c                 jge 0x7c6fca
// 007c6fbe  b80c000000           mov eax, 0xc
// 007c6fc3  5e                   pop esi
// 007c6fc4  83c410               add esp, 0x10
// 007c6fc7  c20800               ret 8
// 007c6fca  3b442410             cmp eax, dword ptr [esp + 0x10]
// 007c6fce  7c0c                 jl 0x7c6fdc
// 007c6fd0  b80f000000           mov eax, 0xf
// 007c6fd5  5e                   pop esi
// 007c6fd6  83c410               add esp, 0x10
// 007c6fd9  c20800               ret 8
// 007c6fdc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007c6fe0  3b4c2404             cmp ecx, dword ptr [esp + 4]
// 007c6fe4  7d0c                 jge 0x7c6ff2
// 007c6fe6  b80a000000           mov eax, 0xa
// 007c6feb  5e                   pop esi
// 007c6fec  83c410               add esp, 0x10
// 007c6fef  c20800               ret 8
// 007c6ff2  3b4c240c             cmp ecx, dword ptr [esp + 0xc]
// 007c6ff6  0f8c6bffffff         jl 0x7c6f67
// 007c6ffc  b80b000000           mov eax, 0xb
// 007c7001  5e                   pop esi
// 007c7002  83c410               add esp, 0x10
// 007c7005  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnNcHitTest@CXTPToolBar@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp

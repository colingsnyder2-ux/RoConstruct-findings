// roc 2007-03 00720cc0  unit: seg_00720000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00720cc0
//
// 00720cc0  53                   push ebx
// 00720cc1  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00720cc5  8bc3                 mov eax, ebx
// 00720cc7  83e01f               and eax, 0x1f
// 00720cca  83f813               cmp eax, 0x13
// 00720ccd  56                   push esi
// 00720cce  b901000000           mov ecx, 1
// 00720cd3  7405                 je 0x720cda
// 00720cd5  83f81c               cmp eax, 0x1c
// 00720cd8  7503                 jne 0x720cdd
// 00720cda  83c9ff               or ecx, 0xffffffff
// 00720cdd  f6c308               test bl, 8
// 00720ce0  8b442418             mov eax, dword ptr [esp + 0x18]
// 00720ce4  7504                 jne 0x720cea
// 00720ce6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00720cea  8b742410             mov esi, dword ptr [esp + 0x10]
// 00720cee  50                   push eax
// 00720cef  8bc3                 mov eax, ebx
// 00720cf1  25fff7ffff           and eax, 0xfffff7ff
// 00720cf6  50                   push eax
// 00720cf7  6a01                 push 1
// 00720cf9  51                   push ecx
// 00720cfa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00720cfe  56                   push esi
// 00720cff  51                   push ecx
// 00720d00  e8ebfdffff           call 0x720af0
// 00720d05  83c418               add esp, 0x18
// 00720d08  f6c302               test bl, 2
// 00720d0b  7407                 je 0x720d14
// 00720d0d  0fb7d0               movzx edx, ax
// 00720d10  0116                 add dword ptr [esi], edx
// 00720d12  eb06                 jmp 0x720d1a
// 00720d14  0fb7c8               movzx ecx, ax
// 00720d17  294e08               sub dword ptr [esi + 8], ecx
// 00720d1a  c1e810               shr eax, 0x10
// 00720d1d  f6c304               test bl, 4
// 00720d20  740b                 je 0x720d2d
// 00720d22  014604               add dword ptr [esi + 4], eax
// 00720d25  5e                   pop esi
// 00720d26  b801000000           mov eax, 1
// 00720d2b  5b                   pop ebx
// 00720d2c  c3                   ret 
// 00720d2d  29460c               sub dword ptr [esi + 0xc], eax
// 00720d30  5e                   pop esi
// 00720d31  b801000000           mov eax, 1
// 00720d36  5b                   pop ebx
// 00720d37  c3                   ret 
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinDrawTools.cpp (function ?DrawDiagonal@@YAHPAUHDC__@@PAUtagRECT@@KKI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinDrawTools.cpp

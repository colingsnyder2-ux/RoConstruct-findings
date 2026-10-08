// from server: 100% by auto
// roc 2012-06 00a10d60  unit: XTPPaintThemes::CXTPOfficeTheme  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a10d60
//
// 00a10d60  33c0                 xor eax, eax
// 00a10d62  837c241c05           cmp dword ptr [esp + 0x1c], 5
// 00a10d67  0f95c0               setne al
// 00a10d6a  837c241802           cmp dword ptr [esp + 0x18], 2
// 00a10d6f  8d44002c             lea eax, [eax + eax + 0x2c]
// 00a10d73  752a                 jne 0xa10d9f
// 00a10d75  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00a10d7a  750e                 jne 0xa10d8a
// 00a10d7c  b823000000           mov eax, 0x23
// 00a10d81  50                   push eax
// 00a10d82  e8096bf7ff           call 0x987890
// 00a10d87  c21c00               ret 0x1c
// 00a10d8a  33c0                 xor eax, eax
// 00a10d8c  39442404             cmp dword ptr [esp + 4], eax
// 00a10d90  0f95c0               setne al
// 00a10d93  83c02c               add eax, 0x2c
// 00a10d96  50                   push eax
// 00a10d97  e8f46af7ff           call 0x987890
// 00a10d9c  c21c00               ret 0x1c
// 00a10d9f  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00a10da4  750e                 jne 0xa10db4
// 00a10da6  b83c000000           mov eax, 0x3c
// 00a10dab  50                   push eax
// 00a10dac  e8df6af7ff           call 0x987890
// 00a10db1  c21c00               ret 0x1c
// 00a10db4  837c241400           cmp dword ptr [esp + 0x14], 0
// 00a10db9  740e                 je 0xa10dc9
// 00a10dbb  b82e000000           mov eax, 0x2e
// 00a10dc0  50                   push eax
// 00a10dc1  e8ca6af7ff           call 0x987890
// 00a10dc6  c21c00               ret 0x1c
// 00a10dc9  8b542408             mov edx, dword ptr [esp + 8]
// 00a10dcd  56                   push esi
// 00a10dce  8b742408             mov esi, dword ptr [esp + 8]
// 00a10dd2  57                   push edi
// 00a10dd3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00a10dd7  85ff                 test edi, edi
// 00a10dd9  7408                 je 0xa10de3
// 00a10ddb  85f6                 test esi, esi
// 00a10ddd  7504                 jne 0xa10de3
// 00a10ddf  85d2                 test edx, edx
// 00a10de1  742a                 je 0xa10e0d
// 00a10de3  83fa02               cmp edx, 2
// 00a10de6  7411                 je 0xa10df9
// 00a10de8  83fa03               cmp edx, 3
// 00a10deb  740c                 je 0xa10df9
// 00a10ded  85f6                 test esi, esi
// 00a10def  7418                 je 0xa10e09
// 00a10df1  85d2                 test edx, edx
// 00a10df3  7504                 jne 0xa10df9
// 00a10df5  85ff                 test edi, edi
// 00a10df7  7414                 je 0xa10e0d
// 00a10df9  b82f000000           mov eax, 0x2f
// 00a10dfe  5f                   pop edi
// 00a10dff  5e                   pop esi
// 00a10e00  50                   push eax
// 00a10e01  e88a6af7ff           call 0x987890
// 00a10e06  c21c00               ret 0x1c
// 00a10e09  85d2                 test edx, edx
// 00a10e0b  74f1                 je 0xa10dfe
// 00a10e0d  5f                   pop edi
// 00a10e0e  b82d000000           mov eax, 0x2d
// 00a10e13  5e                   pop esi
// 00a10e14  50                   push eax
// 00a10e15  e8766af7ff           call 0x987890
// 00a10e1a  c21c00               ret 0x1c
// library xtp-15.2.1/Source\CommandBars\XTPOfficeTheme.cpp (function ?GetRectangleTextColor@CXTPOfficeTheme@@UAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPOfficeTheme.cpp

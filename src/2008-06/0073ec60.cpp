// from server: 100% by auto
// roc 2008-06 0073ec60  unit: XTPPaintThemes::CXTPOfficeTheme  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073ec60
//
// 0073ec60  33c0                 xor eax, eax
// 0073ec62  837c241c05           cmp dword ptr [esp + 0x1c], 5
// 0073ec67  0f95c0               setne al
// 0073ec6a  837c241802           cmp dword ptr [esp + 0x18], 2
// 0073ec6f  8d44002c             lea eax, [eax + eax + 0x2c]
// 0073ec73  752a                 jne 0x73ec9f
// 0073ec75  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0073ec7a  750e                 jne 0x73ec8a
// 0073ec7c  b823000000           mov eax, 0x23
// 0073ec81  50                   push eax
// 0073ec82  e8e9f3f6ff           call 0x6ae070
// 0073ec87  c21c00               ret 0x1c
// 0073ec8a  33c0                 xor eax, eax
// 0073ec8c  39442404             cmp dword ptr [esp + 4], eax
// 0073ec90  0f95c0               setne al
// 0073ec93  83c02c               add eax, 0x2c
// 0073ec96  50                   push eax
// 0073ec97  e8d4f3f6ff           call 0x6ae070
// 0073ec9c  c21c00               ret 0x1c
// 0073ec9f  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0073eca4  750e                 jne 0x73ecb4
// 0073eca6  b83c000000           mov eax, 0x3c
// 0073ecab  50                   push eax
// 0073ecac  e8bff3f6ff           call 0x6ae070
// 0073ecb1  c21c00               ret 0x1c
// 0073ecb4  837c241400           cmp dword ptr [esp + 0x14], 0
// 0073ecb9  740e                 je 0x73ecc9
// 0073ecbb  b82e000000           mov eax, 0x2e
// 0073ecc0  50                   push eax
// 0073ecc1  e8aaf3f6ff           call 0x6ae070
// 0073ecc6  c21c00               ret 0x1c
// 0073ecc9  8b542408             mov edx, dword ptr [esp + 8]
// 0073eccd  56                   push esi
// 0073ecce  8b742408             mov esi, dword ptr [esp + 8]
// 0073ecd2  57                   push edi
// 0073ecd3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0073ecd7  85ff                 test edi, edi
// 0073ecd9  7408                 je 0x73ece3
// 0073ecdb  85f6                 test esi, esi
// 0073ecdd  7504                 jne 0x73ece3
// 0073ecdf  85d2                 test edx, edx
// 0073ece1  742a                 je 0x73ed0d
// 0073ece3  83fa02               cmp edx, 2
// 0073ece6  7411                 je 0x73ecf9
// 0073ece8  83fa03               cmp edx, 3
// 0073eceb  740c                 je 0x73ecf9
// 0073eced  85f6                 test esi, esi
// 0073ecef  7418                 je 0x73ed09
// 0073ecf1  85d2                 test edx, edx
// 0073ecf3  7504                 jne 0x73ecf9
// 0073ecf5  85ff                 test edi, edi
// 0073ecf7  7414                 je 0x73ed0d
// 0073ecf9  b82f000000           mov eax, 0x2f
// 0073ecfe  5f                   pop edi
// 0073ecff  5e                   pop esi
// 0073ed00  50                   push eax
// 0073ed01  e86af3f6ff           call 0x6ae070
// 0073ed06  c21c00               ret 0x1c
// 0073ed09  85d2                 test edx, edx
// 0073ed0b  74f1                 je 0x73ecfe
// 0073ed0d  5f                   pop edi
// 0073ed0e  b82d000000           mov eax, 0x2d
// 0073ed13  5e                   pop esi
// 0073ed14  50                   push eax
// 0073ed15  e856f3f6ff           call 0x6ae070
// 0073ed1a  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?GetRectangleTextColor@CXTPOfficeTheme@XTPPaintThemes@@UAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp

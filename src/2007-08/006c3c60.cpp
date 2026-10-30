// from server: 100% by auto
// roc 2007-08 006c3c60  unit: XTPPaintThemes::CXTPOfficeTheme  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c3c60
//
// 006c3c60  33c0                 xor eax, eax
// 006c3c62  837c241c05           cmp dword ptr [esp + 0x1c], 5
// 006c3c67  0f95c0               setne al
// 006c3c6a  837c241802           cmp dword ptr [esp + 0x18], 2
// 006c3c6f  8d44002c             lea eax, [eax + eax + 0x2c]
// 006c3c73  752a                 jne 0x6c3c9f
// 006c3c75  837c240c00           cmp dword ptr [esp + 0xc], 0
// 006c3c7a  750e                 jne 0x6c3c8a
// 006c3c7c  b823000000           mov eax, 0x23
// 006c3c81  50                   push eax
// 006c3c82  e8e990f7ff           call 0x63cd70
// 006c3c87  c21c00               ret 0x1c
// 006c3c8a  33c0                 xor eax, eax
// 006c3c8c  39442404             cmp dword ptr [esp + 4], eax
// 006c3c90  0f95c0               setne al
// 006c3c93  83c02c               add eax, 0x2c
// 006c3c96  50                   push eax
// 006c3c97  e8d490f7ff           call 0x63cd70
// 006c3c9c  c21c00               ret 0x1c
// 006c3c9f  837c240c00           cmp dword ptr [esp + 0xc], 0
// 006c3ca4  750e                 jne 0x6c3cb4
// 006c3ca6  b83c000000           mov eax, 0x3c
// 006c3cab  50                   push eax
// 006c3cac  e8bf90f7ff           call 0x63cd70
// 006c3cb1  c21c00               ret 0x1c
// 006c3cb4  837c241400           cmp dword ptr [esp + 0x14], 0
// 006c3cb9  740e                 je 0x6c3cc9
// 006c3cbb  b82e000000           mov eax, 0x2e
// 006c3cc0  50                   push eax
// 006c3cc1  e8aa90f7ff           call 0x63cd70
// 006c3cc6  c21c00               ret 0x1c
// 006c3cc9  8b542408             mov edx, dword ptr [esp + 8]
// 006c3ccd  56                   push esi
// 006c3cce  8b742408             mov esi, dword ptr [esp + 8]
// 006c3cd2  57                   push edi
// 006c3cd3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006c3cd7  85ff                 test edi, edi
// 006c3cd9  7408                 je 0x6c3ce3
// 006c3cdb  85f6                 test esi, esi
// 006c3cdd  7504                 jne 0x6c3ce3
// 006c3cdf  85d2                 test edx, edx
// 006c3ce1  742a                 je 0x6c3d0d
// 006c3ce3  83fa02               cmp edx, 2
// 006c3ce6  7411                 je 0x6c3cf9
// 006c3ce8  83fa03               cmp edx, 3
// 006c3ceb  740c                 je 0x6c3cf9
// 006c3ced  85f6                 test esi, esi
// 006c3cef  7418                 je 0x6c3d09
// 006c3cf1  85d2                 test edx, edx
// 006c3cf3  7504                 jne 0x6c3cf9
// 006c3cf5  85ff                 test edi, edi
// 006c3cf7  7414                 je 0x6c3d0d
// 006c3cf9  b82f000000           mov eax, 0x2f
// 006c3cfe  5f                   pop edi
// 006c3cff  5e                   pop esi
// 006c3d00  50                   push eax
// 006c3d01  e86a90f7ff           call 0x63cd70
// 006c3d06  c21c00               ret 0x1c
// 006c3d09  85d2                 test edx, edx
// 006c3d0b  74f1                 je 0x6c3cfe
// 006c3d0d  5f                   pop edi
// 006c3d0e  b82d000000           mov eax, 0x2d
// 006c3d13  5e                   pop esi
// 006c3d14  50                   push eax
// 006c3d15  e85690f7ff           call 0x63cd70
// 006c3d1a  c21c00               ret 0x1c
// library xtp-11.2.2-vc8/Source\CommandBars\XTPOfficeTheme.cpp (function ?GetRectangleTextColor@CXTPOfficeTheme@XTPPaintThemes@@UAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPOfficeTheme.cpp

// from server: 100% by auto
// roc 2011-06 00898780  unit: XTPPaintThemes::CXTPOfficeTheme  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00898780
//
// 00898780  33c0                 xor eax, eax
// 00898782  837c241c05           cmp dword ptr [esp + 0x1c], 5
// 00898787  0f95c0               setne al
// 0089878a  837c241802           cmp dword ptr [esp + 0x18], 2
// 0089878f  8d44002c             lea eax, [eax + eax + 0x2c]
// 00898793  752a                 jne 0x8987bf
// 00898795  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0089879a  750e                 jne 0x8987aa
// 0089879c  b823000000           mov eax, 0x23
// 008987a1  50                   push eax
// 008987a2  e8096ef7ff           call 0x80f5b0
// 008987a7  c21c00               ret 0x1c
// 008987aa  33c0                 xor eax, eax
// 008987ac  39442404             cmp dword ptr [esp + 4], eax
// 008987b0  0f95c0               setne al
// 008987b3  83c02c               add eax, 0x2c
// 008987b6  50                   push eax
// 008987b7  e8f46df7ff           call 0x80f5b0
// 008987bc  c21c00               ret 0x1c
// 008987bf  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008987c4  750e                 jne 0x8987d4
// 008987c6  b83c000000           mov eax, 0x3c
// 008987cb  50                   push eax
// 008987cc  e8df6df7ff           call 0x80f5b0
// 008987d1  c21c00               ret 0x1c
// 008987d4  837c241400           cmp dword ptr [esp + 0x14], 0
// 008987d9  740e                 je 0x8987e9
// 008987db  b82e000000           mov eax, 0x2e
// 008987e0  50                   push eax
// 008987e1  e8ca6df7ff           call 0x80f5b0
// 008987e6  c21c00               ret 0x1c
// 008987e9  8b542408             mov edx, dword ptr [esp + 8]
// 008987ed  56                   push esi
// 008987ee  8b742408             mov esi, dword ptr [esp + 8]
// 008987f2  57                   push edi
// 008987f3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008987f7  85ff                 test edi, edi
// 008987f9  7408                 je 0x898803
// 008987fb  85f6                 test esi, esi
// 008987fd  7504                 jne 0x898803
// 008987ff  85d2                 test edx, edx
// 00898801  742a                 je 0x89882d
// 00898803  83fa02               cmp edx, 2
// 00898806  7411                 je 0x898819
// 00898808  83fa03               cmp edx, 3
// 0089880b  740c                 je 0x898819
// 0089880d  85f6                 test esi, esi
// 0089880f  7418                 je 0x898829
// 00898811  85d2                 test edx, edx
// 00898813  7504                 jne 0x898819
// 00898815  85ff                 test edi, edi
// 00898817  7414                 je 0x89882d
// 00898819  b82f000000           mov eax, 0x2f
// 0089881e  5f                   pop edi
// 0089881f  5e                   pop esi
// 00898820  50                   push eax
// 00898821  e88a6df7ff           call 0x80f5b0
// 00898826  c21c00               ret 0x1c
// 00898829  85d2                 test edx, edx
// 0089882b  74f1                 je 0x89881e
// 0089882d  5f                   pop edi
// 0089882e  b82d000000           mov eax, 0x2d
// 00898833  5e                   pop esi
// 00898834  50                   push eax
// 00898835  e8766df7ff           call 0x80f5b0
// 0089883a  c21c00               ret 0x1c
// library xtp-15.2.1/Source\CommandBars\XTPOfficeTheme.cpp (function ?GetRectangleTextColor@CXTPOfficeTheme@@UAEKHHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPOfficeTheme.cpp

// roc 2009-12 00860cf0  unit: CXTPToolTipContextToolTip  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00860cf0
//
// 00860cf0  56                   push esi
// 00860cf1  8bf1                 mov esi, ecx
// 00860cf3  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00860cf6  57                   push edi
// 00860cf7  e8c4f4ffff           call 0x8601c0
// 00860cfc  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00860d00  50                   push eax
// 00860d01  8d442418             lea eax, [esp + 0x18]
// 00860d05  50                   push eax
// 00860d06  8bcf                 mov ecx, edi
// 00860d08  e8f138f9ff           call 0x7f45fe
// 00860d0d  8bce                 mov ecx, esi
// 00860d0f  e85e570c00           call 0x926472
// 00860d14  6a00                 push 0
// 00860d16  a900100000           test eax, 0x1000
// 00860d1b  741a                 je 0x860d37
// 00860d1d  6a0f                 push 0xf
// 00860d1f  ff15d8ca9800         call dword ptr [0x98cad8]
// 00860d25  50                   push eax
// 00860d26  8d4c241c             lea ecx, [esp + 0x1c]
// 00860d2a  51                   push ecx
// 00860d2b  8bcf                 mov ecx, edi
// 00860d2d  e8c638f9ff           call 0x7f45f8
// 00860d32  5f                   pop edi
// 00860d33  5e                   pop esi
// 00860d34  c21800               ret 0x18
// 00860d37  6a00                 push 0
// 00860d39  8d54241c             lea edx, [esp + 0x1c]
// 00860d3d  52                   push edx
// 00860d3e  8bcf                 mov ecx, edi
// 00860d40  e8b338f9ff           call 0x7f45f8
// 00860d45  5f                   pop edi
// 00860d46  5e                   pop esi
// 00860d47  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawBackground@CXTPToolTipContextToolTip@@MAEXPAVCDC@@PAUTOOLITEM@1@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp
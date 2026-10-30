// roc 2009-12 008950b0  unit: CXTPRibbonBar  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008950b0
//
// 008950b0  56                   push esi
// 008950b1  57                   push edi
// 008950b2  8bf9                 mov edi, ecx
// 008950b4  8db73cfeffff         lea esi, [edi - 0x1c4]
// 008950ba  8bce                 mov ecx, esi
// 008950bc  e81ffcffff           call 0x894ce0
// 008950c1  85c0                 test eax, eax
// 008950c3  7448                 je 0x89510d
// 008950c5  e806f4f6ff           call 0x8044d0
// 008950ca  8bc8                 mov ecx, eax
// 008950cc  e80f0ef8ff           call 0x815ee0
// 008950d1  8bce                 mov ecx, esi
// 008950d3  e8f800f7ff           call 0x8051d0
// 008950d8  8bce                 mov ecx, esi
// 008950da  e801fcffff           call 0x894ce0
// 008950df  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008950e4  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 008950ea  8b4038               mov eax, dword ptr [eax + 0x38]
// 008950ed  7409                 je 0x8950f8
// 008950ef  83e828               sub eax, 0x28
// 008950f2  7907                 jns 0x8950fb
// 008950f4  33c0                 xor eax, eax
// 008950f6  eb03                 jmp 0x8950fb
// 008950f8  83c028               add eax, 0x28
// 008950fb  3b4704               cmp eax, dword ptr [edi + 4]
// 008950fe  740d                 je 0x89510d
// 00895100  8b16                 mov edx, dword ptr [esi]
// 00895102  894704               mov dword ptr [edi + 4], eax
// 00895105  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 0089510b  ffd0                 call eax
// 0089510d  5f                   pop edi
// 0089510e  5e                   pop esi
// 0089510f  c20400               ret 4
// copied from an identical function in another client (function ?OnGroupsScroll@CXTPRibbonBar@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp
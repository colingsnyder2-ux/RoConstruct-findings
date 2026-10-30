// roc 2009-12 007f8bc0  unit: CXTPControlActions  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f8bc0
//
// 007f8bc0  83ec08               sub esp, 8
// 007f8bc3  56                   push esi
// 007f8bc4  57                   push edi
// 007f8bc5  8bf1                 mov esi, ecx
// 007f8bc7  e854d9ffff           call 0x7f6520
// 007f8bcc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007f8bd0  8b470c               mov eax, dword ptr [edi + 0xc]
// 007f8bd3  f7d8                 neg eax
// 007f8bd5  1bc0                 sbb eax, eax
// 007f8bd7  89442414             mov dword ptr [esp + 0x14], eax
// 007f8bdb  7432                 je 0x7f8c0f
// 007f8bdd  8d4900               lea ecx, [ecx]
// 007f8be0  8d44240c             lea eax, [esp + 0xc]
// 007f8be4  50                   push eax
// 007f8be5  8d4c240c             lea ecx, [esp + 0xc]
// 007f8be9  51                   push ecx
// 007f8bea  8d54241c             lea edx, [esp + 0x1c]
// 007f8bee  52                   push edx
// 007f8bef  8bcf                 mov ecx, edi
// 007f8bf1  e82a0c0100           call 0x809820
// 007f8bf6  8b442408             mov eax, dword ptr [esp + 8]
// 007f8bfa  50                   push eax
// 007f8bfb  8bce                 mov ecx, esi
// 007f8bfd  e87eb50900           call 0x894180
// 007f8c02  837c241400           cmp dword ptr [esp + 0x14], 0
// 007f8c07  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f8c0b  8908                 mov dword ptr [eax], ecx
// 007f8c0d  75d1                 jne 0x7f8be0
// 007f8c0f  5f                   pop edi
// 007f8c10  5e                   pop esi
// 007f8c11  83c408               add esp, 8
// 007f8c14  c20400               ret 4
// copied from an identical function in another client (function ?Copy@CDocTemplateMap@CXTPControl@@QAEXAAV12@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp
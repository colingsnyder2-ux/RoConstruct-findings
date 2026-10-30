// roc 2009-12 008775c0  unit: CXTPControlGallery  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008775c0
//
// 008775c0  83ec14               sub esp, 0x14
// 008775c3  56                   push esi
// 008775c4  8bf1                 mov esi, ecx
// 008775c6  33c9                 xor ecx, ecx
// 008775c8  398ea8000000         cmp dword ptr [esi + 0xa8], ecx
// 008775ce  7516                 jne 0x8775e6
// 008775d0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008775d4  8908                 mov dword ptr [eax], ecx
// 008775d6  894804               mov dword ptr [eax + 4], ecx
// 008775d9  894808               mov dword ptr [eax + 8], ecx
// 008775dc  89480c               mov dword ptr [eax + 0xc], ecx
// 008775df  5e                   pop esi
// 008775e0  83c414               add esp, 0x14
// 008775e3  c20400               ret 4
// 008775e6  8b8e40ffffff         mov ecx, dword ptr [esi - 0xc0]
// 008775ec  8b863cffffff         mov eax, dword ptr [esi - 0xc4]
// 008775f2  8b967cfeffff         mov edx, dword ptr [esi - 0x184]
// 008775f8  53                   push ebx
// 008775f9  8b9e44ffffff         mov ebx, dword ptr [esi - 0xbc]
// 008775ff  894c2410             mov dword ptr [esp + 0x10], ecx
// 00877603  8d8e7cfeffff         lea ecx, [esi - 0x184]
// 00877609  55                   push ebp
// 0087760a  8bae48ffffff         mov ebp, dword ptr [esi - 0xb8]
// 00877610  89442410             mov dword ptr [esp + 0x10], eax
// 00877614  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 0087761a  57                   push edi
// 0087761b  894c2410             mov dword ptr [esp + 0x10], ecx
// 0087761f  ffd0                 call eax
// 00877621  8b16                 mov edx, dword ptr [esi]
// 00877623  85c0                 test eax, eax
// 00877625  8b4224               mov eax, dword ptr [edx + 0x24]
// 00877628  8bce                 mov ecx, esi
// 0087762a  7407                 je 0x877633
// 0087762c  ffd0                 call eax
// 0087762e  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00877631  eb05                 jmp 0x877638
// 00877633  ffd0                 call eax
// 00877635  8b4010               mov eax, dword ptr [eax + 0x10]
// 00877638  8bfb                 mov edi, ebx
// 0087763a  2bf8                 sub edi, eax
// 0087763c  83beac00000000       cmp dword ptr [esi + 0xac], 0
// 00877643  7407                 je 0x87764c
// 00877645  ff442418             inc dword ptr [esp + 0x18]
// 00877649  4d                   dec ebp
// 0087764a  4b                   dec ebx
// 0087764b  4f                   dec edi
// 0087764c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00877650  e80bfeffff           call 0x877460
// 00877655  85c0                 test eax, eax
// 00877657  7403                 je 0x87765c
// 00877659  83ed02               sub ebp, 2
// 0087765c  8b442428             mov eax, dword ptr [esp + 0x28]
// 00877660  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00877664  8938                 mov dword ptr [eax], edi
// 00877666  894804               mov dword ptr [eax + 4], ecx
// 00877669  5f                   pop edi
// 0087766a  895808               mov dword ptr [eax + 8], ebx
// 0087766d  89680c               mov dword ptr [eax + 0xc], ebp
// 00877670  5d                   pop ebp
// 00877671  5b                   pop ebx
// 00877672  5e                   pop esi
// 00877673  83c414               add esp, 0x14
// 00877676  c20400               ret 4
// copied from an identical function in another client (function ?GetScrollBarRect@CXTPControlGallery@@MAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp
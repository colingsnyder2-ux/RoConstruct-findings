// roc 2009-12 00877b90  unit: CXTPControlGalleryPaintManager  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00877b90
//
// 00877b90  53                   push ebx
// 00877b91  56                   push esi
// 00877b92  57                   push edi
// 00877b93  8bf9                 mov edi, ecx
// 00877b95  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00877b98  6a29                 push 0x29
// 00877b9a  e8a15af8ff           call 0x7fd640
// 00877b9f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00877ba3  50                   push eax
// 00877ba4  8d44241c             lea eax, [esp + 0x1c]
// 00877ba8  50                   push eax
// 00877ba9  8bcb                 mov ecx, ebx
// 00877bab  e84ecaf7ff           call 0x7f45fe
// 00877bb0  8b742414             mov esi, dword ptr [esp + 0x14]
// 00877bb4  83be3002000000       cmp dword ptr [esi + 0x230], 0
// 00877bbb  7422                 je 0x877bdf
// 00877bbd  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00877bc0  6a34                 push 0x34
// 00877bc2  e8795af8ff           call 0x7fd640
// 00877bc7  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00877bca  50                   push eax
// 00877bcb  6a34                 push 0x34
// 00877bcd  e86e5af8ff           call 0x7fd640
// 00877bd2  50                   push eax
// 00877bd3  8d4c2420             lea ecx, [esp + 0x20]
// 00877bd7  51                   push ecx
// 00877bd8  8bcb                 mov ecx, ebx
// 00877bda  e819caf7ff           call 0x7f45f8
// 00877bdf  8bce                 mov ecx, esi
// 00877be1  e87af8ffff           call 0x877460
// 00877be6  85c0                 test eax, eax
// 00877be8  742a                 je 0x877c14
// 00877bea  8b742420             mov esi, dword ptr [esp + 0x20]
// 00877bee  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00877bf1  2b742418             sub esi, dword ptr [esp + 0x18]
// 00877bf5  6a27                 push 0x27
// 00877bf7  e8445af8ff           call 0x7fd640
// 00877bfc  8b542424             mov edx, dword ptr [esp + 0x24]
// 00877c00  50                   push eax
// 00877c01  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00877c05  6a01                 push 1
// 00877c07  56                   push esi
// 00877c08  83c2fe               add edx, -2
// 00877c0b  52                   push edx
// 00877c0c  50                   push eax
// 00877c0d  8bcb                 mov ecx, ebx
// 00877c0f  e882e80a00           call 0x926496
// 00877c14  5f                   pop edi
// 00877c15  5e                   pop esi
// 00877c16  5b                   pop ebx
// 00877c17  c21800               ret 0x18
// copied from an identical function in another client (function ?FillControl@CXTPControlGalleryPaintManager@@UAEXPAVCDC@@PAVCXTPControlGallery@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp
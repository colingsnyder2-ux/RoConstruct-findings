// roc 2009-12 008456a0  unit: CXTPControls  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008456a0
//
// 008456a0  8b442408             mov eax, dword ptr [esp + 8]
// 008456a4  83ec08               sub esp, 8
// 008456a7  56                   push esi
// 008456a8  8bf1                 mov esi, ecx
// 008456aa  89463c               mov dword ptr [esi + 0x3c], eax
// 008456ad  33c0                 xor eax, eax
// 008456af  8d4e10               lea ecx, [esi + 0x10]
// 008456b2  51                   push ecx
// 008456b3  89462c               mov dword ptr [esi + 0x2c], eax
// 008456b6  894630               mov dword ptr [esi + 0x30], eax
// 008456b9  ff159cca9800         call dword ptr [0x98ca9c]
// 008456bf  8b442410             mov eax, dword ptr [esp + 0x10]
// 008456c3  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 008456c6  8b11                 mov edx, dword ptr [ecx]
// 008456c8  8b929c000000         mov edx, dword ptr [edx + 0x9c]
// 008456ce  50                   push eax
// 008456cf  8d442408             lea eax, [esp + 8]
// 008456d3  50                   push eax
// 008456d4  ffd2                 call edx
// 008456d6  8b08                 mov ecx, dword ptr [eax]
// 008456d8  894e20               mov dword ptr [esi + 0x20], ecx
// 008456db  8b5004               mov edx, dword ptr [eax + 4]
// 008456de  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 008456e1  895624               mov dword ptr [esi + 0x24], edx
// 008456e4  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 008456ea  8906                 mov dword ptr [esi], eax
// 008456ec  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 008456f2  895604               mov dword ptr [esi + 4], edx
// 008456f5  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 008456fb  894608               mov dword ptr [esi + 8], eax
// 008456fe  8b91cc000000         mov edx, dword ptr [ecx + 0xcc]
// 00845704  89560c               mov dword ptr [esi + 0xc], edx
// 00845707  8b8198000000         mov eax, dword ptr [ecx + 0x98]
// 0084570d  894634               mov dword ptr [esi + 0x34], eax
// 00845710  8b11                 mov edx, dword ptr [ecx]
// 00845712  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00845718  6a02                 push 2
// 0084571a  ffd0                 call eax
// 0084571c  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0084571f  894628               mov dword ptr [esi + 0x28], eax
// 00845722  e86905fbff           call 0x7f5c90
// 00845727  894638               mov dword ptr [esi + 0x38], eax
// 0084572a  5e                   pop esi
// 0084572b  83c408               add esp, 8
// 0084572e  c20800               ret 8
// copied from an identical function in another client (function ?Attach@XTPBUTTONINFO@CXTPControls@@QAEXPAVCDC@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp
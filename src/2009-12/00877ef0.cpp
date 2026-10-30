// roc 2009-12 00877ef0  unit: CXTPControlGallery::UGALLERYITEM_POSITION::?$CArray  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00877ef0
//
// 00877ef0  8b542404             mov edx, dword ptr [esp + 4]
// 00877ef4  85d2                 test edx, edx
// 00877ef6  7c1c                 jl 0x877f14
// 00877ef8  e89328feff           call 0x85a790
// 00877efd  3bd0                 cmp edx, eax
// 00877eff  7d13                 jge 0x877f14
// 00877f01  3b513c               cmp edx, dword ptr [ecx + 0x3c]
// 00877f04  7d09                 jge 0x877f0f
// 00877f06  8b4138               mov eax, dword ptr [ecx + 0x38]
// 00877f09  8b0490               mov eax, dword ptr [eax + edx*4]
// 00877f0c  c20400               ret 4
// 00877f0f  e8f8bbf7ff           call 0x7f3b0c
// 00877f14  33c0                 xor eax, eax
// 00877f16  c20400               ret 4
// copied from an identical function in another client (function ?GetItem@CXTPControlGalleryItems@@QBEPAVCXTPControlGalleryItem@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp
// roc 2008-06 00742bf0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00742bf0
//
// 00742bf0  56                   push esi
// 00742bf1  8bf1                 mov esi, ecx
// 00742bf3  8b4660               mov eax, dword ptr [esi + 0x60]
// 00742bf6  c7809c01000001000000 mov dword ptr [eax + 0x19c], 1
// 00742c00  ff15102e8000         call dword ptr [0x802e10]
// 00742c06  3b4620               cmp eax, dword ptr [esi + 0x20]
// 00742c09  7513                 jne 0x742c1e
// 00742c0b  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00742c0f  750d                 jne 0x742c1e
// 00742c11  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00742c14  8b11                 mov edx, dword ptr [ecx]
// 00742c16  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 00742c1c  ffd0                 call eax
// 00742c1e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00742c21  6a00                 push 0
// 00742c23  6a03                 push 3
// 00742c25  68d3000000           push 0xd3
// 00742c2a  51                   push ecx
// 00742c2b  ff15142e8000         call dword ptr [0x802e14]
// 00742c31  8bce                 mov ecx, esi
// 00742c33  5e                   pop esi
// 00742c34  e937f2ffff           jmp 0x741e70
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlEdit.cpp (function ?OnEditChanged@CXTPControlEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlEdit.cpp

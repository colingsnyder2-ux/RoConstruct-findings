// roc 2009-12 0080cda0  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080cda0
//
// 0080cda0  83ec08               sub esp, 8
// 0080cda3  56                   push esi
// 0080cda4  8bf1                 mov esi, ecx
// 0080cda6  e815f4ffff           call 0x80c1c0
// 0080cdab  8b442410             mov eax, dword ptr [esp + 0x10]
// 0080cdaf  8d4c2404             lea ecx, [esp + 4]
// 0080cdb3  51                   push ecx
// 0080cdb4  8bce                 mov ecx, esi
// 0080cdb6  894604               mov dword ptr [esi + 4], eax
// 0080cdb9  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 0080cdc0  e84bf4ffff           call 0x80c210
// 0080cdc5  8b10                 mov edx, dword ptr [eax]
// 0080cdc7  895618               mov dword ptr [esi + 0x18], edx
// 0080cdca  8b4004               mov eax, dword ptr [eax + 4]
// 0080cdcd  89461c               mov dword ptr [esi + 0x1c], eax
// 0080cdd0  8bc6                 mov eax, esi
// 0080cdd2  5e                   pop esi
// 0080cdd3  83c408               add esp, 8
// 0080cdd6  c20400               ret 4
// copied from an identical function in another client (function ??4CXTPImageManagerIconHandle@@QAEABV0@QAUHBITMAP__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
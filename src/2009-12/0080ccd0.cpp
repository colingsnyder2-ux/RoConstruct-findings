// roc 2009-12 0080ccd0  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080ccd0
//
// 0080ccd0  83ec08               sub esp, 8
// 0080ccd3  56                   push esi
// 0080ccd4  8bf1                 mov esi, ecx
// 0080ccd6  e825dbffff           call 0x80a800
// 0080ccdb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0080ccdf  8d4c2404             lea ecx, [esp + 4]
// 0080cce3  51                   push ecx
// 0080cce4  8bce                 mov ecx, esi
// 0080cce6  894604               mov dword ptr [esi + 4], eax
// 0080cce9  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0080ccf0  e81bf5ffff           call 0x80c210
// 0080ccf5  8b10                 mov edx, dword ptr [eax]
// 0080ccf7  895618               mov dword ptr [esi + 0x18], edx
// 0080ccfa  8b4004               mov eax, dword ptr [eax + 4]
// 0080ccfd  89461c               mov dword ptr [esi + 0x1c], eax
// 0080cd00  8bc6                 mov eax, esi
// 0080cd02  5e                   pop esi
// 0080cd03  83c408               add esp, 8
// 0080cd06  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPImageManagerIconHandle@@QAE@PAUHBITMAP__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
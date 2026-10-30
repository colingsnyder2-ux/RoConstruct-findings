// roc 2009-12 0080cd10  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080cd10
//
// 0080cd10  83ec08               sub esp, 8
// 0080cd13  56                   push esi
// 0080cd14  8bf1                 mov esi, ecx
// 0080cd16  e8a5f4ffff           call 0x80c1c0
// 0080cd1b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0080cd1f  6a00                 push 0
// 0080cd21  50                   push eax
// 0080cd22  e8f9dcffff           call 0x80aa20
// 0080cd27  83c408               add esp, 8
// 0080cd2a  8d4c2404             lea ecx, [esp + 4]
// 0080cd2e  51                   push ecx
// 0080cd2f  8bce                 mov ecx, esi
// 0080cd31  894604               mov dword ptr [esi + 4], eax
// 0080cd34  e8d7f4ffff           call 0x80c210
// 0080cd39  8b10                 mov edx, dword ptr [eax]
// 0080cd3b  895618               mov dword ptr [esi + 0x18], edx
// 0080cd3e  8b4004               mov eax, dword ptr [eax + 4]
// 0080cd41  89461c               mov dword ptr [esi + 0x1c], eax
// 0080cd44  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 0080cd4b  5e                   pop esi
// 0080cd4c  83c408               add esp, 8
// 0080cd4f  c20400               ret 4
// copied from an identical function in another client (function ?CopyHandle@CXTPImageManagerIconHandle@@QAEXPAUHBITMAP__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
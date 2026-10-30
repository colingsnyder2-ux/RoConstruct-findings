// roc 2009-12 0080cd60  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080cd60
//
// 0080cd60  83ec08               sub esp, 8
// 0080cd63  56                   push esi
// 0080cd64  8bf1                 mov esi, ecx
// 0080cd66  e855f4ffff           call 0x80c1c0
// 0080cd6b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0080cd6f  8d4c2404             lea ecx, [esp + 4]
// 0080cd73  51                   push ecx
// 0080cd74  8bce                 mov ecx, esi
// 0080cd76  8906                 mov dword ptr [esi], eax
// 0080cd78  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 0080cd7f  e88cf4ffff           call 0x80c210
// 0080cd84  8b10                 mov edx, dword ptr [eax]
// 0080cd86  895618               mov dword ptr [esi + 0x18], edx
// 0080cd89  8b4004               mov eax, dword ptr [eax + 4]
// 0080cd8c  89461c               mov dword ptr [esi + 0x1c], eax
// 0080cd8f  8bc6                 mov eax, esi
// 0080cd91  5e                   pop esi
// 0080cd92  83c408               add esp, 8
// 0080cd95  c20400               ret 4
// copied from an identical function in another client (function ??4CXTPImageManagerIconHandle@@QAEABV0@QAUHICON__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
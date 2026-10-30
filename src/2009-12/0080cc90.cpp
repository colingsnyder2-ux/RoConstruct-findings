// roc 2009-12 0080cc90  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080cc90
//
// 0080cc90  83ec08               sub esp, 8
// 0080cc93  56                   push esi
// 0080cc94  8bf1                 mov esi, ecx
// 0080cc96  e865dbffff           call 0x80a800
// 0080cc9b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0080cc9f  8d4c2404             lea ecx, [esp + 4]
// 0080cca3  51                   push ecx
// 0080cca4  8bce                 mov ecx, esi
// 0080cca6  8906                 mov dword ptr [esi], eax
// 0080cca8  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0080ccaf  e85cf5ffff           call 0x80c210
// 0080ccb4  8b10                 mov edx, dword ptr [eax]
// 0080ccb6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080ccba  895618               mov dword ptr [esi + 0x18], edx
// 0080ccbd  8b4004               mov eax, dword ptr [eax + 4]
// 0080ccc0  89461c               mov dword ptr [esi + 0x1c], eax
// 0080ccc3  894e20               mov dword ptr [esi + 0x20], ecx
// 0080ccc6  8bc6                 mov eax, esi
// 0080ccc8  5e                   pop esi
// 0080ccc9  83c408               add esp, 8
// 0080cccc  c20800               ret 8
// copied from an identical function in another client (function ??0CXTPImageManagerIconHandle@@QAE@PAUHICON__@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
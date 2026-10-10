// roc 2008-06 00742c90  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00742c90
//
// 00742c90  56                   push esi
// 00742c91  8bf1                 mov esi, ecx
// 00742c93  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00742c96  e82585f6ff           call 0x6ab1c0
// 00742c9b  85c0                 test eax, eax
// 00742c9d  7448                 je 0x742ce7
// 00742c9f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00742ca2  8d44240c             lea eax, [esp + 0xc]
// 00742ca6  50                   push eax
// 00742ca7  51                   push ecx
// 00742ca8  ff15802d8000         call dword ptr [0x802d80]
// 00742cae  8b4660               mov eax, dword ptr [esi + 0x60]
// 00742cb1  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 00742cb7  8d54240c             lea edx, [esp + 0xc]
// 00742cbb  52                   push edx
// 00742cbc  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00742cbf  52                   push edx
// 00742cc0  ff15a02d8000         call dword ptr [0x802da0]
// 00742cc6  8b442410             mov eax, dword ptr [esp + 0x10]
// 00742cca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00742cce  8b542408             mov edx, dword ptr [esp + 8]
// 00742cd2  50                   push eax
// 00742cd3  8b4660               mov eax, dword ptr [esi + 0x60]
// 00742cd6  51                   push ecx
// 00742cd7  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 00742cdd  52                   push edx
// 00742cde  e81d50f7ff           call 0x6b7d00
// 00742ce3  5e                   pop esi
// 00742ce4  c20c00               ret 0xc
// 00742ce7  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00742cea  8b11                 mov edx, dword ptr [ecx]
// 00742cec  8b4270               mov eax, dword ptr [edx + 0x70]
// 00742cef  6a01                 push 1
// 00742cf1  ffd0                 call eax
// 00742cf3  8b442410             mov eax, dword ptr [esp + 0x10]
// 00742cf7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00742cfb  8b16                 mov edx, dword ptr [esi]
// 00742cfd  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 00742d03  50                   push eax
// 00742d04  8b4660               mov eax, dword ptr [esi + 0x60]
// 00742d07  51                   push ecx
// 00742d08  50                   push eax
// 00742d09  8bce                 mov ecx, esi
// 00742d0b  ffd2                 call edx
// 00742d0d  85c0                 test eax, eax
// 00742d0f  7507                 jne 0x742d18
// 00742d11  8bce                 mov ecx, esi
// 00742d13  e850dff5ff           call 0x6a0c68
// 00742d18  5e                   pop esi
// 00742d19  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlEdit.cpp (function ?OnRButtonDown@CXTPControlEditCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlEdit.cpp

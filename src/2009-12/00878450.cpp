// roc 2009-12 00878450  unit: CXTPControlGallery  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00878450
//
// 00878450  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 00878456  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 0087845c  83ec10               sub esp, 0x10
// 0087845f  56                   push esi
// 00878460  8b742418             mov esi, dword ptr [esp + 0x18]
// 00878464  8906                 mov dword ptr [esi], eax
// 00878466  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 0087846c  895604               mov dword ptr [esi + 4], edx
// 0087846f  8b91cc000000         mov edx, dword ptr [ecx + 0xcc]
// 00878475  894608               mov dword ptr [esi + 8], eax
// 00878478  8b01                 mov eax, dword ptr [ecx]
// 0087847a  8b8050010000         mov eax, dword ptr [eax + 0x150]
// 00878480  89560c               mov dword ptr [esi + 0xc], edx
// 00878483  8d542404             lea edx, [esp + 4]
// 00878487  52                   push edx
// 00878488  ffd0                 call eax
// 0087848a  8b08                 mov ecx, dword ptr [eax]
// 0087848c  8b5004               mov edx, dword ptr [eax + 4]
// 0087848f  010e                 add dword ptr [esi], ecx
// 00878491  015604               add dword ptr [esi + 4], edx
// 00878494  8b4808               mov ecx, dword ptr [eax + 8]
// 00878497  8b500c               mov edx, dword ptr [eax + 0xc]
// 0087849a  294e08               sub dword ptr [esi + 8], ecx
// 0087849d  29560c               sub dword ptr [esi + 0xc], edx
// 008784a0  8bc6                 mov eax, esi
// 008784a2  5e                   pop esi
// 008784a3  83c410               add esp, 0x10
// 008784a6  c20400               ret 4
// copied from an identical function in another client (function ?GetItemsRect@CXTPControlGallery@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlGallery.cpp
// from server: 100% by auto
// roc 2012-06 00a47310  unit: IIPAVCRgn::?$CMap  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a47310
//
// 00a47310  56                   push esi
// 00a47311  8bf1                 mov esi, ecx
// 00a47313  837e1000             cmp dword ptr [esi + 0x10], 0
// 00a47317  7537                 jne 0xa47350
// 00a47319  8b4618               mov eax, dword ptr [esi + 0x18]
// 00a4731c  6a0c                 push 0xc
// 00a4731e  50                   push eax
// 00a4731f  8d4e14               lea ecx, [esi + 0x14]
// 00a47322  51                   push ecx
// 00a47323  e84ab9f3ff           call 0x982c72
// 00a47328  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00a4732b  83c004               add eax, 4
// 00a4732e  8d1449               lea edx, [ecx + ecx*2]
// 00a47331  83c1ff               add ecx, -1
// 00a47334  8d4490f4             lea eax, [eax + edx*4 - 0xc]
// 00a47338  7816                 js 0xa47350
// 00a4733a  8d9b00000000         lea ebx, [ebx]
// 00a47340  8b5610               mov edx, dword ptr [esi + 0x10]
// 00a47343  8910                 mov dword ptr [eax], edx
// 00a47345  894610               mov dword ptr [esi + 0x10], eax
// 00a47348  49                   dec ecx
// 00a47349  83e80c               sub eax, 0xc
// 00a4734c  85c9                 test ecx, ecx
// 00a4734e  7df0                 jge 0xa47340
// 00a47350  8b4610               mov eax, dword ptr [esi + 0x10]
// 00a47353  85c0                 test eax, eax
// 00a47355  7505                 jne 0xa4735c
// 00a47357  e864b0f3ff           call 0x9823c0
// 00a4735c  8b08                 mov ecx, dword ptr [eax]
// 00a4735e  8b542408             mov edx, dword ptr [esp + 8]
// 00a47362  894e10               mov dword ptr [esi + 0x10], ecx
// 00a47365  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a47369  895004               mov dword ptr [eax + 4], edx
// 00a4736c  8908                 mov dword ptr [eax], ecx
// 00a4736e  ff460c               inc dword ptr [esi + 0xc]
// 00a47371  5e                   pop esi
// 00a47372  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarPaintManager.cpp (function ?NewNode@?$CList@PAVCXTPCalendarViewPart@@PAV1@@@IAEPAUCNode@1@PAU21@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarPaintManager.cpp

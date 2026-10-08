// roc 2011-06 0087bf30  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087bf30
//
// 0087bf30  56                   push esi
// 0087bf31  8bf1                 mov esi, ecx
// 0087bf33  e8d8620700           call 0x8f2210
// 0087bf38  83780800             cmp dword ptr [eax + 8], 0
// 0087bf3c  b804000000           mov eax, 4
// 0087bf41  898694000000         mov dword ptr [esi + 0x94], eax
// 0087bf47  898698000000         mov dword ptr [esi + 0x98], eax
// 0087bf4d  b806000000           mov eax, 6
// 0087bf52  7505                 jne 0x87bf59
// 0087bf54  b80a000000           mov eax, 0xa
// 0087bf59  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 0087bf5f  89869c000000         mov dword ptr [esi + 0x9c], eax
// 0087bf65  8b442408             mov eax, dword ptr [esp + 8]
// 0087bf69  8b08                 mov ecx, dword ptr [eax]
// 0087bf6b  898e6c010000         mov dword ptr [esi + 0x16c], ecx
// 0087bf71  8b5004               mov edx, dword ptr [eax + 4]
// 0087bf74  899670010000         mov dword ptr [esi + 0x170], edx
// 0087bf7a  8b4808               mov ecx, dword ptr [eax + 8]
// 0087bf7d  898e74010000         mov dword ptr [esi + 0x174], ecx
// 0087bf83  8b500c               mov edx, dword ptr [eax + 0xc]
// 0087bf86  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087bf8a  51                   push ecx
// 0087bf8b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087bf8f  899678010000         mov dword ptr [esi + 0x178], edx
// 0087bf95  8b542418             mov edx, dword ptr [esp + 0x18]
// 0087bf99  52                   push edx
// 0087bf9a  8b542414             mov edx, dword ptr [esp + 0x14]
// 0087bf9e  81c900000080         or ecx, 0x80000000
// 0087bfa4  51                   push ecx
// 0087bfa5  52                   push edx
// 0087bfa6  8b10                 mov edx, dword ptr [eax]
// 0087bfa8  83ec10               sub esp, 0x10
// 0087bfab  8bcc                 mov ecx, esp
// 0087bfad  8911                 mov dword ptr [ecx], edx
// 0087bfaf  8b5004               mov edx, dword ptr [eax + 4]
// 0087bfb2  895104               mov dword ptr [ecx + 4], edx
// 0087bfb5  8b5008               mov edx, dword ptr [eax + 8]
// 0087bfb8  8b400c               mov eax, dword ptr [eax + 0xc]
// 0087bfbb  895108               mov dword ptr [ecx + 8], edx
// 0087bfbe  89410c               mov dword ptr [ecx + 0xc], eax
// 0087bfc1  8bce                 mov ecx, esi
// 0087bfc3  e8c8330700           call 0x8ef390
// 0087bfc8  5e                   pop esi
// 0087bfc9  c21400               ret 0x14
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?Create@CXTColorPopup@@UAEHAAVCRect@@PAVCWnd@@KKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp

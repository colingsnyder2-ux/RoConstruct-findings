// roc 2009-12 0086a7b0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086a7b0
//
// 0086a7b0  56                   push esi
// 0086a7b1  8bf1                 mov esi, ecx
// 0086a7b3  e8b8700700           call 0x8e1870
// 0086a7b8  83780800             cmp dword ptr [eax + 8], 0
// 0086a7bc  b804000000           mov eax, 4
// 0086a7c1  898694000000         mov dword ptr [esi + 0x94], eax
// 0086a7c7  898698000000         mov dword ptr [esi + 0x98], eax
// 0086a7cd  b806000000           mov eax, 6
// 0086a7d2  7505                 jne 0x86a7d9
// 0086a7d4  b80a000000           mov eax, 0xa
// 0086a7d9  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 0086a7df  89869c000000         mov dword ptr [esi + 0x9c], eax
// 0086a7e5  8b442408             mov eax, dword ptr [esp + 8]
// 0086a7e9  8b08                 mov ecx, dword ptr [eax]
// 0086a7eb  898e6c010000         mov dword ptr [esi + 0x16c], ecx
// 0086a7f1  8b5004               mov edx, dword ptr [eax + 4]
// 0086a7f4  899670010000         mov dword ptr [esi + 0x170], edx
// 0086a7fa  8b4808               mov ecx, dword ptr [eax + 8]
// 0086a7fd  898e74010000         mov dword ptr [esi + 0x174], ecx
// 0086a803  8b500c               mov edx, dword ptr [eax + 0xc]
// 0086a806  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0086a80a  51                   push ecx
// 0086a80b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0086a80f  899678010000         mov dword ptr [esi + 0x178], edx
// 0086a815  8b542418             mov edx, dword ptr [esp + 0x18]
// 0086a819  52                   push edx
// 0086a81a  8b542414             mov edx, dword ptr [esp + 0x14]
// 0086a81e  81c900000080         or ecx, 0x80000000
// 0086a824  51                   push ecx
// 0086a825  52                   push edx
// 0086a826  8b10                 mov edx, dword ptr [eax]
// 0086a828  83ec10               sub esp, 0x10
// 0086a82b  8bcc                 mov ecx, esp
// 0086a82d  8911                 mov dword ptr [ecx], edx
// 0086a82f  8b5004               mov edx, dword ptr [eax + 4]
// 0086a832  895104               mov dword ptr [ecx + 4], edx
// 0086a835  8b5008               mov edx, dword ptr [eax + 8]
// 0086a838  8b400c               mov eax, dword ptr [eax + 0xc]
// 0086a83b  895108               mov dword ptr [ecx + 8], edx
// 0086a83e  89410c               mov dword ptr [ecx + 0xc], eax
// 0086a841  8bce                 mov ecx, esi
// 0086a843  e8687d0700           call 0x8e25b0
// 0086a848  5e                   pop esi
// 0086a849  c21400               ret 0x14
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?Create@CXTColorPopup@@UAEHAAVCRect@@PAVCWnd@@KKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp

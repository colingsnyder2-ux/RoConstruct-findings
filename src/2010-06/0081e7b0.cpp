// roc 2010-06 0081e7b0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081e7b0
//
// 0081e7b0  56                   push esi
// 0081e7b1  8bf1                 mov esi, ecx
// 0081e7b3  e8a8260000           call 0x820e60
// 0081e7b8  83780800             cmp dword ptr [eax + 8], 0
// 0081e7bc  b804000000           mov eax, 4
// 0081e7c1  898694000000         mov dword ptr [esi + 0x94], eax
// 0081e7c7  898698000000         mov dword ptr [esi + 0x98], eax
// 0081e7cd  b806000000           mov eax, 6
// 0081e7d2  7505                 jne 0x81e7d9
// 0081e7d4  b80a000000           mov eax, 0xa
// 0081e7d9  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 0081e7df  89869c000000         mov dword ptr [esi + 0x9c], eax
// 0081e7e5  8b442408             mov eax, dword ptr [esp + 8]
// 0081e7e9  8b08                 mov ecx, dword ptr [eax]
// 0081e7eb  898e6c010000         mov dword ptr [esi + 0x16c], ecx
// 0081e7f1  8b5004               mov edx, dword ptr [eax + 4]
// 0081e7f4  899670010000         mov dword ptr [esi + 0x170], edx
// 0081e7fa  8b4808               mov ecx, dword ptr [eax + 8]
// 0081e7fd  898e74010000         mov dword ptr [esi + 0x174], ecx
// 0081e803  8b500c               mov edx, dword ptr [eax + 0xc]
// 0081e806  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081e80a  51                   push ecx
// 0081e80b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081e80f  899678010000         mov dword ptr [esi + 0x178], edx
// 0081e815  8b542418             mov edx, dword ptr [esp + 0x18]
// 0081e819  52                   push edx
// 0081e81a  8b542414             mov edx, dword ptr [esp + 0x14]
// 0081e81e  81c900000080         or ecx, 0x80000000
// 0081e824  51                   push ecx
// 0081e825  52                   push edx
// 0081e826  8b10                 mov edx, dword ptr [eax]
// 0081e828  83ec10               sub esp, 0x10
// 0081e82b  8bcc                 mov ecx, esp
// 0081e82d  8911                 mov dword ptr [ecx], edx
// 0081e82f  8b5004               mov edx, dword ptr [eax + 4]
// 0081e832  895104               mov dword ptr [ecx + 4], edx
// 0081e835  8b5008               mov edx, dword ptr [eax + 8]
// 0081e838  8b400c               mov eax, dword ptr [eax + 0xc]
// 0081e83b  895108               mov dword ptr [ecx + 8], edx
// 0081e83e  89410c               mov dword ptr [ecx + 0xc], eax
// 0081e841  8bce                 mov ecx, esi
// 0081e843  e878800700           call 0x8968c0
// 0081e848  5e                   pop esi
// 0081e849  c21400               ret 0x14
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?Create@CXTColorPopup@@UAEHAAVCRect@@PAVCWnd@@KKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp

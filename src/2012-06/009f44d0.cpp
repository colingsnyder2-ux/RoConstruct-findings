// roc 2012-06 009f44d0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f44d0
//
// 009f44d0  56                   push esi
// 009f44d1  8bf1                 mov esi, ecx
// 009f44d3  e8c8250700           call 0xa66aa0
// 009f44d8  83780800             cmp dword ptr [eax + 8], 0
// 009f44dc  b804000000           mov eax, 4
// 009f44e1  898694000000         mov dword ptr [esi + 0x94], eax
// 009f44e7  898698000000         mov dword ptr [esi + 0x98], eax
// 009f44ed  b806000000           mov eax, 6
// 009f44f2  7505                 jne 0x9f44f9
// 009f44f4  b80a000000           mov eax, 0xa
// 009f44f9  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 009f44ff  89869c000000         mov dword ptr [esi + 0x9c], eax
// 009f4505  8b442408             mov eax, dword ptr [esp + 8]
// 009f4509  8b08                 mov ecx, dword ptr [eax]
// 009f450b  898e6c010000         mov dword ptr [esi + 0x16c], ecx
// 009f4511  8b5004               mov edx, dword ptr [eax + 4]
// 009f4514  899670010000         mov dword ptr [esi + 0x170], edx
// 009f451a  8b4808               mov ecx, dword ptr [eax + 8]
// 009f451d  898e74010000         mov dword ptr [esi + 0x174], ecx
// 009f4523  8b500c               mov edx, dword ptr [eax + 0xc]
// 009f4526  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009f452a  51                   push ecx
// 009f452b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009f452f  899678010000         mov dword ptr [esi + 0x178], edx
// 009f4535  8b542418             mov edx, dword ptr [esp + 0x18]
// 009f4539  52                   push edx
// 009f453a  8b542414             mov edx, dword ptr [esp + 0x14]
// 009f453e  81c900000080         or ecx, 0x80000000
// 009f4544  51                   push ecx
// 009f4545  52                   push edx
// 009f4546  8b10                 mov edx, dword ptr [eax]
// 009f4548  83ec10               sub esp, 0x10
// 009f454b  8bcc                 mov ecx, esp
// 009f454d  8911                 mov dword ptr [ecx], edx
// 009f454f  8b5004               mov edx, dword ptr [eax + 4]
// 009f4552  895104               mov dword ptr [ecx + 4], edx
// 009f4555  8b5008               mov edx, dword ptr [eax + 8]
// 009f4558  8b400c               mov eax, dword ptr [eax + 0xc]
// 009f455b  895108               mov dword ptr [ecx + 8], edx
// 009f455e  89410c               mov dword ptr [ecx + 0xc], eax
// 009f4561  8bce                 mov ecx, esi
// 009f4563  e818320700           call 0xa67780
// 009f4568  5e                   pop esi
// 009f4569  c21400               ret 0x14
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?Create@CXTColorPopup@@UAEHAAVCRect@@PAVCWnd@@KKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp

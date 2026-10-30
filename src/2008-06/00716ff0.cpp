// from server: 100% by auto
// roc 2008-06 00716ff0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00716ff0
//
// 00716ff0  56                   push esi
// 00716ff1  8bf1                 mov esi, ecx
// 00716ff3  e8e8760700           call 0x78e6e0
// 00716ff8  83780800             cmp dword ptr [eax + 8], 0
// 00716ffc  b804000000           mov eax, 4
// 00717001  898694000000         mov dword ptr [esi + 0x94], eax
// 00717007  898698000000         mov dword ptr [esi + 0x98], eax
// 0071700d  b806000000           mov eax, 6
// 00717012  7505                 jne 0x717019
// 00717014  b80a000000           mov eax, 0xa
// 00717019  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 0071701f  89869c000000         mov dword ptr [esi + 0x9c], eax
// 00717025  8b442408             mov eax, dword ptr [esp + 8]
// 00717029  8b08                 mov ecx, dword ptr [eax]
// 0071702b  898e6c010000         mov dword ptr [esi + 0x16c], ecx
// 00717031  8b5004               mov edx, dword ptr [eax + 4]
// 00717034  899670010000         mov dword ptr [esi + 0x170], edx
// 0071703a  8b4808               mov ecx, dword ptr [eax + 8]
// 0071703d  898e74010000         mov dword ptr [esi + 0x174], ecx
// 00717043  8b500c               mov edx, dword ptr [eax + 0xc]
// 00717046  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0071704a  51                   push ecx
// 0071704b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0071704f  899678010000         mov dword ptr [esi + 0x178], edx
// 00717055  8b542418             mov edx, dword ptr [esp + 0x18]
// 00717059  52                   push edx
// 0071705a  8b542414             mov edx, dword ptr [esp + 0x14]
// 0071705e  81c900000080         or ecx, 0x80000000
// 00717064  51                   push ecx
// 00717065  52                   push edx
// 00717066  8b10                 mov edx, dword ptr [eax]
// 00717068  83ec10               sub esp, 0x10
// 0071706b  8bcc                 mov ecx, esp
// 0071706d  8911                 mov dword ptr [ecx], edx
// 0071706f  8b5004               mov edx, dword ptr [eax + 4]
// 00717072  895104               mov dword ptr [ecx + 4], edx
// 00717075  8b5008               mov edx, dword ptr [eax + 8]
// 00717078  8b400c               mov eax, dword ptr [eax + 0xc]
// 0071707b  895108               mov dword ptr [ecx + 8], edx
// 0071707e  89410c               mov dword ptr [ecx + 0xc], eax
// 00717081  8bce                 mov ecx, esi
// 00717083  e8e8830700           call 0x78f470
// 00717088  5e                   pop esi
// 00717089  c21400               ret 0x14
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?Create@CXTColorPopup@@UAEHAAVCRect@@PAVCWnd@@KKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp

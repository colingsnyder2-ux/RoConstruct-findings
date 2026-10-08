// roc 2009-06 0078f790  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078f790
//
// 0078f790  56                   push esi
// 0078f791  8bf1                 mov esi, ecx
// 0078f793  e8d8190000           call 0x791170
// 0078f798  83780800             cmp dword ptr [eax + 8], 0
// 0078f79c  b804000000           mov eax, 4
// 0078f7a1  898694000000         mov dword ptr [esi + 0x94], eax
// 0078f7a7  898698000000         mov dword ptr [esi + 0x98], eax
// 0078f7ad  b806000000           mov eax, 6
// 0078f7b2  7505                 jne 0x78f7b9
// 0078f7b4  b80a000000           mov eax, 0xa
// 0078f7b9  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 0078f7bf  89869c000000         mov dword ptr [esi + 0x9c], eax
// 0078f7c5  8b442408             mov eax, dword ptr [esp + 8]
// 0078f7c9  8b08                 mov ecx, dword ptr [eax]
// 0078f7cb  898e6c010000         mov dword ptr [esi + 0x16c], ecx
// 0078f7d1  8b5004               mov edx, dword ptr [eax + 4]
// 0078f7d4  899670010000         mov dword ptr [esi + 0x170], edx
// 0078f7da  8b4808               mov ecx, dword ptr [eax + 8]
// 0078f7dd  898e74010000         mov dword ptr [esi + 0x174], ecx
// 0078f7e3  8b500c               mov edx, dword ptr [eax + 0xc]
// 0078f7e6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0078f7ea  51                   push ecx
// 0078f7eb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0078f7ef  899678010000         mov dword ptr [esi + 0x178], edx
// 0078f7f5  8b542418             mov edx, dword ptr [esp + 0x18]
// 0078f7f9  52                   push edx
// 0078f7fa  8b542414             mov edx, dword ptr [esp + 0x14]
// 0078f7fe  81c900000080         or ecx, 0x80000000
// 0078f804  51                   push ecx
// 0078f805  52                   push edx
// 0078f806  8b10                 mov edx, dword ptr [eax]
// 0078f808  83ec10               sub esp, 0x10
// 0078f80b  8bcc                 mov ecx, esp
// 0078f80d  8911                 mov dword ptr [ecx], edx
// 0078f80f  8b5004               mov edx, dword ptr [eax + 4]
// 0078f812  895104               mov dword ptr [ecx + 4], edx
// 0078f815  8b5008               mov edx, dword ptr [eax + 8]
// 0078f818  8b400c               mov eax, dword ptr [eax + 0xc]
// 0078f81b  895108               mov dword ptr [ecx + 8], edx
// 0078f81e  89410c               mov dword ptr [ecx + 0xc], eax
// 0078f821  8bce                 mov ecx, esi
// 0078f823  e888820700           call 0x807ab0
// 0078f828  5e                   pop esi
// 0078f829  c21400               ret 0x14
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?Create@CXTColorPopup@@UAEHAAVCRect@@PAVCWnd@@KKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp

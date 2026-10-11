// roc 2009-12 00676df0  unit: RBX::GlobalSettings  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00676df0
//
// 00676df0  83790402             cmp dword ptr [ecx + 4], 2
// 00676df4  7513                 jne 0x676e09
// 00676df6  8b4108               mov eax, dword ptr [ecx + 8]
// 00676df9  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00676dfd  50                   push eax
// 00676dfe  ff159cb69800         call dword ptr [0x98b69c]
// 00676e04  b001                 mov al, 1
// 00676e06  c20400               ret 4
// 00676e09  32c0                 xor al, al
// 00676e0b  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

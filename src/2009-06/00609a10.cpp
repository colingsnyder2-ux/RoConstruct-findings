// roc 2009-06 00609a10  unit: RBX::GlobalSettings  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00609a10
//
// 00609a10  83790402             cmp dword ptr [ecx + 4], 2
// 00609a14  7513                 jne 0x609a29
// 00609a16  8b4108               mov eax, dword ptr [ecx + 8]
// 00609a19  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00609a1d  50                   push eax
// 00609a1e  ff1564e48900         call dword ptr [0x89e464]
// 00609a24  b001                 mov al, 1
// 00609a26  c20400               ret 4
// 00609a29  32c0                 xor al, al
// 00609a2b  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp

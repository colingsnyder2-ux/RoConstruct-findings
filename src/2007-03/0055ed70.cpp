// roc 2007-03 0055ed70  unit: seg_00550000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055ed70
//
// 0055ed70  83790402             cmp dword ptr [ecx + 4], 2
// 0055ed74  7513                 jne 0x55ed89
// 0055ed76  8b4108               mov eax, dword ptr [ecx + 8]
// 0055ed79  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055ed7d  50                   push eax
// 0055ed7e  ff154ce77700         call dword ptr [0x77e74c]
// 0055ed84  b001                 mov al, 1
// 0055ed86  c20400               ret 4
// 0055ed89  32c0                 xor al, al
// 0055ed8b  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp

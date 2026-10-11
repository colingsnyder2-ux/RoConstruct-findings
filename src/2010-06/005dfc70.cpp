// roc 2010-06 005dfc70  unit: RBX::GlobalSettings  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005dfc70
//
// 005dfc70  83790402             cmp dword ptr [ecx + 4], 2
// 005dfc74  7513                 jne 0x5dfc89
// 005dfc76  8b4108               mov eax, dword ptr [ecx + 8]
// 005dfc79  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005dfc7d  50                   push eax
// 005dfc7e  ff1568a49e00         call dword ptr [0x9ea468]
// 005dfc84  b001                 mov al, 1
// 005dfc86  c20400               ret 4
// 005dfc89  32c0                 xor al, al
// 005dfc8b  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp

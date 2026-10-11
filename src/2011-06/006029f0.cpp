// roc 2011-06 006029f0  unit: RBX::UnifiedWidget  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006029f0
//
// 006029f0  83790402             cmp dword ptr [ecx + 4], 2
// 006029f4  7513                 jne 0x602a09
// 006029f6  8b4108               mov eax, dword ptr [ecx + 8]
// 006029f9  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006029fd  50                   push eax
// 006029fe  ff15a804a400         call dword ptr [0xa404a8]
// 00602a04  b001                 mov al, 1
// 00602a06  c20400               ret 4
// 00602a09  32c0                 xor al, al
// 00602a0b  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

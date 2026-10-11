// roc 2008-06 0057c210  unit: RBX::VInstance::?$SignalDesc  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057c210
//
// 0057c210  83790402             cmp dword ptr [ecx + 4], 2
// 0057c214  7513                 jne 0x57c229
// 0057c216  8b4108               mov eax, dword ptr [ecx + 8]
// 0057c219  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057c21d  50                   push eax
// 0057c21e  ff150c248000         call dword ptr [0x80240c]
// 0057c224  b001                 mov al, 1
// 0057c226  c20400               ret 4
// 0057c229  32c0                 xor al, al
// 0057c22b  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp

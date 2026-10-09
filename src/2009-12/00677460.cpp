// roc 2009-12 00677460  unit: RBX::GlobalSettings  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00677460
//
// 00677460  51                   push ecx
// 00677461  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00677464  85c0                 test eax, eax
// 00677466  7413                 je 0x67747b
// 00677468  8b0d3c0cb900         mov ecx, dword ptr [0xb90c3c]
// 0067746e  8bff                 mov edi, edi
// 00677470  394808               cmp dword ptr [eax + 8], ecx
// 00677473  740a                 je 0x67747f
// 00677475  8b00                 mov eax, dword ptr [eax]
// 00677477  85c0                 test eax, eax
// 00677479  75f5                 jne 0x677470
// 0067747b  33c0                 xor eax, eax
// 0067747d  59                   pop ecx
// 0067747e  c3                   ret 
// 0067747f  8d4c2403             lea ecx, [esp + 3]
// 00677483  51                   push ecx
// 00677484  8d4808               lea ecx, [eax + 8]
// 00677487  e884fdffff           call 0x677210
// 0067748c  84c0                 test al, al
// 0067748e  74eb                 je 0x67747b
// 00677490  807c240300           cmp byte ptr [esp + 3], 0
// 00677495  74e4                 je 0x67747b
// 00677497  b801000000           mov eax, 1
// 0067749c  59                   pop ecx
// 0067749d  c3                   ret 
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?isXsiNil@XmlElement@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

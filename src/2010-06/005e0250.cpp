// roc 2010-06 005e0250  unit: RBX::GlobalSettings  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e0250
//
// 005e0250  51                   push ecx
// 005e0251  8b4120               mov eax, dword ptr [ecx + 0x20]
// 005e0254  85c0                 test eax, eax
// 005e0256  7413                 je 0x5e026b
// 005e0258  8b0d7093c100         mov ecx, dword ptr [0xc19370]
// 005e025e  8bff                 mov edi, edi
// 005e0260  394808               cmp dword ptr [eax + 8], ecx
// 005e0263  740a                 je 0x5e026f
// 005e0265  8b00                 mov eax, dword ptr [eax]
// 005e0267  85c0                 test eax, eax
// 005e0269  75f5                 jne 0x5e0260
// 005e026b  33c0                 xor eax, eax
// 005e026d  59                   pop ecx
// 005e026e  c3                   ret 
// 005e026f  8d4c2403             lea ecx, [esp + 3]
// 005e0273  51                   push ecx
// 005e0274  8d4808               lea ecx, [eax + 8]
// 005e0277  e884fdffff           call 0x5e0000
// 005e027c  84c0                 test al, al
// 005e027e  74eb                 je 0x5e026b
// 005e0280  807c240300           cmp byte ptr [esp + 3], 0
// 005e0285  74e4                 je 0x5e026b
// 005e0287  b801000000           mov eax, 1
// 005e028c  59                   pop ecx
// 005e028d  c3                   ret 
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?isXsiNil@XmlElement@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

// roc 2009-06 00609ff0  unit: RBX::GlobalSettings  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00609ff0
//
// 00609ff0  51                   push ecx
// 00609ff1  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00609ff4  85c0                 test eax, eax
// 00609ff6  7413                 je 0x60a00b
// 00609ff8  8b0d98b0a400         mov ecx, dword ptr [0xa4b098]
// 00609ffe  8bff                 mov edi, edi
// 0060a000  394808               cmp dword ptr [eax + 8], ecx
// 0060a003  740a                 je 0x60a00f
// 0060a005  8b00                 mov eax, dword ptr [eax]
// 0060a007  85c0                 test eax, eax
// 0060a009  75f5                 jne 0x60a000
// 0060a00b  33c0                 xor eax, eax
// 0060a00d  59                   pop ecx
// 0060a00e  c3                   ret 
// 0060a00f  8d4c2403             lea ecx, [esp + 3]
// 0060a013  51                   push ecx
// 0060a014  8d4808               lea ecx, [eax + 8]
// 0060a017  e884fdffff           call 0x609da0
// 0060a01c  84c0                 test al, al
// 0060a01e  74eb                 je 0x60a00b
// 0060a020  807c240300           cmp byte ptr [esp + 3], 0
// 0060a025  74e4                 je 0x60a00b
// 0060a027  b801000000           mov eax, 1
// 0060a02c  59                   pop ecx
// 0060a02d  c3                   ret 
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?isXsiNil@XmlElement@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

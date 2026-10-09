// roc 2011-06 00602ff0  unit: RBX::UnifiedWidget  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00602ff0
//
// 00602ff0  51                   push ecx
// 00602ff1  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00602ff4  85c0                 test eax, eax
// 00602ff6  7413                 je 0x60300b
// 00602ff8  8b0d8cb7cc00         mov ecx, dword ptr [0xccb78c]
// 00602ffe  8bff                 mov edi, edi
// 00603000  394808               cmp dword ptr [eax + 8], ecx
// 00603003  740a                 je 0x60300f
// 00603005  8b00                 mov eax, dword ptr [eax]
// 00603007  85c0                 test eax, eax
// 00603009  75f5                 jne 0x603000
// 0060300b  33c0                 xor eax, eax
// 0060300d  59                   pop ecx
// 0060300e  c3                   ret 
// 0060300f  8d4c2403             lea ecx, [esp + 3]
// 00603013  51                   push ecx
// 00603014  8d4808               lea ecx, [eax + 8]
// 00603017  e874fdffff           call 0x602d90
// 0060301c  84c0                 test al, al
// 0060301e  74eb                 je 0x60300b
// 00603020  807c240300           cmp byte ptr [esp + 3], 0
// 00603025  74e4                 je 0x60300b
// 00603027  b801000000           mov eax, 1
// 0060302c  59                   pop ecx
// 0060302d  c3                   ret 
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?isXsiNil@XmlElement@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

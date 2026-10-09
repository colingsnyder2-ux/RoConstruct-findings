// roc 2012-06 006f1ee0  unit: RBX::DataModel  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006f1ee0
//
// 006f1ee0  51                   push ecx
// 006f1ee1  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006f1ee4  85c0                 test eax, eax
// 006f1ee6  7413                 je 0x6f1efb
// 006f1ee8  8b0da401e300         mov ecx, dword ptr [0xe301a4]
// 006f1eee  8bff                 mov edi, edi
// 006f1ef0  394808               cmp dword ptr [eax + 8], ecx
// 006f1ef3  740a                 je 0x6f1eff
// 006f1ef5  8b00                 mov eax, dword ptr [eax]
// 006f1ef7  85c0                 test eax, eax
// 006f1ef9  75f5                 jne 0x6f1ef0
// 006f1efb  33c0                 xor eax, eax
// 006f1efd  59                   pop ecx
// 006f1efe  c3                   ret 
// 006f1eff  8d4c2403             lea ecx, [esp + 3]
// 006f1f03  51                   push ecx
// 006f1f04  8d4808               lea ecx, [eax + 8]
// 006f1f07  e834fdffff           call 0x6f1c40
// 006f1f0c  84c0                 test al, al
// 006f1f0e  74eb                 je 0x6f1efb
// 006f1f10  807c240300           cmp byte ptr [esp + 3], 0
// 006f1f15  74e4                 je 0x6f1efb
// 006f1f17  b801000000           mov eax, 1
// 006f1f1c  59                   pop ecx
// 006f1f1d  c3                   ret 
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?isXsiNil@XmlElement@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

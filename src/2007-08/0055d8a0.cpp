// roc 2007-08 0055d8a0  unit: RBX::DataModel  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055d8a0
//
// 0055d8a0  51                   push ecx
// 0055d8a1  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0055d8a4  85c0                 test eax, eax
// 0055d8a6  7413                 je 0x55d8bb
// 0055d8a8  8b0dd4228c00         mov ecx, dword ptr [0x8c22d4]
// 0055d8ae  8bff                 mov edi, edi
// 0055d8b0  394804               cmp dword ptr [eax + 4], ecx
// 0055d8b3  740a                 je 0x55d8bf
// 0055d8b5  8b00                 mov eax, dword ptr [eax]
// 0055d8b7  85c0                 test eax, eax
// 0055d8b9  75f5                 jne 0x55d8b0
// 0055d8bb  33c0                 xor eax, eax
// 0055d8bd  59                   pop ecx
// 0055d8be  c3                   ret 
// 0055d8bf  8d4c2403             lea ecx, [esp + 3]
// 0055d8c3  51                   push ecx
// 0055d8c4  8d4804               lea ecx, [eax + 4]
// 0055d8c7  e8e4fdffff           call 0x55d6b0
// 0055d8cc  84c0                 test al, al
// 0055d8ce  74eb                 je 0x55d8bb
// 0055d8d0  807c240300           cmp byte ptr [esp + 3], 0
// 0055d8d5  74e4                 je 0x55d8bb
// 0055d8d7  b801000000           mov eax, 1
// 0055d8dc  59                   pop ecx
// 0055d8dd  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ?isXsiNil@XmlElement@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

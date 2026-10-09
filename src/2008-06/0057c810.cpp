// roc 2008-06 0057c810  unit: RBX::VInstance::?$SignalDesc  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057c810
//
// 0057c810  51                   push ecx
// 0057c811  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0057c814  85c0                 test eax, eax
// 0057c816  7413                 je 0x57c82b
// 0057c818  8b0d70539700         mov ecx, dword ptr [0x975370]
// 0057c81e  8bff                 mov edi, edi
// 0057c820  394808               cmp dword ptr [eax + 8], ecx
// 0057c823  740a                 je 0x57c82f
// 0057c825  8b00                 mov eax, dword ptr [eax]
// 0057c827  85c0                 test eax, eax
// 0057c829  75f5                 jne 0x57c820
// 0057c82b  33c0                 xor eax, eax
// 0057c82d  59                   pop ecx
// 0057c82e  c3                   ret 
// 0057c82f  8d4c2403             lea ecx, [esp + 3]
// 0057c833  51                   push ecx
// 0057c834  8d4808               lea ecx, [eax + 8]
// 0057c837  e874fdffff           call 0x57c5b0
// 0057c83c  84c0                 test al, al
// 0057c83e  74eb                 je 0x57c82b
// 0057c840  807c240300           cmp byte ptr [esp + 3], 0
// 0057c845  74e4                 je 0x57c82b
// 0057c847  b801000000           mov eax, 1
// 0057c84c  59                   pop ecx
// 0057c84d  c3                   ret 
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?isXsiNil@XmlElement@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp

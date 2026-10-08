// roc 2007-03 0055f180  unit: seg_00550000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055f180
//
// 0055f180  56                   push esi
// 0055f181  8bf1                 mov esi, ecx
// 0055f183  8b4604               mov eax, dword ptr [esi + 4]
// 0055f186  83f804               cmp eax, 4
// 0055f189  750f                 jne 0x55f19a
// 0055f18b  8a4608               mov al, byte ptr [esi + 8]
// 0055f18e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055f192  8801                 mov byte ptr [ecx], al
// 0055f194  b001                 mov al, 1
// 0055f196  5e                   pop esi
// 0055f197  c20400               ret 4
// 0055f19a  83f802               cmp eax, 2
// 0055f19d  57                   push edi
// 0055f19e  752f                 jne 0x55f1cf
// 0055f1a0  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0055f1a4  8b5608               mov edx, dword ptr [esi + 8]
// 0055f1a7  57                   push edi
// 0055f1a8  52                   push edx
// 0055f1a9  e892030200           call 0x57f540
// 0055f1ae  83c408               add esp, 8
// 0055f1b1  84c0                 test al, al
// 0055f1b3  741a                 je 0x55f1cf
// 0055f1b5  8bce                 mov ecx, esi
// 0055f1b7  e804fdffff           call 0x55eec0
// 0055f1bc  8a07                 mov al, byte ptr [edi]
// 0055f1be  884608               mov byte ptr [esi + 8], al
// 0055f1c1  5f                   pop edi
// 0055f1c2  c7460404000000       mov dword ptr [esi + 4], 4
// 0055f1c9  b001                 mov al, 1
// 0055f1cb  5e                   pop esi
// 0055f1cc  c20400               ret 4
// 0055f1cf  5f                   pop edi
// 0055f1d0  32c0                 xor al, al
// 0055f1d2  5e                   pop esi
// 0055f1d3  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAA_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

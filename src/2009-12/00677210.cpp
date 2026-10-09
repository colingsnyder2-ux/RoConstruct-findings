// roc 2009-12 00677210  unit: RBX::GlobalSettings  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00677210
//
// 00677210  56                   push esi
// 00677211  8bf1                 mov esi, ecx
// 00677213  8b4604               mov eax, dword ptr [esi + 4]
// 00677216  83f804               cmp eax, 4
// 00677219  750f                 jne 0x67722a
// 0067721b  8a4608               mov al, byte ptr [esi + 8]
// 0067721e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00677222  8801                 mov byte ptr [ecx], al
// 00677224  b001                 mov al, 1
// 00677226  5e                   pop esi
// 00677227  c20400               ret 4
// 0067722a  57                   push edi
// 0067722b  83f802               cmp eax, 2
// 0067722e  752f                 jne 0x67725f
// 00677230  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00677234  8b5608               mov edx, dword ptr [esi + 8]
// 00677237  57                   push edi
// 00677238  52                   push edx
// 00677239  e8824c0400           call 0x6bbec0
// 0067723e  83c408               add esp, 8
// 00677241  84c0                 test al, al
// 00677243  741a                 je 0x67725f
// 00677245  8bce                 mov ecx, esi
// 00677247  e8f4fcffff           call 0x676f40
// 0067724c  8a07                 mov al, byte ptr [edi]
// 0067724e  884608               mov byte ptr [esi + 8], al
// 00677251  5f                   pop edi
// 00677252  c7460404000000       mov dword ptr [esi + 4], 4
// 00677259  b001                 mov al, 1
// 0067725b  5e                   pop esi
// 0067725c  c20400               ret 4
// 0067725f  5f                   pop edi
// 00677260  32c0                 xor al, al
// 00677262  5e                   pop esi
// 00677263  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

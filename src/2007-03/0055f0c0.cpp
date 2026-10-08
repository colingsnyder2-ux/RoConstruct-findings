// roc 2007-03 0055f0c0  unit: seg_00550000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055f0c0
//
// 0055f0c0  56                   push esi
// 0055f0c1  8bf1                 mov esi, ecx
// 0055f0c3  8b4604               mov eax, dword ptr [esi + 4]
// 0055f0c6  83f805               cmp eax, 5
// 0055f0c9  750f                 jne 0x55f0da
// 0055f0cb  8b4608               mov eax, dword ptr [esi + 8]
// 0055f0ce  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055f0d2  8901                 mov dword ptr [ecx], eax
// 0055f0d4  b001                 mov al, 1
// 0055f0d6  5e                   pop esi
// 0055f0d7  c20400               ret 4
// 0055f0da  83f802               cmp eax, 2
// 0055f0dd  57                   push edi
// 0055f0de  752f                 jne 0x55f10f
// 0055f0e0  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0055f0e4  8b5608               mov edx, dword ptr [esi + 8]
// 0055f0e7  57                   push edi
// 0055f0e8  52                   push edx
// 0055f0e9  e8920a0200           call 0x57fb80
// 0055f0ee  83c408               add esp, 8
// 0055f0f1  84c0                 test al, al
// 0055f0f3  741a                 je 0x55f10f
// 0055f0f5  8bce                 mov ecx, esi
// 0055f0f7  e8c4fdffff           call 0x55eec0
// 0055f0fc  8b07                 mov eax, dword ptr [edi]
// 0055f0fe  894608               mov dword ptr [esi + 8], eax
// 0055f101  5f                   pop edi
// 0055f102  c7460405000000       mov dword ptr [esi + 4], 5
// 0055f109  b001                 mov al, 1
// 0055f10b  5e                   pop esi
// 0055f10c  c20400               ret 4
// 0055f10f  5f                   pop edi
// 0055f110  32c0                 xor al, al
// 0055f112  5e                   pop esi
// 0055f113  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

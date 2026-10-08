// roc 2007-03 0055f120  unit: seg_00550000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055f120
//
// 0055f120  56                   push esi
// 0055f121  8bf1                 mov esi, ecx
// 0055f123  8b4604               mov eax, dword ptr [esi + 4]
// 0055f126  83f806               cmp eax, 6
// 0055f129  750f                 jne 0x55f13a
// 0055f12b  8b4608               mov eax, dword ptr [esi + 8]
// 0055f12e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055f132  8901                 mov dword ptr [ecx], eax
// 0055f134  b001                 mov al, 1
// 0055f136  5e                   pop esi
// 0055f137  c20400               ret 4
// 0055f13a  83f802               cmp eax, 2
// 0055f13d  57                   push edi
// 0055f13e  752f                 jne 0x55f16f
// 0055f140  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0055f144  8b5608               mov edx, dword ptr [esi + 8]
// 0055f147  57                   push edi
// 0055f148  52                   push edx
// 0055f149  e8a20a0200           call 0x57fbf0
// 0055f14e  83c408               add esp, 8
// 0055f151  84c0                 test al, al
// 0055f153  741a                 je 0x55f16f
// 0055f155  8bce                 mov ecx, esi
// 0055f157  e864fdffff           call 0x55eec0
// 0055f15c  8b07                 mov eax, dword ptr [edi]
// 0055f15e  894608               mov dword ptr [esi + 8], eax
// 0055f161  5f                   pop edi
// 0055f162  c7460406000000       mov dword ptr [esi + 4], 6
// 0055f169  b001                 mov al, 1
// 0055f16b  5e                   pop esi
// 0055f16c  c20400               ret 4
// 0055f16f  5f                   pop edi
// 0055f170  32c0                 xor al, al
// 0055f172  5e                   pop esi
// 0055f173  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

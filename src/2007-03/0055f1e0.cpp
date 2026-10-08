// roc 2007-03 0055f1e0  unit: seg_00550000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055f1e0
//
// 0055f1e0  56                   push esi
// 0055f1e1  8bf1                 mov esi, ecx
// 0055f1e3  8b4604               mov eax, dword ptr [esi + 4]
// 0055f1e6  83f807               cmp eax, 7
// 0055f1e9  750f                 jne 0x55f1fa
// 0055f1eb  d94608               fld dword ptr [esi + 8]
// 0055f1ee  8b442408             mov eax, dword ptr [esp + 8]
// 0055f1f2  d918                 fstp dword ptr [eax]
// 0055f1f4  b001                 mov al, 1
// 0055f1f6  5e                   pop esi
// 0055f1f7  c20400               ret 4
// 0055f1fa  83f802               cmp eax, 2
// 0055f1fd  57                   push edi
// 0055f1fe  752f                 jne 0x55f22f
// 0055f200  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0055f204  8b4e08               mov ecx, dword ptr [esi + 8]
// 0055f207  57                   push edi
// 0055f208  51                   push ecx
// 0055f209  e8520a0200           call 0x57fc60
// 0055f20e  83c408               add esp, 8
// 0055f211  84c0                 test al, al
// 0055f213  741a                 je 0x55f22f
// 0055f215  8bce                 mov ecx, esi
// 0055f217  e8a4fcffff           call 0x55eec0
// 0055f21c  d907                 fld dword ptr [edi]
// 0055f21e  5f                   pop edi
// 0055f21f  d95e08               fstp dword ptr [esi + 8]
// 0055f222  c7460407000000       mov dword ptr [esi + 4], 7
// 0055f229  b001                 mov al, 1
// 0055f22b  5e                   pop esi
// 0055f22c  c20400               ret 4
// 0055f22f  5f                   pop edi
// 0055f230  32c0                 xor al, al
// 0055f232  5e                   pop esi
// 0055f233  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

// roc 2009-06 00609e00  unit: RBX::GlobalSettings  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00609e00
//
// 00609e00  56                   push esi
// 00609e01  8bf1                 mov esi, ecx
// 00609e03  8b4604               mov eax, dword ptr [esi + 4]
// 00609e06  83f807               cmp eax, 7
// 00609e09  750f                 jne 0x609e1a
// 00609e0b  d94608               fld dword ptr [esi + 8]
// 00609e0e  8b442408             mov eax, dword ptr [esp + 8]
// 00609e12  d918                 fstp dword ptr [eax]
// 00609e14  b001                 mov al, 1
// 00609e16  5e                   pop esi
// 00609e17  c20400               ret 4
// 00609e1a  57                   push edi
// 00609e1b  83f802               cmp eax, 2
// 00609e1e  752f                 jne 0x609e4f
// 00609e20  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00609e24  8b4e08               mov ecx, dword ptr [esi + 8]
// 00609e27  57                   push edi
// 00609e28  51                   push ecx
// 00609e29  e8b2170400           call 0x64b5e0
// 00609e2e  83c408               add esp, 8
// 00609e31  84c0                 test al, al
// 00609e33  741a                 je 0x609e4f
// 00609e35  8bce                 mov ecx, esi
// 00609e37  e894fcffff           call 0x609ad0
// 00609e3c  d907                 fld dword ptr [edi]
// 00609e3e  5f                   pop edi
// 00609e3f  d95e08               fstp dword ptr [esi + 8]
// 00609e42  c7460407000000       mov dword ptr [esi + 4], 7
// 00609e49  b001                 mov al, 1
// 00609e4b  5e                   pop esi
// 00609e4c  c20400               ret 4
// 00609e4f  5f                   pop edi
// 00609e50  32c0                 xor al, al
// 00609e52  5e                   pop esi
// 00609e53  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

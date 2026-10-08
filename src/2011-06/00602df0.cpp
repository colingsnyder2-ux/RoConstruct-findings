// roc 2011-06 00602df0  unit: RBX::UnifiedWidget  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00602df0
//
// 00602df0  56                   push esi
// 00602df1  8bf1                 mov esi, ecx
// 00602df3  8b4604               mov eax, dword ptr [esi + 4]
// 00602df6  83f807               cmp eax, 7
// 00602df9  750f                 jne 0x602e0a
// 00602dfb  d94608               fld dword ptr [esi + 8]
// 00602dfe  8b442408             mov eax, dword ptr [esp + 8]
// 00602e02  d918                 fstp dword ptr [eax]
// 00602e04  b001                 mov al, 1
// 00602e06  5e                   pop esi
// 00602e07  c20400               ret 4
// 00602e0a  57                   push edi
// 00602e0b  83f802               cmp eax, 2
// 00602e0e  752f                 jne 0x602e3f
// 00602e10  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00602e14  8b4e08               mov ecx, dword ptr [esi + 8]
// 00602e17  57                   push edi
// 00602e18  51                   push ecx
// 00602e19  e8e2d50400           call 0x650400
// 00602e1e  83c408               add esp, 8
// 00602e21  84c0                 test al, al
// 00602e23  741a                 je 0x602e3f
// 00602e25  8bce                 mov ecx, esi
// 00602e27  e884fcffff           call 0x602ab0
// 00602e2c  d907                 fld dword ptr [edi]
// 00602e2e  5f                   pop edi
// 00602e2f  d95e08               fstp dword ptr [esi + 8]
// 00602e32  c7460407000000       mov dword ptr [esi + 4], 7
// 00602e39  b001                 mov al, 1
// 00602e3b  5e                   pop esi
// 00602e3c  c20400               ret 4
// 00602e3f  5f                   pop edi
// 00602e40  32c0                 xor al, al
// 00602e42  5e                   pop esi
// 00602e43  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

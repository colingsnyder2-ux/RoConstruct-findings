// roc 2010-06 005e0060  unit: RBX::GlobalSettings  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e0060
//
// 005e0060  56                   push esi
// 005e0061  8bf1                 mov esi, ecx
// 005e0063  8b4604               mov eax, dword ptr [esi + 4]
// 005e0066  83f807               cmp eax, 7
// 005e0069  750f                 jne 0x5e007a
// 005e006b  d94608               fld dword ptr [esi + 8]
// 005e006e  8b442408             mov eax, dword ptr [esp + 8]
// 005e0072  d918                 fstp dword ptr [eax]
// 005e0074  b001                 mov al, 1
// 005e0076  5e                   pop esi
// 005e0077  c20400               ret 4
// 005e007a  57                   push edi
// 005e007b  83f802               cmp eax, 2
// 005e007e  752f                 jne 0x5e00af
// 005e0080  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e0084  8b4e08               mov ecx, dword ptr [esi + 8]
// 005e0087  57                   push edi
// 005e0088  51                   push ecx
// 005e0089  e8329e0400           call 0x629ec0
// 005e008e  83c408               add esp, 8
// 005e0091  84c0                 test al, al
// 005e0093  741a                 je 0x5e00af
// 005e0095  8bce                 mov ecx, esi
// 005e0097  e894fcffff           call 0x5dfd30
// 005e009c  d907                 fld dword ptr [edi]
// 005e009e  5f                   pop edi
// 005e009f  d95e08               fstp dword ptr [esi + 8]
// 005e00a2  c7460407000000       mov dword ptr [esi + 4], 7
// 005e00a9  b001                 mov al, 1
// 005e00ab  5e                   pop esi
// 005e00ac  c20400               ret 4
// 005e00af  5f                   pop edi
// 005e00b0  32c0                 xor al, al
// 005e00b2  5e                   pop esi
// 005e00b3  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

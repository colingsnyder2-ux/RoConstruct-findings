// roc 2009-12 00677270  unit: RBX::GlobalSettings  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00677270
//
// 00677270  56                   push esi
// 00677271  8bf1                 mov esi, ecx
// 00677273  8b4604               mov eax, dword ptr [esi + 4]
// 00677276  83f807               cmp eax, 7
// 00677279  750f                 jne 0x67728a
// 0067727b  d94608               fld dword ptr [esi + 8]
// 0067727e  8b442408             mov eax, dword ptr [esp + 8]
// 00677282  d918                 fstp dword ptr [eax]
// 00677284  b001                 mov al, 1
// 00677286  5e                   pop esi
// 00677287  c20400               ret 4
// 0067728a  57                   push edi
// 0067728b  83f802               cmp eax, 2
// 0067728e  752f                 jne 0x6772bf
// 00677290  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00677294  8b4e08               mov ecx, dword ptr [esi + 8]
// 00677297  57                   push edi
// 00677298  51                   push ecx
// 00677299  e8524f0400           call 0x6bc1f0
// 0067729e  83c408               add esp, 8
// 006772a1  84c0                 test al, al
// 006772a3  741a                 je 0x6772bf
// 006772a5  8bce                 mov ecx, esi
// 006772a7  e894fcffff           call 0x676f40
// 006772ac  d907                 fld dword ptr [edi]
// 006772ae  5f                   pop edi
// 006772af  d95e08               fstp dword ptr [esi + 8]
// 006772b2  c7460407000000       mov dword ptr [esi + 4], 7
// 006772b9  b001                 mov al, 1
// 006772bb  5e                   pop esi
// 006772bc  c20400               ret 4
// 006772bf  5f                   pop edi
// 006772c0  32c0                 xor al, al
// 006772c2  5e                   pop esi
// 006772c3  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

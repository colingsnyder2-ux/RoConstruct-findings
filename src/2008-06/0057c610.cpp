// roc 2008-06 0057c610  unit: RBX::VInstance::?$SignalDesc  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057c610
//
// 0057c610  56                   push esi
// 0057c611  8bf1                 mov esi, ecx
// 0057c613  8b4604               mov eax, dword ptr [esi + 4]
// 0057c616  83f807               cmp eax, 7
// 0057c619  750f                 jne 0x57c62a
// 0057c61b  d94608               fld dword ptr [esi + 8]
// 0057c61e  8b442408             mov eax, dword ptr [esp + 8]
// 0057c622  d918                 fstp dword ptr [eax]
// 0057c624  b001                 mov al, 1
// 0057c626  5e                   pop esi
// 0057c627  c20400               ret 4
// 0057c62a  57                   push edi
// 0057c62b  83f802               cmp eax, 2
// 0057c62e  752f                 jne 0x57c65f
// 0057c630  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057c634  8b4e08               mov ecx, dword ptr [esi + 8]
// 0057c637  57                   push edi
// 0057c638  51                   push ecx
// 0057c639  e852210400           call 0x5be790
// 0057c63e  83c408               add esp, 8
// 0057c641  84c0                 test al, al
// 0057c643  741a                 je 0x57c65f
// 0057c645  8bce                 mov ecx, esi
// 0057c647  e884fcffff           call 0x57c2d0
// 0057c64c  d907                 fld dword ptr [edi]
// 0057c64e  5f                   pop edi
// 0057c64f  d95e08               fstp dword ptr [esi + 8]
// 0057c652  c7460407000000       mov dword ptr [esi + 4], 7
// 0057c659  b001                 mov al, 1
// 0057c65b  5e                   pop esi
// 0057c65c  c20400               ret 4
// 0057c65f  5f                   pop edi
// 0057c660  32c0                 xor al, al
// 0057c662  5e                   pop esi
// 0057c663  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

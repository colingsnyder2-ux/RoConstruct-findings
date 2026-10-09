// roc 2009-12 006771b0  unit: RBX::GlobalSettings  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006771b0
//
// 006771b0  56                   push esi
// 006771b1  8bf1                 mov esi, ecx
// 006771b3  8b4604               mov eax, dword ptr [esi + 4]
// 006771b6  83f806               cmp eax, 6
// 006771b9  750f                 jne 0x6771ca
// 006771bb  8b4608               mov eax, dword ptr [esi + 8]
// 006771be  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006771c2  8901                 mov dword ptr [ecx], eax
// 006771c4  b001                 mov al, 1
// 006771c6  5e                   pop esi
// 006771c7  c20400               ret 4
// 006771ca  57                   push edi
// 006771cb  83f802               cmp eax, 2
// 006771ce  752f                 jne 0x6771ff
// 006771d0  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006771d4  8b5608               mov edx, dword ptr [esi + 8]
// 006771d7  57                   push edi
// 006771d8  52                   push edx
// 006771d9  e8f2540400           call 0x6bc6d0
// 006771de  83c408               add esp, 8
// 006771e1  84c0                 test al, al
// 006771e3  741a                 je 0x6771ff
// 006771e5  8bce                 mov ecx, esi
// 006771e7  e854fdffff           call 0x676f40
// 006771ec  8b07                 mov eax, dword ptr [edi]
// 006771ee  894608               mov dword ptr [esi + 8], eax
// 006771f1  5f                   pop edi
// 006771f2  c7460406000000       mov dword ptr [esi + 4], 6
// 006771f9  b001                 mov al, 1
// 006771fb  5e                   pop esi
// 006771fc  c20400               ret 4
// 006771ff  5f                   pop edi
// 00677200  32c0                 xor al, al
// 00677202  5e                   pop esi
// 00677203  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

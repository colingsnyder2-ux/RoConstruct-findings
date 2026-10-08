// roc 2011-06 00602d30  unit: RBX::UnifiedWidget  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00602d30
//
// 00602d30  56                   push esi
// 00602d31  8bf1                 mov esi, ecx
// 00602d33  8b4604               mov eax, dword ptr [esi + 4]
// 00602d36  83f806               cmp eax, 6
// 00602d39  750f                 jne 0x602d4a
// 00602d3b  8b4608               mov eax, dword ptr [esi + 8]
// 00602d3e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00602d42  8901                 mov dword ptr [ecx], eax
// 00602d44  b001                 mov al, 1
// 00602d46  5e                   pop esi
// 00602d47  c20400               ret 4
// 00602d4a  57                   push edi
// 00602d4b  83f802               cmp eax, 2
// 00602d4e  752f                 jne 0x602d7f
// 00602d50  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00602d54  8b5608               mov edx, dword ptr [esi + 8]
// 00602d57  57                   push edi
// 00602d58  52                   push edx
// 00602d59  e8f2d90400           call 0x650750
// 00602d5e  83c408               add esp, 8
// 00602d61  84c0                 test al, al
// 00602d63  741a                 je 0x602d7f
// 00602d65  8bce                 mov ecx, esi
// 00602d67  e844fdffff           call 0x602ab0
// 00602d6c  8b07                 mov eax, dword ptr [edi]
// 00602d6e  894608               mov dword ptr [esi + 8], eax
// 00602d71  5f                   pop edi
// 00602d72  c7460406000000       mov dword ptr [esi + 4], 6
// 00602d79  b001                 mov al, 1
// 00602d7b  5e                   pop esi
// 00602d7c  c20400               ret 4
// 00602d7f  5f                   pop edi
// 00602d80  32c0                 xor al, al
// 00602d82  5e                   pop esi
// 00602d83  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

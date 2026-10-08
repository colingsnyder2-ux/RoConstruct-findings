// roc 2011-06 00602cd0  unit: RBX::UnifiedWidget  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00602cd0
//
// 00602cd0  56                   push esi
// 00602cd1  8bf1                 mov esi, ecx
// 00602cd3  8b4604               mov eax, dword ptr [esi + 4]
// 00602cd6  83f805               cmp eax, 5
// 00602cd9  750f                 jne 0x602cea
// 00602cdb  8b4608               mov eax, dword ptr [esi + 8]
// 00602cde  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00602ce2  8901                 mov dword ptr [ecx], eax
// 00602ce4  b001                 mov al, 1
// 00602ce6  5e                   pop esi
// 00602ce7  c20400               ret 4
// 00602cea  57                   push edi
// 00602ceb  83f802               cmp eax, 2
// 00602cee  752f                 jne 0x602d1f
// 00602cf0  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00602cf4  8b5608               mov edx, dword ptr [esi + 8]
// 00602cf7  57                   push edi
// 00602cf8  52                   push edx
// 00602cf9  e832d40400           call 0x650130
// 00602cfe  83c408               add esp, 8
// 00602d01  84c0                 test al, al
// 00602d03  741a                 je 0x602d1f
// 00602d05  8bce                 mov ecx, esi
// 00602d07  e8a4fdffff           call 0x602ab0
// 00602d0c  8b07                 mov eax, dword ptr [edi]
// 00602d0e  894608               mov dword ptr [esi + 8], eax
// 00602d11  5f                   pop edi
// 00602d12  c7460405000000       mov dword ptr [esi + 4], 5
// 00602d19  b001                 mov al, 1
// 00602d1b  5e                   pop esi
// 00602d1c  c20400               ret 4
// 00602d1f  5f                   pop edi
// 00602d20  32c0                 xor al, al
// 00602d22  5e                   pop esi
// 00602d23  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

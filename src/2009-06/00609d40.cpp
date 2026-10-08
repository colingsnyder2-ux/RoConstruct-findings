// roc 2009-06 00609d40  unit: RBX::GlobalSettings  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00609d40
//
// 00609d40  56                   push esi
// 00609d41  8bf1                 mov esi, ecx
// 00609d43  8b4604               mov eax, dword ptr [esi + 4]
// 00609d46  83f806               cmp eax, 6
// 00609d49  750f                 jne 0x609d5a
// 00609d4b  8b4608               mov eax, dword ptr [esi + 8]
// 00609d4e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00609d52  8901                 mov dword ptr [ecx], eax
// 00609d54  b001                 mov al, 1
// 00609d56  5e                   pop esi
// 00609d57  c20400               ret 4
// 00609d5a  57                   push edi
// 00609d5b  83f802               cmp eax, 2
// 00609d5e  752f                 jne 0x609d8f
// 00609d60  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00609d64  8b5608               mov edx, dword ptr [esi + 8]
// 00609d67  57                   push edi
// 00609d68  52                   push edx
// 00609d69  e8621d0400           call 0x64bad0
// 00609d6e  83c408               add esp, 8
// 00609d71  84c0                 test al, al
// 00609d73  741a                 je 0x609d8f
// 00609d75  8bce                 mov ecx, esi
// 00609d77  e854fdffff           call 0x609ad0
// 00609d7c  8b07                 mov eax, dword ptr [edi]
// 00609d7e  894608               mov dword ptr [esi + 8], eax
// 00609d81  5f                   pop edi
// 00609d82  c7460406000000       mov dword ptr [esi + 4], 6
// 00609d89  b001                 mov al, 1
// 00609d8b  5e                   pop esi
// 00609d8c  c20400               ret 4
// 00609d8f  5f                   pop edi
// 00609d90  32c0                 xor al, al
// 00609d92  5e                   pop esi
// 00609d93  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

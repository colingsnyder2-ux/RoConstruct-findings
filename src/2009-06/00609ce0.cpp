// roc 2009-06 00609ce0  unit: RBX::GlobalSettings  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00609ce0
//
// 00609ce0  56                   push esi
// 00609ce1  8bf1                 mov esi, ecx
// 00609ce3  8b4604               mov eax, dword ptr [esi + 4]
// 00609ce6  83f805               cmp eax, 5
// 00609ce9  750f                 jne 0x609cfa
// 00609ceb  8b4608               mov eax, dword ptr [esi + 8]
// 00609cee  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00609cf2  8901                 mov dword ptr [ecx], eax
// 00609cf4  b001                 mov al, 1
// 00609cf6  5e                   pop esi
// 00609cf7  c20400               ret 4
// 00609cfa  57                   push edi
// 00609cfb  83f802               cmp eax, 2
// 00609cfe  752f                 jne 0x609d2f
// 00609d00  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00609d04  8b5608               mov edx, dword ptr [esi + 8]
// 00609d07  57                   push edi
// 00609d08  52                   push edx
// 00609d09  e8c2160400           call 0x64b3d0
// 00609d0e  83c408               add esp, 8
// 00609d11  84c0                 test al, al
// 00609d13  741a                 je 0x609d2f
// 00609d15  8bce                 mov ecx, esi
// 00609d17  e8b4fdffff           call 0x609ad0
// 00609d1c  8b07                 mov eax, dword ptr [edi]
// 00609d1e  894608               mov dword ptr [esi + 8], eax
// 00609d21  5f                   pop edi
// 00609d22  c7460405000000       mov dword ptr [esi + 4], 5
// 00609d29  b001                 mov al, 1
// 00609d2b  5e                   pop esi
// 00609d2c  c20400               ret 4
// 00609d2f  5f                   pop edi
// 00609d30  32c0                 xor al, al
// 00609d32  5e                   pop esi
// 00609d33  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

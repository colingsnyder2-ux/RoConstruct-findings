// roc 2010-06 005dff40  unit: RBX::GlobalSettings  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005dff40
//
// 005dff40  56                   push esi
// 005dff41  8bf1                 mov esi, ecx
// 005dff43  8b4604               mov eax, dword ptr [esi + 4]
// 005dff46  83f805               cmp eax, 5
// 005dff49  750f                 jne 0x5dff5a
// 005dff4b  8b4608               mov eax, dword ptr [esi + 8]
// 005dff4e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005dff52  8901                 mov dword ptr [ecx], eax
// 005dff54  b001                 mov al, 1
// 005dff56  5e                   pop esi
// 005dff57  c20400               ret 4
// 005dff5a  57                   push edi
// 005dff5b  83f802               cmp eax, 2
// 005dff5e  752f                 jne 0x5dff8f
// 005dff60  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005dff64  8b5608               mov edx, dword ptr [esi + 8]
// 005dff67  57                   push edi
// 005dff68  52                   push edx
// 005dff69  e8f29c0400           call 0x629c60
// 005dff6e  83c408               add esp, 8
// 005dff71  84c0                 test al, al
// 005dff73  741a                 je 0x5dff8f
// 005dff75  8bce                 mov ecx, esi
// 005dff77  e8b4fdffff           call 0x5dfd30
// 005dff7c  8b07                 mov eax, dword ptr [edi]
// 005dff7e  894608               mov dword ptr [esi + 8], eax
// 005dff81  5f                   pop edi
// 005dff82  c7460405000000       mov dword ptr [esi + 4], 5
// 005dff89  b001                 mov al, 1
// 005dff8b  5e                   pop esi
// 005dff8c  c20400               ret 4
// 005dff8f  5f                   pop edi
// 005dff90  32c0                 xor al, al
// 005dff92  5e                   pop esi
// 005dff93  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

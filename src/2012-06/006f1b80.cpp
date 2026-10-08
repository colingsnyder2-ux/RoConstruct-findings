// roc 2012-06 006f1b80  unit: RBX::DataModel  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006f1b80
//
// 006f1b80  56                   push esi
// 006f1b81  8bf1                 mov esi, ecx
// 006f1b83  8b4604               mov eax, dword ptr [esi + 4]
// 006f1b86  83f805               cmp eax, 5
// 006f1b89  750f                 jne 0x6f1b9a
// 006f1b8b  8b4608               mov eax, dword ptr [esi + 8]
// 006f1b8e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f1b92  8901                 mov dword ptr [ecx], eax
// 006f1b94  b001                 mov al, 1
// 006f1b96  5e                   pop esi
// 006f1b97  c20400               ret 4
// 006f1b9a  57                   push edi
// 006f1b9b  83f802               cmp eax, 2
// 006f1b9e  752f                 jne 0x6f1bcf
// 006f1ba0  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006f1ba4  8b5608               mov edx, dword ptr [esi + 8]
// 006f1ba7  57                   push edi
// 006f1ba8  52                   push edx
// 006f1ba9  e832230500           call 0x743ee0
// 006f1bae  83c408               add esp, 8
// 006f1bb1  84c0                 test al, al
// 006f1bb3  741a                 je 0x6f1bcf
// 006f1bb5  8bce                 mov ecx, esi
// 006f1bb7  e8a4fdffff           call 0x6f1960
// 006f1bbc  8b07                 mov eax, dword ptr [edi]
// 006f1bbe  894608               mov dword ptr [esi + 8], eax
// 006f1bc1  5f                   pop edi
// 006f1bc2  c7460405000000       mov dword ptr [esi + 4], 5
// 006f1bc9  b001                 mov al, 1
// 006f1bcb  5e                   pop esi
// 006f1bcc  c20400               ret 4
// 006f1bcf  5f                   pop edi
// 006f1bd0  32c0                 xor al, al
// 006f1bd2  5e                   pop esi
// 006f1bd3  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

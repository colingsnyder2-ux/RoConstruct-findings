// roc 2012-06 006f1be0  unit: RBX::DataModel  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006f1be0
//
// 006f1be0  56                   push esi
// 006f1be1  8bf1                 mov esi, ecx
// 006f1be3  8b4604               mov eax, dword ptr [esi + 4]
// 006f1be6  83f806               cmp eax, 6
// 006f1be9  750f                 jne 0x6f1bfa
// 006f1beb  8b4608               mov eax, dword ptr [esi + 8]
// 006f1bee  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f1bf2  8901                 mov dword ptr [ecx], eax
// 006f1bf4  b001                 mov al, 1
// 006f1bf6  5e                   pop esi
// 006f1bf7  c20400               ret 4
// 006f1bfa  57                   push edi
// 006f1bfb  83f802               cmp eax, 2
// 006f1bfe  752f                 jne 0x6f1c2f
// 006f1c00  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006f1c04  8b5608               mov edx, dword ptr [esi + 8]
// 006f1c07  57                   push edi
// 006f1c08  52                   push edx
// 006f1c09  e8b22e0500           call 0x744ac0
// 006f1c0e  83c408               add esp, 8
// 006f1c11  84c0                 test al, al
// 006f1c13  741a                 je 0x6f1c2f
// 006f1c15  8bce                 mov ecx, esi
// 006f1c17  e844fdffff           call 0x6f1960
// 006f1c1c  8b07                 mov eax, dword ptr [edi]
// 006f1c1e  894608               mov dword ptr [esi + 8], eax
// 006f1c21  5f                   pop edi
// 006f1c22  c7460406000000       mov dword ptr [esi + 4], 6
// 006f1c29  b001                 mov al, 1
// 006f1c2b  5e                   pop esi
// 006f1c2c  c20400               ret 4
// 006f1c2f  5f                   pop edi
// 006f1c30  32c0                 xor al, al
// 006f1c32  5e                   pop esi
// 006f1c33  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

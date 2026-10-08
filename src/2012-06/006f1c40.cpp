// roc 2012-06 006f1c40  unit: RBX::DataModel  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006f1c40
//
// 006f1c40  56                   push esi
// 006f1c41  8bf1                 mov esi, ecx
// 006f1c43  8b4604               mov eax, dword ptr [esi + 4]
// 006f1c46  83f804               cmp eax, 4
// 006f1c49  750f                 jne 0x6f1c5a
// 006f1c4b  8a4608               mov al, byte ptr [esi + 8]
// 006f1c4e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f1c52  8801                 mov byte ptr [ecx], al
// 006f1c54  b001                 mov al, 1
// 006f1c56  5e                   pop esi
// 006f1c57  c20400               ret 4
// 006f1c5a  57                   push edi
// 006f1c5b  83f802               cmp eax, 2
// 006f1c5e  752f                 jne 0x6f1c8f
// 006f1c60  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006f1c64  8b5608               mov edx, dword ptr [esi + 8]
// 006f1c67  57                   push edi
// 006f1c68  52                   push edx
// 006f1c69  e862210500           call 0x743dd0
// 006f1c6e  83c408               add esp, 8
// 006f1c71  84c0                 test al, al
// 006f1c73  741a                 je 0x6f1c8f
// 006f1c75  8bce                 mov ecx, esi
// 006f1c77  e8e4fcffff           call 0x6f1960
// 006f1c7c  8a07                 mov al, byte ptr [edi]
// 006f1c7e  884608               mov byte ptr [esi + 8], al
// 006f1c81  5f                   pop edi
// 006f1c82  c7460404000000       mov dword ptr [esi + 4], 4
// 006f1c89  b001                 mov al, 1
// 006f1c8b  5e                   pop esi
// 006f1c8c  c20400               ret 4
// 006f1c8f  5f                   pop edi
// 006f1c90  32c0                 xor al, al
// 006f1c92  5e                   pop esi
// 006f1c93  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

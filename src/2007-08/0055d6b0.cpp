// roc 2007-08 0055d6b0  unit: RBX::DataModel  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055d6b0
//
// 0055d6b0  56                   push esi
// 0055d6b1  8bf1                 mov esi, ecx
// 0055d6b3  8b4604               mov eax, dword ptr [esi + 4]
// 0055d6b6  83f804               cmp eax, 4
// 0055d6b9  750f                 jne 0x55d6ca
// 0055d6bb  8a4608               mov al, byte ptr [esi + 8]
// 0055d6be  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055d6c2  8801                 mov byte ptr [ecx], al
// 0055d6c4  b001                 mov al, 1
// 0055d6c6  5e                   pop esi
// 0055d6c7  c20400               ret 4
// 0055d6ca  83f802               cmp eax, 2
// 0055d6cd  57                   push edi
// 0055d6ce  752f                 jne 0x55d6ff
// 0055d6d0  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0055d6d4  8b5608               mov edx, dword ptr [esi + 8]
// 0055d6d7  57                   push edi
// 0055d6d8  52                   push edx
// 0055d6d9  e8422d0200           call 0x580420
// 0055d6de  83c408               add esp, 8
// 0055d6e1  84c0                 test al, al
// 0055d6e3  741a                 je 0x55d6ff
// 0055d6e5  8bce                 mov ecx, esi
// 0055d6e7  e8e4fcffff           call 0x55d3d0
// 0055d6ec  8a07                 mov al, byte ptr [edi]
// 0055d6ee  884608               mov byte ptr [esi + 8], al
// 0055d6f1  5f                   pop edi
// 0055d6f2  c7460404000000       mov dword ptr [esi + 4], 4
// 0055d6f9  b001                 mov al, 1
// 0055d6fb  5e                   pop esi
// 0055d6fc  c20400               ret 4
// 0055d6ff  5f                   pop edi
// 0055d700  32c0                 xor al, al
// 0055d702  5e                   pop esi
// 0055d703  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAA_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

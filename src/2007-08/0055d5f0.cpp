// roc 2007-08 0055d5f0  unit: RBX::DataModel  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055d5f0
//
// 0055d5f0  56                   push esi
// 0055d5f1  8bf1                 mov esi, ecx
// 0055d5f3  8b4604               mov eax, dword ptr [esi + 4]
// 0055d5f6  83f805               cmp eax, 5
// 0055d5f9  750f                 jne 0x55d60a
// 0055d5fb  8b4608               mov eax, dword ptr [esi + 8]
// 0055d5fe  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055d602  8901                 mov dword ptr [ecx], eax
// 0055d604  b001                 mov al, 1
// 0055d606  5e                   pop esi
// 0055d607  c20400               ret 4
// 0055d60a  83f802               cmp eax, 2
// 0055d60d  57                   push edi
// 0055d60e  752f                 jne 0x55d63f
// 0055d610  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0055d614  8b5608               mov edx, dword ptr [esi + 8]
// 0055d617  57                   push edi
// 0055d618  52                   push edx
// 0055d619  e862350200           call 0x580b80
// 0055d61e  83c408               add esp, 8
// 0055d621  84c0                 test al, al
// 0055d623  741a                 je 0x55d63f
// 0055d625  8bce                 mov ecx, esi
// 0055d627  e8a4fdffff           call 0x55d3d0
// 0055d62c  8b07                 mov eax, dword ptr [edi]
// 0055d62e  894608               mov dword ptr [esi + 8], eax
// 0055d631  5f                   pop edi
// 0055d632  c7460405000000       mov dword ptr [esi + 4], 5
// 0055d639  b001                 mov al, 1
// 0055d63b  5e                   pop esi
// 0055d63c  c20400               ret 4
// 0055d63f  5f                   pop edi
// 0055d640  32c0                 xor al, al
// 0055d642  5e                   pop esi
// 0055d643  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

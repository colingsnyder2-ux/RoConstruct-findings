// roc 2007-08 0055d650  unit: RBX::DataModel  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055d650
//
// 0055d650  56                   push esi
// 0055d651  8bf1                 mov esi, ecx
// 0055d653  8b4604               mov eax, dword ptr [esi + 4]
// 0055d656  83f806               cmp eax, 6
// 0055d659  750f                 jne 0x55d66a
// 0055d65b  8b4608               mov eax, dword ptr [esi + 8]
// 0055d65e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055d662  8901                 mov dword ptr [ecx], eax
// 0055d664  b001                 mov al, 1
// 0055d666  5e                   pop esi
// 0055d667  c20400               ret 4
// 0055d66a  83f802               cmp eax, 2
// 0055d66d  57                   push edi
// 0055d66e  752f                 jne 0x55d69f
// 0055d670  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0055d674  8b5608               mov edx, dword ptr [esi + 8]
// 0055d677  57                   push edi
// 0055d678  52                   push edx
// 0055d679  e872350200           call 0x580bf0
// 0055d67e  83c408               add esp, 8
// 0055d681  84c0                 test al, al
// 0055d683  741a                 je 0x55d69f
// 0055d685  8bce                 mov ecx, esi
// 0055d687  e844fdffff           call 0x55d3d0
// 0055d68c  8b07                 mov eax, dword ptr [edi]
// 0055d68e  894608               mov dword ptr [esi + 8], eax
// 0055d691  5f                   pop edi
// 0055d692  c7460406000000       mov dword ptr [esi + 4], 6
// 0055d699  b001                 mov al, 1
// 0055d69b  5e                   pop esi
// 0055d69c  c20400               ret 4
// 0055d69f  5f                   pop edi
// 0055d6a0  32c0                 xor al, al
// 0055d6a2  5e                   pop esi
// 0055d6a3  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

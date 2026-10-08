// roc 2007-08 0055d710  unit: RBX::DataModel  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055d710
//
// 0055d710  56                   push esi
// 0055d711  8bf1                 mov esi, ecx
// 0055d713  8b4604               mov eax, dword ptr [esi + 4]
// 0055d716  83f807               cmp eax, 7
// 0055d719  750f                 jne 0x55d72a
// 0055d71b  d94608               fld dword ptr [esi + 8]
// 0055d71e  8b442408             mov eax, dword ptr [esp + 8]
// 0055d722  d918                 fstp dword ptr [eax]
// 0055d724  b001                 mov al, 1
// 0055d726  5e                   pop esi
// 0055d727  c20400               ret 4
// 0055d72a  83f802               cmp eax, 2
// 0055d72d  57                   push edi
// 0055d72e  752f                 jne 0x55d75f
// 0055d730  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0055d734  8b4e08               mov ecx, dword ptr [esi + 8]
// 0055d737  57                   push edi
// 0055d738  51                   push ecx
// 0055d739  e832360200           call 0x580d70
// 0055d73e  83c408               add esp, 8
// 0055d741  84c0                 test al, al
// 0055d743  741a                 je 0x55d75f
// 0055d745  8bce                 mov ecx, esi
// 0055d747  e884fcffff           call 0x55d3d0
// 0055d74c  d907                 fld dword ptr [edi]
// 0055d74e  5f                   pop edi
// 0055d74f  d95e08               fstp dword ptr [esi + 8]
// 0055d752  c7460407000000       mov dword ptr [esi + 4], 7
// 0055d759  b001                 mov al, 1
// 0055d75b  5e                   pop esi
// 0055d75c  c20400               ret 4
// 0055d75f  5f                   pop edi
// 0055d760  32c0                 xor al, al
// 0055d762  5e                   pop esi
// 0055d763  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

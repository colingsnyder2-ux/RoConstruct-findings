// roc 2010-06 005dffa0  unit: RBX::GlobalSettings  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005dffa0
//
// 005dffa0  56                   push esi
// 005dffa1  8bf1                 mov esi, ecx
// 005dffa3  8b4604               mov eax, dword ptr [esi + 4]
// 005dffa6  83f806               cmp eax, 6
// 005dffa9  750f                 jne 0x5dffba
// 005dffab  8b4608               mov eax, dword ptr [esi + 8]
// 005dffae  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005dffb2  8901                 mov dword ptr [ecx], eax
// 005dffb4  b001                 mov al, 1
// 005dffb6  5e                   pop esi
// 005dffb7  c20400               ret 4
// 005dffba  57                   push edi
// 005dffbb  83f802               cmp eax, 2
// 005dffbe  752f                 jne 0x5dffef
// 005dffc0  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005dffc4  8b5608               mov edx, dword ptr [esi + 8]
// 005dffc7  57                   push edi
// 005dffc8  52                   push edx
// 005dffc9  e8e2a30400           call 0x62a3b0
// 005dffce  83c408               add esp, 8
// 005dffd1  84c0                 test al, al
// 005dffd3  741a                 je 0x5dffef
// 005dffd5  8bce                 mov ecx, esi
// 005dffd7  e854fdffff           call 0x5dfd30
// 005dffdc  8b07                 mov eax, dword ptr [edi]
// 005dffde  894608               mov dword ptr [esi + 8], eax
// 005dffe1  5f                   pop edi
// 005dffe2  c7460406000000       mov dword ptr [esi + 4], 6
// 005dffe9  b001                 mov al, 1
// 005dffeb  5e                   pop esi
// 005dffec  c20400               ret 4
// 005dffef  5f                   pop edi
// 005dfff0  32c0                 xor al, al
// 005dfff2  5e                   pop esi
// 005dfff3  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

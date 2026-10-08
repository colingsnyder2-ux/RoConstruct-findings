// roc 2007-08 0055d460  unit: RBX::DataModel  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055d460
//
// 0055d460  56                   push esi
// 0055d461  8bf1                 mov esi, ecx
// 0055d463  8b4604               mov eax, dword ptr [esi + 4]
// 0055d466  83f801               cmp eax, 1
// 0055d469  750f                 jne 0x55d47a
// 0055d46b  8b4608               mov eax, dword ptr [esi + 8]
// 0055d46e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055d472  8901                 mov dword ptr [ecx], eax
// 0055d474  b001                 mov al, 1
// 0055d476  5e                   pop esi
// 0055d477  c20400               ret 4
// 0055d47a  83f802               cmp eax, 2
// 0055d47d  753d                 jne 0x55d4bc
// 0055d47f  8b4608               mov eax, dword ptr [esi + 8]
// 0055d482  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0055d486  7205                 jb 0x55d48d
// 0055d488  8b4004               mov eax, dword ptr [eax + 4]
// 0055d48b  eb03                 jmp 0x55d490
// 0055d48d  83c004               add eax, 4
// 0055d490  57                   push edi
// 0055d491  6aff                 push -1
// 0055d493  50                   push eax
// 0055d494  e8a7f4fcff           call 0x52c940
// 0055d499  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0055d49d  83c408               add esp, 8
// 0055d4a0  8bce                 mov ecx, esi
// 0055d4a2  8907                 mov dword ptr [edi], eax
// 0055d4a4  e827ffffff           call 0x55d3d0
// 0055d4a9  8b17                 mov edx, dword ptr [edi]
// 0055d4ab  5f                   pop edi
// 0055d4ac  895608               mov dword ptr [esi + 8], edx
// 0055d4af  c7460401000000       mov dword ptr [esi + 4], 1
// 0055d4b6  b001                 mov al, 1
// 0055d4b8  5e                   pop esi
// 0055d4b9  c20400               ret 4
// 0055d4bc  32c0                 xor al, al
// 0055d4be  5e                   pop esi
// 0055d4bf  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAPBVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

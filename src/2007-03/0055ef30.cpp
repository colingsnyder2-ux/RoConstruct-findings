// roc 2007-03 0055ef30  unit: seg_00550000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055ef30
//
// 0055ef30  56                   push esi
// 0055ef31  8bf1                 mov esi, ecx
// 0055ef33  8b4604               mov eax, dword ptr [esi + 4]
// 0055ef36  83f801               cmp eax, 1
// 0055ef39  750f                 jne 0x55ef4a
// 0055ef3b  8b4608               mov eax, dword ptr [esi + 8]
// 0055ef3e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055ef42  8901                 mov dword ptr [ecx], eax
// 0055ef44  b001                 mov al, 1
// 0055ef46  5e                   pop esi
// 0055ef47  c20400               ret 4
// 0055ef4a  83f802               cmp eax, 2
// 0055ef4d  753d                 jne 0x55ef8c
// 0055ef4f  8b4608               mov eax, dword ptr [esi + 8]
// 0055ef52  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0055ef56  7205                 jb 0x55ef5d
// 0055ef58  8b4004               mov eax, dword ptr [eax + 4]
// 0055ef5b  eb03                 jmp 0x55ef60
// 0055ef5d  83c004               add eax, 4
// 0055ef60  57                   push edi
// 0055ef61  6aff                 push -1
// 0055ef63  50                   push eax
// 0055ef64  e877e9fcff           call 0x52d8e0
// 0055ef69  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0055ef6d  83c408               add esp, 8
// 0055ef70  8bce                 mov ecx, esi
// 0055ef72  8907                 mov dword ptr [edi], eax
// 0055ef74  e847ffffff           call 0x55eec0
// 0055ef79  8b17                 mov edx, dword ptr [edi]
// 0055ef7b  5f                   pop edi
// 0055ef7c  895608               mov dword ptr [esi + 8], edx
// 0055ef7f  c7460401000000       mov dword ptr [esi + 4], 1
// 0055ef86  b001                 mov al, 1
// 0055ef88  5e                   pop esi
// 0055ef89  c20400               ret 4
// 0055ef8c  32c0                 xor al, al
// 0055ef8e  5e                   pop esi
// 0055ef8f  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAPBVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

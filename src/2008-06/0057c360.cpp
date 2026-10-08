// roc 2008-06 0057c360  unit: RBX::VInstance::?$SignalDesc  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057c360
//
// 0057c360  56                   push esi
// 0057c361  8bf1                 mov esi, ecx
// 0057c363  8b4604               mov eax, dword ptr [esi + 4]
// 0057c366  83f801               cmp eax, 1
// 0057c369  750f                 jne 0x57c37a
// 0057c36b  8b4608               mov eax, dword ptr [esi + 8]
// 0057c36e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057c372  8901                 mov dword ptr [ecx], eax
// 0057c374  b001                 mov al, 1
// 0057c376  5e                   pop esi
// 0057c377  c20400               ret 4
// 0057c37a  83f802               cmp eax, 2
// 0057c37d  753d                 jne 0x57c3bc
// 0057c37f  8b4608               mov eax, dword ptr [esi + 8]
// 0057c382  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0057c386  7205                 jb 0x57c38d
// 0057c388  8b4004               mov eax, dword ptr [eax + 4]
// 0057c38b  eb03                 jmp 0x57c390
// 0057c38d  83c004               add eax, 4
// 0057c390  57                   push edi
// 0057c391  6aff                 push -1
// 0057c393  50                   push eax
// 0057c394  e8f77bfdff           call 0x553f90
// 0057c399  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0057c39d  83c408               add esp, 8
// 0057c3a0  8bce                 mov ecx, esi
// 0057c3a2  8907                 mov dword ptr [edi], eax
// 0057c3a4  e827ffffff           call 0x57c2d0
// 0057c3a9  8b17                 mov edx, dword ptr [edi]
// 0057c3ab  5f                   pop edi
// 0057c3ac  895608               mov dword ptr [esi + 8], edx
// 0057c3af  c7460401000000       mov dword ptr [esi + 4], 1
// 0057c3b6  b001                 mov al, 1
// 0057c3b8  5e                   pop esi
// 0057c3b9  c20400               ret 4
// 0057c3bc  32c0                 xor al, al
// 0057c3be  5e                   pop esi
// 0057c3bf  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAAPBVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp

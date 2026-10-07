// roc 2012-06 0059c8c0  unit: VAuthoringSettings::?$FactoryProduct  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059c8c0
//
// 0059c8c0  56                   push esi
// 0059c8c1  8bf1                 mov esi, ecx
// 0059c8c3  8b4608               mov eax, dword ptr [esi + 8]
// 0059c8c6  394604               cmp dword ptr [esi + 4], eax
// 0059c8c9  757d                 jne 0x59c948
// 0059c8cb  85c0                 test eax, eax
// 0059c8cd  7509                 jne 0x59c8d8
// 0059c8cf  c7460810000000       mov dword ptr [esi + 8], 0x10
// 0059c8d6  eb05                 jmp 0x59c8dd
// 0059c8d8  03c0                 add eax, eax
// 0059c8da  894608               mov dword ptr [esi + 8], eax
// 0059c8dd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059c8e1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059c8e5  8b4608               mov eax, dword ptr [esi + 8]
// 0059c8e8  57                   push edi
// 0059c8e9  51                   push ecx
// 0059c8ea  52                   push edx
// 0059c8eb  50                   push eax
// 0059c8ec  e83fe1ffff           call 0x59aa30
// 0059c8f1  83c40c               add esp, 0xc
// 0059c8f4  833e00               cmp dword ptr [esi], 0
// 0059c8f7  8bf8                 mov edi, eax
// 0059c8f9  744a                 je 0x59c945
// 0059c8fb  33d2                 xor edx, edx
// 0059c8fd  53                   push ebx
// 0059c8fe  395604               cmp dword ptr [esi + 4], edx
// 0059c901  761e                 jbe 0x59c921
// 0059c903  8b06                 mov eax, dword ptr [esi]
// 0059c905  8d0cd500000000       lea ecx, [edx*8]
// 0059c90c  8b1c08               mov ebx, dword ptr [eax + ecx]
// 0059c90f  03c1                 add eax, ecx
// 0059c911  891c39               mov dword ptr [ecx + edi], ebx
// 0059c914  8b4004               mov eax, dword ptr [eax + 4]
// 0059c917  42                   inc edx
// 0059c918  89443904             mov dword ptr [ecx + edi + 4], eax
// 0059c91c  3b5604               cmp edx, dword ptr [esi + 4]
// 0059c91f  72e2                 jb 0x59c903
// 0059c921  8b06                 mov eax, dword ptr [esi]
// 0059c923  85c0                 test eax, eax
// 0059c925  741d                 je 0x59c944
// 0059c927  8b48fc               mov ecx, dword ptr [eax - 4]
// 0059c92a  8d58fc               lea ebx, [eax - 4]
// 0059c92d  6890a75900           push 0x59a790
// 0059c932  51                   push ecx
// 0059c933  6a08                 push 8
// 0059c935  50                   push eax
// 0059c936  e835693e00           call 0x983270
// 0059c93b  53                   push ebx
// 0059c93c  e8795a3e00           call 0x9823ba
// 0059c941  83c404               add esp, 4
// 0059c944  5b                   pop ebx
// 0059c945  893e                 mov dword ptr [esi], edi
// 0059c947  5f                   pop edi
// 0059c948  8b5604               mov edx, dword ptr [esi + 4]
// 0059c94b  8b06                 mov eax, dword ptr [esi]
// 0059c94d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059c951  8d04d0               lea eax, [eax + edx*8]
// 0059c954  8b11                 mov edx, dword ptr [ecx]
// 0059c956  8910                 mov dword ptr [eax], edx
// 0059c958  8b4904               mov ecx, dword ptr [ecx + 4]
// 0059c95b  894804               mov dword ptr [eax + 4], ecx
// 0059c95e  ff4604               inc dword ptr [esi + 4]
// 0059c961  5e                   pop esi
// 0059c962  c20c00               ret 0xc
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Insert@?$List@U?$RangeNode@Uuint24_t@RakNet@@@DataStructures@@@DataStructures@@QAEXABU?$RangeNode@Uuint24_t@RakNet@@@2@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp

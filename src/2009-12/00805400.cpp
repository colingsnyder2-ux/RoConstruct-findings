// roc 2009-12 00805400  unit: CXTPCommandBar  size: 591 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00805400
//
// 00805400  6aff                 push -1
// 00805402  68b8d69500           push 0x95d6b8
// 00805407  64a100000000         mov eax, dword ptr fs:[0]
// 0080540d  50                   push eax
// 0080540e  83ec08               sub esp, 8
// 00805411  53                   push ebx
// 00805412  55                   push ebp
// 00805413  56                   push esi
// 00805414  57                   push edi
// 00805415  a10052b600           mov eax, dword ptr [0xb65200]
// 0080541a  33c4                 xor eax, esp
// 0080541c  50                   push eax
// 0080541d  8d44241c             lea eax, [esp + 0x1c]
// 00805421  64a300000000         mov dword ptr fs:[0], eax
// 00805427  8bf1                 mov esi, ecx
// 00805429  e8a2a50200           call 0x82f9d0
// 0080542e  6a0f                 push 0xf
// 00805430  8bc8                 mov ecx, eax
// 00805432  e8c99c0200           call 0x82f100
// 00805437  50                   push eax
// 00805438  8d4c2418             lea ecx, [esp + 0x18]
// 0080543c  e891101200           call 0x9264d2
// 00805441  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00805445  8d442414             lea eax, [esp + 0x14]
// 00805449  50                   push eax
// 0080544a  8bcf                 mov ecx, edi
// 0080544c  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00805454  e873101200           call 0x9264cc
// 00805459  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 00805460  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 00805466  8b963c010000         mov edx, dword ptr [esi + 0x13c]
// 0080546c  8b1d08b19800         mov ebx, dword ptr [0x98b108]
// 00805472  8be8                 mov ebp, eax
// 00805474  6849005a00           push 0x5a0049
// 00805479  0f84cc000000         je 0x80554b
// 0080547f  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 00805485  2bc1                 sub eax, ecx
// 00805487  50                   push eax
// 00805488  6a01                 push 1
// 0080548a  51                   push ecx
// 0080548b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0080548e  52                   push edx
// 0080548f  51                   push ecx
// 00805490  ffd3                 call ebx
// 00805492  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 00805498  2b8640010000         sub eax, dword ptr [esi + 0x140]
// 0080549e  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 008054a4  8b963c010000         mov edx, dword ptr [esi + 0x13c]
// 008054aa  6849005a00           push 0x5a0049
// 008054af  83e802               sub eax, 2
// 008054b2  50                   push eax
// 008054b3  6a01                 push 1
// 008054b5  41                   inc ecx
// 008054b6  42                   inc edx
// 008054b7  51                   push ecx
// 008054b8  52                   push edx
// 008054b9  8b5704               mov edx, dword ptr [edi + 4]
// 008054bc  52                   push edx
// 008054bd  ffd3                 call ebx
// 008054bf  8b8644010000         mov eax, dword ptr [esi + 0x144]
// 008054c5  2b863c010000         sub eax, dword ptr [esi + 0x13c]
// 008054cb  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 008054d1  8b963c010000         mov edx, dword ptr [esi + 0x13c]
// 008054d7  6849005a00           push 0x5a0049
// 008054dc  6a02                 push 2
// 008054de  83e804               sub eax, 4
// 008054e1  50                   push eax
// 008054e2  8b4704               mov eax, dword ptr [edi + 4]
// 008054e5  83c102               add ecx, 2
// 008054e8  51                   push ecx
// 008054e9  83c202               add edx, 2
// 008054ec  52                   push edx
// 008054ed  50                   push eax
// 008054ee  ffd3                 call ebx
// 008054f0  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 008054f6  2b8640010000         sub eax, dword ptr [esi + 0x140]
// 008054fc  8b9640010000         mov edx, dword ptr [esi + 0x140]
// 00805502  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 00805508  6849005a00           push 0x5a0049
// 0080550d  50                   push eax
// 0080550e  6a01                 push 1
// 00805510  49                   dec ecx
// 00805511  52                   push edx
// 00805512  51                   push ecx
// 00805513  8b4f04               mov ecx, dword ptr [edi + 4]
// 00805516  51                   push ecx
// 00805517  ffd3                 call ebx
// 00805519  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 0080551f  2b8640010000         sub eax, dword ptr [esi + 0x140]
// 00805525  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 0080552b  8bb644010000         mov esi, dword ptr [esi + 0x144]
// 00805531  8b5704               mov edx, dword ptr [edi + 4]
// 00805534  6849005a00           push 0x5a0049
// 00805539  83e802               sub eax, 2
// 0080553c  50                   push eax
// 0080553d  6a01                 push 1
// 0080553f  41                   inc ecx
// 00805540  51                   push ecx
// 00805541  83ee02               sub esi, 2
// 00805544  56                   push esi
// 00805545  52                   push edx
// 00805546  e9cb000000           jmp 0x805616
// 0080554b  8b8644010000         mov eax, dword ptr [esi + 0x144]
// 00805551  2b863c010000         sub eax, dword ptr [esi + 0x13c]
// 00805557  6a01                 push 1
// 00805559  50                   push eax
// 0080555a  8b4704               mov eax, dword ptr [edi + 4]
// 0080555d  51                   push ecx
// 0080555e  52                   push edx
// 0080555f  50                   push eax
// 00805560  ffd3                 call ebx
// 00805562  8b8644010000         mov eax, dword ptr [esi + 0x144]
// 00805568  2b863c010000         sub eax, dword ptr [esi + 0x13c]
// 0080556e  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 00805574  8b963c010000         mov edx, dword ptr [esi + 0x13c]
// 0080557a  6849005a00           push 0x5a0049
// 0080557f  6a01                 push 1
// 00805581  83e802               sub eax, 2
// 00805584  50                   push eax
// 00805585  41                   inc ecx
// 00805586  51                   push ecx
// 00805587  8b4f04               mov ecx, dword ptr [edi + 4]
// 0080558a  42                   inc edx
// 0080558b  52                   push edx
// 0080558c  51                   push ecx
// 0080558d  ffd3                 call ebx
// 0080558f  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 00805595  2b8640010000         sub eax, dword ptr [esi + 0x140]
// 0080559b  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 008055a1  8b963c010000         mov edx, dword ptr [esi + 0x13c]
// 008055a7  6849005a00           push 0x5a0049
// 008055ac  83e804               sub eax, 4
// 008055af  50                   push eax
// 008055b0  6a02                 push 2
// 008055b2  83c102               add ecx, 2
// 008055b5  83c202               add edx, 2
// 008055b8  51                   push ecx
// 008055b9  52                   push edx
// 008055ba  8b5704               mov edx, dword ptr [edi + 4]
// 008055bd  52                   push edx
// 008055be  ffd3                 call ebx
// 008055c0  8b8644010000         mov eax, dword ptr [esi + 0x144]
// 008055c6  2b863c010000         sub eax, dword ptr [esi + 0x13c]
// 008055cc  8b8e48010000         mov ecx, dword ptr [esi + 0x148]
// 008055d2  8b963c010000         mov edx, dword ptr [esi + 0x13c]
// 008055d8  6849005a00           push 0x5a0049
// 008055dd  6a01                 push 1
// 008055df  50                   push eax
// 008055e0  8b4704               mov eax, dword ptr [edi + 4]
// 008055e3  49                   dec ecx
// 008055e4  51                   push ecx
// 008055e5  52                   push edx
// 008055e6  50                   push eax
// 008055e7  ffd3                 call ebx
// 008055e9  8b8644010000         mov eax, dword ptr [esi + 0x144]
// 008055ef  2b863c010000         sub eax, dword ptr [esi + 0x13c]
// 008055f5  8b8e48010000         mov ecx, dword ptr [esi + 0x148]
// 008055fb  8bb63c010000         mov esi, dword ptr [esi + 0x13c]
// 00805601  6849005a00           push 0x5a0049
// 00805606  6a01                 push 1
// 00805608  83e802               sub eax, 2
// 0080560b  83e902               sub ecx, 2
// 0080560e  50                   push eax
// 0080560f  51                   push ecx
// 00805610  8b4f04               mov ecx, dword ptr [edi + 4]
// 00805613  46                   inc esi
// 00805614  56                   push esi
// 00805615  51                   push ecx
// 00805616  ffd3                 call ebx
// 00805618  55                   push ebp
// 00805619  8bcf                 mov ecx, edi
// 0080561b  e8ac0e1200           call 0x9264cc
// 00805620  8d4c2414             lea ecx, [esp + 0x14]
// 00805624  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0080562c  c744241448189a00     mov dword ptr [esp + 0x14], 0x9a1848
// 00805634  e8f79bc0ff           call 0x40f230
// 00805639  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0080563d  64890d00000000       mov dword ptr fs:[0], ecx
// 00805644  59                   pop ecx
// 00805645  5f                   pop edi
// 00805646  5e                   pop esi
// 00805647  5d                   pop ebp
// 00805648  5b                   pop ebx
// 00805649  83c414               add esp, 0x14
// 0080564c  c20400               ret 4
// copied from an identical function in another client (function ?CustomizeDrawMarker@CXTPCommandBar@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp
// roc 2009-12 0083efa0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083efa0
//
// 0083efa0  6aff                 push -1
// 0083efa2  68caca9500           push 0x95caca
// 0083efa7  64a100000000         mov eax, dword ptr fs:[0]
// 0083efad  50                   push eax
// 0083efae  51                   push ecx
// 0083efaf  53                   push ebx
// 0083efb0  55                   push ebp
// 0083efb1  56                   push esi
// 0083efb2  57                   push edi
// 0083efb3  a10052b600           mov eax, dword ptr [0xb65200]
// 0083efb8  33c4                 xor eax, esp
// 0083efba  50                   push eax
// 0083efbb  8d442418             lea eax, [esp + 0x18]
// 0083efbf  64a300000000         mov dword ptr fs:[0], eax
// 0083efc5  8bf1                 mov esi, ecx
// 0083efc7  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0083efcb  8b83d8000000         mov eax, dword ptr [ebx + 0xd8]
// 0083efd1  3daa230000           cmp eax, 0x23aa
// 0083efd6  0f85d4000000         jne 0x83f0b0
// 0083efdc  8bcb                 mov ecx, ebx
// 0083efde  e86d62fcff           call 0x805250
// 0083efe3  85c0                 test eax, eax
// 0083efe5  0f8fc5000000         jg 0x83f0b0
// 0083efeb  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0083eff1  8b4034               mov eax, dword ptr [eax + 0x34]
// 0083eff4  89442428             mov dword ptr [esp + 0x28], eax
// 0083eff8  85c0                 test eax, eax
// 0083effa  0f8e8e000000         jle 0x83f08e
// 0083f000  bf01000000           mov edi, 1
// 0083f005  8be8                 mov ebp, eax
// 0083f007  eb07                 jmp 0x83f010
// 0083f009  8da42400000000       lea esp, [esp]
// 0083f010  6874010000           push 0x174
// 0083f015  e84648fbff           call 0x7f3860
// 0083f01a  8bf0                 mov esi, eax
// 0083f01c  83c404               add esp, 4
// 0083f01f  89742414             mov dword ptr [esp + 0x14], esi
// 0083f023  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0083f02b  85f6                 test esi, esi
// 0083f02d  7416                 je 0x83f045
// 0083f02f  8bce                 mov ecx, esi
// 0083f031  e82a110500           call 0x890160
// 0083f036  c7062c8e9f00         mov dword ptr [esi], 0x9f8e2c
// 0083f03c  c74620cc8d9f00       mov dword ptr [esi + 0x20], 0x9f8dcc
// 0083f043  eb02                 jmp 0x83f047
// 0083f045  33f6                 xor esi, esi
// 0083f047  8b8bfc000000         mov ecx, dword ptr [ebx + 0xfc]
// 0083f04d  6a00                 push 0
// 0083f04f  6aff                 push -1
// 0083f051  6a00                 push 0
// 0083f053  68aa230000           push 0x23aa
// 0083f058  56                   push esi
// 0083f059  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0083f061  e88a8f0000           call 0x847ff0
// 0083f066  8bf0                 mov esi, eax
// 0083f068  39be88000000         cmp dword ptr [esi + 0x88], edi
// 0083f06e  740f                 je 0x83f07f
// 0083f070  6a01                 push 1
// 0083f072  8bce                 mov ecx, esi
// 0083f074  89be88000000         mov dword ptr [esi + 0x88], edi
// 0083f07a  e84176fbff           call 0x7f66c0
// 0083f07f  6a08                 push 8
// 0083f081  8bce                 mov ecx, esi
// 0083f083  e8d86ffbff           call 0x7f6060
// 0083f088  47                   inc edi
// 0083f089  83ed01               sub ebp, 1
// 0083f08c  7582                 jne 0x83f010
// 0083f08e  db442428             fild dword ptr [esp + 0x28]
// 0083f092  dd0510329b00         fld qword ptr [0x9b3210]
// 0083f098  e81360fbff           call 0x7f50b0
// 0083f09d  e84e5cfbff           call 0x7f4cf0
// 0083f0a2  6bc017               imul eax, eax, 0x17
// 0083f0a5  83c006               add eax, 6
// 0083f0a8  50                   push eax
// 0083f0a9  8bcb                 mov ecx, ebx
// 0083f0ab  e8c056fcff           call 0x804770
// 0083f0b0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083f0b4  64890d00000000       mov dword ptr fs:[0], ecx
// 0083f0bb  59                   pop ecx
// 0083f0bc  5f                   pop edi
// 0083f0bd  5e                   pop esi
// 0083f0be  5d                   pop ebp
// 0083f0bf  5b                   pop ebx
// 0083f0c0  83c410               add esp, 0x10
// 0083f0c3  c20400               ret 4
// copied from an identical function in another client (function ?OnInitCommandsPopup@CXTPCustomizeSheet@@IAEXPAVCXTPPopupBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp
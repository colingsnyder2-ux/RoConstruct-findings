// roc 2009-06 007e9fc0  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 469 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e9fc0
//
// 007e9fc0  6aff                 push -1
// 007e9fc2  68a9028800           push 0x8802a9
// 007e9fc7  64a100000000         mov eax, dword ptr fs:[0]
// 007e9fcd  50                   push eax
// 007e9fce  83ec10               sub esp, 0x10
// 007e9fd1  53                   push ebx
// 007e9fd2  55                   push ebp
// 007e9fd3  56                   push esi
// 007e9fd4  57                   push edi
// 007e9fd5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007e9fda  33c4                 xor eax, esp
// 007e9fdc  50                   push eax
// 007e9fdd  8d442424             lea eax, [esp + 0x24]
// 007e9fe1  64a300000000         mov dword ptr fs:[0], eax
// 007e9fe7  8bd9                 mov ebx, ecx
// 007e9fe9  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 007e9fed  8b4718               mov eax, dword ptr [edi + 0x18]
// 007e9ff0  50                   push eax
// 007e9ff1  e8161f0600           call 0x84bf0c
// 007e9ff6  8bf0                 mov esi, eax
// 007e9ff8  8b4708               mov eax, dword ptr [edi + 8]
// 007e9ffb  85c0                 test eax, eax
// 007e9ffd  0f8c56010000         jl 0x7ea159
// 007ea003  f6470c03             test byte ptr [edi + 0xc], 3
// 007ea007  0f844c010000         je 0x7ea159
// 007ea00d  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 007ea010  6a00                 push 0
// 007ea012  50                   push eax
// 007ea013  68a1010000           push 0x1a1
// 007ea018  51                   push ecx
// 007ea019  ff1590ee8900         call dword ptr [0x89ee90]
// 007ea01f  8bcb                 mov ecx, ebx
// 007ea021  89442418             mov dword ptr [esp + 0x18], eax
// 007ea025  e810210600           call 0x84c13a
// 007ea02a  8b2de4ee8900         mov ebp, dword ptr [0x89eee4]
// 007ea030  85c0                 test eax, eax
// 007ea032  0f844b010000         je 0x7ea183
// 007ea038  8b5708               mov edx, dword ptr [edi + 8]
// 007ea03b  52                   push edx
// 007ea03c  8bcb                 mov ecx, ebx
// 007ea03e  e8cf270600           call 0x84c812
// 007ea043  85c0                 test eax, eax
// 007ea045  0f8438010000         je 0x7ea183
// 007ea04b  6a08                 push 8
// 007ea04d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007ea055  ffd5                 call ebp
// 007ea057  8b16                 mov edx, dword ptr [esi]
// 007ea059  50                   push eax
// 007ea05a  8b4238               mov eax, dword ptr [edx + 0x38]
// 007ea05d  8bce                 mov ecx, esi
// 007ea05f  ffd0                 call eax
// 007ea061  6a05                 push 5
// 007ea063  89442420             mov dword ptr [esp + 0x20], eax
// 007ea067  ffd5                 call ebp
// 007ea069  8b16                 mov edx, dword ptr [esi]
// 007ea06b  50                   push eax
// 007ea06c  8b4234               mov eax, dword ptr [edx + 0x34]
// 007ea06f  8bce                 mov ecx, esi
// 007ea071  ffd0                 call eax
// 007ea073  837c241400           cmp dword ptr [esp + 0x14], 0
// 007ea078  89442420             mov dword ptr [esp + 0x20], eax
// 007ea07c  7532                 jne 0x7ea0b0
// 007ea07e  f6471001             test byte ptr [edi + 0x10], 1
// 007ea082  742c                 je 0x7ea0b0
// 007ea084  8b0e                 mov ecx, dword ptr [esi]
// 007ea086  6a0e                 push 0xe
// 007ea088  894c2418             mov dword ptr [esp + 0x18], ecx
// 007ea08c  ffd5                 call ebp
// 007ea08e  8b542414             mov edx, dword ptr [esp + 0x14]
// 007ea092  50                   push eax
// 007ea093  8b4238               mov eax, dword ptr [edx + 0x38]
// 007ea096  8bce                 mov ecx, esi
// 007ea098  ffd0                 call eax
// 007ea09a  8b0e                 mov ecx, dword ptr [esi]
// 007ea09c  6a0d                 push 0xd
// 007ea09e  894c2418             mov dword ptr [esp + 0x18], ecx
// 007ea0a2  ffd5                 call ebp
// 007ea0a4  8b542414             mov edx, dword ptr [esp + 0x14]
// 007ea0a8  50                   push eax
// 007ea0a9  8b4234               mov eax, dword ptr [edx + 0x34]
// 007ea0ac  8bce                 mov ecx, esi
// 007ea0ae  ffd0                 call eax
// 007ea0b0  837b5400             cmp dword ptr [ebx + 0x54], 0
// 007ea0b4  7507                 jne 0x7ea0bd
// 007ea0b6  8bcb                 mov ecx, ebx
// 007ea0b8  e84f270600           call 0x84c80c
// 007ea0bd  8d4c2434             lea ecx, [esp + 0x34]
// 007ea0c1  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007ea0c7  8b5708               mov edx, dword ptr [edi + 8]
// 007ea0ca  8d4c2434             lea ecx, [esp + 0x34]
// 007ea0ce  51                   push ecx
// 007ea0cf  52                   push edx
// 007ea0d0  8bcb                 mov ecx, ebx
// 007ea0d2  c744243400000000     mov dword ptr [esp + 0x34], 0
// 007ea0da  e8f71d0600           call 0x84bed6
// 007ea0df  8b442418             mov eax, dword ptr [esp + 0x18]
// 007ea0e3  2b4354               sub eax, dword ptr [ebx + 0x54]
// 007ea0e6  b900000000           mov ecx, 0
// 007ea0eb  99                   cdq 
// 007ea0ec  2bc2                 sub eax, edx
// 007ea0ee  8b16                 mov edx, dword ptr [esi]
// 007ea0f0  d1f8                 sar eax, 1
// 007ea0f2  0f98c1               sets cl
// 007ea0f5  6a00                 push 0
// 007ea0f7  8954241c             mov dword ptr [esp + 0x1c], edx
// 007ea0fb  8d5f1c               lea ebx, [edi + 0x1c]
// 007ea0fe  49                   dec ecx
// 007ea0ff  23c8                 and ecx, eax
// 007ea101  8be9                 mov ebp, ecx
// 007ea103  8d4c2438             lea ecx, [esp + 0x38]
// 007ea107  ff1554fb8900         call dword ptr [0x89fb54]
// 007ea10d  50                   push eax
// 007ea10e  8d4c243c             lea ecx, [esp + 0x3c]
// 007ea112  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007ea118  8b0b                 mov ecx, dword ptr [ebx]
// 007ea11a  8b542420             mov edx, dword ptr [esp + 0x20]
// 007ea11e  50                   push eax
// 007ea11f  8b4720               mov eax, dword ptr [edi + 0x20]
// 007ea122  53                   push ebx
// 007ea123  6a02                 push 2
// 007ea125  03c5                 add eax, ebp
// 007ea127  50                   push eax
// 007ea128  8b4268               mov eax, dword ptr [edx + 0x68]
// 007ea12b  83c102               add ecx, 2
// 007ea12e  51                   push ecx
// 007ea12f  8bce                 mov ecx, esi
// 007ea131  ffd0                 call eax
// 007ea133  8b16                 mov edx, dword ptr [esi]
// 007ea135  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007ea139  8b5238               mov edx, dword ptr [edx + 0x38]
// 007ea13c  50                   push eax
// 007ea13d  8bce                 mov ecx, esi
// 007ea13f  ffd2                 call edx
// 007ea141  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007ea145  8b06                 mov eax, dword ptr [esi]
// 007ea147  8b5034               mov edx, dword ptr [eax + 0x34]
// 007ea14a  51                   push ecx
// 007ea14b  8bce                 mov ecx, esi
// 007ea14d  ffd2                 call edx
// 007ea14f  8d4c2434             lea ecx, [esp + 0x34]
// 007ea153  ff1510fd8900         call dword ptr [0x89fd10]
// 007ea159  f6470c04             test byte ptr [edi + 0xc], 4
// 007ea15d  740e                 je 0x7ea16d
// 007ea15f  8b4604               mov eax, dword ptr [esi + 4]
// 007ea162  83c71c               add edi, 0x1c
// 007ea165  57                   push edi
// 007ea166  50                   push eax
// 007ea167  ff15e0ee8900         call dword ptr [0x89eee0]
// 007ea16d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007ea171  64890d00000000       mov dword ptr fs:[0], ecx
// 007ea178  59                   pop ecx
// 007ea179  5f                   pop edi
// 007ea17a  5e                   pop esi
// 007ea17b  5d                   pop ebp
// 007ea17c  5b                   pop ebx
// 007ea17d  83c41c               add esp, 0x1c
// 007ea180  c20400               ret 4
// 007ea183  c744241401000000     mov dword ptr [esp + 0x14], 1
// 007ea18b  b880808000           mov eax, 0x808080
// 007ea190  e9c2feffff           jmp 0x7ea057
// copied from an identical function in another client (function ?DrawItem@CXTPCustomizeToolbarsPageCheckListBox@@MAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCustomizeToolbarsPage.cpp
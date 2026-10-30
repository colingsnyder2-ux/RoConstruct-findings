// roc 2009-06 007bb430  unit: CXTPRibbonBar  size: 689 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007bb430
//
// 007bb430  6aff                 push -1
// 007bb432  6849ac8700           push 0x87ac49
// 007bb437  64a100000000         mov eax, dword ptr fs:[0]
// 007bb43d  50                   push eax
// 007bb43e  51                   push ecx
// 007bb43f  53                   push ebx
// 007bb440  55                   push ebp
// 007bb441  56                   push esi
// 007bb442  57                   push edi
// 007bb443  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007bb448  33c4                 xor eax, esp
// 007bb44a  50                   push eax
// 007bb44b  8d442418             lea eax, [esp + 0x18]
// 007bb44f  64a300000000         mov dword ptr fs:[0], eax
// 007bb455  8bf1                 mov esi, ecx
// 007bb457  6a11                 push 0x11
// 007bb459  ff1534ee8900         call dword ptr [0x89ee34]
// 007bb45f  6685c0               test ax, ax
// 007bb462  0f8cd5010000         jl 0x7bb63d
// 007bb468  8bce                 mov ecx, esi
// 007bb46a  e8211ff7ff           call 0x72d390
// 007bb46f  8be8                 mov ebp, eax
// 007bb471  8b442428             mov eax, dword ptr [esp + 0x28]
// 007bb475  83f812               cmp eax, 0x12
// 007bb478  0f8587000000         jne 0x7bb505
// 007bb47e  8bce                 mov ecx, esi
// 007bb480  e8fbecffff           call 0x7ba180
// 007bb485  85c0                 test eax, eax
// 007bb487  0f8ef6000000         jle 0x7bb583
// 007bb48d  8bcd                 mov ecx, ebp
// 007bb48f  e89cfdf6ff           call 0x72b230
// 007bb494  6a01                 push 1
// 007bb496  8bcd                 mov ecx, ebp
// 007bb498  e8f3f9f6ff           call 0x72ae90
// 007bb49d  8bce                 mov ecx, esi
// 007bb49f  c7454401000000       mov dword ptr [ebp + 0x44], 1
// 007bb4a6  e8e5caffff           call 0x7b7f90
// 007bb4ab  85c0                 test eax, eax
// 007bb4ad  8b06                 mov eax, dword ptr [esi]
// 007bb4af  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 007bb4b5  6a01                 push 1
// 007bb4b7  7410                 je 0x7bb4c9
// 007bb4b9  6a01                 push 1
// 007bb4bb  6a01                 push 1
// 007bb4bd  ffd2                 call edx
// 007bb4bf  b801000000           mov eax, 1
// 007bb4c4  e976010000           jmp 0x7bb63f
// 007bb4c9  6a00                 push 0
// 007bb4cb  6a01                 push 1
// 007bb4cd  ffd2                 call edx
// 007bb4cf  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 007bb4d5  8b9180000000         mov edx, dword ptr [ecx + 0x80]
// 007bb4db  8b06                 mov eax, dword ptr [esi]
// 007bb4dd  8b8050010000         mov eax, dword ptr [eax + 0x150]
// 007bb4e3  6a01                 push 1
// 007bb4e5  52                   push edx
// 007bb4e6  8bce                 mov ecx, esi
// 007bb4e8  ffd0                 call eax
// 007bb4ea  8bb668020000         mov esi, dword ptr [esi + 0x268]
// 007bb4f0  8b16                 mov edx, dword ptr [esi]
// 007bb4f2  8b4270               mov eax, dword ptr [edx + 0x70]
// 007bb4f5  6a01                 push 1
// 007bb4f7  8bce                 mov ecx, esi
// 007bb4f9  ffd0                 call eax
// 007bb4fb  b801000000           mov eax, 1
// 007bb500  e93a010000           jmp 0x7bb63f
// 007bb505  8d48cf               lea ecx, [eax - 0x31]
// 007bb508  83f908               cmp ecx, 8
// 007bb50b  7776                 ja 0x7bb583
// 007bb50d  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 007bb513  83c0cf               add eax, -0x31
// 007bb516  6a00                 push 0
// 007bb518  50                   push eax
// 007bb519  e83200fbff           call 0x76b550
// 007bb51e  8bf8                 mov edi, eax
// 007bb520  85ff                 test edi, edi
// 007bb522  745f                 je 0x7bb583
// 007bb524  8bcf                 mov ecx, edi
// 007bb526  e8850bc9ff           call 0x44c0b0
// 007bb52b  85c0                 test eax, eax
// 007bb52d  7454                 je 0x7bb583
// 007bb52f  8b9f80000000         mov ebx, dword ptr [edi + 0x80]
// 007bb535  8bcd                 mov ecx, ebp
// 007bb537  e8f4fcf6ff           call 0x72b230
// 007bb53c  6a01                 push 1
// 007bb53e  8bcd                 mov ecx, ebp
// 007bb540  e84bf9f6ff           call 0x72ae90
// 007bb545  6a01                 push 1
// 007bb547  c7454402000000       mov dword ptr [ebp + 0x44], 2
// 007bb54e  8b16                 mov edx, dword ptr [esi]
// 007bb550  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 007bb556  6a00                 push 0
// 007bb558  6a01                 push 1
// 007bb55a  8bce                 mov ecx, esi
// 007bb55c  ffd0                 call eax
// 007bb55e  8b16                 mov edx, dword ptr [esi]
// 007bb560  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 007bb566  6a01                 push 1
// 007bb568  53                   push ebx
// 007bb569  8bce                 mov ecx, esi
// 007bb56b  ffd0                 call eax
// 007bb56d  8b17                 mov edx, dword ptr [edi]
// 007bb56f  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 007bb575  8bcf                 mov ecx, edi
// 007bb577  ffd0                 call eax
// 007bb579  b801000000           mov eax, 1
// 007bb57e  e9bc000000           jmp 0x7bb63f
// 007bb583  8bce                 mov ecx, esi
// 007bb585  33db                 xor ebx, ebx
// 007bb587  e8f4ebffff           call 0x7ba180
// 007bb58c  85c0                 test eax, eax
// 007bb58e  0f8ea9000000         jle 0x7bb63d
// 007bb594  53                   push ebx
// 007bb595  8bce                 mov ecx, esi
// 007bb597  e864feffff           call 0x7bb400
// 007bb59c  8d4c2414             lea ecx, [esp + 0x14]
// 007bb5a0  8bf8                 mov edi, eax
// 007bb5a2  51                   push ecx
// 007bb5a3  8bcf                 mov ecx, edi
// 007bb5a5  e8767e0300           call 0x7f3420
// 007bb5aa  8d4c2414             lea ecx, [esp + 0x14]
// 007bb5ae  c744242000000000     mov dword ptr [esp + 0x20], 0
// 007bb5b6  ff155cfb8900         call dword ptr [0x89fb5c]
// 007bb5bc  84c0                 test al, al
// 007bb5be  755b                 jne 0x7bb61b
// 007bb5c0  8bcf                 mov ecx, edi
// 007bb5c2  e8c93ef8ff           call 0x73f490
// 007bb5c7  85c0                 test eax, eax
// 007bb5c9  7450                 je 0x7bb61b
// 007bb5cb  8bcf                 mov ecx, edi
// 007bb5cd  e86eabeeff           call 0x6a6140
// 007bb5d2  85c0                 test eax, eax
// 007bb5d4  7445                 je 0x7bb61b
// 007bb5d6  6a00                 push 0
// 007bb5d8  6a26                 push 0x26
// 007bb5da  8d4c241c             lea ecx, [esp + 0x1c]
// 007bb5de  ff1500008a00         call dword ptr [0x8a0000]
// 007bb5e4  8bf8                 mov edi, eax
// 007bb5e6  83ffff               cmp edi, -1
// 007bb5e9  7e30                 jle 0x7bb61b
// 007bb5eb  8d4c2414             lea ecx, [esp + 0x14]
// 007bb5ef  ff1554fb8900         call dword ptr [0x89fb54]
// 007bb5f5  48                   dec eax
// 007bb5f6  3bf8                 cmp edi, eax
// 007bb5f8  7d21                 jge 0x7bb61b
// 007bb5fa  8b542428             mov edx, dword ptr [esp + 0x28]
// 007bb5fe  52                   push edx
// 007bb5ff  47                   inc edi
// 007bb600  57                   push edi
// 007bb601  8d4c241c             lea ecx, [esp + 0x1c]
// 007bb605  ff15e0f98900         call dword ptr [0x89f9e0]
// 007bb60b  0fb6c0               movzx eax, al
// 007bb60e  50                   push eax
// 007bb60f  e82c97ffff           call 0x7b4d40
// 007bb614  83c408               add esp, 8
// 007bb617  85c0                 test eax, eax
// 007bb619  753a                 jne 0x7bb655
// 007bb61b  8d4c2414             lea ecx, [esp + 0x14]
// 007bb61f  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 007bb627  ff1510fd8900         call dword ptr [0x89fd10]
// 007bb62d  8bce                 mov ecx, esi
// 007bb62f  43                   inc ebx
// 007bb630  e84bebffff           call 0x7ba180
// 007bb635  3bd8                 cmp ebx, eax
// 007bb637  0f8c57ffffff         jl 0x7bb594
// 007bb63d  33c0                 xor eax, eax
// 007bb63f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007bb643  64890d00000000       mov dword ptr fs:[0], ecx
// 007bb64a  59                   pop ecx
// 007bb64b  5f                   pop edi
// 007bb64c  5e                   pop esi
// 007bb64d  5d                   pop ebp
// 007bb64e  5b                   pop ebx
// 007bb64f  83c410               add esp, 0x10
// 007bb652  c20400               ret 4
// 007bb655  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 007bb65c  7507                 jne 0x7bb665
// 007bb65e  8bcd                 mov ecx, ebp
// 007bb660  e8cbfbf6ff           call 0x72b230
// 007bb665  bf01000000           mov edi, 1
// 007bb66a  57                   push edi
// 007bb66b  8bcd                 mov ecx, ebp
// 007bb66d  e81ef8f6ff           call 0x72ae90
// 007bb672  89be30010000         mov dword ptr [esi + 0x130], edi
// 007bb678  53                   push ebx
// 007bb679  8bce                 mov ecx, esi
// 007bb67b  897d44               mov dword ptr [ebp + 0x44], edi
// 007bb67e  e88dc4ffff           call 0x7b7b10
// 007bb683  8b16                 mov edx, dword ptr [esi]
// 007bb685  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 007bb68b  57                   push edi
// 007bb68c  6a00                 push 0
// 007bb68e  57                   push edi
// 007bb68f  8bce                 mov ecx, esi
// 007bb691  ffd0                 call eax
// 007bb693  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 007bb699  8b8880000000         mov ecx, dword ptr [eax + 0x80]
// 007bb69f  8b16                 mov edx, dword ptr [esi]
// 007bb6a1  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 007bb6a7  57                   push edi
// 007bb6a8  51                   push ecx
// 007bb6a9  8bce                 mov ecx, esi
// 007bb6ab  ffd2                 call edx
// 007bb6ad  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 007bb6b3  8b01                 mov eax, dword ptr [ecx]
// 007bb6b5  8b5070               mov edx, dword ptr [eax + 0x70]
// 007bb6b8  57                   push edi
// 007bb6b9  ffd2                 call edx
// 007bb6bb  8bce                 mov ecx, esi
// 007bb6bd  e8cec8ffff           call 0x7b7f90
// 007bb6c2  85c0                 test eax, eax
// 007bb6c4  750a                 jne 0x7bb6d0
// 007bb6c6  6a02                 push 2
// 007bb6c8  56                   push esi
// 007bb6c9  8bcd                 mov ecx, ebp
// 007bb6cb  e8600bf7ff           call 0x72c230
// 007bb6d0  8d4c2414             lea ecx, [esp + 0x14]
// 007bb6d4  ff1510fd8900         call dword ptr [0x89fd10]
// 007bb6da  8bc7                 mov eax, edi
// 007bb6dc  e95effffff           jmp 0x7bb63f
// copied from an identical function in another client (function ?PreviewAccel@CXTPRibbonBar@@UAEHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonBar.cpp
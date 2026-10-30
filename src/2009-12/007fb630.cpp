// roc 2009-12 007fb630  unit: CXTPControlComboBoxList  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fb630
//
// 007fb630  6aff                 push -1
// 007fb632  68798d9500           push 0x958d79
// 007fb637  64a100000000         mov eax, dword ptr fs:[0]
// 007fb63d  50                   push eax
// 007fb63e  53                   push ebx
// 007fb63f  55                   push ebp
// 007fb640  56                   push esi
// 007fb641  57                   push edi
// 007fb642  a10052b600           mov eax, dword ptr [0xb65200]
// 007fb647  33c4                 xor eax, esp
// 007fb649  50                   push eax
// 007fb64a  8d442414             lea eax, [esp + 0x14]
// 007fb64e  64a300000000         mov dword ptr fs:[0], eax
// 007fb654  8be9                 mov ebp, ecx
// 007fb656  8b442428             mov eax, dword ptr [esp + 0x28]
// 007fb65a  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 007fb65e  50                   push eax
// 007fb65f  53                   push ebx
// 007fb660  e8ab670400           call 0x841e10
// 007fb665  837d2000             cmp dword ptr [ebp + 0x20], 0
// 007fb669  8b8b5c020000         mov ecx, dword ptr [ebx + 0x25c]
// 007fb66f  898d5c020000         mov dword ptr [ebp + 0x25c], ecx
// 007fb675  750d                 jne 0x7fb684
// 007fb677  8b5500               mov edx, dword ptr [ebp]
// 007fb67a  8b822c020000         mov eax, dword ptr [edx + 0x22c]
// 007fb680  8bcd                 mov ecx, ebp
// 007fb682  ffd0                 call eax
// 007fb684  8b4320               mov eax, dword ptr [ebx + 0x20]
// 007fb687  85c0                 test eax, eax
// 007fb689  7414                 je 0x7fb69f
// 007fb68b  6a00                 push 0
// 007fb68d  6a00                 push 0
// 007fb68f  688b010000           push 0x18b
// 007fb694  50                   push eax
// 007fb695  ff15c4cb9800         call dword ptr [0x98cbc4]
// 007fb69b  8bf8                 mov edi, eax
// 007fb69d  eb02                 jmp 0x7fb6a1
// 007fb69f  33ff                 xor edi, edi
// 007fb6a1  33f6                 xor esi, esi
// 007fb6a3  85ff                 test edi, edi
// 007fb6a5  765b                 jbe 0x7fb702
// 007fb6a7  8bcd                 mov ecx, ebp
// 007fb6a9  e8c274c2ff           call 0x422b70
// 007fb6ae  8be8                 mov ebp, eax
// 007fb6b0  8d4c2428             lea ecx, [esp + 0x28]
// 007fb6b4  ff1574de9800         call dword ptr [0x98de74]
// 007fb6ba  8d4c2428             lea ecx, [esp + 0x28]
// 007fb6be  51                   push ecx
// 007fb6bf  56                   push esi
// 007fb6c0  8bcb                 mov ecx, ebx
// 007fb6c2  c744242400000000     mov dword ptr [esp + 0x24], 0
// 007fb6ca  e89dad1200           call 0x92646c
// 007fb6cf  8d4c2428             lea ecx, [esp + 0x28]
// 007fb6d3  ff1580de9800         call dword ptr [0x98de80]
// 007fb6d9  8b5520               mov edx, dword ptr [ebp + 0x20]
// 007fb6dc  50                   push eax
// 007fb6dd  6a00                 push 0
// 007fb6df  6880010000           push 0x180
// 007fb6e4  52                   push edx
// 007fb6e5  ff15c4cb9800         call dword ptr [0x98cbc4]
// 007fb6eb  8d4c2428             lea ecx, [esp + 0x28]
// 007fb6ef  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 007fb6f7  ff15c0de9800         call dword ptr [0x98dec0]
// 007fb6fd  46                   inc esi
// 007fb6fe  3bf7                 cmp esi, edi
// 007fb700  72ae                 jb 0x7fb6b0
// 007fb702  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007fb706  64890d00000000       mov dword ptr fs:[0], ecx
// 007fb70d  59                   pop ecx
// 007fb70e  5f                   pop edi
// 007fb70f  5e                   pop esi
// 007fb710  5d                   pop ebp
// 007fb711  5b                   pop ebx
// 007fb712  83c40c               add esp, 0xc
// 007fb715  c20800               ret 8
// copied from an identical function in another client (function ?Copy@CXTPControlComboBoxList@@MAEXPAVCXTPCommandBar@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp
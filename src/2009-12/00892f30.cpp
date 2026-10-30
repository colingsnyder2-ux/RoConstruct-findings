// roc 2009-12 00892f30  unit: CXTPToolBar::CControlButtonHide  size: 662 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00892f30
//
// 00892f30  6aff                 push -1
// 00892f32  6862149600           push 0x961462
// 00892f37  64a100000000         mov eax, dword ptr fs:[0]
// 00892f3d  50                   push eax
// 00892f3e  83ec10               sub esp, 0x10
// 00892f41  53                   push ebx
// 00892f42  55                   push ebp
// 00892f43  56                   push esi
// 00892f44  57                   push edi
// 00892f45  a10052b600           mov eax, dword ptr [0xb65200]
// 00892f4a  33c4                 xor eax, esp
// 00892f4c  50                   push eax
// 00892f4d  8d442424             lea eax, [esp + 0x24]
// 00892f51  64a300000000         mov dword ptr fs:[0], eax
// 00892f57  8bf1                 mov esi, ecx
// 00892f59  89742418             mov dword ptr [esp + 0x18], esi
// 00892f5d  8b442438             mov eax, dword ptr [esp + 0x38]
// 00892f61  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00892f65  8b2dc4cb9800         mov ebp, dword ptr [0x98cbc4]
// 00892f6b  6a00                 push 0
// 00892f6d  6a00                 push 0
// 00892f6f  6860280000           push 0x2860
// 00892f74  53                   push ebx
// 00892f75  898684010000         mov dword ptr [esi + 0x184], eax
// 00892f7b  ffd5                 call ebp
// 00892f7d  8bf8                 mov edi, eax
// 00892f7f  85ff                 test edi, edi
// 00892f81  753d                 jne 0x892fc0
// 00892f83  50                   push eax
// 00892f84  50                   push eax
// 00892f85  6a7f                 push 0x7f
// 00892f87  53                   push ebx
// 00892f88  ffd5                 call ebp
// 00892f8a  8bf8                 mov edi, eax
// 00892f8c  85ff                 test edi, edi
// 00892f8e  7530                 jne 0x892fc0
// 00892f90  50                   push eax
// 00892f91  6a01                 push 1
// 00892f93  6a7f                 push 0x7f
// 00892f95  53                   push ebx
// 00892f96  ffd5                 call ebp
// 00892f98  8bf8                 mov edi, eax
// 00892f9a  85ff                 test edi, edi
// 00892f9c  7522                 jne 0x892fc0
// 00892f9e  6ade                 push -0x22
// 00892fa0  53                   push ebx
// 00892fa1  ff1568cb9800         call dword ptr [0x98cb68]
// 00892fa7  8bf8                 mov edi, eax
// 00892fa9  85ff                 test edi, edi
// 00892fab  7513                 jne 0x892fc0
// 00892fad  e86c0bf6ff           call 0x7f3b1e
// 00892fb2  68057f0000           push 0x7f05
// 00892fb7  57                   push edi
// 00892fb8  ff1574cc9800         call dword ptr [0x98cc74]
// 00892fbe  8bf8                 mov edi, eax
// 00892fc0  8b8688010000         mov eax, dword ptr [esi + 0x188]
// 00892fc6  85c0                 test eax, eax
// 00892fc8  7411                 je 0x892fdb
// 00892fca  50                   push eax
// 00892fcb  ff15f8c99800         call dword ptr [0x98c9f8]
// 00892fd1  c7868801000000000000 mov dword ptr [esi + 0x188], 0
// 00892fdb  85ff                 test edi, edi
// 00892fdd  7423                 je 0x893002
// 00892fdf  8d4c241c             lea ecx, [esp + 0x1c]
// 00892fe3  57                   push edi
// 00892fe4  51                   push ecx
// 00892fe5  e8f67bf7ff           call 0x80abe0
// 00892fea  8b5004               mov edx, dword ptr [eax + 4]
// 00892fed  8b00                 mov eax, dword ptr [eax]
// 00892fef  6a10                 push 0x10
// 00892ff1  52                   push edx
// 00892ff2  50                   push eax
// 00892ff3  57                   push edi
// 00892ff4  e8777cf7ff           call 0x80ac70
// 00892ff9  83c418               add esp, 0x18
// 00892ffc  898688010000         mov dword ptr [esi + 0x188], eax
// 00893002  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00893008  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0089300e  e8cd22fbff           call 0x8452e0
// 00893013  8b542438             mov edx, dword ptr [esp + 0x38]
// 00893017  52                   push edx
// 00893018  e8cd0ef6ff           call 0x7f3eea
// 0089301d  8bd8                 mov ebx, eax
// 0089301f  8b4304               mov eax, dword ptr [ebx + 4]
// 00893022  33ed                 xor ebp, ebp
// 00893024  50                   push eax
// 00893025  896c2418             mov dword ptr [esp + 0x18], ebp
// 00893029  ff1540cc9800         call dword ptr [0x98cc40]
// 0089302f  85c0                 test eax, eax
// 00893031  0f8e79010000         jle 0x8931b0
// 00893037  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0089303a  55                   push ebp
// 0089303b  51                   push ecx
// 0089303c  ff1544cc9800         call dword ptr [0x98cc44]
// 00893042  8944241c             mov dword ptr [esp + 0x1c], eax
// 00893046  85c0                 test eax, eax
// 00893048  750d                 jne 0x893057
// 0089304a  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00893052  e946010000           jmp 0x89319d
// 00893057  8db80010ffff         lea edi, [eax - 0xf000]
// 0089305d  81ffef010000         cmp edi, 0x1ef
// 00893063  0f87fd000000         ja 0x893166
// 00893069  e8e2d1ffff           call 0x890250
// 0089306e  8bf0                 mov esi, eax
// 00893070  6a08                 push 8
// 00893072  8bce                 mov ecx, esi
// 00893074  e8e72ff6ff           call 0x7f6060
// 00893079  8b542418             mov edx, dword ptr [esp + 0x18]
// 0089307d  8b8278010000         mov eax, dword ptr [edx + 0x178]
// 00893083  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00893087  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 0089308d  6a00                 push 0
// 0089308f  6aff                 push -1
// 00893091  6a00                 push 0
// 00893093  52                   push edx
// 00893094  56                   push esi
// 00893095  e8564ffbff           call 0x847ff0
// 0089309a  8d4c2434             lea ecx, [esp + 0x34]
// 0089309e  ff1574de9800         call dword ptr [0x98de74]
// 008930a4  6800040000           push 0x400
// 008930a9  8d442438             lea eax, [esp + 0x38]
// 008930ad  50                   push eax
// 008930ae  55                   push ebp
// 008930af  8bcb                 mov ecx, ebx
// 008930b1  c744243800000000     mov dword ptr [esp + 0x38], 0
// 008930b9  e80e370900           call 0x9267cc
// 008930be  8d4c2434             lea ecx, [esp + 0x34]
// 008930c2  ff1580de9800         call dword ptr [0x98de80]
// 008930c8  50                   push eax
// 008930c9  8bce                 mov ecx, esi
// 008930cb  e86036f6ff           call 0x7f6730
// 008930d0  8d4c2438             lea ecx, [esp + 0x38]
// 008930d4  ff1574de9800         call dword ptr [0x98de74]
// 008930da  c1ef04               shr edi, 4
// 008930dd  81c700ef0000         add edi, 0xef00
// 008930e3  57                   push edi
// 008930e4  8d4c243c             lea ecx, [esp + 0x3c]
// 008930e8  c644243001           mov byte ptr [esp + 0x30], 1
// 008930ed  ff1560cf9800         call dword ptr [0x98cf60]
// 008930f3  8d4c2438             lea ecx, [esp + 0x38]
// 008930f7  ff1580de9800         call dword ptr [0x98de80]
// 008930fd  50                   push eax
// 008930fe  8d8eec000000         lea ecx, [esi + 0xec]
// 00893104  ff155cde9800         call dword ptr [0x98de5c]
// 0089310a  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0089310d  6a01                 push 1
// 0089310f  6a01                 push 1
// 00893111  51                   push ecx
// 00893112  ff1558cb9800         call dword ptr [0x98cb58]
// 00893118  33d2                 xor edx, edx
// 0089311a  3bc5                 cmp eax, ebp
// 0089311c  0f94c2               sete dl
// 0089311f  8bce                 mov ecx, esi
// 00893121  52                   push edx
// 00893122  e8192ff6ff           call 0x7f6040
// 00893127  8b4304               mov eax, dword ptr [ebx + 4]
// 0089312a  6800040000           push 0x400
// 0089312f  55                   push ebp
// 00893130  50                   push eax
// 00893131  ff15f0c99800         call dword ptr [0x98c9f0]
// 00893137  8b16                 mov edx, dword ptr [esi]
// 00893139  d1e8                 shr eax, 1
// 0089313b  f7d0                 not eax
// 0089313d  83e001               and eax, 1
// 00893140  50                   push eax
// 00893141  8b4268               mov eax, dword ptr [edx + 0x68]
// 00893144  8bce                 mov ecx, esi
// 00893146  ffd0                 call eax
// 00893148  8d4c2438             lea ecx, [esp + 0x38]
// 0089314c  ff15c0de9800         call dword ptr [0x98dec0]
// 00893152  8d4c2434             lea ecx, [esp + 0x34]
// 00893156  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0089315e  ff15c0de9800         call dword ptr [0x98dec0]
// 00893164  eb15                 jmp 0x89317b
// 00893166  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0089316c  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 00893172  55                   push ebp
// 00893173  53                   push ebx
// 00893174  e8073bfbff           call 0x846c80
// 00893179  8bf0                 mov esi, eax
// 0089317b  85f6                 test esi, esi
// 0089317d  741a                 je 0x893199
// 0089317f  837c241400           cmp dword ptr [esp + 0x14], 0
// 00893184  7413                 je 0x893199
// 00893186  8b16                 mov edx, dword ptr [esi]
// 00893188  8b4264               mov eax, dword ptr [edx + 0x64]
// 0089318b  6a01                 push 1
// 0089318d  8bce                 mov ecx, esi
// 0089318f  ffd0                 call eax
// 00893191  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00893199  8b742418             mov esi, dword ptr [esp + 0x18]
// 0089319d  8b4b04               mov ecx, dword ptr [ebx + 4]
// 008931a0  51                   push ecx
// 008931a1  45                   inc ebp
// 008931a2  ff1540cc9800         call dword ptr [0x98cc40]
// 008931a8  3be8                 cmp ebp, eax
// 008931aa  0f8c87feffff         jl 0x893037
// 008931b0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008931b4  64890d00000000       mov dword ptr fs:[0], ecx
// 008931bb  59                   pop ecx
// 008931bc  5f                   pop edi
// 008931bd  5e                   pop esi
// 008931be  5d                   pop ebp
// 008931bf  5b                   pop ebx
// 008931c0  83c41c               add esp, 0x1c
// 008931c3  c20800               ret 8
// copied from an identical function in another client (function ?SetMDISysMenu@CControlMDISysMenuPopup@CXTPMenuBar@@QAEXPAUHWND__@@PAUHMENU__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPMenuBar.cpp
// roc 2009-12 0085bc40  unit: CXTPStatusBarPane  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085bc40
//
// 0085bc40  83ec24               sub esp, 0x24
// 0085bc43  53                   push ebx
// 0085bc44  57                   push edi
// 0085bc45  8bf9                 mov edi, ecx
// 0085bc47  57                   push edi
// 0085bc48  8d4c2420             lea ecx, [esp + 0x20]
// 0085bc4c  e87ff6feff           call 0x84b2d0
// 0085bc51  6a2d                 push 0x2d
// 0085bc53  ff15dccb9800         call dword ptr [0x98cbdc]
// 0085bc59  33db                 xor ebx, ebx
// 0085bc5b  399fa0000000         cmp dword ptr [edi + 0xa0], ebx
// 0085bc61  89442408             mov dword ptr [esp + 8], eax
// 0085bc65  7e7d                 jle 0x85bce4
// 0085bc67  55                   push ebp
// 0085bc68  8b2d18ca9800         mov ebp, dword ptr [0x98ca18]
// 0085bc6e  56                   push esi
// 0085bc6f  90                   nop 
// 0085bc70  53                   push ebx
// 0085bc71  8bcf                 mov ecx, edi
// 0085bc73  e888f6ffff           call 0x85b300
// 0085bc78  8bf0                 mov esi, eax
// 0085bc7a  8b4644               mov eax, dword ptr [esi + 0x44]
// 0085bc7d  85c0                 test eax, eax
// 0085bc7f  7458                 je 0x85bcd9
// 0085bc81  50                   push eax
// 0085bc82  ff1584cc9800         call dword ptr [0x98cc84]
// 0085bc88  85c0                 test eax, eax
// 0085bc8a  744d                 je 0x85bcd9
// 0085bc8c  8d442414             lea eax, [esp + 0x14]
// 0085bc90  50                   push eax
// 0085bc91  53                   push ebx
// 0085bc92  8bcf                 mov ecx, edi
// 0085bc94  e8e7fdffff           call 0x85ba80
// 0085bc99  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0085bc9c  c1e908               shr ecx, 8
// 0085bc9f  f7d1                 not ecx
// 0085bca1  f6c101               test cl, 1
// 0085bca4  7413                 je 0x85bcb9
// 0085bca6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085bcaa  f7d8                 neg eax
// 0085bcac  50                   push eax
// 0085bcad  50                   push eax
// 0085bcae  8d54241c             lea edx, [esp + 0x1c]
// 0085bcb2  52                   push edx
// 0085bcb3  ff1558ca9800         call dword ptr [0x98ca58]
// 0085bcb9  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085bcbd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0085bcc1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0085bcc5  6a01                 push 1
// 0085bcc7  2bc8                 sub ecx, eax
// 0085bcc9  51                   push ecx
// 0085bcca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085bcce  2bd1                 sub edx, ecx
// 0085bcd0  52                   push edx
// 0085bcd1  50                   push eax
// 0085bcd2  8b4644               mov eax, dword ptr [esi + 0x44]
// 0085bcd5  51                   push ecx
// 0085bcd6  50                   push eax
// 0085bcd7  ffd5                 call ebp
// 0085bcd9  43                   inc ebx
// 0085bcda  3b9fa0000000         cmp ebx, dword ptr [edi + 0xa0]
// 0085bce0  7c8e                 jl 0x85bc70
// 0085bce2  5e                   pop esi
// 0085bce3  5d                   pop ebp
// 0085bce4  5f                   pop edi
// 0085bce5  5b                   pop ebx
// 0085bce6  83c424               add esp, 0x24
// 0085bce9  c3                   ret 
// copied from an identical function in another client (function ?PositionControls@CXTPStatusBar@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp
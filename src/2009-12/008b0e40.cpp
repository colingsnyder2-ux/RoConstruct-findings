// roc 2009-12 008b0e40  unit: CXTPDockingPaneTabbedContainer  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0e40
//
// 008b0e40  6aff                 push -1
// 008b0e42  68342f9600           push 0x962f34
// 008b0e47  64a100000000         mov eax, dword ptr fs:[0]
// 008b0e4d  50                   push eax
// 008b0e4e  83ec0c               sub esp, 0xc
// 008b0e51  53                   push ebx
// 008b0e52  56                   push esi
// 008b0e53  a10052b600           mov eax, dword ptr [0xb65200]
// 008b0e58  33c4                 xor eax, esp
// 008b0e5a  50                   push eax
// 008b0e5b  8d442418             lea eax, [esp + 0x18]
// 008b0e5f  64a300000000         mov dword ptr fs:[0], eax
// 008b0e65  33f6                 xor esi, esi
// 008b0e67  8974240c             mov dword ptr [esp + 0xc], esi
// 008b0e6b  39b1a4010000         cmp dword ptr [ecx + 0x1a4], esi
// 008b0e71  741b                 je 0x8b0e8e
// 008b0e73  8b89a4010000         mov ecx, dword ptr [ecx + 0x1a4]
// 008b0e79  8b01                 mov eax, dword ptr [ecx]
// 008b0e7b  8b405c               mov eax, dword ptr [eax + 0x5c]
// 008b0e7e  8d542414             lea edx, [esp + 0x14]
// 008b0e82  52                   push edx
// 008b0e83  ffd0                 call eax
// 008b0e85  89742420             mov dword ptr [esp + 0x20], esi
// 008b0e89  8d5e01               lea ebx, [esi + 1]
// 008b0e8c  eb1c                 jmp 0x8b0eaa
// 008b0e8e  6856fd9900           push 0x99fd56
// 008b0e93  8d4c2414             lea ecx, [esp + 0x14]
// 008b0e97  ff15b8de9800         call dword ptr [0x98deb8]
// 008b0e9d  c744242001000000     mov dword ptr [esp + 0x20], 1
// 008b0ea5  bb02000000           mov ebx, 2
// 008b0eaa  8b742428             mov esi, dword ptr [esp + 0x28]
// 008b0eae  50                   push eax
// 008b0eaf  8bce                 mov ecx, esi
// 008b0eb1  895c2410             mov dword ptr [esp + 0x10], ebx
// 008b0eb5  ff1594de9800         call dword ptr [0x98de94]
// 008b0ebb  83cb04               or ebx, 4
// 008b0ebe  f6c302               test bl, 2
// 008b0ec1  740d                 je 0x8b0ed0
// 008b0ec3  8d4c2410             lea ecx, [esp + 0x10]
// 008b0ec7  83e3fd               and ebx, 0xfffffffd
// 008b0eca  ff15c0de9800         call dword ptr [0x98dec0]
// 008b0ed0  f6c301               test bl, 1
// 008b0ed3  740a                 je 0x8b0edf
// 008b0ed5  8d4c2414             lea ecx, [esp + 0x14]
// 008b0ed9  ff15c0de9800         call dword ptr [0x98dec0]
// 008b0edf  8bc6                 mov eax, esi
// 008b0ee1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b0ee5  64890d00000000       mov dword ptr fs:[0], ecx
// 008b0eec  59                   pop ecx
// 008b0eed  5e                   pop esi
// 008b0eee  5b                   pop ebx
// 008b0eef  83c418               add esp, 0x18
// 008b0ef2  c20400               ret 4
// copied from an identical function in another client (function ?GetTitle@CXTPDockingPaneTabbedContainer@@IBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
// roc 2009-12 007fb420  unit: CXTPControlComboBoxList  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fb420
//
// 007fb420  83ec58               sub esp, 0x58
// 007fb423  a10052b600           mov eax, dword ptr [0xb65200]
// 007fb428  33c4                 xor eax, esp
// 007fb42a  89442454             mov dword ptr [esp + 0x54], eax
// 007fb42e  56                   push esi
// 007fb42f  8bf1                 mov esi, ecx
// 007fb431  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007fb434  8b01                 mov eax, dword ptr [ecx]
// 007fb436  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 007fb43c  57                   push edi
// 007fb43d  8d542408             lea edx, [esp + 8]
// 007fb441  52                   push edx
// 007fb442  ffd0                 call eax
// 007fb444  8bce                 mov ecx, esi
// 007fb446  e835e8ffff           call 0x7f9c80
// 007fb44b  8b4808               mov ecx, dword ptr [eax + 8]
// 007fb44e  8b4620               mov eax, dword ptr [esi + 0x20]
// 007fb451  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 007fb457  f7d9                 neg ecx
// 007fb459  8d542408             lea edx, [esp + 8]
// 007fb45d  52                   push edx
// 007fb45e  1bc9                 sbb ecx, ecx
// 007fb460  6a00                 push 0
// 007fb462  83e118               and ecx, 0x18
// 007fb465  6844040000           push 0x444
// 007fb46a  83c13c               add ecx, 0x3c
// 007fb46d  50                   push eax
// 007fb46e  894c2418             mov dword ptr [esp + 0x18], ecx
// 007fb472  ffd7                 call edi
// 007fb474  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007fb478  8b5620               mov edx, dword ptr [esi + 0x20]
// 007fb47b  51                   push ecx
// 007fb47c  6a00                 push 0
// 007fb47e  6843040000           push 0x443
// 007fb483  52                   push edx
// 007fb484  ffd7                 call edi
// 007fb486  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007fb48a  5f                   pop edi
// 007fb48b  5e                   pop esi
// 007fb48c  33cc                 xor ecx, esp
// 007fb48e  e8079fffff           call 0x7f539a
// 007fb493  83c458               add esp, 0x58
// 007fb496  c3                   ret 
// copied from an identical function in another client (function ?UpdateCharFormat@CXTPControlComboBoxEditCtrl@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
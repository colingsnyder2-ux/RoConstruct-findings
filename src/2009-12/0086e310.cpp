// roc 2009-12 0086e310  unit: CXTPResourceManager  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086e310
//
// 0086e310  6aff                 push -1
// 0086e312  6899869500           push 0x958699
// 0086e317  64a100000000         mov eax, dword ptr fs:[0]
// 0086e31d  50                   push eax
// 0086e31e  51                   push ecx
// 0086e31f  56                   push esi
// 0086e320  a10052b600           mov eax, dword ptr [0xb65200]
// 0086e325  33c4                 xor eax, esp
// 0086e327  50                   push eax
// 0086e328  8d44240c             lea eax, [esp + 0xc]
// 0086e32c  64a300000000         mov dword ptr fs:[0], eax
// 0086e332  8bf1                 mov esi, ecx
// 0086e334  8d4c2408             lea ecx, [esp + 8]
// 0086e338  ff1574de9800         call dword ptr [0x98de74]
// 0086e33e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0086e342  8b06                 mov eax, dword ptr [esi]
// 0086e344  8b4008               mov eax, dword ptr [eax + 8]
// 0086e347  51                   push ecx
// 0086e348  8d54240c             lea edx, [esp + 0xc]
// 0086e34c  52                   push edx
// 0086e34d  8bce                 mov ecx, esi
// 0086e34f  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0086e357  ffd0                 call eax
// 0086e359  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0086e35d  6a00                 push 0
// 0086e35f  51                   push ecx
// 0086e360  8d4c2410             lea ecx, [esp + 0x10]
// 0086e364  ff1580de9800         call dword ptr [0x98de80]
// 0086e36a  50                   push eax
// 0086e36b  e8a85af8ff           call 0x7f3e18
// 0086e370  8d4c2408             lea ecx, [esp + 8]
// 0086e374  8bf0                 mov esi, eax
// 0086e376  ff15c0de9800         call dword ptr [0x98dec0]
// 0086e37c  8bc6                 mov eax, esi
// 0086e37e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086e382  64890d00000000       mov dword ptr fs:[0], ecx
// 0086e389  59                   pop ecx
// 0086e38a  5e                   pop esi
// 0086e38b  83c410               add esp, 0x10
// 0086e38e  c20800               ret 8
// copied from an identical function in another client (function ?ShowMessageBox@CXTPResourceManager@@QAEHII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPResourceManager.cpp
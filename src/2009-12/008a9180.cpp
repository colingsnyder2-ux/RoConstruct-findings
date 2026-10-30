// roc 2009-12 008a9180  unit: CXTPDockingPaneLayout  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a9180
//
// 008a9180  6aff                 push -1
// 008a9182  68689f9500           push 0x959f68
// 008a9187  64a100000000         mov eax, dword ptr fs:[0]
// 008a918d  50                   push eax
// 008a918e  83ec48               sub esp, 0x48
// 008a9191  56                   push esi
// 008a9192  a10052b600           mov eax, dword ptr [0xb65200]
// 008a9197  33c4                 xor eax, esp
// 008a9199  50                   push eax
// 008a919a  8d442450             lea eax, [esp + 0x50]
// 008a919e  64a300000000         mov dword ptr fs:[0], eax
// 008a91a4  8bf1                 mov esi, ecx
// 008a91a6  8b442460             mov eax, dword ptr [esp + 0x60]
// 008a91aa  50                   push eax
// 008a91ab  8d4c240c             lea ecx, [esp + 0xc]
// 008a91af  e8ec88faff           call 0x851aa0
// 008a91b4  8d4c2408             lea ecx, [esp + 8]
// 008a91b8  51                   push ecx
// 008a91b9  8bce                 mov ecx, esi
// 008a91bb  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 008a91c3  e888ffffff           call 0x8a9150
// 008a91c8  8d4c2408             lea ecx, [esp + 8]
// 008a91cc  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 008a91d4  e8976efaff           call 0x850070
// 008a91d9  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008a91dd  64890d00000000       mov dword ptr fs:[0], ecx
// 008a91e4  59                   pop ecx
// 008a91e5  5e                   pop esi
// 008a91e6  83c454               add esp, 0x54
// 008a91e9  c20400               ret 4
// copied from an identical function in another client (function ?Serialize@CXTPImageManager@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
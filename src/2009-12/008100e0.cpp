// roc 2009-12 008100e0  unit: CXTPImageManager  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008100e0
//
// 008100e0  6aff                 push -1
// 008100e2  68689f9500           push 0x959f68
// 008100e7  64a100000000         mov eax, dword ptr fs:[0]
// 008100ed  50                   push eax
// 008100ee  83ec48               sub esp, 0x48
// 008100f1  56                   push esi
// 008100f2  a10052b600           mov eax, dword ptr [0xb65200]
// 008100f7  33c4                 xor eax, esp
// 008100f9  50                   push eax
// 008100fa  8d442450             lea eax, [esp + 0x50]
// 008100fe  64a300000000         mov dword ptr fs:[0], eax
// 00810104  8bf1                 mov esi, ecx
// 00810106  8b442460             mov eax, dword ptr [esp + 0x60]
// 0081010a  50                   push eax
// 0081010b  8d4c240c             lea ecx, [esp + 0xc]
// 0081010f  e88c190400           call 0x851aa0
// 00810114  8d4c2408             lea ecx, [esp + 8]
// 00810118  51                   push ecx
// 00810119  8bce                 mov ecx, esi
// 0081011b  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00810123  e838feffff           call 0x80ff60
// 00810128  8d4c2408             lea ecx, [esp + 8]
// 0081012c  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 00810134  e837ff0300           call 0x850070
// 00810139  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0081013d  64890d00000000       mov dword ptr fs:[0], ecx
// 00810144  59                   pop ecx
// 00810145  5e                   pop esi
// 00810146  83c454               add esp, 0x54
// 00810149  c20400               ret 4
// copied from an identical function in another client (function ?Serialize@CXTPImageManager@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
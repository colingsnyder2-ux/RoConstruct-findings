// roc 2009-06 007961c0  unit: CXTPRibbonTheme  size: 398 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007961c0
//
// 007961c0  83ec60               sub esp, 0x60
// 007961c3  53                   push ebx
// 007961c4  55                   push ebp
// 007961c5  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 007961c9  56                   push esi
// 007961ca  57                   push edi
// 007961cb  8bf1                 mov esi, ecx
// 007961cd  55                   push ebp
// 007961ce  8d4c2414             lea ecx, [esp + 0x14]
// 007961d2  e8f9a2fdff           call 0x7704d0
// 007961d7  8bcd                 mov ecx, ebp
// 007961d9  e8a2180200           call 0x7b7a80
// 007961de  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007961e2  85c0                 test eax, eax
// 007961e4  740a                 je 0x7961f0
// 007961e6  038ec0050000         add ecx, dword ptr [esi + 0x5c0]
// 007961ec  894c2414             mov dword ptr [esp + 0x14], ecx
// 007961f0  8b542410             mov edx, dword ptr [esp + 0x10]
// 007961f4  8b8650060000         mov eax, dword ptr [esi + 0x650]
// 007961fa  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007961fe  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 00796202  03c1                 add eax, ecx
// 00796204  894c2424             mov dword ptr [esp + 0x24], ecx
// 00796208  8b8e6c060000         mov ecx, dword ptr [esi + 0x66c]
// 0079620e  89542420             mov dword ptr [esp + 0x20], edx
// 00796212  89542430             mov dword ptr [esp + 0x30], edx
// 00796216  51                   push ecx
// 00796217  89442430             mov dword ptr [esp + 0x30], eax
// 0079621b  89442438             mov dword ptr [esp + 0x38], eax
// 0079621f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00796223  8d542424             lea edx, [esp + 0x24]
// 00796227  52                   push edx
// 00796228  8bcb                 mov ecx, ebx
// 0079622a  897c2430             mov dword ptr [esp + 0x30], edi
// 0079622e  897c2440             mov dword ptr [esp + 0x40], edi
// 00796232  89442444             mov dword ptr [esp + 0x44], eax
// 00796236  e89535f8ff           call 0x7197d0
// 0079623b  8b866c060000         mov eax, dword ptr [esi + 0x66c]
// 00796241  50                   push eax
// 00796242  8d4c2434             lea ecx, [esp + 0x34]
// 00796246  51                   push ecx
// 00796247  8bcb                 mov ecx, ebx
// 00796249  e88235f8ff           call 0x7197d0
// 0079624e  8bcd                 mov ecx, ebp
// 00796250  e87b210200           call 0x7b83d0
// 00796255  85c0                 test eax, eax
// 00796257  0f8491000000         je 0x7962ee
// 0079625d  8b952c020000         mov edx, dword ptr [ebp + 0x22c]
// 00796263  8b8d34020000         mov ecx, dword ptr [ebp + 0x234]
// 00796269  8b8530020000         mov eax, dword ptr [ebp + 0x230]
// 0079626f  89542440             mov dword ptr [esp + 0x40], edx
// 00796273  8b9538020000         mov edx, dword ptr [ebp + 0x238]
// 00796279  894c2448             mov dword ptr [esp + 0x48], ecx
// 0079627d  6828079000           push 0x900728
// 00796282  8bce                 mov ecx, esi
// 00796284  89442448             mov dword ptr [esp + 0x48], eax
// 00796288  89542450             mov dword ptr [esp + 0x50], edx
// 0079628c  e82fdb0000           call 0x7a3dc0
// 00796291  8bf8                 mov edi, eax
// 00796293  85ff                 test edi, edi
// 00796295  7457                 je 0x7962ee
// 00796297  6a01                 push 1
// 00796299  6a00                 push 0
// 0079629b  8d442468             lea eax, [esp + 0x68]
// 0079629f  bd03000000           mov ebp, 3
// 007962a4  50                   push eax
// 007962a5  8bcf                 mov ecx, edi
// 007962a7  896c2468             mov dword ptr [esp + 0x68], ebp
// 007962ab  e810fb0600           call 0x805dc0
// 007962b0  83ec10               sub esp, 0x10
// 007962b3  8bcc                 mov ecx, esp
// 007962b5  8929                 mov dword ptr [ecx], ebp
// 007962b7  8bd5                 mov edx, ebp
// 007962b9  895104               mov dword ptr [ecx + 4], edx
// 007962bc  895108               mov dword ptr [ecx + 8], edx
// 007962bf  89510c               mov dword ptr [ecx + 0xc], edx
// 007962c2  8b10                 mov edx, dword ptr [eax]
// 007962c4  83ec10               sub esp, 0x10
// 007962c7  8bcc                 mov ecx, esp
// 007962c9  8911                 mov dword ptr [ecx], edx
// 007962cb  8b5004               mov edx, dword ptr [eax + 4]
// 007962ce  895104               mov dword ptr [ecx + 4], edx
// 007962d1  8b5008               mov edx, dword ptr [eax + 8]
// 007962d4  8b400c               mov eax, dword ptr [eax + 0xc]
// 007962d7  895108               mov dword ptr [ecx + 8], edx
// 007962da  89410c               mov dword ptr [ecx + 0xc], eax
// 007962dd  8d4c2460             lea ecx, [esp + 0x60]
// 007962e1  51                   push ecx
// 007962e2  53                   push ebx
// 007962e3  8bcf                 mov ecx, edi
// 007962e5  e8a6f30600           call 0x805690
// 007962ea  8b6c2478             mov ebp, dword ptr [esp + 0x78]
// 007962ee  8bcd                 mov ecx, ebp
// 007962f0  e81b190200           call 0x7b7c10
// 007962f5  85c0                 test eax, eax
// 007962f7  754b                 jne 0x796344
// 007962f9  8bcd                 mov ecx, ebp
// 007962fb  e8d0200200           call 0x7b83d0
// 00796300  85c0                 test eax, eax
// 00796302  7540                 jne 0x796344
// 00796304  8b9680060000         mov edx, dword ptr [esi + 0x680]
// 0079630a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0079630e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00796312  52                   push edx
// 00796313  8b542414             mov edx, dword ptr [esp + 0x14]
// 00796317  50                   push eax
// 00796318  83c1fe               add ecx, -2
// 0079631b  51                   push ecx
// 0079631c  52                   push edx
// 0079631d  53                   push ebx
// 0079631e  8bce                 mov ecx, esi
// 00796320  e88bc6f8ff           call 0x7229b0
// 00796325  8b867c060000         mov eax, dword ptr [esi + 0x67c]
// 0079632b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0079632f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00796333  50                   push eax
// 00796334  8b442414             mov eax, dword ptr [esp + 0x14]
// 00796338  51                   push ecx
// 00796339  4a                   dec edx
// 0079633a  52                   push edx
// 0079633b  50                   push eax
// 0079633c  53                   push ebx
// 0079633d  8bce                 mov ecx, esi
// 0079633f  e86cc6f8ff           call 0x7229b0
// 00796344  5f                   pop edi
// 00796345  5e                   pop esi
// 00796346  5d                   pop ebp
// 00796347  5b                   pop ebx
// 00796348  83c460               add esp, 0x60
// 0079634b  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillRibbonBar@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp

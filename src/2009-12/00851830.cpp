// roc 2009-12 00851830  unit: CXTPPropExchange  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00851830
//
// 00851830  6aff                 push -1
// 00851832  68dad99500           push 0x95d9da
// 00851837  64a100000000         mov eax, dword ptr fs:[0]
// 0085183d  50                   push eax
// 0085183e  83ec08               sub esp, 8
// 00851841  56                   push esi
// 00851842  a10052b600           mov eax, dword ptr [0xb65200]
// 00851847  33c4                 xor eax, esp
// 00851849  50                   push eax
// 0085184a  8d442410             lea eax, [esp + 0x10]
// 0085184e  64a300000000         mov dword ptr fs:[0], eax
// 00851854  83792800             cmp dword ptr [ecx + 0x28], 0
// 00851858  7576                 jne 0x8518d0
// 0085185a  6a28                 push 0x28
// 0085185c  e8ff1ffaff           call 0x7f3860
// 00851861  83c404               add esp, 4
// 00851864  89442420             mov dword ptr [esp + 0x20], eax
// 00851868  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00851870  85c0                 test eax, eax
// 00851872  7410                 je 0x851884
// 00851874  6800040000           push 0x400
// 00851879  8bc8                 mov ecx, eax
// 0085187b  e8184d0d00           call 0x926598
// 00851880  8bf0                 mov esi, eax
// 00851882  eb02                 jmp 0x851886
// 00851884  33f6                 xor esi, esi
// 00851886  6a48                 push 0x48
// 00851888  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00851890  e8cb1ffaff           call 0x7f3860
// 00851895  83c404               add esp, 4
// 00851898  89442420             mov dword ptr [esp + 0x20], eax
// 0085189c  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008518a4  85c0                 test eax, eax
// 008518a6  0f84cc000000         je 0x851978
// 008518ac  6a00                 push 0
// 008518ae  6800100000           push 0x1000
// 008518b3  6a00                 push 0
// 008518b5  56                   push esi
// 008518b6  8bc8                 mov ecx, eax
// 008518b8  e8d54c0d00           call 0x926592
// 008518bd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008518c1  64890d00000000       mov dword ptr fs:[0], ecx
// 008518c8  59                   pop ecx
// 008518c9  5e                   pop esi
// 008518ca  83c414               add esp, 0x14
// 008518cd  c20400               ret 4
// 008518d0  8d442408             lea eax, [esp + 8]
// 008518d4  50                   push eax
// 008518d5  8b442424             mov eax, dword ptr [esp + 0x24]
// 008518d9  8d542410             lea edx, [esp + 0x10]
// 008518dd  52                   push edx
// 008518de  50                   push eax
// 008518df  51                   push ecx
// 008518e0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008518e8  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008518f0  e8ebf2ffff           call 0x850be0
// 008518f5  83c410               add esp, 0x10
// 008518f8  837c240800           cmp dword ptr [esp + 8], 0
// 008518fd  7479                 je 0x851978
// 008518ff  6a28                 push 0x28
// 00851901  e85a1ffaff           call 0x7f3860
// 00851906  83c404               add esp, 4
// 00851909  89442420             mov dword ptr [esp + 0x20], eax
// 0085190d  c744241802000000     mov dword ptr [esp + 0x18], 2
// 00851915  85c0                 test eax, eax
// 00851917  7417                 je 0x851930
// 00851919  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0085191d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00851921  6a00                 push 0
// 00851923  51                   push ecx
// 00851924  52                   push edx
// 00851925  8bc8                 mov ecx, eax
// 00851927  e8bc2dfaff           call 0x7f46e8
// 0085192c  8bf0                 mov esi, eax
// 0085192e  eb02                 jmp 0x851932
// 00851930  33f6                 xor esi, esi
// 00851932  6a48                 push 0x48
// 00851934  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0085193c  e81f1ffaff           call 0x7f3860
// 00851941  83c404               add esp, 4
// 00851944  89442420             mov dword ptr [esp + 0x20], eax
// 00851948  c744241803000000     mov dword ptr [esp + 0x18], 3
// 00851950  85c0                 test eax, eax
// 00851952  7424                 je 0x851978
// 00851954  6a00                 push 0
// 00851956  6800100000           push 0x1000
// 0085195b  6a01                 push 1
// 0085195d  56                   push esi
// 0085195e  8bc8                 mov ecx, eax
// 00851960  e82d4c0d00           call 0x926592
// 00851965  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00851969  64890d00000000       mov dword ptr fs:[0], ecx
// 00851970  59                   pop ecx
// 00851971  5e                   pop esi
// 00851972  83c414               add esp, 0x14
// 00851975  c20400               ret 4
// 00851978  33c0                 xor eax, eax
// 0085197a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085197e  64890d00000000       mov dword ptr fs:[0], ecx
// 00851985  59                   pop ecx
// 00851986  5e                   pop esi
// 00851987  83c414               add esp, 0x14
// 0085198a  c20400               ret 4
// copied from an identical function in another client (function ?GetArchive@CXTPPropExchange@@UAEPAVCArchive@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp
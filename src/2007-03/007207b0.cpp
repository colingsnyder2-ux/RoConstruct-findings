// roc 2007-03 007207b0  unit: seg_00720000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007207b0
//
// 007207b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007207b4  83ec2c               sub esp, 0x2c
// 007207b7  56                   push esi
// 007207b8  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 007207bc  57                   push edi
// 007207bd  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 007207c1  8d442408             lea eax, [esp + 8]
// 007207c5  50                   push eax
// 007207c6  c70720000000         mov dword ptr [edi], 0x20
// 007207cc  51                   push ecx
// 007207cd  c70620000000         mov dword ptr [esi], 0x20
// 007207d3  ff15fcee7700         call dword ptr [0x77eefc]
// 007207d9  85c0                 test eax, eax
// 007207db  7447                 je 0x720824
// 007207dd  8b442414             mov eax, dword ptr [esp + 0x14]
// 007207e1  8d54241c             lea edx, [esp + 0x1c]
// 007207e5  52                   push edx
// 007207e6  6a18                 push 0x18
// 007207e8  50                   push eax
// 007207e9  ff15d0d07700         call dword ptr [0x77d0d0]
// 007207ef  85c0                 test eax, eax
// 007207f1  7431                 je 0x720824
// 007207f3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007207f7  8b442424             mov eax, dword ptr [esp + 0x24]
// 007207fb  890f                 mov dword ptr [edi], ecx
// 007207fd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00720801  85c9                 test ecx, ecx
// 00720803  8b3dccd07700         mov edi, dword ptr [0x77d0cc]
// 00720809  8906                 mov dword ptr [esi], eax
// 0072080b  7509                 jne 0x720816
// 0072080d  99                   cdq 
// 0072080e  2bc2                 sub eax, edx
// 00720810  d1f8                 sar eax, 1
// 00720812  8906                 mov dword ptr [esi], eax
// 00720814  eb03                 jmp 0x720819
// 00720816  51                   push ecx
// 00720817  ffd7                 call edi
// 00720819  8b442414             mov eax, dword ptr [esp + 0x14]
// 0072081d  85c0                 test eax, eax
// 0072081f  7403                 je 0x720824
// 00720821  50                   push eax
// 00720822  ffd7                 call edi
// 00720824  5f                   pop edi
// 00720825  5e                   pop esi
// 00720826  83c42c               add esp, 0x2c
// 00720829  c3                   ret 
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinDrawTools.cpp (function ?XTPSkinFrameworkGetIconSize@@YAXPAUHICON__@@PAH1@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinDrawTools.cpp

// roc 2010-06 0086baf0  unit: CXTPDockingPanePaintManager  size: 538 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0086baf0
//
// 0086baf0  6aff                 push -1
// 0086baf2  6848949b00           push 0x9b9448
// 0086baf7  64a100000000         mov eax, dword ptr fs:[0]
// 0086bafd  50                   push eax
// 0086bafe  83ec50               sub esp, 0x50
// 0086bb01  56                   push esi
// 0086bb02  57                   push edi
// 0086bb03  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0086bb08  33c4                 xor eax, esp
// 0086bb0a  50                   push eax
// 0086bb0b  8d44245c             lea eax, [esp + 0x5c]
// 0086bb0f  64a300000000         mov dword ptr fs:[0], eax
// 0086bb15  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0086bb19  85f6                 test esi, esi
// 0086bb1b  7504                 jne 0x86bb21
// 0086bb1d  33c0                 xor eax, eax
// 0086bb1f  eb03                 jmp 0x86bb24
// 0086bb21  8b4604               mov eax, dword ptr [esi + 4]
// 0086bb24  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 0086bb28  57                   push edi
// 0086bb29  50                   push eax
// 0086bb2a  8d4c2430             lea ecx, [esp + 0x30]
// 0086bb2e  e80d3cf9ff           call 0x7ff740
// 0086bb33  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0086bb37  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0086bb3a  c744246400000000     mov dword ptr [esp + 0x64], 0
// 0086bb42  3df1240000           cmp eax, 0x24f1
// 0086bb47  0f85d1000000         jne 0x86bc1e
// 0086bb4d  8b442478             mov eax, dword ptr [esp + 0x78]
// 0086bb51  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0086bb55  83c0fc               add eax, -4
// 0086bb58  50                   push eax
// 0086bb59  83c1fc               add ecx, -4
// 0086bb5c  51                   push ecx
// 0086bb5d  8d542414             lea edx, [esp + 0x14]
// 0086bb61  52                   push edx
// 0086bb62  8bce                 mov ecx, esi
// 0086bb64  e813cdf3ff           call 0x7a887c
// 0086bb69  8b442478             mov eax, dword ptr [esp + 0x78]
// 0086bb6d  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0086bb71  83c003               add eax, 3
// 0086bb74  83c103               add ecx, 3
// 0086bb77  50                   push eax
// 0086bb78  51                   push ecx
// 0086bb79  8bce                 mov ecx, esi
// 0086bb7b  e8f6ccf3ff           call 0x7a8876
// 0086bb80  8b542478             mov edx, dword ptr [esp + 0x78]
// 0086bb84  8b442474             mov eax, dword ptr [esp + 0x74]
// 0086bb88  83c202               add edx, 2
// 0086bb8b  52                   push edx
// 0086bb8c  83c0fc               add eax, -4
// 0086bb8f  50                   push eax
// 0086bb90  8d4c2414             lea ecx, [esp + 0x14]
// 0086bb94  51                   push ecx
// 0086bb95  8bce                 mov ecx, esi
// 0086bb97  e8e0ccf3ff           call 0x7a887c
// 0086bb9c  8b542478             mov edx, dword ptr [esp + 0x78]
// 0086bba0  8b442474             mov eax, dword ptr [esp + 0x74]
// 0086bba4  83c2fb               add edx, -5
// 0086bba7  52                   push edx
// 0086bba8  83c003               add eax, 3
// 0086bbab  50                   push eax
// 0086bbac  8bce                 mov ecx, esi
// 0086bbae  e8c3ccf3ff           call 0x7a8876
// 0086bbb3  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0086bbb7  8b542474             mov edx, dword ptr [esp + 0x74]
// 0086bbbb  83c1fc               add ecx, -4
// 0086bbbe  51                   push ecx
// 0086bbbf  83c2fd               add edx, -3
// 0086bbc2  52                   push edx
// 0086bbc3  8d442414             lea eax, [esp + 0x14]
// 0086bbc7  50                   push eax
// 0086bbc8  8bce                 mov ecx, esi
// 0086bbca  e8adccf3ff           call 0x7a887c
// 0086bbcf  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0086bbd3  8b542474             mov edx, dword ptr [esp + 0x74]
// 0086bbd7  83c103               add ecx, 3
// 0086bbda  51                   push ecx
// 0086bbdb  83c204               add edx, 4
// 0086bbde  52                   push edx
// 0086bbdf  8bce                 mov ecx, esi
// 0086bbe1  e890ccf3ff           call 0x7a8876
// 0086bbe6  8b442478             mov eax, dword ptr [esp + 0x78]
// 0086bbea  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0086bbee  83c002               add eax, 2
// 0086bbf1  50                   push eax
// 0086bbf2  83c1fd               add ecx, -3
// 0086bbf5  51                   push ecx
// 0086bbf6  8d542414             lea edx, [esp + 0x14]
// 0086bbfa  52                   push edx
// 0086bbfb  8bce                 mov ecx, esi
// 0086bbfd  e87accf3ff           call 0x7a887c
// 0086bc02  8b442478             mov eax, dword ptr [esp + 0x78]
// 0086bc06  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0086bc0a  83c0fb               add eax, -5
// 0086bc0d  83c104               add ecx, 4
// 0086bc10  50                   push eax
// 0086bc11  51                   push ecx
// 0086bc12  8bce                 mov ecx, esi
// 0086bc14  e85dccf3ff           call 0x7a8876
// 0086bc19  e9c7000000           jmp 0x86bce5
// 0086bc1e  3df0240000           cmp eax, 0x24f0
// 0086bc23  751f                 jne 0x86bc44
// 0086bc25  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0086bc28  8b542478             mov edx, dword ptr [esp + 0x78]
// 0086bc2c  83e002               and eax, 2
// 0086bc2f  50                   push eax
// 0086bc30  8b442478             mov eax, dword ptr [esp + 0x78]
// 0086bc34  52                   push edx
// 0086bc35  50                   push eax
// 0086bc36  56                   push esi
// 0086bc37  e874dbffff           call 0x8697b0
// 0086bc3c  83c410               add esp, 0x10
// 0086bc3f  e9a1000000           jmp 0x86bce5
// 0086bc44  3df2240000           cmp eax, 0x24f2
// 0086bc49  747b                 je 0x86bcc6
// 0086bc4b  3df3240000           cmp eax, 0x24f3
// 0086bc50  7474                 je 0x86bcc6
// 0086bc52  3df4240000           cmp eax, 0x24f4
// 0086bc57  0f8588000000         jne 0x86bce5
// 0086bc5d  85f6                 test esi, esi
// 0086bc5f  7504                 jne 0x86bc65
// 0086bc61  33c0                 xor eax, eax
// 0086bc63  eb03                 jmp 0x86bc68
// 0086bc65  8b4604               mov eax, dword ptr [esi + 4]
// 0086bc68  57                   push edi
// 0086bc69  50                   push eax
// 0086bc6a  8d4c241c             lea ecx, [esp + 0x1c]
// 0086bc6e  e88d3bf9ff           call 0x7ff800
// 0086bc73  8b442474             mov eax, dword ptr [esp + 0x74]
// 0086bc77  8b542478             mov edx, dword ptr [esp + 0x78]
// 0086bc7b  8d48fc               lea ecx, [eax - 4]
// 0086bc7e  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0086bc82  8d4aff               lea ecx, [edx - 1]
// 0086bc85  83c202               add edx, 2
// 0086bc88  8d78ff               lea edi, [eax - 1]
// 0086bc8b  8944244c             mov dword ptr [esp + 0x4c], eax
// 0086bc8f  83c003               add eax, 3
// 0086bc92  89542448             mov dword ptr [esp + 0x48], edx
// 0086bc96  89542450             mov dword ptr [esp + 0x50], edx
// 0086bc9a  6a04                 push 4
// 0086bc9c  8d542440             lea edx, [esp + 0x40]
// 0086bca0  89442458             mov dword ptr [esp + 0x58], eax
// 0086bca4  8b4604               mov eax, dword ptr [esi + 4]
// 0086bca7  52                   push edx
// 0086bca8  50                   push eax
// 0086bca9  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0086bcad  897c2450             mov dword ptr [esp + 0x50], edi
// 0086bcb1  894c2464             mov dword ptr [esp + 0x64], ecx
// 0086bcb5  ff1568a19e00         call dword ptr [0x9ea168]
// 0086bcbb  8d4c2414             lea ecx, [esp + 0x14]
// 0086bcbf  e8cc3bf9ff           call 0x7ff890
// 0086bcc4  eb1f                 jmp 0x86bce5
// 0086bcc6  8b542478             mov edx, dword ptr [esp + 0x78]
// 0086bcca  33c9                 xor ecx, ecx
// 0086bccc  3df2240000           cmp eax, 0x24f2
// 0086bcd1  8b442474             mov eax, dword ptr [esp + 0x74]
// 0086bcd5  0f94c1               sete cl
// 0086bcd8  57                   push edi
// 0086bcd9  51                   push ecx
// 0086bcda  52                   push edx
// 0086bcdb  50                   push eax
// 0086bcdc  56                   push esi
// 0086bcdd  e82ee1ffff           call 0x869e10
// 0086bce2  83c414               add esp, 0x14
// 0086bce5  8d4c2428             lea ecx, [esp + 0x28]
// 0086bce9  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 0086bcf1  e8da3af9ff           call 0x7ff7d0
// 0086bcf6  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0086bcfa  64890d00000000       mov dword ptr fs:[0], ecx
// 0086bd01  59                   pop ecx
// 0086bd02  5f                   pop edi
// 0086bd03  5e                   pop esi
// 0086bd04  83c45c               add esp, 0x5c
// 0086bd07  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawCaptionButtonEntry@CXTPDockingPanePaintManager@@MAEXPAVCDC@@PAVCXTPDockingPaneCaptionButton@@VCPoint@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPanePaintManager.cpp
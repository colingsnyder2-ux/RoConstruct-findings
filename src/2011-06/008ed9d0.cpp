// roc 2011-06 008ed9d0  unit: CXTPOffice2007Image  size: 628 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ed9d0
//
// 008ed9d0  6aff                 push -1
// 008ed9d2  681fe5a000           push 0xa0e51f
// 008ed9d7  64a100000000         mov eax, dword ptr fs:[0]
// 008ed9dd  50                   push eax
// 008ed9de  83ec18               sub esp, 0x18
// 008ed9e1  53                   push ebx
// 008ed9e2  55                   push ebp
// 008ed9e3  56                   push esi
// 008ed9e4  57                   push edi
// 008ed9e5  a12058c900           mov eax, dword ptr [0xc95820]
// 008ed9ea  33c4                 xor eax, esp
// 008ed9ec  50                   push eax
// 008ed9ed  8d44242c             lea eax, [esp + 0x2c]
// 008ed9f1  64a300000000         mov dword ptr fs:[0], eax
// 008ed9f7  8be9                 mov ebp, ecx
// 008ed9f9  33ff                 xor edi, edi
// 008ed9fb  897c2428             mov dword ptr [esp + 0x28], edi
// 008ed9ff  c744243401000000     mov dword ptr [esp + 0x34], 1
// 008eda07  397d08               cmp dword ptr [ebp + 8], edi
// 008eda0a  7516                 jne 0x8eda22
// 008eda0c  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008eda10  68cabea500           push 0xa5beca
// 008eda15  8bce                 mov ecx, esi
// 008eda17  ff15002ea400         call dword ptr [0xa42e00]
// 008eda1d  e9a2010000           jmp 0x8edbc4
// 008eda22  8d4c2440             lea ecx, [esp + 0x40]
// 008eda26  ff151422a400         call dword ptr [0xa42214]
// 008eda2c  8d4c2444             lea ecx, [esp + 0x44]
// 008eda30  ff151422a400         call dword ptr [0xa42214]
// 008eda36  8b4508               mov eax, dword ptr [ebp + 8]
// 008eda39  8d4c2414             lea ecx, [esp + 0x14]
// 008eda3d  89442424             mov dword ptr [esp + 0x24], eax
// 008eda41  ff15b42da400         call dword ptr [0xa42db4]
// 008eda47  8d4c2424             lea ecx, [esp + 0x24]
// 008eda4b  51                   push ecx
// 008eda4c  8d542418             lea edx, [esp + 0x18]
// 008eda50  bb02000000           mov ebx, 2
// 008eda55  52                   push edx
// 008eda56  8bcd                 mov ecx, ebp
// 008eda58  885c243c             mov byte ptr [esp + 0x3c], bl
// 008eda5c  e86ff3ffff           call 0x8ecdd0
// 008eda61  85c0                 test eax, eax
// 008eda63  0f8440010000         je 0x8edba9
// 008eda69  8d4c2414             lea ecx, [esp + 0x14]
// 008eda6d  ff15f029a400         call dword ptr [0xa429f0]
// 008eda73  6a00                 push 0
// 008eda75  6a3b                 push 0x3b
// 008eda77  8d4c241c             lea ecx, [esp + 0x1c]
// 008eda7b  ff154c27a400         call dword ptr [0xa4274c]
// 008eda81  85c0                 test eax, eax
// 008eda83  0f8407010000         je 0x8edb90
// 008eda89  7e2e                 jle 0x8edab9
// 008eda8b  50                   push eax
// 008eda8c  8d44242c             lea eax, [esp + 0x2c]
// 008eda90  50                   push eax
// 008eda91  8d4c241c             lea ecx, [esp + 0x1c]
// 008eda95  ff15601fa400         call dword ptr [0xa41f60]
// 008eda9b  50                   push eax
// 008eda9c  8d4c2418             lea ecx, [esp + 0x18]
// 008edaa0  c644243803           mov byte ptr [esp + 0x38], 3
// 008edaa5  ff156425a400         call dword ptr [0xa42564]
// 008edaab  8d4c2428             lea ecx, [esp + 0x28]
// 008edaaf  885c2434             mov byte ptr [esp + 0x34], bl
// 008edab3  ff15082ea400         call dword ptr [0xa42e08]
// 008edab9  8d4c2414             lea ecx, [esp + 0x14]
// 008edabd  ff15b026a400         call dword ptr [0xa426b0]
// 008edac3  84c0                 test al, al
// 008edac5  0f85c5000000         jne 0x8edb90
// 008edacb  8d4c2414             lea ecx, [esp + 0x14]
// 008edacf  ff151422a400         call dword ptr [0xa42214]
// 008edad5  6a00                 push 0
// 008edad7  8d4c2418             lea ecx, [esp + 0x18]
// 008edadb  ff153c25a400         call dword ptr [0xa4253c]
// 008edae1  3c5b                 cmp al, 0x5b
// 008edae3  754d                 jne 0x8edb32
// 008edae5  85ff                 test edi, edi
// 008edae7  0f85bc000000         jne 0x8edba9
// 008edaed  8d4c2414             lea ecx, [esp + 0x14]
// 008edaf1  ff15a826a400         call dword ptr [0xa426a8]
// 008edaf7  2bc3                 sub eax, ebx
// 008edaf9  50                   push eax
// 008edafa  6a01                 push 1
// 008edafc  8d4c2428             lea ecx, [esp + 0x28]
// 008edb00  51                   push ecx
// 008edb01  8d4c2420             lea ecx, [esp + 0x20]
// 008edb05  ff15e028a400         call dword ptr [0xa428e0]
// 008edb0b  8d4c2440             lea ecx, [esp + 0x40]
// 008edb0f  c644243404           mov byte ptr [esp + 0x34], 4
// 008edb14  ff15c82da400         call dword ptr [0xa42dc8]
// 008edb1a  50                   push eax
// 008edb1b  8d4c2424             lea ecx, [esp + 0x24]
// 008edb1f  ff15cc2da400         call dword ptr [0xa42dcc]
// 008edb25  85c0                 test eax, eax
// 008edb27  7503                 jne 0x8edb2c
// 008edb29  8d7801               lea edi, [eax + 1]
// 008edb2c  8d4c2420             lea ecx, [esp + 0x20]
// 008edb30  eb54                 jmp 0x8edb86
// 008edb32  85ff                 test edi, edi
// 008edb34  745a                 je 0x8edb90
// 008edb36  6a00                 push 0
// 008edb38  6a3d                 push 0x3d
// 008edb3a  8d4c241c             lea ecx, [esp + 0x1c]
// 008edb3e  ff154c27a400         call dword ptr [0xa4274c]
// 008edb44  8bf0                 mov esi, eax
// 008edb46  85f6                 test esi, esi
// 008edb48  7e46                 jle 0x8edb90
// 008edb4a  56                   push esi
// 008edb4b  8d542420             lea edx, [esp + 0x20]
// 008edb4f  52                   push edx
// 008edb50  8d4c241c             lea ecx, [esp + 0x1c]
// 008edb54  ff15601fa400         call dword ptr [0xa41f60]
// 008edb5a  8d4c241c             lea ecx, [esp + 0x1c]
// 008edb5e  c644243405           mov byte ptr [esp + 0x34], 5
// 008edb63  ff15a02ca400         call dword ptr [0xa42ca0]
// 008edb69  8d4c2444             lea ecx, [esp + 0x44]
// 008edb6d  ff15c82da400         call dword ptr [0xa42dc8]
// 008edb73  50                   push eax
// 008edb74  8d4c2420             lea ecx, [esp + 0x20]
// 008edb78  ff15cc2da400         call dword ptr [0xa42dcc]
// 008edb7e  85c0                 test eax, eax
// 008edb80  746e                 je 0x8edbf0
// 008edb82  8d4c241c             lea ecx, [esp + 0x1c]
// 008edb86  885c2434             mov byte ptr [esp + 0x34], bl
// 008edb8a  ff15082ea400         call dword ptr [0xa42e08]
// 008edb90  8d442424             lea eax, [esp + 0x24]
// 008edb94  50                   push eax
// 008edb95  8d4c2418             lea ecx, [esp + 0x18]
// 008edb99  51                   push ecx
// 008edb9a  8bcd                 mov ecx, ebp
// 008edb9c  e82ff2ffff           call 0x8ecdd0
// 008edba1  85c0                 test eax, eax
// 008edba3  0f85c0feffff         jne 0x8eda69
// 008edba9  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008edbad  68cabea500           push 0xa5beca
// 008edbb2  8bce                 mov ecx, esi
// 008edbb4  ff15002ea400         call dword ptr [0xa42e00]
// 008edbba  8d4c2414             lea ecx, [esp + 0x14]
// 008edbbe  ff15082ea400         call dword ptr [0xa42e08]
// 008edbc4  8d4c2440             lea ecx, [esp + 0x40]
// 008edbc8  ff15082ea400         call dword ptr [0xa42e08]
// 008edbce  8d4c2444             lea ecx, [esp + 0x44]
// 008edbd2  ff15082ea400         call dword ptr [0xa42e08]
// 008edbd8  8bc6                 mov eax, esi
// 008edbda  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008edbde  64890d00000000       mov dword ptr fs:[0], ecx
// 008edbe5  59                   pop ecx
// 008edbe6  5f                   pop edi
// 008edbe7  5e                   pop esi
// 008edbe8  5d                   pop ebp
// 008edbe9  5b                   pop ebx
// 008edbea  83c424               add esp, 0x24
// 008edbed  c20c00               ret 0xc
// 008edbf0  46                   inc esi
// 008edbf1  56                   push esi
// 008edbf2  8d54241c             lea edx, [esp + 0x1c]
// 008edbf6  52                   push edx
// 008edbf7  8d4c241c             lea ecx, [esp + 0x1c]
// 008edbfb  ff154827a400         call dword ptr [0xa42748]
// 008edc01  8d4c2418             lea ecx, [esp + 0x18]
// 008edc05  c644243406           mov byte ptr [esp + 0x34], 6
// 008edc0a  ff15f029a400         call dword ptr [0xa429f0]
// 008edc10  8d4c2418             lea ecx, [esp + 0x18]
// 008edc14  ff15a02ca400         call dword ptr [0xa42ca0]
// 008edc1a  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008edc1e  8d442418             lea eax, [esp + 0x18]
// 008edc22  50                   push eax
// 008edc23  8bce                 mov ecx, esi
// 008edc25  ff15e42da400         call dword ptr [0xa42de4]
// 008edc2b  8d4c2418             lea ecx, [esp + 0x18]
// 008edc2f  ff15082ea400         call dword ptr [0xa42e08]
// 008edc35  8d4c241c             lea ecx, [esp + 0x1c]
// 008edc39  ff15082ea400         call dword ptr [0xa42e08]
// 008edc3f  e976ffffff           jmp 0x8edbba
// copied from an identical function in another client (function ?GetImageValue@CXTPOffice2007Images@@QAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@V23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPOffice2007Image.cpp
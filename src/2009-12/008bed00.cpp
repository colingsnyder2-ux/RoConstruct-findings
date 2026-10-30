// roc 2009-12 008bed00  unit: CXTPDockingPaneContext  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bed00
//
// 008bed00  83ec0c               sub esp, 0xc
// 008bed03  56                   push esi
// 008bed04  57                   push edi
// 008bed05  8bf1                 mov esi, ecx
// 008bed07  ff1520cc9800         call dword ptr [0x98cc20]
// 008bed0d  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 008bed14  7478                 je 0x8bed8e
// 008bed16  8b4604               mov eax, dword ptr [esi + 4]
// 008bed19  8b5068               mov edx, dword ptr [eax + 0x68]
// 008bed1c  8d4e04               lea ecx, [esi + 4]
// 008bed1f  ffd2                 call edx
// 008bed21  8b4658               mov eax, dword ptr [esi + 0x58]
// 008bed24  8b5068               mov edx, dword ptr [eax + 0x68]
// 008bed27  8d4e58               lea ecx, [esi + 0x58]
// 008bed2a  ffd2                 call edx
// 008bed2c  8bce                 mov ecx, esi
// 008bed2e  e84dffffff           call 0x8bec80
// 008bed33  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 008bed39  f7d8                 neg eax
// 008bed3b  1bc0                 sbb eax, eax
// 008bed3d  89442408             mov dword ptr [esp + 8], eax
// 008bed41  743b                 je 0x8bed7e
// 008bed43  8dbe6c010000         lea edi, [esi + 0x16c]
// 008bed49  8da42400000000       lea esp, [esp]
// 008bed50  8d44240c             lea eax, [esp + 0xc]
// 008bed54  50                   push eax
// 008bed55  8d4c2414             lea ecx, [esp + 0x14]
// 008bed59  51                   push ecx
// 008bed5a  8d542410             lea edx, [esp + 0x10]
// 008bed5e  52                   push edx
// 008bed5f  8bcf                 mov ecx, edi
// 008bed61  e8baaaf4ff           call 0x809820
// 008bed66  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008bed6a  85c9                 test ecx, ecx
// 008bed6c  7409                 je 0x8bed77
// 008bed6e  8b01                 mov eax, dword ptr [ecx]
// 008bed70  8b5004               mov edx, dword ptr [eax + 4]
// 008bed73  6a01                 push 1
// 008bed75  ffd2                 call edx
// 008bed77  837c240800           cmp dword ptr [esp + 8], 0
// 008bed7c  75d2                 jne 0x8bed50
// 008bed7e  5f                   pop edi
// 008bed7f  8d8e6c010000         lea ecx, [esi + 0x16c]
// 008bed85  5e                   pop esi
// 008bed86  83c40c               add esp, 0xc
// 008bed89  e99277f3ff           jmp 0x7f6520
// 008bed8e  8b06                 mov eax, dword ptr [esi]
// 008bed90  8b501c               mov edx, dword ptr [eax + 0x1c]
// 008bed93  6a01                 push 1
// 008bed95  8bce                 mov ecx, esi
// 008bed97  ffd2                 call edx
// 008bed99  ff15e4cb9800         call dword ptr [0x98cbe4]
// 008bed9f  50                   push eax
// 008beda0  e8854df3ff           call 0x7f3b2a
// 008beda5  6a00                 push 0
// 008beda7  8bf8                 mov edi, eax
// 008beda9  ff15acca9800         call dword ptr [0x98caac]
// 008bedaf  8b868c010000         mov eax, dword ptr [esi + 0x18c]
// 008bedb5  85c0                 test eax, eax
// 008bedb7  7418                 je 0x8bedd1
// 008bedb9  8b4004               mov eax, dword ptr [eax + 4]
// 008bedbc  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008bedbf  50                   push eax
// 008bedc0  51                   push ecx
// 008bedc1  ff15d8cb9800         call dword ptr [0x98cbd8]
// 008bedc7  c7868c01000000000000 mov dword ptr [esi + 0x18c], 0
// 008bedd1  5f                   pop edi
// 008bedd2  5e                   pop esi
// 008bedd3  83c40c               add esp, 0xc
// 008bedd6  c3                   ret 
// copied from an identical function in another client (function ?CancelLoop@CXTPDockingPaneContext@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp
// roc 2009-12 0086fc90  unit: CXTPNewToolbarDlg  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086fc90
//
// 0086fc90  6aff                 push -1
// 0086fc92  680bfc9500           push 0x95fc0b
// 0086fc97  64a100000000         mov eax, dword ptr fs:[0]
// 0086fc9d  50                   push eax
// 0086fc9e  51                   push ecx
// 0086fc9f  56                   push esi
// 0086fca0  57                   push edi
// 0086fca1  a10052b600           mov eax, dword ptr [0xb65200]
// 0086fca6  33c4                 xor eax, esp
// 0086fca8  50                   push eax
// 0086fca9  8d442410             lea eax, [esp + 0x10]
// 0086fcad  64a300000000         mov dword ptr fs:[0], eax
// 0086fcb3  8bf1                 mov esi, ecx
// 0086fcb5  8974240c             mov dword ptr [esp + 0xc], esi
// 0086fcb9  8d4e20               lea ecx, [esi + 0x20]
// 0086fcbc  e89f4afaff           call 0x814760
// 0086fcc1  33ff                 xor edi, edi
// 0086fcc3  897c2418             mov dword ptr [esp + 0x18], edi
// 0086fcc7  e8d4ebffff           call 0x86e8a0
// 0086fccc  8b10                 mov edx, dword ptr [eax]
// 0086fcce  8bc8                 mov ecx, eax
// 0086fcd0  8b4218               mov eax, dword ptr [edx + 0x18]
// 0086fcd3  6893230000           push 0x2393
// 0086fcd8  ffd0                 call eax
// 0086fcda  894638               mov dword ptr [esi + 0x38], eax
// 0086fcdd  e8beebffff           call 0x86e8a0
// 0086fce2  8b10                 mov edx, dword ptr [eax]
// 0086fce4  8bc8                 mov ecx, eax
// 0086fce6  8b4218               mov eax, dword ptr [edx + 0x18]
// 0086fce9  6892230000           push 0x2392
// 0086fcee  ffd0                 call eax
// 0086fcf0  89463c               mov dword ptr [esi + 0x3c], eax
// 0086fcf3  e8a8ebffff           call 0x86e8a0
// 0086fcf8  8b10                 mov edx, dword ptr [eax]
// 0086fcfa  8bc8                 mov ecx, eax
// 0086fcfc  8b4218               mov eax, dword ptr [edx + 0x18]
// 0086fcff  6891230000           push 0x2391
// 0086fd04  ffd0                 call eax
// 0086fd06  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0086fd0a  894640               mov dword ptr [esi + 0x40], eax
// 0086fd0d  897e14               mov dword ptr [esi + 0x14], edi
// 0086fd10  894e34               mov dword ptr [esi + 0x34], ecx
// 0086fd13  893e                 mov dword ptr [esi], edi
// 0086fd15  897e04               mov dword ptr [esi + 4], edi
// 0086fd18  897e08               mov dword ptr [esi + 8], edi
// 0086fd1b  897e0c               mov dword ptr [esi + 0xc], edi
// 0086fd1e  897e10               mov dword ptr [esi + 0x10], edi
// 0086fd21  8bc6                 mov eax, esi
// 0086fd23  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086fd27  64890d00000000       mov dword ptr fs:[0], ecx
// 0086fd2e  59                   pop ecx
// 0086fd2f  5f                   pop edi
// 0086fd30  5e                   pop esi
// 0086fd31  83c410               add esp, 0x10
// 0086fd34  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPCustomizeDropSource@@QAE@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeTools.cpp
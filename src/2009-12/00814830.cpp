// roc 2009-12 00814830  unit: PAVCXTPCommandBarKeyboardTip::?$CArray  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814830
//
// 00814830  6aff                 push -1
// 00814832  68e4a39500           push 0x95a3e4
// 00814837  64a100000000         mov eax, dword ptr fs:[0]
// 0081483d  50                   push eax
// 0081483e  51                   push ecx
// 0081483f  56                   push esi
// 00814840  57                   push edi
// 00814841  a10052b600           mov eax, dword ptr [0xb65200]
// 00814846  33c4                 xor eax, esp
// 00814848  50                   push eax
// 00814849  8d442410             lea eax, [esp + 0x10]
// 0081484d  64a300000000         mov dword ptr fs:[0], eax
// 00814853  8bf1                 mov esi, ecx
// 00814855  8974240c             mov dword ptr [esp + 0xc], esi
// 00814859  e8e41b1100           call 0x926442
// 0081485e  33ff                 xor edi, edi
// 00814860  6a0a                 push 0xa
// 00814862  8d8e8c000000         lea ecx, [esi + 0x8c]
// 00814868  897c241c             mov dword ptr [esp + 0x1c], edi
// 0081486c  c7060c3e9f00         mov dword ptr [esi], 0x9f3e0c
// 00814872  e88930feff           call 0x7f7900
// 00814877  6a0a                 push 0xa
// 00814879  8d8ea8000000         lea ecx, [esi + 0xa8]
// 0081487f  e87c30feff           call 0x7f7900
// 00814884  b801000000           mov eax, 1
// 00814889  33c9                 xor ecx, ecx
// 0081488b  33d2                 xor edx, edx
// 0081488d  894e6c               mov dword ptr [esi + 0x6c], ecx
// 00814890  894e64               mov dword ptr [esi + 0x64], ecx
// 00814893  894e74               mov dword ptr [esi + 0x74], ecx
// 00814896  8bce                 mov ecx, esi
// 00814898  c644241802           mov byte ptr [esp + 0x18], 2
// 0081489d  894620               mov dword ptr [esi + 0x20], eax
// 008148a0  894624               mov dword ptr [esi + 0x24], eax
// 008148a3  894628               mov dword ptr [esi + 0x28], eax
// 008148a6  897e2c               mov dword ptr [esi + 0x2c], edi
// 008148a9  897e30               mov dword ptr [esi + 0x30], edi
// 008148ac  894638               mov dword ptr [esi + 0x38], eax
// 008148af  895670               mov dword ptr [esi + 0x70], edx
// 008148b2  895668               mov dword ptr [esi + 0x68], edx
// 008148b5  895678               mov dword ptr [esi + 0x78], edx
// 008148b8  894634               mov dword ptr [esi + 0x34], eax
// 008148bb  897e3c               mov dword ptr [esi + 0x3c], edi
// 008148be  897e40               mov dword ptr [esi + 0x40], edi
// 008148c1  897e54               mov dword ptr [esi + 0x54], edi
// 008148c4  894644               mov dword ptr [esi + 0x44], eax
// 008148c7  894648               mov dword ptr [esi + 0x48], eax
// 008148ca  897e4c               mov dword ptr [esi + 0x4c], edi
// 008148cd  897e50               mov dword ptr [esi + 0x50], edi
// 008148d0  894658               mov dword ptr [esi + 0x58], eax
// 008148d3  89465c               mov dword ptr [esi + 0x5c], eax
// 008148d6  89becc000000         mov dword ptr [esi + 0xcc], edi
// 008148dc  894660               mov dword ptr [esi + 0x60], eax
// 008148df  897e7c               mov dword ptr [esi + 0x7c], edi
// 008148e2  898680000000         mov dword ptr [esi + 0x80], eax
// 008148e8  898684000000         mov dword ptr [esi + 0x84], eax
// 008148ee  89be88000000         mov dword ptr [esi + 0x88], edi
// 008148f4  89bec4000000         mov dword ptr [esi + 0xc4], edi
// 008148fa  89bec8000000         mov dword ptr [esi + 0xc8], edi
// 00814900  e8431b1100           call 0x926448
// 00814905  8bc6                 mov eax, esi
// 00814907  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0081490b  64890d00000000       mov dword ptr fs:[0], ecx
// 00814912  59                   pop ecx
// 00814913  5f                   pop edi
// 00814914  5e                   pop esi
// 00814915  83c410               add esp, 0x10
// 00814918  c3                   ret 
// copied from an identical function in another client (function ??0CXTPCommandBarsOptions@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp
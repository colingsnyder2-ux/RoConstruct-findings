// roc 2009-12 0080bd50  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080bd50
//
// 0080bd50  6aff                 push -1
// 0080bd52  68a1999500           push 0x9599a1
// 0080bd57  64a100000000         mov eax, dword ptr fs:[0]
// 0080bd5d  50                   push eax
// 0080bd5e  51                   push ecx
// 0080bd5f  53                   push ebx
// 0080bd60  55                   push ebp
// 0080bd61  56                   push esi
// 0080bd62  57                   push edi
// 0080bd63  a10052b600           mov eax, dword ptr [0xb65200]
// 0080bd68  33c4                 xor eax, esp
// 0080bd6a  50                   push eax
// 0080bd6b  8d442418             lea eax, [esp + 0x18]
// 0080bd6f  64a300000000         mov dword ptr fs:[0], eax
// 0080bd75  8bf1                 mov esi, ecx
// 0080bd77  89742414             mov dword ptr [esp + 0x14], esi
// 0080bd7b  8d7e08               lea edi, [esi + 8]
// 0080bd7e  8bcf                 mov ecx, edi
// 0080bd80  e829a71100           call 0x9264ae
// 0080bd85  33ed                 xor ebp, ebp
// 0080bd87  c70704309f00         mov dword ptr [edi], 0x9f3004
// 0080bd8d  896f10               mov dword ptr [edi + 0x10], ebp
// 0080bd90  8d4e30               lea ecx, [esi + 0x30]
// 0080bd93  896c2420             mov dword ptr [esp + 0x20], ebp
// 0080bd97  e814f9ffff           call 0x80b6b0
// 0080bd9c  8d4e44               lea ecx, [esi + 0x44]
// 0080bd9f  e80cf9ffff           call 0x80b6b0
// 0080bda4  8b442428             mov eax, dword ptr [esp + 0x28]
// 0080bda8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0080bdac  8b542430             mov edx, dword ptr [esp + 0x30]
// 0080bdb0  55                   push ebp
// 0080bdb1  c644242402           mov byte ptr [esp + 0x24], 2
// 0080bdb6  894620               mov dword ptr [esi + 0x20], eax
// 0080bdb9  894e24               mov dword ptr [esi + 0x24], ecx
// 0080bdbc  895628               mov dword ptr [esi + 0x28], edx
// 0080bdbf  896e1c               mov dword ptr [esi + 0x1c], ebp
// 0080bdc2  896e2c               mov dword ptr [esi + 0x2c], ebp
// 0080bdc5  892e                 mov dword ptr [esi], ebp
// 0080bdc7  896e04               mov dword ptr [esi + 4], ebp
// 0080bdca  ff15e0cb9800         call dword ptr [0x98cbe0]
// 0080bdd0  8bd8                 mov ebx, eax
// 0080bdd2  53                   push ebx
// 0080bdd3  ff1554b19800         call dword ptr [0x98b154]
// 0080bdd9  50                   push eax
// 0080bdda  8bcf                 mov ecx, edi
// 0080bddc  e8bba61100           call 0x92649c
// 0080bde1  53                   push ebx
// 0080bde2  55                   push ebp
// 0080bde3  ff15d8cb9800         call dword ptr [0x98cbd8]
// 0080bde9  8d4658               lea eax, [esi + 0x58]
// 0080bdec  50                   push eax
// 0080bded  ff1550b29800         call dword ptr [0x98b250]
// 0080bdf3  8bc6                 mov eax, esi
// 0080bdf5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080bdf9  64890d00000000       mov dword ptr fs:[0], ecx
// 0080be00  59                   pop ecx
// 0080be01  5f                   pop edi
// 0080be02  5e                   pop esi
// 0080be03  5d                   pop ebp
// 0080be04  5b                   pop ebx
// 0080be05  83c410               add esp, 0x10
// 0080be08  c20c00               ret 0xc
// copied from an identical function in another client (function ??0CXTPImageManagerResource@@QAE@PAVCXTPImageManager@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp
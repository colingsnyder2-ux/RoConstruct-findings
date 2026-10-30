// roc 2009-12 0085f570  unit: CXTColorDialog  size: 879 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085f570
//
// 0085f570  6aff                 push -1
// 0085f572  683ce79500           push 0x95e73c
// 0085f577  64a100000000         mov eax, dword ptr fs:[0]
// 0085f57d  50                   push eax
// 0085f57e  81ec9c000000         sub esp, 0x9c
// 0085f584  a10052b600           mov eax, dword ptr [0xb65200]
// 0085f589  33c4                 xor eax, esp
// 0085f58b  89842498000000       mov dword ptr [esp + 0x98], eax
// 0085f592  55                   push ebp
// 0085f593  56                   push esi
// 0085f594  57                   push edi
// 0085f595  a10052b600           mov eax, dword ptr [0xb65200]
// 0085f59a  33c4                 xor eax, esp
// 0085f59c  50                   push eax
// 0085f59d  8d8424ac000000       lea eax, [esp + 0xac]
// 0085f5a4  64a300000000         mov dword ptr fs:[0], eax
// 0085f5aa  8bf1                 mov esi, ecx
// 0085f5ac  56                   push esi
// 0085f5ad  8d4c2458             lea ecx, [esp + 0x58]
// 0085f5b1  e83a4cf9ff           call 0x7f41f0
// 0085f5b6  6a01                 push 1
// 0085f5b8  8d4c2458             lea ecx, [esp + 0x58]
// 0085f5bc  c78424b800000000000000 mov dword ptr [esp + 0xb8], 0
// 0085f5c7  e8c46e0c00           call 0x926490
// 0085f5cc  e8ff03fdff           call 0x82f9d0
// 0085f5d1  6a08                 push 8
// 0085f5d3  8bc8                 mov ecx, eax
// 0085f5d5  e826fbfcff           call 0x82f100
// 0085f5da  50                   push eax
// 0085f5db  8d4c2458             lea ecx, [esp + 0x58]
// 0085f5df  e83c6f0c00           call 0x926520
// 0085f5e4  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085f5e7  6a00                 push 0
// 0085f5e9  6a00                 push 0
// 0085f5eb  6a31                 push 0x31
// 0085f5ed  50                   push eax
// 0085f5ee  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0085f5f4  50                   push eax
// 0085f5f5  e86a4df9ff           call 0x7f4364
// 0085f5fa  50                   push eax
// 0085f5fb  8d4c2458             lea ecx, [esp + 0x58]
// 0085f5ff  51                   push ecx
// 0085f600  8d4c244c             lea ecx, [esp + 0x4c]
// 0085f604  e857c0feff           call 0x84b660
// 0085f609  6a02                 push 2
// 0085f60b  8bce                 mov ecx, esi
// 0085f60d  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 0085f615  e81651f9ff           call 0x7f4730
// 0085f61a  50                   push eax
// 0085f61b  8d4c2438             lea ecx, [esp + 0x38]
// 0085f61f  e84cbcfeff           call 0x84b270
// 0085f624  8d542434             lea edx, [esp + 0x34]
// 0085f628  52                   push edx
// 0085f629  8bce                 mov ecx, esi
// 0085f62b  e8a851f9ff           call 0x7f47d8
// 0085f630  56                   push esi
// 0085f631  8d4c2418             lea ecx, [esp + 0x18]
// 0085f635  e896bcfeff           call 0x84b2d0
// 0085f63a  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0085f63e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0085f642  8b2d58ca9800         mov ebp, dword ptr [0x98ca58]
// 0085f648  8944241c             mov dword ptr [esp + 0x1c], eax
// 0085f64c  8b442420             mov eax, dword ptr [esp + 0x20]
// 0085f650  83e820               sub eax, 0x20
// 0085f653  89442420             mov dword ptr [esp + 0x20], eax
// 0085f657  83c0be               add eax, -0x42
// 0085f65a  f686ac00000040       test byte ptr [esi + 0xac], 0x40
// 0085f661  894c2414             mov dword ptr [esp + 0x14], ecx
// 0085f665  89442418             mov dword ptr [esp + 0x18], eax
// 0085f669  746b                 je 0x85f6d6
// 0085f66b  6a03                 push 3
// 0085f66d  6a03                 push 3
// 0085f66f  8d54241c             lea edx, [esp + 0x1c]
// 0085f673  52                   push edx
// 0085f674  ffd5                 call ebp
// 0085f676  e85503fdff           call 0x82f9d0
// 0085f67b  6a15                 push 0x15
// 0085f67d  8bc8                 mov ecx, eax
// 0085f67f  e87cfafcff           call 0x82f100
// 0085f684  8bf8                 mov edi, eax
// 0085f686  e84503fdff           call 0x82f9d0
// 0085f68b  57                   push edi
// 0085f68c  6a14                 push 0x14
// 0085f68e  8bc8                 mov ecx, eax
// 0085f690  e86bfafcff           call 0x82f100
// 0085f695  50                   push eax
// 0085f696  8d44241c             lea eax, [esp + 0x1c]
// 0085f69a  50                   push eax
// 0085f69b  8d4c2460             lea ecx, [esp + 0x60]
// 0085f69f  e8544ff9ff           call 0x7f45f8
// 0085f6a4  6afd                 push -3
// 0085f6a6  6afd                 push -3
// 0085f6a8  8d4c241c             lea ecx, [esp + 0x1c]
// 0085f6ac  51                   push ecx
// 0085f6ad  ffd5                 call ebp
// 0085f6af  e81c03fdff           call 0x82f9d0
// 0085f6b4  6a14                 push 0x14
// 0085f6b6  8bc8                 mov ecx, eax
// 0085f6b8  e843fafcff           call 0x82f100
// 0085f6bd  8bf8                 mov edi, eax
// 0085f6bf  e80c03fdff           call 0x82f9d0
// 0085f6c4  57                   push edi
// 0085f6c5  6a10                 push 0x10
// 0085f6c7  8bc8                 mov ecx, eax
// 0085f6c9  e832fafcff           call 0x82f100
// 0085f6ce  50                   push eax
// 0085f6cf  8d54241c             lea edx, [esp + 0x1c]
// 0085f6d3  52                   push edx
// 0085f6d4  eb25                 jmp 0x85f6fb
// 0085f6d6  e8f502fdff           call 0x82f9d0
// 0085f6db  6a06                 push 6
// 0085f6dd  8bc8                 mov ecx, eax
// 0085f6df  e81cfafcff           call 0x82f100
// 0085f6e4  8bf8                 mov edi, eax
// 0085f6e6  e8e502fdff           call 0x82f9d0
// 0085f6eb  57                   push edi
// 0085f6ec  6a06                 push 6
// 0085f6ee  8bc8                 mov ecx, eax
// 0085f6f0  e80bfafcff           call 0x82f100
// 0085f6f5  50                   push eax
// 0085f6f6  8d44241c             lea eax, [esp + 0x1c]
// 0085f6fa  50                   push eax
// 0085f6fb  8d4c2460             lea ecx, [esp + 0x60]
// 0085f6ff  e8f44ef9ff           call 0x7f45f8
// 0085f704  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085f708  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0085f70c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0085f710  89442428             mov dword ptr [esp + 0x28], eax
// 0085f714  894c2424             mov dword ptr [esp + 0x24], ecx
// 0085f718  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0085f71c  83c0ea               add eax, -0x16
// 0085f71f  894c2430             mov dword ptr [esp + 0x30], ecx
// 0085f723  89442428             mov dword ptr [esp + 0x28], eax
// 0085f727  83c016               add eax, 0x16
// 0085f72a  8d4c2410             lea ecx, [esp + 0x10]
// 0085f72e  8954242c             mov dword ptr [esp + 0x2c], edx
// 0085f732  89442430             mov dword ptr [esp + 0x30], eax
// 0085f736  ff1574de9800         call dword ptr [0x98de74]
// 0085f73c  c68424b400000002     mov byte ptr [esp + 0xb4], 2
// 0085f744  e857f10000           call 0x86e8a0
// 0085f749  8b10                 mov edx, dword ptr [eax]
// 0085f74b  8b5208               mov edx, dword ptr [edx + 8]
// 0085f74e  6888240000           push 0x2488
// 0085f753  8d4c2414             lea ecx, [esp + 0x14]
// 0085f757  51                   push ecx
// 0085f758  8bc8                 mov ecx, eax
// 0085f75a  ffd2                 call edx
// 0085f75c  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0085f760  6a25                 push 0x25
// 0085f762  8d442428             lea eax, [esp + 0x28]
// 0085f766  50                   push eax
// 0085f767  8d4c2418             lea ecx, [esp + 0x18]
// 0085f76b  83c770               add edi, 0x70
// 0085f76e  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0085f774  50                   push eax
// 0085f775  8d4c241c             lea ecx, [esp + 0x1c]
// 0085f779  ff1580de9800         call dword ptr [0x98de80]
// 0085f77f  8b17                 mov edx, dword ptr [edi]
// 0085f781  50                   push eax
// 0085f782  8d4c2464             lea ecx, [esp + 0x64]
// 0085f786  ffd2                 call edx
// 0085f788  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085f78c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085f790  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0085f794  89442424             mov dword ptr [esp + 0x24], eax
// 0085f798  8b442420             mov eax, dword ptr [esp + 0x20]
// 0085f79c  894c2428             mov dword ptr [esp + 0x28], ecx
// 0085f7a0  89442430             mov dword ptr [esp + 0x30], eax
// 0085f7a4  89442428             mov dword ptr [esp + 0x28], eax
// 0085f7a8  83c016               add eax, 0x16
// 0085f7ab  8954242c             mov dword ptr [esp + 0x2c], edx
// 0085f7af  89442430             mov dword ptr [esp + 0x30], eax
// 0085f7b3  e8e8f00000           call 0x86e8a0
// 0085f7b8  8b10                 mov edx, dword ptr [eax]
// 0085f7ba  8b5208               mov edx, dword ptr [edx + 8]
// 0085f7bd  6889240000           push 0x2489
// 0085f7c2  8d4c2414             lea ecx, [esp + 0x14]
// 0085f7c6  51                   push ecx
// 0085f7c7  8bc8                 mov ecx, eax
// 0085f7c9  ffd2                 call edx
// 0085f7cb  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0085f7cf  6a25                 push 0x25
// 0085f7d1  8d442428             lea eax, [esp + 0x28]
// 0085f7d5  50                   push eax
// 0085f7d6  8d4c2418             lea ecx, [esp + 0x18]
// 0085f7da  83c770               add edi, 0x70
// 0085f7dd  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0085f7e3  50                   push eax
// 0085f7e4  8d4c241c             lea ecx, [esp + 0x1c]
// 0085f7e8  ff1580de9800         call dword ptr [0x98de80]
// 0085f7ee  8b17                 mov edx, dword ptr [edi]
// 0085f7f0  50                   push eax
// 0085f7f1  8d4c2464             lea ecx, [esp + 0x64]
// 0085f7f5  ffd2                 call edx
// 0085f7f7  6aff                 push -1
// 0085f7f9  6aff                 push -1
// 0085f7fb  8d44241c             lea eax, [esp + 0x1c]
// 0085f7ff  50                   push eax
// 0085f800  ffd5                 call ebp
// 0085f802  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0085f806  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085f80a  8bc5                 mov eax, ebp
// 0085f80c  2bc1                 sub eax, ecx
// 0085f80e  99                   cdq 
// 0085f80f  2bc2                 sub eax, edx
// 0085f811  8b542414             mov edx, dword ptr [esp + 0x14]
// 0085f815  899604010000         mov dword ptr [esi + 0x104], edx
// 0085f81b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0085f81f  8bf8                 mov edi, eax
// 0085f821  8d8604010000         lea eax, [esi + 0x104]
// 0085f827  894804               mov dword ptr [eax + 4], ecx
// 0085f82a  895008               mov dword ptr [eax + 8], edx
// 0085f82d  8b9624010000         mov edx, dword ptr [esi + 0x124]
// 0085f833  d1ff                 sar edi, 1
// 0085f835  03cf                 add ecx, edi
// 0085f837  89680c               mov dword ptr [eax + 0xc], ebp
// 0085f83a  52                   push edx
// 0085f83b  898e10010000         mov dword ptr [esi + 0x110], ecx
// 0085f841  50                   push eax
// 0085f842  8d4c245c             lea ecx, [esp + 0x5c]
// 0085f846  e8b34df9ff           call 0x7f45fe
// 0085f84b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0085f84f  8b542418             mov edx, dword ptr [esp + 0x18]
// 0085f853  898e14010000         mov dword ptr [esi + 0x114], ecx
// 0085f859  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085f85d  8d8614010000         lea eax, [esi + 0x114]
// 0085f863  895004               mov dword ptr [eax + 4], edx
// 0085f866  8b9628010000         mov edx, dword ptr [esi + 0x128]
// 0085f86c  894808               mov dword ptr [eax + 8], ecx
// 0085f86f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0085f873  89480c               mov dword ptr [eax + 0xc], ecx
// 0085f876  2bcf                 sub ecx, edi
// 0085f878  52                   push edx
// 0085f879  898e18010000         mov dword ptr [esi + 0x118], ecx
// 0085f87f  50                   push eax
// 0085f880  8d4c245c             lea ecx, [esp + 0x5c]
// 0085f884  e8754df9ff           call 0x7f45fe
// 0085f889  8d4c2410             lea ecx, [esp + 0x10]
// 0085f88d  ff15c0de9800         call dword ptr [0x98dec0]
// 0085f893  8d4c2444             lea ecx, [esp + 0x44]
// 0085f897  c68424b400000000     mov byte ptr [esp + 0xb4], 0
// 0085f89f  e83cbefeff           call 0x84b6e0
// 0085f8a4  8d4c2454             lea ecx, [esp + 0x54]
// 0085f8a8  c78424b4000000ffffffff mov dword ptr [esp + 0xb4], 0xffffffff
// 0085f8b3  e83249f9ff           call 0x7f41ea
// 0085f8b8  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 0085f8bf  64890d00000000       mov dword ptr fs:[0], ecx
// 0085f8c6  59                   pop ecx
// 0085f8c7  5f                   pop edi
// 0085f8c8  5e                   pop esi
// 0085f8c9  5d                   pop ebp
// 0085f8ca  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0085f8d1  33cc                 xor ecx, esp
// 0085f8d3  e8c25af9ff           call 0x7f539a
// 0085f8d8  81c4a8000000         add esp, 0xa8
// 0085f8de  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTColorDialog@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTColorDialog.cpp
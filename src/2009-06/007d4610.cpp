// roc 2009-06 007d4610  unit: CXTPDockingPaneMiniWnd  size: 430 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d4610
//
// 007d4610  6aff                 push -1
// 007d4612  68f9ec8700           push 0x87ecf9
// 007d4617  64a100000000         mov eax, dword ptr fs:[0]
// 007d461d  50                   push eax
// 007d461e  83ec30               sub esp, 0x30
// 007d4621  53                   push ebx
// 007d4622  55                   push ebp
// 007d4623  56                   push esi
// 007d4624  57                   push edi
// 007d4625  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007d462a  33c4                 xor eax, esp
// 007d462c  50                   push eax
// 007d462d  8d442444             lea eax, [esp + 0x44]
// 007d4631  64a300000000         mov dword ptr fs:[0], eax
// 007d4637  8bf1                 mov esi, ecx
// 007d4639  89742418             mov dword ptr [esp + 0x18], esi
// 007d463d  e85ef5ffff           call 0x7d3ba0
// 007d4642  85c0                 test eax, eax
// 007d4644  0f84c7000000         je 0x7d4711
// 007d464a  56                   push esi
// 007d464b  8d4c2438             lea ecx, [esp + 0x38]
// 007d464f  e81cbef9ff           call 0x770470
// 007d4654  8b442434             mov eax, dword ptr [esp + 0x34]
// 007d4658  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007d465c  8d54241c             lea edx, [esp + 0x1c]
// 007d4660  8944241c             mov dword ptr [esp + 0x1c], eax
// 007d4664  8b4620               mov eax, dword ptr [esi + 0x20]
// 007d4667  52                   push edx
// 007d4668  50                   push eax
// 007d4669  894c2428             mov dword ptr [esp + 0x28], ecx
// 007d466d  ff1530ee8900         call dword ptr [0x89ee30]
// 007d4673  8bce                 mov ecx, esi
// 007d4675  e868780700           call 0x84bee2
// 007d467a  a900004000           test eax, 0x400000
// 007d467f  740c                 je 0x7d468d
// 007d4681  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007d4685  2b4c243c             sub ecx, dword ptr [esp + 0x3c]
// 007d4689  014c241c             add dword ptr [esp + 0x1c], ecx
// 007d468d  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 007d4693  33ff                 xor edi, edi
// 007d4695  397808               cmp dword ptr [eax + 8], edi
// 007d4698  7e77                 jle 0x7d4711
// 007d469a  8b1df8ed8900         mov ebx, dword ptr [0x89edf8]
// 007d46a0  8b2dc0ed8900         mov ebp, dword ptr [0x89edc0]
// 007d46a6  85ff                 test edi, edi
// 007d46a8  0f8c0b010000         jl 0x7d47b9
// 007d46ae  3b7808               cmp edi, dword ptr [eax + 8]
// 007d46b1  0f8d02010000         jge 0x7d47b9
// 007d46b7  8b5004               mov edx, dword ptr [eax + 4]
// 007d46ba  8b34ba               mov esi, dword ptr [edx + edi*4]
// 007d46bd  8d04ba               lea eax, [edx + edi*4]
// 007d46c0  8b06                 mov eax, dword ptr [esi]
// 007d46c2  89442424             mov dword ptr [esp + 0x24], eax
// 007d46c6  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d46c9  894c2428             mov dword ptr [esp + 0x28], ecx
// 007d46cd  8b5608               mov edx, dword ptr [esi + 8]
// 007d46d0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007d46d4  8954242c             mov dword ptr [esp + 0x2c], edx
// 007d46d8  8b460c               mov eax, dword ptr [esi + 0xc]
// 007d46db  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007d46df  51                   push ecx
// 007d46e0  89442434             mov dword ptr [esp + 0x34], eax
// 007d46e4  52                   push edx
// 007d46e5  8d44242c             lea eax, [esp + 0x2c]
// 007d46e9  50                   push eax
// 007d46ea  ffd3                 call ebx
// 007d46ec  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007d46f0  8b542454             mov edx, dword ptr [esp + 0x54]
// 007d46f4  51                   push ecx
// 007d46f5  52                   push edx
// 007d46f6  8d44242c             lea eax, [esp + 0x2c]
// 007d46fa  50                   push eax
// 007d46fb  ffd5                 call ebp
// 007d46fd  85c0                 test eax, eax
// 007d46ff  7529                 jne 0x7d472a
// 007d4701  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007d4705  8b8124010000         mov eax, dword ptr [ecx + 0x124]
// 007d470b  47                   inc edi
// 007d470c  3b7808               cmp edi, dword ptr [eax + 8]
// 007d470f  7c95                 jl 0x7d46a6
// 007d4711  83c8ff               or eax, 0xffffffff
// 007d4714  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007d4718  64890d00000000       mov dword ptr fs:[0], ecx
// 007d471f  59                   pop ecx
// 007d4720  5f                   pop edi
// 007d4721  5e                   pop esi
// 007d4722  5d                   pop ebp
// 007d4723  5b                   pop ebx
// 007d4724  83c43c               add esp, 0x3c
// 007d4727  c20c00               ret 0xc
// 007d472a  8b7614               mov esi, dword ptr [esi + 0x14]
// 007d472d  8d4c2414             lea ecx, [esp + 0x14]
// 007d4731  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007d4737  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 007d473f  e8fc69fcff           call 0x79b140
// 007d4744  8b10                 mov edx, dword ptr [eax]
// 007d4746  8b5208               mov edx, dword ptr [edx + 8]
// 007d4749  56                   push esi
// 007d474a  8d4c2418             lea ecx, [esp + 0x18]
// 007d474e  51                   push ecx
// 007d474f  8bc8                 mov ecx, eax
// 007d4751  ffd2                 call edx
// 007d4753  8d4c2414             lea ecx, [esp + 0x14]
// 007d4757  ff1554fb8900         call dword ptr [0x89fb54]
// 007d475d  85c0                 test eax, eax
// 007d475f  750c                 jne 0x7d476d
// 007d4761  8d4c2414             lea ecx, [esp + 0x14]
// 007d4765  ff1510fd8900         call dword ptr [0x89fd10]
// 007d476b  eba4                 jmp 0x7d4711
// 007d476d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007d4771  8b542428             mov edx, dword ptr [esp + 0x28]
// 007d4775  8d442414             lea eax, [esp + 0x14]
// 007d4779  50                   push eax
// 007d477a  56                   push esi
// 007d477b  83ec10               sub esp, 0x10
// 007d477e  8bc4                 mov eax, esp
// 007d4780  8908                 mov dword ptr [eax], ecx
// 007d4782  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007d4786  895004               mov dword ptr [eax + 4], edx
// 007d4789  8b542448             mov edx, dword ptr [esp + 0x48]
// 007d478d  894808               mov dword ptr [eax + 8], ecx
// 007d4790  89500c               mov dword ptr [eax + 0xc], edx
// 007d4793  8b442430             mov eax, dword ptr [esp + 0x30]
// 007d4797  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007d479a  8b542474             mov edx, dword ptr [esp + 0x74]
// 007d479e  51                   push ecx
// 007d479f  52                   push edx
// 007d47a0  e86b08fbff           call 0x785010
// 007d47a5  83c420               add esp, 0x20
// 007d47a8  8d4c2414             lea ecx, [esp + 0x14]
// 007d47ac  ff1510fd8900         call dword ptr [0x89fd10]
// 007d47b2  8bc6                 mov eax, esi
// 007d47b4  e95bffffff           jmp 0x7d4714
// 007d47b9  e82645f4ff           call 0x718ce4
// copied from an identical function in another client (function ?OnToolHitTest@CXTPDockingPaneMiniWnd@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\DockingPane\XTPDockingPaneMiniWnd.cpp
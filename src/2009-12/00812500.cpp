// roc 2009-12 00812500  unit: CXTPToolBar  size: 757 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00812500
//
// 00812500  6aff                 push -1
// 00812502  684aa29500           push 0x95a24a
// 00812507  64a100000000         mov eax, dword ptr fs:[0]
// 0081250d  50                   push eax
// 0081250e  83ec44               sub esp, 0x44
// 00812511  53                   push ebx
// 00812512  55                   push ebp
// 00812513  56                   push esi
// 00812514  57                   push edi
// 00812515  a10052b600           mov eax, dword ptr [0xb65200]
// 0081251a  33c4                 xor eax, esp
// 0081251c  50                   push eax
// 0081251d  8d442458             lea eax, [esp + 0x58]
// 00812521  64a300000000         mov dword ptr fs:[0], eax
// 00812527  8bf1                 mov esi, ecx
// 00812529  56                   push esi
// 0081252a  8d4c2448             lea ecx, [esp + 0x48]
// 0081252e  e8a321feff           call 0x7f46d6
// 00812533  33ed                 xor ebp, ebp
// 00812535  8bce                 mov ecx, esi
// 00812537  896c2460             mov dword ptr [esp + 0x60], ebp
// 0081253b  e85020ffff           call 0x804590
// 00812540  8b10                 mov edx, dword ptr [eax]
// 00812542  55                   push ebp
// 00812543  8bc8                 mov ecx, eax
// 00812545  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 0081254b  56                   push esi
// 0081254c  ffd0                 call eax
// 0081254e  50                   push eax
// 0081254f  8d4c2448             lea ecx, [esp + 0x48]
// 00812553  51                   push ecx
// 00812554  8d4c243c             lea ecx, [esp + 0x3c]
// 00812558  e803910300           call 0x84b660
// 0081255d  8b16                 mov edx, dword ptr [esi]
// 0081255f  8b92b8010000         mov edx, dword ptr [edx + 0x1b8]
// 00812565  8d442424             lea eax, [esp + 0x24]
// 00812569  50                   push eax
// 0081256a  8bce                 mov ecx, esi
// 0081256c  c644246401           mov byte ptr [esp + 0x64], 1
// 00812571  ffd2                 call edx
// 00812573  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00812579  68bd230000           push 0x23bd
// 0081257e  e87d4d0300           call 0x847300
// 00812583  3bc5                 cmp eax, ebp
// 00812585  740e                 je 0x812595
// 00812587  8b10                 mov edx, dword ptr [eax]
// 00812589  8bc8                 mov ecx, eax
// 0081258b  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 00812591  6a01                 push 1
// 00812593  ffd0                 call eax
// 00812595  8bce                 mov ecx, esi
// 00812597  896c2414             mov dword ptr [esp + 0x14], ebp
// 0081259b  e8301fffff           call 0x8044d0
// 008125a0  3bc5                 cmp eax, ebp
// 008125a2  740a                 je 0x8125ae
// 008125a4  8b4074               mov eax, dword ptr [eax + 0x74]
// 008125a7  8b4838               mov ecx, dword ptr [eax + 0x38]
// 008125aa  894c2414             mov dword ptr [esp + 0x14], ecx
// 008125ae  8b7c2468             mov edi, dword ptr [esp + 0x68]
// 008125b2  8b5c2470             mov ebx, dword ptr [esp + 0x70]
// 008125b6  892f                 mov dword ptr [edi], ebp
// 008125b8  896f04               mov dword ptr [edi + 4], ebp
// 008125bb  39ae9c010000         cmp dword ptr [esi + 0x19c], ebp
// 008125c1  0f8484000000         je 0x81264b
// 008125c7  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008125cd  68bc230000           push 0x23bc
// 008125d2  e8294d0300           call 0x847300
// 008125d7  8be8                 mov ebp, eax
// 008125d9  85ed                 test ebp, ebp
// 008125db  7546                 jne 0x812623
// 008125dd  6888010000           push 0x188
// 008125e2  e87912feff           call 0x7f3860
// 008125e7  83c404               add esp, 4
// 008125ea  89442468             mov dword ptr [esp + 0x68], eax
// 008125ee  c644246002           mov byte ptr [esp + 0x60], 2
// 008125f3  85c0                 test eax, eax
// 008125f5  7409                 je 0x812600
// 008125f7  8bc8                 mov ecx, eax
// 008125f9  e8a2ecffff           call 0x8112a0
// 008125fe  eb02                 jmp 0x812602
// 00812600  33c0                 xor eax, eax
// 00812602  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00812608  6a01                 push 1
// 0081260a  6aff                 push -1
// 0081260c  6856fd9900           push 0x99fd56
// 00812611  68bc230000           push 0x23bc
// 00812616  50                   push eax
// 00812617  c644247401           mov byte ptr [esp + 0x74], 1
// 0081261c  e8cf590300           call 0x847ff0
// 00812621  8be8                 mov ebp, eax
// 00812623  8b5500               mov edx, dword ptr [ebp]
// 00812626  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 0081262c  6a01                 push 1
// 0081262e  8bcd                 mov ecx, ebp
// 00812630  ffd0                 call eax
// 00812632  837c241400           cmp dword ptr [esp + 0x14], 0
// 00812637  0f84da000000         je 0x812717
// 0081263d  f6c308               test bl, 8
// 00812640  0f84c7000000         je 0x81270d
// 00812646  8344242c0b           add dword ptr [esp + 0x2c], 0xb
// 0081264b  8b442474             mov eax, dword ptr [esp + 0x74]
// 0081264f  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00812653  50                   push eax
// 00812654  8d4c2428             lea ecx, [esp + 0x28]
// 00812658  51                   push ecx
// 00812659  53                   push ebx
// 0081265a  52                   push edx
// 0081265b  8d442454             lea eax, [esp + 0x54]
// 0081265f  50                   push eax
// 00812660  8d4c2430             lea ecx, [esp + 0x30]
// 00812664  51                   push ecx
// 00812665  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0081266b  e850530300           call 0x8479c0
// 00812670  8b10                 mov edx, dword ptr [eax]
// 00812672  8917                 mov dword ptr [edi], edx
// 00812674  8b4004               mov eax, dword ptr [eax + 4]
// 00812677  894704               mov dword ptr [edi + 4], eax
// 0081267a  85ed                 test ebp, ebp
// 0081267c  7430                 je 0x8126ae
// 0081267e  8b5500               mov edx, dword ptr [ebp]
// 00812681  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 00812687  6a00                 push 0
// 00812689  8bcd                 mov ecx, ebp
// 0081268b  ffd0                 call eax
// 0081268d  8bce                 mov ecx, esi
// 0081268f  e8fc1effff           call 0x804590
// 00812694  8b10                 mov edx, dword ptr [eax]
// 00812696  8b92b0000000         mov edx, dword ptr [edx + 0xb0]
// 0081269c  57                   push edi
// 0081269d  6a00                 push 0
// 0081269f  56                   push esi
// 008126a0  55                   push ebp
// 008126a1  6a00                 push 0
// 008126a3  6a00                 push 0
// 008126a5  8d4c2434             lea ecx, [esp + 0x34]
// 008126a9  51                   push ecx
// 008126aa  8bc8                 mov ecx, eax
// 008126ac  ffd2                 call edx
// 008126ae  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 008126b4  a801                 test al, 1
// 008126b6  741e                 je 0x8126d6
// 008126b8  f6c340               test bl, 0x40
// 008126bb  7419                 je 0x8126d6
// 008126bd  83e0fe               and eax, 0xfffffffe
// 008126c0  8986e8000000         mov dword ptr [esi + 0xe8], eax
// 008126c6  8b06                 mov eax, dword ptr [esi]
// 008126c8  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 008126ce  6a01                 push 1
// 008126d0  6a00                 push 0
// 008126d2  8bce                 mov ecx, esi
// 008126d4  ffd2                 call edx
// 008126d6  8d4c2434             lea ecx, [esp + 0x34]
// 008126da  c644246000           mov byte ptr [esp + 0x60], 0
// 008126df  e8fc8f0300           call 0x84b6e0
// 008126e4  8d4c2444             lea ecx, [esp + 0x44]
// 008126e8  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 008126f0  e8db1ffeff           call 0x7f46d0
// 008126f5  8bc7                 mov eax, edi
// 008126f7  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008126fb  64890d00000000       mov dword ptr fs:[0], ecx
// 00812702  59                   pop ecx
// 00812703  5f                   pop edi
// 00812704  5e                   pop esi
// 00812705  5d                   pop ebp
// 00812706  5b                   pop ebx
// 00812707  83c450               add esp, 0x50
// 0081270a  c21000               ret 0x10
// 0081270d  834424300b           add dword ptr [esp + 0x30], 0xb
// 00812712  e934ffffff           jmp 0x81264b
// 00812717  f6c340               test bl, 0x40
// 0081271a  7443                 je 0x81275f
// 0081271c  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00812720  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00812724  51                   push ecx
// 00812725  8d542428             lea edx, [esp + 0x28]
// 00812729  52                   push edx
// 0081272a  53                   push ebx
// 0081272b  50                   push eax
// 0081272c  8d4c2454             lea ecx, [esp + 0x54]
// 00812730  51                   push ecx
// 00812731  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00812737  8d542428             lea edx, [esp + 0x28]
// 0081273b  52                   push edx
// 0081273c  e87f520300           call 0x8479c0
// 00812741  8b08                 mov ecx, dword ptr [eax]
// 00812743  890f                 mov dword ptr [edi], ecx
// 00812745  8b5004               mov edx, dword ptr [eax + 4]
// 00812748  8bcd                 mov ecx, ebp
// 0081274a  895704               mov dword ptr [edi + 4], edx
// 0081274d  e8ceebffff           call 0x811320
// 00812752  85c0                 test eax, eax
// 00812754  0f8454ffffff         je 0x8126ae
// 0081275a  e9defeffff           jmp 0x81263d
// 0081275f  8b6c2474             mov ebp, dword ptr [esp + 0x74]
// 00812763  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00812767  55                   push ebp
// 00812768  8d442428             lea eax, [esp + 0x28]
// 0081276c  50                   push eax
// 0081276d  53                   push ebx
// 0081276e  51                   push ecx
// 0081276f  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00812775  8d542454             lea edx, [esp + 0x54]
// 00812779  52                   push edx
// 0081277a  8d442430             lea eax, [esp + 0x30]
// 0081277e  50                   push eax
// 0081277f  e83c520300           call 0x8479c0
// 00812784  8b08                 mov ecx, dword ptr [eax]
// 00812786  890f                 mov dword ptr [edi], ecx
// 00812788  8b5004               mov edx, dword ptr [eax + 4]
// 0081278b  55                   push ebp
// 0081278c  8d442428             lea eax, [esp + 0x28]
// 00812790  50                   push eax
// 00812791  53                   push ebx
// 00812792  6a01                 push 1
// 00812794  895704               mov dword ptr [edi + 4], edx
// 00812797  8d4c2454             lea ecx, [esp + 0x54]
// 0081279b  51                   push ecx
// 0081279c  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008127a2  8d542428             lea edx, [esp + 0x28]
// 008127a6  52                   push edx
// 008127a7  e814520300           call 0x8479c0
// 008127ac  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008127b2  6a00                 push 0
// 008127b4  e8173b0300           call 0x8462d0
// 008127b9  83f801               cmp eax, 1
// 008127bc  0f8eecfeffff         jle 0x8126ae
// 008127c2  f6c308               test bl, 8
// 008127c5  7416                 je 0x8127dd
// 008127c7  8b442414             mov eax, dword ptr [esp + 0x14]
// 008127cb  8b0f                 mov ecx, dword ptr [edi]
// 008127cd  83c00b               add eax, 0xb
// 008127d0  3bc8                 cmp ecx, eax
// 008127d2  7e02                 jle 0x8127d6
// 008127d4  8bc1                 mov eax, ecx
// 008127d6  8907                 mov dword ptr [edi], eax
// 008127d8  e9d1feffff           jmp 0x8126ae
// 008127dd  8b442418             mov eax, dword ptr [esp + 0x18]
// 008127e1  8b4f04               mov ecx, dword ptr [edi + 4]
// 008127e4  83c00b               add eax, 0xb
// 008127e7  3bc8                 cmp ecx, eax
// 008127e9  7e02                 jle 0x8127ed
// 008127eb  8bc1                 mov eax, ecx
// 008127ed  894704               mov dword ptr [edi + 4], eax
// 008127f0  e9b9feffff           jmp 0x8126ae
// copied from an identical function in another client (function ?CalcDockingLayout@CXTPToolBar@@UAE?AVCSize@@HKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp
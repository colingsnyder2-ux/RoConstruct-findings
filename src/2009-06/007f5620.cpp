// roc 2009-06 007f5620  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 438 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f5620
//
// 007f5620  83ec3c               sub esp, 0x3c
// 007f5623  53                   push ebx
// 007f5624  55                   push ebp
// 007f5625  56                   push esi
// 007f5626  8bf1                 mov esi, ecx
// 007f5628  8b06                 mov eax, dword ptr [esi]
// 007f562a  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007f562d  57                   push edi
// 007f562e  ffd2                 call edx
// 007f5630  83782000             cmp dword ptr [eax + 0x20], 0
// 007f5634  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 007f5638  7403                 je 0x7f563d
// 007f563a  897e08               mov dword ptr [esi + 8], edi
// 007f563d  8b06                 mov eax, dword ptr [esi]
// 007f563f  8b5004               mov edx, dword ptr [eax + 4]
// 007f5642  8bce                 mov ecx, esi
// 007f5644  897e0c               mov dword ptr [esi + 0xc], edi
// 007f5647  bb01000000           mov ebx, 1
// 007f564c  ffd2                 call edx
// 007f564e  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 007f5652  55                   push ebp
// 007f5653  c744246000000000     mov dword ptr [esp + 0x60], 0
// 007f565b  ff1538ee8900         call dword ptr [0x89ee38]
// 007f5661  ff153cee8900         call dword ptr [0x89ee3c]
// 007f5667  3bc5                 cmp eax, ebp
// 007f5669  0f851c010000         jne 0x7f578b
// 007f566f  90                   nop 
// 007f5670  6a00                 push 0
// 007f5672  6a00                 push 0
// 007f5674  6a00                 push 0
// 007f5676  8d44243c             lea eax, [esp + 0x3c]
// 007f567a  50                   push eax
// 007f567b  ff15d8ee8900         call dword ptr [0x89eed8]
// 007f5681  ff153cee8900         call dword ptr [0x89ee3c]
// 007f5687  3bc5                 cmp eax, ebp
// 007f5689  0f85e7000000         jne 0x7f5776
// 007f568f  8b442434             mov eax, dword ptr [esp + 0x34]
// 007f5693  3d00020000           cmp eax, 0x200
// 007f5698  0f87b1000000         ja 0x7f574f
// 007f569e  7424                 je 0x7f56c4
// 007f56a0  83f81f               cmp eax, 0x1f
// 007f56a3  0f84e2000000         je 0x7f578b
// 007f56a9  3d00010000           cmp eax, 0x100
// 007f56ae  0f85a7000000         jne 0x7f575b
// 007f56b4  837c24381b           cmp dword ptr [esp + 0x38], 0x1b
// 007f56b9  0f84cc000000         je 0x7f578b
// 007f56bf  e9a2000000           jmp 0x7f5766
// 007f56c4  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007f56c8  8b5744               mov edx, dword ptr [edi + 0x44]
// 007f56cb  0fbfc8               movsx ecx, ax
// 007f56ce  c1e810               shr eax, 0x10
// 007f56d1  98                   cwde 
// 007f56d2  89542410             mov dword ptr [esp + 0x10], edx
// 007f56d6  8b5748               mov edx, dword ptr [edi + 0x48]
// 007f56d9  89542414             mov dword ptr [esp + 0x14], edx
// 007f56dd  8b574c               mov edx, dword ptr [edi + 0x4c]
// 007f56e0  50                   push eax
// 007f56e1  8944245c             mov dword ptr [esp + 0x5c], eax
// 007f56e5  8954241c             mov dword ptr [esp + 0x1c], edx
// 007f56e9  8b5750               mov edx, dword ptr [edi + 0x50]
// 007f56ec  51                   push ecx
// 007f56ed  8d442418             lea eax, [esp + 0x18]
// 007f56f1  50                   push eax
// 007f56f2  894c2460             mov dword ptr [esp + 0x60], ecx
// 007f56f6  89542428             mov dword ptr [esp + 0x28], edx
// 007f56fa  ff15c0ed8900         call dword ptr [0x89edc0]
// 007f5700  8b16                 mov edx, dword ptr [esi]
// 007f5702  8bd8                 mov ebx, eax
// 007f5704  8b422c               mov eax, dword ptr [edx + 0x2c]
// 007f5707  8bce                 mov ecx, esi
// 007f5709  ffd0                 call eax
// 007f570b  83782000             cmp dword ptr [eax + 0x20], 0
// 007f570f  7455                 je 0x7f5766
// 007f5711  8bc3                 mov eax, ebx
// 007f5713  f7d8                 neg eax
// 007f5715  1bc0                 sbb eax, eax
// 007f5717  23c7                 and eax, edi
// 007f5719  3b4608               cmp eax, dword ptr [esi + 8]
// 007f571c  7448                 je 0x7f5766
// 007f571e  894608               mov dword ptr [esi + 8], eax
// 007f5721  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 007f5724  8b5748               mov edx, dword ptr [edi + 0x48]
// 007f5727  8b474c               mov eax, dword ptr [edi + 0x4c]
// 007f572a  894c2420             mov dword ptr [esp + 0x20], ecx
// 007f572e  8b4f50               mov ecx, dword ptr [edi + 0x50]
// 007f5731  89542424             mov dword ptr [esp + 0x24], edx
// 007f5735  8b16                 mov edx, dword ptr [esi]
// 007f5737  8b5234               mov edx, dword ptr [edx + 0x34]
// 007f573a  89442428             mov dword ptr [esp + 0x28], eax
// 007f573e  6a01                 push 1
// 007f5740  8d442424             lea eax, [esp + 0x24]
// 007f5744  894c2430             mov dword ptr [esp + 0x30], ecx
// 007f5748  50                   push eax
// 007f5749  8bce                 mov ecx, esi
// 007f574b  ffd2                 call edx
// 007f574d  eb17                 jmp 0x7f5766
// 007f574f  2d02020000           sub eax, 0x202
// 007f5754  742d                 je 0x7f5783
// 007f5756  83e802               sub eax, 2
// 007f5759  7430                 je 0x7f578b
// 007f575b  8d442430             lea eax, [esp + 0x30]
// 007f575f  50                   push eax
// 007f5760  ff154ced8900         call dword ptr [0x89ed4c]
// 007f5766  ff153cee8900         call dword ptr [0x89ee3c]
// 007f576c  3bc5                 cmp eax, ebp
// 007f576e  0f84fcfeffff         je 0x7f5670
// 007f5774  eb15                 jmp 0x7f578b
// 007f5776  8d4c2430             lea ecx, [esp + 0x30]
// 007f577a  51                   push ecx
// 007f577b  ff154ced8900         call dword ptr [0x89ed4c]
// 007f5781  eb08                 jmp 0x7f578b
// 007f5783  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 007f578b  ff1544ee8900         call dword ptr [0x89ee44]
// 007f5791  8b542458             mov edx, dword ptr [esp + 0x58]
// 007f5795  8b442454             mov eax, dword ptr [esp + 0x54]
// 007f5799  52                   push edx
// 007f579a  50                   push eax
// 007f579b  55                   push ebp
// 007f579c  8bce                 mov ecx, esi
// 007f579e  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 007f57a5  e8e6f6ffff           call 0x7f4e90
// 007f57aa  8b16                 mov edx, dword ptr [esi]
// 007f57ac  8b4234               mov eax, dword ptr [edx + 0x34]
// 007f57af  6a00                 push 0
// 007f57b1  6a00                 push 0
// 007f57b3  8bce                 mov ecx, esi
// 007f57b5  ffd0                 call eax
// 007f57b7  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 007f57bc  740e                 je 0x7f57cc
// 007f57be  85db                 test ebx, ebx
// 007f57c0  740a                 je 0x7f57cc
// 007f57c2  8b16                 mov edx, dword ptr [esi]
// 007f57c4  8b4260               mov eax, dword ptr [edx + 0x60]
// 007f57c7  57                   push edi
// 007f57c8  8bce                 mov ecx, esi
// 007f57ca  ffd0                 call eax
// 007f57cc  5f                   pop edi
// 007f57cd  5e                   pop esi
// 007f57ce  5d                   pop ebp
// 007f57cf  5b                   pop ebx
// 007f57d0  83c43c               add esp, 0x3c
// 007f57d3  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?TrackClick@CXTPTabManager@@IAEXPAUHWND__@@VCPoint@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp

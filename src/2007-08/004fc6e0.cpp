// roc 2007-08 004fc6e0  unit: RBX::Render::AggregateChunk  size: 415 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fc6e0
//
// 004fc6e0  83ec18               sub esp, 0x18
// 004fc6e3  53                   push ebx
// 004fc6e4  55                   push ebp
// 004fc6e5  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 004fc6eb  8d5908               lea ebx, [ecx + 8]
// 004fc6ee  56                   push esi
// 004fc6ef  8b7304               mov esi, dword ptr [ebx + 4]
// 004fc6f2  3b7308               cmp esi, dword ptr [ebx + 8]
// 004fc6f5  57                   push edi
// 004fc6f6  894c2410             mov dword ptr [esp + 0x10], ecx
// 004fc6fa  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004fc702  7602                 jbe 0x4fc706
// 004fc704  ffd5                 call ebp
// 004fc706  8b7b08               mov edi, dword ptr [ebx + 8]
// 004fc709  397b04               cmp dword ptr [ebx + 4], edi
// 004fc70c  7602                 jbe 0x4fc710
// 004fc70e  ffd5                 call ebp
// 004fc710  3bdb                 cmp ebx, ebx
// 004fc712  7402                 je 0x4fc716
// 004fc714  ffd5                 call ebp
// 004fc716  3bf7                 cmp esi, edi
// 004fc718  741a                 je 0x4fc734
// 004fc71a  3b7308               cmp esi, dword ptr [ebx + 8]
// 004fc71d  7202                 jb 0x4fc721
// 004fc71f  ffd5                 call ebp
// 004fc721  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 004fc728  3b7308               cmp esi, dword ptr [ebx + 8]
// 004fc72b  7202                 jb 0x4fc72f
// 004fc72d  ffd5                 call ebp
// 004fc72f  83c620               add esi, 0x20
// 004fc732  ebd2                 jmp 0x4fc706
// 004fc734  8b7304               mov esi, dword ptr [ebx + 4]
// 004fc737  3b7308               cmp esi, dword ptr [ebx + 8]
// 004fc73a  7602                 jbe 0x4fc73e
// 004fc73c  ffd5                 call ebp
// 004fc73e  8bee                 mov ebp, esi
// 004fc740  8b7308               mov esi, dword ptr [ebx + 8]
// 004fc743  397304               cmp dword ptr [ebx + 4], esi
// 004fc746  7606                 jbe 0x4fc74e
// 004fc748  ff15d8e67700         call dword ptr [0x77e6d8]
// 004fc74e  3bdb                 cmp ebx, ebx
// 004fc750  7406                 je 0x4fc758
// 004fc752  ff15d8e67700         call dword ptr [0x77e6d8]
// 004fc758  3bee                 cmp ebp, esi
// 004fc75a  0f8413010000         je 0x4fc873
// 004fc760  3b6b08               cmp ebp, dword ptr [ebx + 8]
// 004fc763  7206                 jb 0x4fc76b
// 004fc765  ff15d8e67700         call dword ptr [0x77e6d8]
// 004fc76b  8d750c               lea esi, [ebp + 0xc]
// 004fc76e  8bff                 mov edi, edi
// 004fc770  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fc773  85c9                 test ecx, ecx
// 004fc775  0f84de000000         je 0x4fc859
// 004fc77b  8b4608               mov eax, dword ptr [esi + 8]
// 004fc77e  8b7d1c               mov edi, dword ptr [ebp + 0x1c]
// 004fc781  2bc1                 sub eax, ecx
// 004fc783  c1f802               sar eax, 2
// 004fc786  3bf8                 cmp edi, eax
// 004fc788  0f83cb000000         jae 0x4fc859
// 004fc78e  85c9                 test ecx, ecx
// 004fc790  740c                 je 0x4fc79e
// 004fc792  8b4608               mov eax, dword ptr [esi + 8]
// 004fc795  2bc1                 sub eax, ecx
// 004fc797  c1f802               sar eax, 2
// 004fc79a  3bf8                 cmp edi, eax
// 004fc79c  7206                 jb 0x4fc7a4
// 004fc79e  ff15d8e67700         call dword ptr [0x77e6d8]
// 004fc7a4  8b4604               mov eax, dword ptr [esi + 4]
// 004fc7a7  8b3cb8               mov edi, dword ptr [eax + edi*4]
// 004fc7aa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004fc7ae  57                   push edi
// 004fc7af  897c2420             mov dword ptr [esp + 0x20], edi
// 004fc7b3  e848fbffff           call 0x4fc300
// 004fc7b8  3bc5                 cmp eax, ebp
// 004fc7ba  89442418             mov dword ptr [esp + 0x18], eax
// 004fc7be  0f848c000000         je 0x4fc850
// 004fc7c4  8b5e08               mov ebx, dword ptr [esi + 8]
// 004fc7c7  395e04               cmp dword ptr [esi + 4], ebx
// 004fc7ca  7606                 jbe 0x4fc7d2
// 004fc7cc  ff15d8e67700         call dword ptr [0x77e6d8]
// 004fc7d2  8d43fc               lea eax, [ebx - 4]
// 004fc7d5  3b4608               cmp eax, dword ptr [esi + 8]
// 004fc7d8  895c2424             mov dword ptr [esp + 0x24], ebx
// 004fc7dc  7705                 ja 0x4fc7e3
// 004fc7de  3b4604               cmp eax, dword ptr [esi + 4]
// 004fc7e1  7306                 jae 0x4fc7e9
// 004fc7e3  ff15d8e67700         call dword ptr [0x77e6d8]
// 004fc7e9  8d7bfc               lea edi, [ebx - 4]
// 004fc7ec  3b7e08               cmp edi, dword ptr [esi + 8]
// 004fc7ef  7206                 jb 0x4fc7f7
// 004fc7f1  ff15d8e67700         call dword ptr [0x77e6d8]
// 004fc7f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fc7fa  85c9                 test ecx, ecx
// 004fc7fc  8b5d1c               mov ebx, dword ptr [ebp + 0x1c]
// 004fc7ff  740c                 je 0x4fc80d
// 004fc801  8b4608               mov eax, dword ptr [esi + 8]
// 004fc804  2bc1                 sub eax, ecx
// 004fc806  c1f802               sar eax, 2
// 004fc809  3bd8                 cmp ebx, eax
// 004fc80b  7206                 jb 0x4fc813
// 004fc80d  ff15d8e67700         call dword ptr [0x77e6d8]
// 004fc813  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fc816  8b17                 mov edx, dword ptr [edi]
// 004fc818  891499               mov dword ptr [ecx + ebx*4], edx
// 004fc81b  8b4604               mov eax, dword ptr [esi + 4]
// 004fc81e  85c0                 test eax, eax
// 004fc820  7412                 je 0x4fc834
// 004fc822  8b4e08               mov ecx, dword ptr [esi + 8]
// 004fc825  8bd1                 mov edx, ecx
// 004fc827  2bd0                 sub edx, eax
// 004fc829  c1fa02               sar edx, 2
// 004fc82c  7406                 je 0x4fc834
// 004fc82e  83c1fc               add ecx, -4
// 004fc831  894e08               mov dword ptr [esi + 8], ecx
// 004fc834  8b442418             mov eax, dword ptr [esp + 0x18]
// 004fc838  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004fc83c  50                   push eax
// 004fc83d  51                   push ecx
// 004fc83e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004fc842  e8d9fdffff           call 0x4fc620
// 004fc847  01442414             add dword ptr [esp + 0x14], eax
// 004fc84b  e920ffffff           jmp 0x4fc770
// 004fc850  83451c01             add dword ptr [ebp + 0x1c], 1
// 004fc854  e917ffffff           jmp 0x4fc770
// 004fc859  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004fc85d  83c308               add ebx, 8
// 004fc860  3b6b08               cmp ebp, dword ptr [ebx + 8]
// 004fc863  7206                 jb 0x4fc86b
// 004fc865  ff15d8e67700         call dword ptr [0x77e6d8]
// 004fc86b  83c520               add ebp, 0x20
// 004fc86e  e9cdfeffff           jmp 0x4fc740
// 004fc873  8b442414             mov eax, dword ptr [esp + 0x14]
// 004fc877  5f                   pop edi
// 004fc878  5e                   pop esi
// 004fc879  5d                   pop ebp
// 004fc87a  5b                   pop ebx
// 004fc87b  83c418               add esp, 0x18
// 004fc87e  c3                   ret 
// library openrbx-client/Rendering\RenderLib\Clusterer.cpp (function ?moveSamples@Clusterer@Render@RBX@@AAEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Clusterer.cpp

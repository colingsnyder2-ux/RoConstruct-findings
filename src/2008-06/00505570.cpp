// roc 2008-06 00505570  unit: RBX::Render::RenderScene  size: 437 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00505570
//
// 00505570  51                   push ecx
// 00505571  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00505575  53                   push ebx
// 00505576  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0050557a  8bc1                 mov eax, ecx
// 0050557c  2bc3                 sub eax, ebx
// 0050557e  55                   push ebp
// 0050557f  56                   push esi
// 00505580  c1f802               sar eax, 2
// 00505583  57                   push edi
// 00505584  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00505588  99                   cdq 
// 00505589  2bc2                 sub eax, edx
// 0050558b  57                   push edi
// 0050558c  d1f8                 sar eax, 1
// 0050558e  83c1fc               add ecx, -4
// 00505591  51                   push ecx
// 00505592  8d3483               lea esi, [ebx + eax*4]
// 00505595  56                   push esi
// 00505596  53                   push ebx
// 00505597  e814feffff           call 0x5053b0
// 0050559c  83c410               add esp, 0x10
// 0050559f  8d6e04               lea ebp, [esi + 4]
// 005055a2  3bde                 cmp ebx, esi
// 005055a4  7327                 jae 0x5055cd
// 005055a6  8d7efc               lea edi, [esi - 4]
// 005055a9  56                   push esi
// 005055aa  57                   push edi
// 005055ab  ff54242c             call dword ptr [esp + 0x2c]
// 005055af  83c408               add esp, 8
// 005055b2  84c0                 test al, al
// 005055b4  7513                 jne 0x5055c9
// 005055b6  57                   push edi
// 005055b7  56                   push esi
// 005055b8  ff54242c             call dword ptr [esp + 0x2c]
// 005055bc  83c408               add esp, 8
// 005055bf  84c0                 test al, al
// 005055c1  7506                 jne 0x5055c9
// 005055c3  8bf7                 mov esi, edi
// 005055c5  3bde                 cmp ebx, esi
// 005055c7  72dd                 jb 0x5055a6
// 005055c9  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005055cd  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005055d1  3beb                 cmp ebp, ebx
// 005055d3  731d                 jae 0x5055f2
// 005055d5  56                   push esi
// 005055d6  55                   push ebp
// 005055d7  ffd7                 call edi
// 005055d9  83c408               add esp, 8
// 005055dc  84c0                 test al, al
// 005055de  7512                 jne 0x5055f2
// 005055e0  55                   push ebp
// 005055e1  56                   push esi
// 005055e2  ffd7                 call edi
// 005055e4  83c408               add esp, 8
// 005055e7  84c0                 test al, al
// 005055e9  7507                 jne 0x5055f2
// 005055eb  83c504               add ebp, 4
// 005055ee  3beb                 cmp ebp, ebx
// 005055f0  72e3                 jb 0x5055d5
// 005055f2  8bde                 mov ebx, esi
// 005055f4  8bfd                 mov edi, ebp
// 005055f6  895c2410             mov dword ptr [esp + 0x10], ebx
// 005055fa  8d9b00000000         lea ebx, [ebx]
// 00505600  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00505604  7334                 jae 0x50563a
// 00505606  57                   push edi
// 00505607  56                   push esi
// 00505608  ff54242c             call dword ptr [esp + 0x2c]
// 0050560c  83c408               add esp, 8
// 0050560f  84c0                 test al, al
// 00505611  751e                 jne 0x505631
// 00505613  56                   push esi
// 00505614  57                   push edi
// 00505615  ff54242c             call dword ptr [esp + 0x2c]
// 00505619  83c408               add esp, 8
// 0050561c  84c0                 test al, al
// 0050561e  751a                 jne 0x50563a
// 00505620  8bc5                 mov eax, ebp
// 00505622  83c504               add ebp, 4
// 00505625  3bc7                 cmp eax, edi
// 00505627  7408                 je 0x505631
// 00505629  8b17                 mov edx, dword ptr [edi]
// 0050562b  8b08                 mov ecx, dword ptr [eax]
// 0050562d  8910                 mov dword ptr [eax], edx
// 0050562f  890f                 mov dword ptr [edi], ecx
// 00505631  83c704               add edi, 4
// 00505634  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 00505638  72cc                 jb 0x505606
// 0050563a  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 0050563e  7648                 jbe 0x505688
// 00505640  83c3fc               add ebx, -4
// 00505643  56                   push esi
// 00505644  53                   push ebx
// 00505645  ff54242c             call dword ptr [esp + 0x2c]
// 00505649  83c408               add esp, 8
// 0050564c  84c0                 test al, al
// 0050564e  751c                 jne 0x50566c
// 00505650  53                   push ebx
// 00505651  56                   push esi
// 00505652  ff54242c             call dword ptr [esp + 0x2c]
// 00505656  83c408               add esp, 8
// 00505659  84c0                 test al, al
// 0050565b  7523                 jne 0x505680
// 0050565d  83ee04               sub esi, 4
// 00505660  3bf3                 cmp esi, ebx
// 00505662  7408                 je 0x50566c
// 00505664  8b0b                 mov ecx, dword ptr [ebx]
// 00505666  8b06                 mov eax, dword ptr [esi]
// 00505668  890e                 mov dword ptr [esi], ecx
// 0050566a  8903                 mov dword ptr [ebx], eax
// 0050566c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00505670  83e804               sub eax, 4
// 00505673  83eb04               sub ebx, 4
// 00505676  89442410             mov dword ptr [esp + 0x10], eax
// 0050567a  3944241c             cmp dword ptr [esp + 0x1c], eax
// 0050567e  72c3                 jb 0x505643
// 00505680  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00505684  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 00505688  7542                 jne 0x5056cc
// 0050568a  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 0050568e  0f8482000000         je 0x505716
// 00505694  3bef                 cmp ebp, edi
// 00505696  740e                 je 0x5056a6
// 00505698  3bf5                 cmp esi, ebp
// 0050569a  740a                 je 0x5056a6
// 0050569c  8b5500               mov edx, dword ptr [ebp]
// 0050569f  8b06                 mov eax, dword ptr [esi]
// 005056a1  8916                 mov dword ptr [esi], edx
// 005056a3  894500               mov dword ptr [ebp], eax
// 005056a6  8bc7                 mov eax, edi
// 005056a8  8bce                 mov ecx, esi
// 005056aa  83c504               add ebp, 4
// 005056ad  83c604               add esi, 4
// 005056b0  83c704               add edi, 4
// 005056b3  3bc8                 cmp ecx, eax
// 005056b5  0f8445ffffff         je 0x505600
// 005056bb  8b18                 mov ebx, dword ptr [eax]
// 005056bd  8b11                 mov edx, dword ptr [ecx]
// 005056bf  8919                 mov dword ptr [ecx], ebx
// 005056c1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005056c5  8910                 mov dword ptr [eax], edx
// 005056c7  e934ffffff           jmp 0x505600
// 005056cc  83eb04               sub ebx, 4
// 005056cf  895c2410             mov dword ptr [esp + 0x10], ebx
// 005056d3  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 005056d7  7529                 jne 0x505702
// 005056d9  83ee04               sub esi, 4
// 005056dc  3bde                 cmp ebx, esi
// 005056de  7408                 je 0x5056e8
// 005056e0  8b0e                 mov ecx, dword ptr [esi]
// 005056e2  8b03                 mov eax, dword ptr [ebx]
// 005056e4  890b                 mov dword ptr [ebx], ecx
// 005056e6  8906                 mov dword ptr [esi], eax
// 005056e8  83ed04               sub ebp, 4
// 005056eb  3bf5                 cmp esi, ebp
// 005056ed  0f840dffffff         je 0x505600
// 005056f3  8b5500               mov edx, dword ptr [ebp]
// 005056f6  8b06                 mov eax, dword ptr [esi]
// 005056f8  8916                 mov dword ptr [esi], edx
// 005056fa  894500               mov dword ptr [ebp], eax
// 005056fd  e9fefeffff           jmp 0x505600
// 00505702  3bfb                 cmp edi, ebx
// 00505704  7408                 je 0x50570e
// 00505706  8b0b                 mov ecx, dword ptr [ebx]
// 00505708  8b07                 mov eax, dword ptr [edi]
// 0050570a  890f                 mov dword ptr [edi], ecx
// 0050570c  8903                 mov dword ptr [ebx], eax
// 0050570e  83c704               add edi, 4
// 00505711  e9eafeffff           jmp 0x505600
// 00505716  8b442418             mov eax, dword ptr [esp + 0x18]
// 0050571a  5f                   pop edi
// 0050571b  8930                 mov dword ptr [eax], esi
// 0050571d  5e                   pop esi
// 0050571e  896804               mov dword ptr [eax + 4], ebp
// 00505721  5d                   pop ebp
// 00505722  5b                   pop ebx
// 00505723  59                   pop ecx
// 00505724  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Unguarded_partition@PAPAVRenderSurface@Render@RBX@@P6A_NABQAV123@0@Z@std@@YA?AU?$pair@PAPAVRenderSurface@Render@RBX@@PAPAV123@@0@PAPAVRenderSurface@Render@RBX@@0P6A_NABQAV234@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp

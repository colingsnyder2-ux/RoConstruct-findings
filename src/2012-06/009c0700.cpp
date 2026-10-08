// from server: 100% by auto
// roc 2012-06 009c0700  unit: CRobloxTreeCtrl  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c0700
//
// 009c0700  837c240800           cmp dword ptr [esp + 8], 0
// 009c0705  56                   push esi
// 009c0706  57                   push edi
// 009c0707  8bf1                 mov esi, ecx
// 009c0709  0f8491000000         je 0x9c07a0
// 009c070f  53                   push ebx
// 009c0710  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 009c0714  f6c304               test bl, 4
// 009c0717  744a                 je 0x9c0763
// 009c0719  837e0c00             cmp dword ptr [esi + 0xc], 0
// 009c071d  7519                 jne 0x9c0738
// 009c071f  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c0722  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c0725  6a00                 push 0
// 009c0727  6a09                 push 9
// 009c0729  680a110000           push 0x110a
// 009c072e  50                   push eax
// 009c072f  ff15043cb200         call dword ptr [0xb23c04]
// 009c0735  89460c               mov dword ptr [esi + 0xc], eax
// 009c0738  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009c073c  6a01                 push 1
// 009c073e  6a01                 push 1
// 009c0740  57                   push edi
// 009c0741  8bce                 mov ecx, esi
// 009c0743  e898f8ffff           call 0x9bffe0
// 009c0748  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 009c074b  c1eb03               shr ebx, 3
// 009c074e  f7d3                 not ebx
// 009c0750  83e301               and ebx, 1
// 009c0753  53                   push ebx
// 009c0754  57                   push edi
// 009c0755  51                   push ecx
// 009c0756  8bce                 mov ecx, esi
// 009c0758  e853feffff           call 0x9c05b0
// 009c075d  5b                   pop ebx
// 009c075e  5f                   pop edi
// 009c075f  5e                   pop esi
// 009c0760  c20c00               ret 0xc
// 009c0763  f6c308               test bl, 8
// 009c0766  752b                 jne 0x9c0793
// 009c0768  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009c076c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c076f  6a02                 push 2
// 009c0771  57                   push edi
// 009c0772  e89b900d00           call 0xa99812
// 009c0777  a802                 test al, 2
// 009c0779  750c                 jne 0x9c0787
// 009c077b  8b16                 mov edx, dword ptr [esi]
// 009c077d  8b4250               mov eax, dword ptr [edx + 0x50]
// 009c0780  57                   push edi
// 009c0781  6a00                 push 0
// 009c0783  8bce                 mov ecx, esi
// 009c0785  ffd0                 call eax
// 009c0787  6a03                 push 3
// 009c0789  6a03                 push 3
// 009c078b  57                   push edi
// 009c078c  8bce                 mov ecx, esi
// 009c078e  e84df8ffff           call 0x9bffe0
// 009c0793  5b                   pop ebx
// 009c0794  5f                   pop edi
// 009c0795  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 009c079c  5e                   pop esi
// 009c079d  c20c00               ret 0xc
// 009c07a0  8a442414             mov al, byte ptr [esp + 0x14]
// 009c07a4  a80c                 test al, 0xc
// 009c07a6  7410                 je 0x9c07b8
// 009c07a8  a804                 test al, 4
// 009c07aa  75b2                 jne 0x9c075e
// 009c07ac  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009c07b0  5f                   pop edi
// 009c07b1  894e0c               mov dword ptr [esi + 0xc], ecx
// 009c07b4  5e                   pop esi
// 009c07b5  c20c00               ret 0xc
// 009c07b8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009c07bc  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c07bf  6a02                 push 2
// 009c07c1  57                   push edi
// 009c07c2  e84b900d00           call 0xa99812
// 009c07c7  a802                 test al, 2
// 009c07c9  750c                 jne 0x9c07d7
// 009c07cb  8b16                 mov edx, dword ptr [esi]
// 009c07cd  8b4250               mov eax, dword ptr [edx + 0x50]
// 009c07d0  57                   push edi
// 009c07d1  6a00                 push 0
// 009c07d3  8bce                 mov ecx, esi
// 009c07d5  ffd0                 call eax
// 009c07d7  6a03                 push 3
// 009c07d9  6a03                 push 3
// 009c07db  57                   push edi
// 009c07dc  8bce                 mov ecx, esi
// 009c07de  e8fdf7ffff           call 0x9bffe0
// 009c07e3  5f                   pop edi
// 009c07e4  5e                   pop esi
// 009c07e5  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?DoPreSelection@CXTPTreeBase@@MAEXPAU_TREEITEM@@HI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp

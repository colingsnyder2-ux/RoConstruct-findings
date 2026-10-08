// roc 2009-06 0049e8a0  unit: G3D::VARArea  size: 590 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049e8a0
//
// 0049e8a0  53                   push ebx
// 0049e8a1  55                   push ebp
// 0049e8a2  56                   push esi
// 0049e8a3  8bf1                 mov esi, ecx
// 0049e8a5  ff4678               inc dword ptr [esi + 0x78]
// 0049e8a8  b808000000           mov eax, 8
// 0049e8ad  57                   push edi
// 0049e8ae  39442414             cmp dword ptr [esp + 0x14], eax
// 0049e8b2  750a                 jne 0x49e8be
// 0049e8b4  8b8e28040000         mov ecx, dword ptr [esi + 0x428]
// 0049e8ba  894c2414             mov dword ptr [esp + 0x14], ecx
// 0049e8be  8b542418             mov edx, dword ptr [esp + 0x18]
// 0049e8c2  3bd0                 cmp edx, eax
// 0049e8c4  750a                 jne 0x49e8d0
// 0049e8c6  8b962c040000         mov edx, dword ptr [esi + 0x42c]
// 0049e8cc  89542418             mov dword ptr [esp + 0x18], edx
// 0049e8d0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0049e8d4  3bf8                 cmp edi, eax
// 0049e8d6  7506                 jne 0x49e8de
// 0049e8d8  8bbe30040000         mov edi, dword ptr [esi + 0x430]
// 0049e8de  39442420             cmp dword ptr [esp + 0x20], eax
// 0049e8e2  750a                 jne 0x49e8ee
// 0049e8e4  8b8e34040000         mov ecx, dword ptr [esi + 0x434]
// 0049e8ea  894c2420             mov dword ptr [esp + 0x20], ecx
// 0049e8ee  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0049e8f2  3bd8                 cmp ebx, eax
// 0049e8f4  750c                 jne 0x49e902
// 0049e8f6  8b8e38040000         mov ecx, dword ptr [esi + 0x438]
// 0049e8fc  894c2424             mov dword ptr [esp + 0x24], ecx
// 0049e900  8bd9                 mov ebx, ecx
// 0049e902  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0049e906  3be8                 cmp ebp, eax
// 0049e908  7506                 jne 0x49e910
// 0049e90a  8bae3c040000         mov ebp, dword ptr [esi + 0x43c]
// 0049e910  8b442414             mov eax, dword ptr [esp + 0x14]
// 0049e914  3b8628040000         cmp eax, dword ptr [esi + 0x428]
// 0049e91a  7541                 jne 0x49e95d
// 0049e91c  3b962c040000         cmp edx, dword ptr [esi + 0x42c]
// 0049e922  7539                 jne 0x49e95d
// 0049e924  3bbe30040000         cmp edi, dword ptr [esi + 0x430]
// 0049e92a  7531                 jne 0x49e95d
// 0049e92c  e88f790000           call 0x4a62c0
// 0049e931  84c0                 test al, al
// 0049e933  0f84ae010000         je 0x49eae7
// 0049e939  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049e93d  3b8e34040000         cmp ecx, dword ptr [esi + 0x434]
// 0049e943  7514                 jne 0x49e959
// 0049e945  3b9e38040000         cmp ebx, dword ptr [esi + 0x438]
// 0049e94b  750c                 jne 0x49e959
// 0049e94d  3bae3c040000         cmp ebp, dword ptr [esi + 0x43c]
// 0049e953  0f848e010000         je 0x49eae7
// 0049e959  8b542418             mov edx, dword ptr [esp + 0x18]
// 0049e95d  803d13c9a30000       cmp byte ptr [0xa3c913], 0
// 0049e964  7466                 je 0x49e9cc
// 0049e966  6805040000           push 0x405
// 0049e96b  ff1540d2a300         call dword ptr [0xa3d240]
// 0049e971  55                   push ebp
// 0049e972  8bce                 mov ecx, esi
// 0049e974  e8a7feffff           call 0x49e820
// 0049e979  50                   push eax
// 0049e97a  53                   push ebx
// 0049e97b  e8a0feffff           call 0x49e820
// 0049e980  8b542424             mov edx, dword ptr [esp + 0x24]
// 0049e984  50                   push eax
// 0049e985  52                   push edx
// 0049e986  e895feffff           call 0x49e820
// 0049e98b  8b1d58eb8900         mov ebx, dword ptr [0x89eb58]
// 0049e991  50                   push eax
// 0049e992  ffd3                 call ebx
// 0049e994  6804040000           push 0x404
// 0049e999  ff1540d2a300         call dword ptr [0xa3d240]
// 0049e99f  57                   push edi
// 0049e9a0  8bce                 mov ecx, esi
// 0049e9a2  e879feffff           call 0x49e820
// 0049e9a7  50                   push eax
// 0049e9a8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0049e9ac  50                   push eax
// 0049e9ad  e86efeffff           call 0x49e820
// 0049e9b2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049e9b6  50                   push eax
// 0049e9b7  51                   push ecx
// 0049e9b8  8bce                 mov ecx, esi
// 0049e9ba  e861feffff           call 0x49e820
// 0049e9bf  50                   push eax
// 0049e9c0  ffd3                 call ebx
// 0049e9c2  83467004             add dword ptr [esi + 0x70], 4
// 0049e9c6  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0049e9ca  eb7e                 jmp 0x49ea4a
// 0049e9cc  803d14c9a30000       cmp byte ptr [0xa3c914], 0
// 0049e9d3  57                   push edi
// 0049e9d4  8bce                 mov ecx, esi
// 0049e9d6  744f                 je 0x49ea27
// 0049e9d8  83467002             add dword ptr [esi + 0x70], 2
// 0049e9dc  e83ffeffff           call 0x49e820
// 0049e9e1  50                   push eax
// 0049e9e2  52                   push edx
// 0049e9e3  e838feffff           call 0x49e820
// 0049e9e8  8b542418             mov edx, dword ptr [esp + 0x18]
// 0049e9ec  50                   push eax
// 0049e9ed  52                   push edx
// 0049e9ee  e82dfeffff           call 0x49e820
// 0049e9f3  50                   push eax
// 0049e9f4  6804040000           push 0x404
// 0049e9f9  ff1590d3a300         call dword ptr [0xa3d390]
// 0049e9ff  55                   push ebp
// 0049ea00  8bce                 mov ecx, esi
// 0049ea02  e819feffff           call 0x49e820
// 0049ea07  50                   push eax
// 0049ea08  53                   push ebx
// 0049ea09  e812feffff           call 0x49e820
// 0049ea0e  50                   push eax
// 0049ea0f  8b442428             mov eax, dword ptr [esp + 0x28]
// 0049ea13  50                   push eax
// 0049ea14  e807feffff           call 0x49e820
// 0049ea19  50                   push eax
// 0049ea1a  6805040000           push 0x405
// 0049ea1f  ff1590d3a300         call dword ptr [0xa3d390]
// 0049ea25  eb23                 jmp 0x49ea4a
// 0049ea27  e8f4fdffff           call 0x49e820
// 0049ea2c  50                   push eax
// 0049ea2d  52                   push edx
// 0049ea2e  e8edfdffff           call 0x49e820
// 0049ea33  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049ea37  50                   push eax
// 0049ea38  51                   push ecx
// 0049ea39  8bce                 mov ecx, esi
// 0049ea3b  e8e0fdffff           call 0x49e820
// 0049ea40  50                   push eax
// 0049ea41  ff1558eb8900         call dword ptr [0x89eb58]
// 0049ea47  ff4670               inc dword ptr [esi + 0x70]
// 0049ea4a  b802000000           mov eax, 2
// 0049ea4f  39442414             cmp dword ptr [esp + 0x14], eax
// 0049ea53  7539                 jne 0x49ea8e
// 0049ea55  3bf8                 cmp edi, eax
// 0049ea57  7535                 jne 0x49ea8e
// 0049ea59  39442418             cmp dword ptr [esp + 0x18], eax
// 0049ea5d  752f                 jne 0x49ea8e
// 0049ea5f  e85c780000           call 0x4a62c0
// 0049ea64  84c0                 test al, al
// 0049ea66  7410                 je 0x49ea78
// 0049ea68  837c242002           cmp dword ptr [esp + 0x20], 2
// 0049ea6d  751f                 jne 0x49ea8e
// 0049ea6f  83fd02               cmp ebp, 2
// 0049ea72  751a                 jne 0x49ea8e
// 0049ea74  3bdd                 cmp ebx, ebp
// 0049ea76  7516                 jne 0x49ea8e
// 0049ea78  83be1c04000006       cmp dword ptr [esi + 0x41c], 6
// 0049ea7f  7536                 jne 0x49eab7
// 0049ea81  68900b0000           push 0xb90
// 0049ea86  ff15b8eb8900         call dword ptr [0x89ebb8]
// 0049ea8c  eb29                 jmp 0x49eab7
// 0049ea8e  83be1c04000006       cmp dword ptr [esi + 0x41c], 6
// 0049ea95  7520                 jne 0x49eab7
// 0049ea97  68900b0000           push 0xb90
// 0049ea9c  ff15aceb8900         call dword ptr [0x89ebac]
// 0049eaa2  8b9620040000         mov edx, dword ptr [esi + 0x420]
// 0049eaa8  8b861c040000         mov eax, dword ptr [esi + 0x41c]
// 0049eaae  52                   push edx
// 0049eaaf  50                   push eax
// 0049eab0  8bce                 mov ecx, esi
// 0049eab2  e8e9faffff           call 0x49e5a0
// 0049eab7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0049eabb  8b542418             mov edx, dword ptr [esp + 0x18]
// 0049eabf  8b442420             mov eax, dword ptr [esp + 0x20]
// 0049eac3  898e28040000         mov dword ptr [esi + 0x428], ecx
// 0049eac9  89962c040000         mov dword ptr [esi + 0x42c], edx
// 0049eacf  89be30040000         mov dword ptr [esi + 0x430], edi
// 0049ead5  898634040000         mov dword ptr [esi + 0x434], eax
// 0049eadb  899e38040000         mov dword ptr [esi + 0x438], ebx
// 0049eae1  89ae3c040000         mov dword ptr [esi + 0x43c], ebp
// 0049eae7  5f                   pop edi
// 0049eae8  5e                   pop esi
// 0049eae9  5d                   pop ebp
// 0049eaea  5b                   pop ebx
// 0049eaeb  c21800               ret 0x18
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilOp@RenderDevice@G3D@@QAEXW4StencilOp@12@00000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp

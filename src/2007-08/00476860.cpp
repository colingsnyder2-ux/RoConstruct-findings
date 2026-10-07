// roc 2007-08 00476860  unit: CInstanceRecord::CNameItem  size: 460 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00476860
//
// 00476860  6aff                 push -1
// 00476862  68444f7400           push 0x744f44
// 00476867  64a100000000         mov eax, dword ptr fs:[0]
// 0047686d  50                   push eax
// 0047686e  51                   push ecx
// 0047686f  53                   push ebx
// 00476870  56                   push esi
// 00476871  57                   push edi
// 00476872  a188518b00           mov eax, dword ptr [0x8b5188]
// 00476877  33c4                 xor eax, esp
// 00476879  50                   push eax
// 0047687a  8d442414             lea eax, [esp + 0x14]
// 0047687e  64a300000000         mov dword ptr fs:[0], eax
// 00476884  8bf1                 mov esi, ecx
// 00476886  89742410             mov dword ptr [esp + 0x10], esi
// 0047688a  68d0d64c00           push 0x4cd6d0
// 0047688f  6a08                 push 8
// 00476891  6a5c                 push 0x5c
// 00476893  8d86a8030000         lea eax, [esi + 0x3a8]
// 00476899  50                   push eax
// 0047689a  c744242c05000000     mov dword ptr [esp + 0x2c], 5
// 004768a2  e850a21b00           call 0x630af7
// 004768a7  8b8670030000         mov eax, dword ptr [esi + 0x370]
// 004768ad  8b3de8d27700         mov edi, dword ptr [0x77d2e8]
// 004768b3  33db                 xor ebx, ebx
// 004768b5  3bc3                 cmp eax, ebx
// 004768b7  c644241c04           mov byte ptr [esp + 0x1c], 4
// 004768bc  742d                 je 0x4768eb
// 004768be  83c004               add eax, 4
// 004768c1  50                   push eax
// 004768c2  ffd7                 call edi
// 004768c4  85c0                 test eax, eax
// 004768c6  751d                 jne 0x4768e5
// 004768c8  8b8e70030000         mov ecx, dword ptr [esi + 0x370]
// 004768ce  e8fd14feff           call 0x457dd0
// 004768d3  8b8e70030000         mov ecx, dword ptr [esi + 0x370]
// 004768d9  3bcb                 cmp ecx, ebx
// 004768db  7408                 je 0x4768e5
// 004768dd  8b11                 mov edx, dword ptr [ecx]
// 004768df  8b02                 mov eax, dword ptr [edx]
// 004768e1  6a01                 push 1
// 004768e3  ffd0                 call eax
// 004768e5  899e70030000         mov dword ptr [esi + 0x370], ebx
// 004768eb  8b866c030000         mov eax, dword ptr [esi + 0x36c]
// 004768f1  3bc3                 cmp eax, ebx
// 004768f3  c644241c03           mov byte ptr [esp + 0x1c], 3
// 004768f8  742d                 je 0x476927
// 004768fa  83c004               add eax, 4
// 004768fd  50                   push eax
// 004768fe  ffd7                 call edi
// 00476900  85c0                 test eax, eax
// 00476902  751d                 jne 0x476921
// 00476904  8b8e6c030000         mov ecx, dword ptr [esi + 0x36c]
// 0047690a  e8c114feff           call 0x457dd0
// 0047690f  8b8e6c030000         mov ecx, dword ptr [esi + 0x36c]
// 00476915  3bcb                 cmp ecx, ebx
// 00476917  7408                 je 0x476921
// 00476919  8b11                 mov edx, dword ptr [ecx]
// 0047691b  8b02                 mov eax, dword ptr [edx]
// 0047691d  6a01                 push 1
// 0047691f  ffd0                 call eax
// 00476921  899e6c030000         mov dword ptr [esi + 0x36c], ebx
// 00476927  8b8668030000         mov eax, dword ptr [esi + 0x368]
// 0047692d  3bc3                 cmp eax, ebx
// 0047692f  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00476934  742d                 je 0x476963
// 00476936  83c004               add eax, 4
// 00476939  50                   push eax
// 0047693a  ffd7                 call edi
// 0047693c  85c0                 test eax, eax
// 0047693e  751d                 jne 0x47695d
// 00476940  8b8e68030000         mov ecx, dword ptr [esi + 0x368]
// 00476946  e88514feff           call 0x457dd0
// 0047694b  8b8e68030000         mov ecx, dword ptr [esi + 0x368]
// 00476951  3bcb                 cmp ecx, ebx
// 00476953  7408                 je 0x47695d
// 00476955  8b11                 mov edx, dword ptr [ecx]
// 00476957  8b02                 mov eax, dword ptr [edx]
// 00476959  6a01                 push 1
// 0047695b  ffd0                 call eax
// 0047695d  899e68030000         mov dword ptr [esi + 0x368], ebx
// 00476963  8b8664030000         mov eax, dword ptr [esi + 0x364]
// 00476969  3bc3                 cmp eax, ebx
// 0047696b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00476970  742d                 je 0x47699f
// 00476972  83c004               add eax, 4
// 00476975  50                   push eax
// 00476976  ffd7                 call edi
// 00476978  85c0                 test eax, eax
// 0047697a  751d                 jne 0x476999
// 0047697c  8b8e64030000         mov ecx, dword ptr [esi + 0x364]
// 00476982  e84914feff           call 0x457dd0
// 00476987  8b8e64030000         mov ecx, dword ptr [esi + 0x364]
// 0047698d  3bcb                 cmp ecx, ebx
// 0047698f  7408                 je 0x476999
// 00476991  8b11                 mov edx, dword ptr [ecx]
// 00476993  8b02                 mov eax, dword ptr [edx]
// 00476995  6a01                 push 1
// 00476997  ffd0                 call eax
// 00476999  899e64030000         mov dword ptr [esi + 0x364], ebx
// 0047699f  8b8660030000         mov eax, dword ptr [esi + 0x360]
// 004769a5  3bc3                 cmp eax, ebx
// 004769a7  885c241c             mov byte ptr [esp + 0x1c], bl
// 004769ab  742d                 je 0x4769da
// 004769ad  83c004               add eax, 4
// 004769b0  50                   push eax
// 004769b1  ffd7                 call edi
// 004769b3  85c0                 test eax, eax
// 004769b5  751d                 jne 0x4769d4
// 004769b7  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 004769bd  e80e14feff           call 0x457dd0
// 004769c2  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 004769c8  3bcb                 cmp ecx, ebx
// 004769ca  7408                 je 0x4769d4
// 004769cc  8b11                 mov edx, dword ptr [ecx]
// 004769ce  8b02                 mov eax, dword ptr [edx]
// 004769d0  6a01                 push 1
// 004769d2  ffd0                 call eax
// 004769d4  899e60030000         mov dword ptr [esi + 0x360], ebx
// 004769da  8b86c8020000         mov eax, dword ptr [esi + 0x2c8]
// 004769e0  3bc3                 cmp eax, ebx
// 004769e2  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004769ea  742d                 je 0x476a19
// 004769ec  83c004               add eax, 4
// 004769ef  50                   push eax
// 004769f0  ffd7                 call edi
// 004769f2  85c0                 test eax, eax
// 004769f4  751d                 jne 0x476a13
// 004769f6  8b8ec8020000         mov ecx, dword ptr [esi + 0x2c8]
// 004769fc  e8cf13feff           call 0x457dd0
// 00476a01  8b8ec8020000         mov ecx, dword ptr [esi + 0x2c8]
// 00476a07  3bcb                 cmp ecx, ebx
// 00476a09  7408                 je 0x476a13
// 00476a0b  8b11                 mov edx, dword ptr [ecx]
// 00476a0d  8b02                 mov eax, dword ptr [edx]
// 00476a0f  6a01                 push 1
// 00476a11  ffd0                 call eax
// 00476a13  899ec8020000         mov dword ptr [esi + 0x2c8], ebx
// 00476a19  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00476a1d  64890d00000000       mov dword ptr fs:[0], ecx
// 00476a24  59                   pop ecx
// 00476a25  5f                   pop edi
// 00476a26  5e                   pop esi
// 00476a27  5b                   pop ebx
// 00476a28  83c410               add esp, 0x10
// 00476a2b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??1RenderState@RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp

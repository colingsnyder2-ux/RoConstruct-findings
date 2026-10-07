// roc 2010-06 00494370  unit: seg_00490000  size: 448 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00494370
//
// 00494370  6aff                 push -1
// 00494372  6824699800           push 0x986924
// 00494377  64a100000000         mov eax, dword ptr fs:[0]
// 0049437d  50                   push eax
// 0049437e  64892500000000       mov dword ptr fs:[0], esp
// 00494385  51                   push ecx
// 00494386  53                   push ebx
// 00494387  56                   push esi
// 00494388  8bf1                 mov esi, ecx
// 0049438a  57                   push edi
// 0049438b  8974240c             mov dword ptr [esp + 0xc], esi
// 0049438f  6820705200           push 0x527020
// 00494394  6a08                 push 8
// 00494396  6a5c                 push 0x5c
// 00494398  8d86a8030000         lea eax, [esi + 0x3a8]
// 0049439e  50                   push eax
// 0049439f  c744242805000000     mov dword ptr [esp + 0x28], 5
// 004943a7  e832473100           call 0x7a8ade
// 004943ac  8b8670030000         mov eax, dword ptr [esi + 0x370]
// 004943b2  8b3d7ca39e00         mov edi, dword ptr [0x9ea37c]
// 004943b8  33db                 xor ebx, ebx
// 004943ba  c644241804           mov byte ptr [esp + 0x18], 4
// 004943bf  3bc3                 cmp eax, ebx
// 004943c1  742d                 je 0x4943f0
// 004943c3  83c004               add eax, 4
// 004943c6  50                   push eax
// 004943c7  ffd7                 call edi
// 004943c9  85c0                 test eax, eax
// 004943cb  751d                 jne 0x4943ea
// 004943cd  8b8e70030000         mov ecx, dword ptr [esi + 0x370]
// 004943d3  e848f7feff           call 0x483b20
// 004943d8  8b8e70030000         mov ecx, dword ptr [esi + 0x370]
// 004943de  3bcb                 cmp ecx, ebx
// 004943e0  7408                 je 0x4943ea
// 004943e2  8b11                 mov edx, dword ptr [ecx]
// 004943e4  8b02                 mov eax, dword ptr [edx]
// 004943e6  6a01                 push 1
// 004943e8  ffd0                 call eax
// 004943ea  899e70030000         mov dword ptr [esi + 0x370], ebx
// 004943f0  8b866c030000         mov eax, dword ptr [esi + 0x36c]
// 004943f6  c644241803           mov byte ptr [esp + 0x18], 3
// 004943fb  3bc3                 cmp eax, ebx
// 004943fd  742d                 je 0x49442c
// 004943ff  83c004               add eax, 4
// 00494402  50                   push eax
// 00494403  ffd7                 call edi
// 00494405  85c0                 test eax, eax
// 00494407  751d                 jne 0x494426
// 00494409  8b8e6c030000         mov ecx, dword ptr [esi + 0x36c]
// 0049440f  e80cf7feff           call 0x483b20
// 00494414  8b8e6c030000         mov ecx, dword ptr [esi + 0x36c]
// 0049441a  3bcb                 cmp ecx, ebx
// 0049441c  7408                 je 0x494426
// 0049441e  8b11                 mov edx, dword ptr [ecx]
// 00494420  8b02                 mov eax, dword ptr [edx]
// 00494422  6a01                 push 1
// 00494424  ffd0                 call eax
// 00494426  899e6c030000         mov dword ptr [esi + 0x36c], ebx
// 0049442c  8b8668030000         mov eax, dword ptr [esi + 0x368]
// 00494432  c644241802           mov byte ptr [esp + 0x18], 2
// 00494437  3bc3                 cmp eax, ebx
// 00494439  742d                 je 0x494468
// 0049443b  83c004               add eax, 4
// 0049443e  50                   push eax
// 0049443f  ffd7                 call edi
// 00494441  85c0                 test eax, eax
// 00494443  751d                 jne 0x494462
// 00494445  8b8e68030000         mov ecx, dword ptr [esi + 0x368]
// 0049444b  e8d0f6feff           call 0x483b20
// 00494450  8b8e68030000         mov ecx, dword ptr [esi + 0x368]
// 00494456  3bcb                 cmp ecx, ebx
// 00494458  7408                 je 0x494462
// 0049445a  8b11                 mov edx, dword ptr [ecx]
// 0049445c  8b02                 mov eax, dword ptr [edx]
// 0049445e  6a01                 push 1
// 00494460  ffd0                 call eax
// 00494462  899e68030000         mov dword ptr [esi + 0x368], ebx
// 00494468  8b8664030000         mov eax, dword ptr [esi + 0x364]
// 0049446e  c644241801           mov byte ptr [esp + 0x18], 1
// 00494473  3bc3                 cmp eax, ebx
// 00494475  742d                 je 0x4944a4
// 00494477  83c004               add eax, 4
// 0049447a  50                   push eax
// 0049447b  ffd7                 call edi
// 0049447d  85c0                 test eax, eax
// 0049447f  751d                 jne 0x49449e
// 00494481  8b8e64030000         mov ecx, dword ptr [esi + 0x364]
// 00494487  e894f6feff           call 0x483b20
// 0049448c  8b8e64030000         mov ecx, dword ptr [esi + 0x364]
// 00494492  3bcb                 cmp ecx, ebx
// 00494494  7408                 je 0x49449e
// 00494496  8b11                 mov edx, dword ptr [ecx]
// 00494498  8b02                 mov eax, dword ptr [edx]
// 0049449a  6a01                 push 1
// 0049449c  ffd0                 call eax
// 0049449e  899e64030000         mov dword ptr [esi + 0x364], ebx
// 004944a4  8b8660030000         mov eax, dword ptr [esi + 0x360]
// 004944aa  885c2418             mov byte ptr [esp + 0x18], bl
// 004944ae  3bc3                 cmp eax, ebx
// 004944b0  742d                 je 0x4944df
// 004944b2  83c004               add eax, 4
// 004944b5  50                   push eax
// 004944b6  ffd7                 call edi
// 004944b8  85c0                 test eax, eax
// 004944ba  751d                 jne 0x4944d9
// 004944bc  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 004944c2  e859f6feff           call 0x483b20
// 004944c7  8b8e60030000         mov ecx, dword ptr [esi + 0x360]
// 004944cd  3bcb                 cmp ecx, ebx
// 004944cf  7408                 je 0x4944d9
// 004944d1  8b11                 mov edx, dword ptr [ecx]
// 004944d3  8b02                 mov eax, dword ptr [edx]
// 004944d5  6a01                 push 1
// 004944d7  ffd0                 call eax
// 004944d9  899e60030000         mov dword ptr [esi + 0x360], ebx
// 004944df  8b86c8020000         mov eax, dword ptr [esi + 0x2c8]
// 004944e5  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004944ed  3bc3                 cmp eax, ebx
// 004944ef  742d                 je 0x49451e
// 004944f1  83c004               add eax, 4
// 004944f4  50                   push eax
// 004944f5  ffd7                 call edi
// 004944f7  85c0                 test eax, eax
// 004944f9  751d                 jne 0x494518
// 004944fb  8b8ec8020000         mov ecx, dword ptr [esi + 0x2c8]
// 00494501  e81af6feff           call 0x483b20
// 00494506  8b8ec8020000         mov ecx, dword ptr [esi + 0x2c8]
// 0049450c  3bcb                 cmp ecx, ebx
// 0049450e  7408                 je 0x494518
// 00494510  8b11                 mov edx, dword ptr [ecx]
// 00494512  8b02                 mov eax, dword ptr [edx]
// 00494514  6a01                 push 1
// 00494516  ffd0                 call eax
// 00494518  899ec8020000         mov dword ptr [esi + 0x2c8], ebx
// 0049451e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00494522  5f                   pop edi
// 00494523  5e                   pop esi
// 00494524  5b                   pop ebx
// 00494525  64890d00000000       mov dword ptr fs:[0], ecx
// 0049452c  83c410               add esp, 0x10
// 0049452f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??1RenderState@RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp

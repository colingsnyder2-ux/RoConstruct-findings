// roc 2007-08 00529650  unit: seg_00520000  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00529650
//
// 00529650  8b4704               mov eax, dword ptr [edi + 4]
// 00529653  8b10                 mov edx, dword ptr [eax]
// 00529655  53                   push ebx
// 00529656  55                   push ebp
// 00529657  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0052965b  56                   push esi
// 0052965c  8bcd                 mov ecx, ebp
// 0052965e  c1e105               shl ecx, 5
// 00529661  51                   push ecx
// 00529662  6a01                 push 1
// 00529664  57                   push edi
// 00529665  ffd2                 call edx
// 00529667  8bf0                 mov esi, eax
// 00529669  33db                 xor ebx, ebx
// 0052966b  b81f000000           mov eax, 0x1f
// 00529670  56                   push esi
// 00529671  8bcf                 mov ecx, edi
// 00529673  891e                 mov dword ptr [esi], ebx
// 00529675  894604               mov dword ptr [esi + 4], eax
// 00529678  895e08               mov dword ptr [esi + 8], ebx
// 0052967b  c7460c3f000000       mov dword ptr [esi + 0xc], 0x3f
// 00529682  895e10               mov dword ptr [esi + 0x10], ebx
// 00529685  894614               mov dword ptr [esi + 0x14], eax
// 00529688  e8f3f8ffff           call 0x528f80
// 0052968d  55                   push ebp
// 0052968e  6a01                 push 1
// 00529690  56                   push esi
// 00529691  57                   push edi
// 00529692  e8e9fcffff           call 0x529380
// 00529697  8be8                 mov ebp, eax
// 00529699  83c420               add esp, 0x20
// 0052969c  3beb                 cmp ebp, ebx
// 0052969e  7e16                 jle 0x5296b6
// 005296a0  53                   push ebx
// 005296a1  57                   push edi
// 005296a2  8bc6                 mov eax, esi
// 005296a4  e827feffff           call 0x5294d0
// 005296a9  83c301               add ebx, 1
// 005296ac  83c408               add esp, 8
// 005296af  83c620               add esi, 0x20
// 005296b2  3bdd                 cmp ebx, ebp
// 005296b4  7cea                 jl 0x5296a0
// 005296b6  8b07                 mov eax, dword ptr [edi]
// 005296b8  896f70               mov dword ptr [edi + 0x70], ebp
// 005296bb  c7401460000000       mov dword ptr [eax + 0x14], 0x60
// 005296c2  8b0f                 mov ecx, dword ptr [edi]
// 005296c4  896918               mov dword ptr [ecx + 0x18], ebp
// 005296c7  8b17                 mov edx, dword ptr [edi]
// 005296c9  8b4204               mov eax, dword ptr [edx + 4]
// 005296cc  6a01                 push 1
// 005296ce  57                   push edi
// 005296cf  ffd0                 call eax
// 005296d1  83c408               add esp, 8
// 005296d4  5e                   pop esi
// 005296d5  5d                   pop ebp
// 005296d6  5b                   pop ebx
// 005296d7  c3                   ret 
// library jpeg-6b/jquant2.c (function _select_colors)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c

// roc 2007-03 004fd800  unit: seg_004f0000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fd800
//
// 004fd800  6aff                 push -1
// 004fd802  68e9097500           push 0x7509e9
// 004fd807  64a100000000         mov eax, dword ptr fs:[0]
// 004fd80d  50                   push eax
// 004fd80e  51                   push ecx
// 004fd80f  56                   push esi
// 004fd810  57                   push edi
// 004fd811  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004fd816  33c4                 xor eax, esp
// 004fd818  50                   push eax
// 004fd819  8d442410             lea eax, [esp + 0x10]
// 004fd81d  64a300000000         mov dword ptr fs:[0], eax
// 004fd823  8bf1                 mov esi, ecx
// 004fd825  8974240c             mov dword ptr [esp + 0xc], esi
// 004fd829  8b4630               mov eax, dword ptr [esi + 0x30]
// 004fd82c  33ff                 xor edi, edi
// 004fd82e  50                   push eax
// 004fd82f  897c241c             mov dword ptr [esp + 0x1c], edi
// 004fd833  e8285bffff           call 0x4f3360
// 004fd838  83c404               add esp, 4
// 004fd83b  8bce                 mov ecx, esi
// 004fd83d  897e30               mov dword ptr [esi + 0x30], edi
// 004fd840  897e34               mov dword ptr [esi + 0x34], edi
// 004fd843  897e38               mov dword ptr [esi + 0x38], edi
// 004fd846  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004fd84e  ff158ce77700         call dword ptr [0x77e78c]
// 004fd854  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004fd858  64890d00000000       mov dword ptr fs:[0], ecx
// 004fd85f  59                   pop ecx
// 004fd860  5f                   pop edi
// 004fd861  5e                   pop esi
// 004fd862  83c410               add esp, 0x10
// 004fd865  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ??1BinaryOutput@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp

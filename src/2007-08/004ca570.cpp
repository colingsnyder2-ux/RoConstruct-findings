// from server: 100% by auto
// roc 2007-08 004ca570  unit: seg_004c0000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ca570
//
// 004ca570  6aff                 push -1
// 004ca572  68d8bf7400           push 0x74bfd8
// 004ca577  64a100000000         mov eax, dword ptr fs:[0]
// 004ca57d  50                   push eax
// 004ca57e  51                   push ecx
// 004ca57f  56                   push esi
// 004ca580  57                   push edi
// 004ca581  a188518b00           mov eax, dword ptr [0x8b5188]
// 004ca586  33c4                 xor eax, esp
// 004ca588  50                   push eax
// 004ca589  8d442410             lea eax, [esp + 0x10]
// 004ca58d  64a300000000         mov dword ptr fs:[0], eax
// 004ca593  8bf9                 mov edi, ecx
// 004ca595  897c240c             mov dword ptr [esp + 0xc], edi
// 004ca599  33f6                 xor esi, esi
// 004ca59b  397704               cmp dword ptr [edi + 4], esi
// 004ca59e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004ca5a6  7627                 jbe 0x4ca5cf
// 004ca5a8  eb06                 jmp 0x4ca5b0
// 004ca5aa  8d9b00000000         lea ebx, [ebx]
// 004ca5b0  8b07                 mov eax, dword ptr [edi]
// 004ca5b2  807cf00400           cmp byte ptr [eax + esi*8 + 4], 0
// 004ca5b7  8d04f0               lea eax, [eax + esi*8]
// 004ca5ba  740b                 je 0x4ca5c7
// 004ca5bc  8b00                 mov eax, dword ptr [eax]
// 004ca5be  50                   push eax
// 004ca5bf  e89e561600           call 0x62fc62
// 004ca5c4  83c404               add esp, 4
// 004ca5c7  83c601               add esi, 1
// 004ca5ca  3b7704               cmp esi, dword ptr [edi + 4]
// 004ca5cd  72e1                 jb 0x4ca5b0
// 004ca5cf  8bcf                 mov ecx, edi
// 004ca5d1  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004ca5d9  e8222fffff           call 0x4bd500
// 004ca5de  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ca5e2  64890d00000000       mov dword ptr fs:[0], ecx
// 004ca5e9  59                   pop ecx
// 004ca5ea  5f                   pop edi
// 004ca5eb  5e                   pop esi
// 004ca5ec  83c410               add esp, 0x10
// 004ca5ef  c3                   ret 

// from server: 40% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
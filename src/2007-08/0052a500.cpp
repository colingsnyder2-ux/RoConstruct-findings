// from server: 100% by auto
// roc 2007-08 0052a500  unit: seg_00520000  size: 325 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052a500
//
// 0052a500  83ec14               sub esp, 0x14
// 0052a503  56                   push esi
// 0052a504  57                   push edi
// 0052a505  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0052a509  837f4c01             cmp dword ptr [edi + 0x4c], 1
// 0052a50d  8bb7a8010000         mov esi, dword ptr [edi + 0x1a8]
// 0052a513  89742418             mov dword ptr [esp + 0x18], esi
// 0052a517  750e                 jne 0x52a527
// 0052a519  c7442408fe010000     mov dword ptr [esp + 8], 0x1fe
// 0052a521  c6461c01             mov byte ptr [esi + 0x1c], 1
// 0052a525  eb0c                 jmp 0x52a533
// 0052a527  c744240800000000     mov dword ptr [esp + 8], 0
// 0052a52f  c6461c00             mov byte ptr [esi + 0x1c], 0
// 0052a533  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 0052a536  8b542408             mov edx, dword ptr [esp + 8]
// 0052a53a  8b4704               mov eax, dword ptr [edi + 4]
// 0052a53d  8b4008               mov eax, dword ptr [eax + 8]
// 0052a540  51                   push ecx
// 0052a541  81c200010000         add edx, 0x100
// 0052a547  52                   push edx
// 0052a548  6a01                 push 1
// 0052a54a  57                   push edi
// 0052a54b  ffd0                 call eax
// 0052a54d  33c9                 xor ecx, ecx
// 0052a54f  894618               mov dword ptr [esi + 0x18], eax
// 0052a552  8b4614               mov eax, dword ptr [esi + 0x14]
// 0052a555  83c410               add esp, 0x10
// 0052a558  394f64               cmp dword ptr [edi + 0x64], ecx
// 0052a55b  894c240c             mov dword ptr [esp + 0xc], ecx
// 0052a55f  0f8eda000000         jle 0x52a63f
// 0052a565  53                   push ebx
// 0052a566  8d5620               lea edx, [esi + 0x20]
// 0052a569  55                   push ebp
// 0052a56a  89542418             mov dword ptr [esp + 0x18], edx
// 0052a56e  eb0c                 jmp 0x52a57c
// 0052a570  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052a574  8b742420             mov esi, dword ptr [esp + 0x20]
// 0052a578  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052a57c  8b542418             mov edx, dword ptr [esp + 0x18]
// 0052a580  8b2a                 mov ebp, dword ptr [edx]
// 0052a582  99                   cdq 
// 0052a583  f7fd                 idiv ebp
// 0052a585  837c241000           cmp dword ptr [esp + 0x10], 0
// 0052a58a  8944241c             mov dword ptr [esp + 0x1c], eax
// 0052a58e  740d                 je 0x52a59d
// 0052a590  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052a593  810488ff000000       add dword ptr [eax + ecx*4], 0xff
// 0052a59a  8d0488               lea eax, [eax + ecx*4]
// 0052a59d  8b5618               mov edx, dword ptr [esi + 0x18]
// 0052a5a0  8b3c8a               mov edi, dword ptr [edx + ecx*4]
// 0052a5a3  83c5ff               add ebp, -1
// 0052a5a6  8bcd                 mov ecx, ebp
// 0052a5a8  33c0                 xor eax, eax
// 0052a5aa  33db                 xor ebx, ebx
// 0052a5ac  e8bffdffff           call 0x52a370
// 0052a5b1  8bc8                 mov ecx, eax
// 0052a5b3  33f6                 xor esi, esi
// 0052a5b5  3bf1                 cmp esi, ecx
// 0052a5b7  7e19                 jle 0x52a5d2
// 0052a5b9  8da42400000000       lea esp, [esp]
// 0052a5c0  83c301               add ebx, 1
// 0052a5c3  8bcd                 mov ecx, ebp
// 0052a5c5  8bc3                 mov eax, ebx
// 0052a5c7  e8a4fdffff           call 0x52a370
// 0052a5cc  8bc8                 mov ecx, eax
// 0052a5ce  3bf1                 cmp esi, ecx
// 0052a5d0  7fee                 jg 0x52a5c0
// 0052a5d2  8a44241c             mov al, byte ptr [esp + 0x1c]
// 0052a5d6  f6eb                 imul bl
// 0052a5d8  88043e               mov byte ptr [esi + edi], al
// 0052a5db  83c601               add esi, 1
// 0052a5de  81feff000000         cmp esi, 0xff
// 0052a5e4  7ecf                 jle 0x52a5b5
// 0052a5e6  837c241000           cmp dword ptr [esp + 0x10], 0
// 0052a5eb  7433                 je 0x52a620
// 0052a5ed  b801000000           mov eax, 1
// 0052a5f2  8d4fff               lea ecx, [edi - 1]
// 0052a5f5  eb09                 jmp 0x52a600
// 0052a5f7  8da42400000000       lea esp, [esp]
// 0052a5fe  8bff                 mov edi, edi
// 0052a600  0fb617               movzx edx, byte ptr [edi]
// 0052a603  8811                 mov byte ptr [ecx], dl
// 0052a605  0fb697ff000000       movzx edx, byte ptr [edi + 0xff]
// 0052a60c  889407ff000000       mov byte ptr [edi + eax + 0xff], dl
// 0052a613  83c001               add eax, 1
// 0052a616  83e901               sub ecx, 1
// 0052a619  3dff000000           cmp eax, 0xff
// 0052a61e  7ee0                 jle 0x52a600
// 0052a620  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052a624  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0052a628  8344241804           add dword ptr [esp + 0x18], 4
// 0052a62d  83c001               add eax, 1
// 0052a630  3b4164               cmp eax, dword ptr [ecx + 0x64]
// 0052a633  89442414             mov dword ptr [esp + 0x14], eax
// 0052a637  0f8c33ffffff         jl 0x52a570
// 0052a63d  5d                   pop ebp
// 0052a63e  5b                   pop ebx
// 0052a63f  5f                   pop edi
// 0052a640  5e                   pop esi
// 0052a641  83c414               add esp, 0x14
// 0052a644  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_colorindex)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jquant1.c

// roc 2007-03 005251d0  unit: seg_00520000  size: 325 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005251d0
//
// 005251d0  83ec14               sub esp, 0x14
// 005251d3  56                   push esi
// 005251d4  57                   push edi
// 005251d5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005251d9  837f4c01             cmp dword ptr [edi + 0x4c], 1
// 005251dd  8bb7a8010000         mov esi, dword ptr [edi + 0x1a8]
// 005251e3  89742418             mov dword ptr [esp + 0x18], esi
// 005251e7  750e                 jne 0x5251f7
// 005251e9  c7442408fe010000     mov dword ptr [esp + 8], 0x1fe
// 005251f1  c6461c01             mov byte ptr [esi + 0x1c], 1
// 005251f5  eb0c                 jmp 0x525203
// 005251f7  c744240800000000     mov dword ptr [esp + 8], 0
// 005251ff  c6461c00             mov byte ptr [esi + 0x1c], 0
// 00525203  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 00525206  8b542408             mov edx, dword ptr [esp + 8]
// 0052520a  8b4704               mov eax, dword ptr [edi + 4]
// 0052520d  8b4008               mov eax, dword ptr [eax + 8]
// 00525210  51                   push ecx
// 00525211  81c200010000         add edx, 0x100
// 00525217  52                   push edx
// 00525218  6a01                 push 1
// 0052521a  57                   push edi
// 0052521b  ffd0                 call eax
// 0052521d  33c9                 xor ecx, ecx
// 0052521f  894618               mov dword ptr [esi + 0x18], eax
// 00525222  8b4614               mov eax, dword ptr [esi + 0x14]
// 00525225  83c410               add esp, 0x10
// 00525228  394f64               cmp dword ptr [edi + 0x64], ecx
// 0052522b  894c240c             mov dword ptr [esp + 0xc], ecx
// 0052522f  0f8eda000000         jle 0x52530f
// 00525235  53                   push ebx
// 00525236  8d5620               lea edx, [esi + 0x20]
// 00525239  55                   push ebp
// 0052523a  89542418             mov dword ptr [esp + 0x18], edx
// 0052523e  eb0c                 jmp 0x52524c
// 00525240  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00525244  8b742420             mov esi, dword ptr [esp + 0x20]
// 00525248  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052524c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00525250  8b2a                 mov ebp, dword ptr [edx]
// 00525252  99                   cdq 
// 00525253  f7fd                 idiv ebp
// 00525255  837c241000           cmp dword ptr [esp + 0x10], 0
// 0052525a  8944241c             mov dword ptr [esp + 0x1c], eax
// 0052525e  740d                 je 0x52526d
// 00525260  8b4618               mov eax, dword ptr [esi + 0x18]
// 00525263  810488ff000000       add dword ptr [eax + ecx*4], 0xff
// 0052526a  8d0488               lea eax, [eax + ecx*4]
// 0052526d  8b5618               mov edx, dword ptr [esi + 0x18]
// 00525270  8b3c8a               mov edi, dword ptr [edx + ecx*4]
// 00525273  83c5ff               add ebp, -1
// 00525276  8bcd                 mov ecx, ebp
// 00525278  33c0                 xor eax, eax
// 0052527a  33db                 xor ebx, ebx
// 0052527c  e8bffdffff           call 0x525040
// 00525281  8bc8                 mov ecx, eax
// 00525283  33f6                 xor esi, esi
// 00525285  3bf1                 cmp esi, ecx
// 00525287  7e19                 jle 0x5252a2
// 00525289  8da42400000000       lea esp, [esp]
// 00525290  83c301               add ebx, 1
// 00525293  8bcd                 mov ecx, ebp
// 00525295  8bc3                 mov eax, ebx
// 00525297  e8a4fdffff           call 0x525040
// 0052529c  8bc8                 mov ecx, eax
// 0052529e  3bf1                 cmp esi, ecx
// 005252a0  7fee                 jg 0x525290
// 005252a2  8a44241c             mov al, byte ptr [esp + 0x1c]
// 005252a6  f6eb                 imul bl
// 005252a8  88043e               mov byte ptr [esi + edi], al
// 005252ab  83c601               add esi, 1
// 005252ae  81feff000000         cmp esi, 0xff
// 005252b4  7ecf                 jle 0x525285
// 005252b6  837c241000           cmp dword ptr [esp + 0x10], 0
// 005252bb  7433                 je 0x5252f0
// 005252bd  b801000000           mov eax, 1
// 005252c2  8d4fff               lea ecx, [edi - 1]
// 005252c5  eb09                 jmp 0x5252d0
// 005252c7  8da42400000000       lea esp, [esp]
// 005252ce  8bff                 mov edi, edi
// 005252d0  0fb617               movzx edx, byte ptr [edi]
// 005252d3  8811                 mov byte ptr [ecx], dl
// 005252d5  0fb697ff000000       movzx edx, byte ptr [edi + 0xff]
// 005252dc  889407ff000000       mov byte ptr [edi + eax + 0xff], dl
// 005252e3  83c001               add eax, 1
// 005252e6  83e901               sub ecx, 1
// 005252e9  3dff000000           cmp eax, 0xff
// 005252ee  7ee0                 jle 0x5252d0
// 005252f0  8b442414             mov eax, dword ptr [esp + 0x14]
// 005252f4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005252f8  8344241804           add dword ptr [esp + 0x18], 4
// 005252fd  83c001               add eax, 1
// 00525300  3b4164               cmp eax, dword ptr [ecx + 0x64]
// 00525303  89442414             mov dword ptr [esp + 0x14], eax
// 00525307  0f8c33ffffff         jl 0x525240
// 0052530d  5d                   pop ebp
// 0052530e  5b                   pop ebx
// 0052530f  5f                   pop edi
// 00525310  5e                   pop esi
// 00525311  83c414               add esp, 0x14
// 00525314  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_colorindex)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jquant1.c

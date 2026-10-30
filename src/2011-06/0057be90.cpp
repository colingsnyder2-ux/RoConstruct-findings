// from server: 100% by auto
// roc 2011-06 0057be90  unit: seg_00570000  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057be90
//
// 0057be90  53                   push ebx
// 0057be91  8a5c2408             mov bl, byte ptr [esp + 8]
// 0057be95  56                   push esi
// 0057be96  8bf0                 mov esi, eax
// 0057be98  6a7f                 push 0x7f
// 0057be9a  b807000000           mov eax, 7
// 0057be9f  e88cfdffff           call 0x57bc30
// 0057bea4  83c404               add esp, 4
// 0057bea7  84c0                 test al, al
// 0057bea9  0f848c000000         je 0x57bf3b
// 0057beaf  33c0                 xor eax, eax
// 0057beb1  894608               mov dword ptr [esi + 8], eax
// 0057beb4  89460c               mov dword ptr [esi + 0xc], eax
// 0057beb7  8b06                 mov eax, dword ptr [esi]
// 0057beb9  c600ff               mov byte ptr [eax], 0xff
// 0057bebc  ff06                 inc dword ptr [esi]
// 0057bebe  834604ff             add dword ptr [esi + 4], -1
// 0057bec2  57                   push edi
// 0057bec3  751d                 jne 0x57bee2
// 0057bec5  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057bec8  8b7818               mov edi, dword ptr [eax + 0x18]
// 0057becb  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0057bece  50                   push eax
// 0057becf  ffd1                 call ecx
// 0057bed1  83c404               add esp, 4
// 0057bed4  84c0                 test al, al
// 0057bed6  7468                 je 0x57bf40
// 0057bed8  8b17                 mov edx, dword ptr [edi]
// 0057beda  8916                 mov dword ptr [esi], edx
// 0057bedc  8b4704               mov eax, dword ptr [edi + 4]
// 0057bedf  894604               mov dword ptr [esi + 4], eax
// 0057bee2  8b0e                 mov ecx, dword ptr [esi]
// 0057bee4  80eb30               sub bl, 0x30
// 0057bee7  8819                 mov byte ptr [ecx], bl
// 0057bee9  ff06                 inc dword ptr [esi]
// 0057beeb  834604ff             add dword ptr [esi + 4], -1
// 0057beef  751d                 jne 0x57bf0e
// 0057bef1  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057bef4  8b7818               mov edi, dword ptr [eax + 0x18]
// 0057bef7  8b570c               mov edx, dword ptr [edi + 0xc]
// 0057befa  50                   push eax
// 0057befb  ffd2                 call edx
// 0057befd  83c404               add esp, 4
// 0057bf00  84c0                 test al, al
// 0057bf02  743c                 je 0x57bf40
// 0057bf04  8b07                 mov eax, dword ptr [edi]
// 0057bf06  8906                 mov dword ptr [esi], eax
// 0057bf08  8b4f04               mov ecx, dword ptr [edi + 4]
// 0057bf0b  894e04               mov dword ptr [esi + 4], ecx
// 0057bf0e  8b5620               mov edx, dword ptr [esi + 0x20]
// 0057bf11  33c0                 xor eax, eax
// 0057bf13  3982e4000000         cmp dword ptr [edx + 0xe4], eax
// 0057bf19  7e1a                 jle 0x57bf35
// 0057bf1b  8d4e10               lea ecx, [esi + 0x10]
// 0057bf1e  8bff                 mov edi, edi
// 0057bf20  c70100000000         mov dword ptr [ecx], 0
// 0057bf26  8b5620               mov edx, dword ptr [esi + 0x20]
// 0057bf29  40                   inc eax
// 0057bf2a  83c104               add ecx, 4
// 0057bf2d  3b82e4000000         cmp eax, dword ptr [edx + 0xe4]
// 0057bf33  7ceb                 jl 0x57bf20
// 0057bf35  5f                   pop edi
// 0057bf36  5e                   pop esi
// 0057bf37  b001                 mov al, 1
// 0057bf39  5b                   pop ebx
// 0057bf3a  c3                   ret 
// 0057bf3b  5e                   pop esi
// 0057bf3c  32c0                 xor al, al
// 0057bf3e  5b                   pop ebx
// 0057bf3f  c3                   ret 
// 0057bf40  5f                   pop edi
// 0057bf41  5e                   pop esi
// 0057bf42  32c0                 xor al, al
// 0057bf44  5b                   pop ebx
// 0057bf45  c3                   ret 
// library jpeg-6b/jchuff.c (function _emit_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c

// roc 2008-06 00577b20  unit: RBX::PAVTool::?$sp_counted_impl_pd  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577b20
//
// 00577b20  6aff                 push -1
// 00577b22  6811e87c00           push 0x7ce811
// 00577b27  64a100000000         mov eax, dword ptr fs:[0]
// 00577b2d  50                   push eax
// 00577b2e  64892500000000       mov dword ptr fs:[0], esp
// 00577b35  51                   push ecx
// 00577b36  56                   push esi
// 00577b37  8b742418             mov esi, dword ptr [esp + 0x18]
// 00577b3b  89742418             mov dword ptr [esp + 0x18], esi
// 00577b3f  89742404             mov dword ptr [esp + 4], esi
// 00577b43  33c9                 xor ecx, ecx
// 00577b45  894c2410             mov dword ptr [esp + 0x10], ecx
// 00577b49  3bf1                 cmp esi, ecx
// 00577b4b  7436                 je 0x577b83
// 00577b4d  57                   push edi
// 00577b4e  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00577b52  8b07                 mov eax, dword ptr [edi]
// 00577b54  8906                 mov dword ptr [esi], eax
// 00577b56  894e08               mov dword ptr [esi + 8], ecx
// 00577b59  8b4708               mov eax, dword ptr [edi + 8]
// 00577b5c  3bc1                 cmp eax, ecx
// 00577b5e  7416                 je 0x577b76
// 00577b60  894608               mov dword ptr [esi + 8], eax
// 00577b63  8b5708               mov edx, dword ptr [edi + 8]
// 00577b66  8b12                 mov edx, dword ptr [edx]
// 00577b68  51                   push ecx
// 00577b69  8d4610               lea eax, [esi + 0x10]
// 00577b6c  50                   push eax
// 00577b6d  8d4f10               lea ecx, [edi + 0x10]
// 00577b70  51                   push ecx
// 00577b71  ffd2                 call edx
// 00577b73  83c40c               add esp, 0xc
// 00577b76  8b4728               mov eax, dword ptr [edi + 0x28]
// 00577b79  894628               mov dword ptr [esi + 0x28], eax
// 00577b7c  8a4f30               mov cl, byte ptr [edi + 0x30]
// 00577b7f  884e30               mov byte ptr [esi + 0x30], cl
// 00577b82  5f                   pop edi
// 00577b83  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577b87  5e                   pop esi
// 00577b88  64890d00000000       mov dword ptr fs:[0], ecx
// 00577b8f  83c410               add esp, 0x10
// 00577b92  c3                   ret 
// library rbxgs/roc_datamodel_http_native_family_8a874868dba17bdc.cpp (function ??$_Construct@V?$bind_t@XP6AXABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@W4MessageType@RBX@@_N@ZV?$list3@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@W4MessageType@RBX@@@23@V?$value@_N@23@@_bi@2@@_bi@boost@@V123@@std@@YAXPAV?$bind_t@XP6AXABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@W4MessageType@RBX@@_N@ZV?$list3@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@W4MessageType@RBX@@@23@V?$value@_N@23@@_bi@2@@_bi@boost@@ABV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_datamodel_http_native_family_8a874868dba17bdc.cpp

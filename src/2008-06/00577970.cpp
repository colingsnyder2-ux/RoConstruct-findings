// roc 2008-06 00577970  unit: RBX::PAVTool::?$sp_counted_impl_pd  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577970
//
// 00577970  6aff                 push -1
// 00577972  68e9077d00           push 0x7d07e9
// 00577977  64a100000000         mov eax, dword ptr fs:[0]
// 0057797d  50                   push eax
// 0057797e  64892500000000       mov dword ptr fs:[0], esp
// 00577985  83ec38               sub esp, 0x38
// 00577988  53                   push ebx
// 00577989  56                   push esi
// 0057798a  33db                 xor ebx, ebx
// 0057798c  57                   push edi
// 0057798d  895c240c             mov dword ptr [esp + 0xc], ebx
// 00577991  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00577995  51                   push ecx
// 00577996  8a8c2484000000       mov cl, byte ptr [esp + 0x84]
// 0057799d  8bc4                 mov eax, esp
// 0057799f  8808                 mov byte ptr [eax], cl
// 005779a1  89642414             mov dword ptr [esp + 0x14], esp
// 005779a5  c744245001000000     mov dword ptr [esp + 0x50], 1
// 005779ad  51                   push ecx
// 005779ae  8bc4                 mov eax, esp
// 005779b0  89a42488000000       mov dword ptr [esp + 0x88], esp
// 005779b7  83ec20               sub esp, 0x20
// 005779ba  8910                 mov dword ptr [eax], edx
// 005779bc  8bc4                 mov eax, esp
// 005779be  8918                 mov dword ptr [eax], ebx
// 005779c0  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 005779c7  89a424a8000000       mov dword ptr [esp + 0xa8], esp
// 005779ce  3bcb                 cmp ecx, ebx
// 005779d0  741d                 je 0x5779ef
// 005779d2  8908                 mov dword ptr [eax], ecx
// 005779d4  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 005779db  8b11                 mov edx, dword ptr [ecx]
// 005779dd  83c008               add eax, 8
// 005779e0  53                   push ebx
// 005779e1  50                   push eax
// 005779e2  8d842494000000       lea eax, [esp + 0x94]
// 005779e9  50                   push eax
// 005779ea  ffd2                 call edx
// 005779ec  83c40c               add esp, 0xc
// 005779ef  8d4c243c             lea ecx, [esp + 0x3c]
// 005779f3  e8a8fdffff           call 0x5777a0
// 005779f8  8bf0                 mov esi, eax
// 005779fa  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 005779fe  8b442458             mov eax, dword ptr [esp + 0x58]
// 00577a02  8907                 mov dword ptr [edi], eax
// 00577a04  895f08               mov dword ptr [edi + 8], ebx
// 00577a07  8b06                 mov eax, dword ptr [esi]
// 00577a09  c644244c02           mov byte ptr [esp + 0x4c], 2
// 00577a0e  3bc3                 cmp eax, ebx
// 00577a10  7415                 je 0x577a27
// 00577a12  894708               mov dword ptr [edi + 8], eax
// 00577a15  8b0e                 mov ecx, dword ptr [esi]
// 00577a17  8b09                 mov ecx, dword ptr [ecx]
// 00577a19  53                   push ebx
// 00577a1a  8d5710               lea edx, [edi + 0x10]
// 00577a1d  52                   push edx
// 00577a1e  8d4608               lea eax, [esi + 8]
// 00577a21  50                   push eax
// 00577a22  ffd1                 call ecx
// 00577a24  83c40c               add esp, 0xc
// 00577a27  8b5620               mov edx, dword ptr [esi + 0x20]
// 00577a2a  895728               mov dword ptr [edi + 0x28], edx
// 00577a2d  8a4628               mov al, byte ptr [esi + 0x28]
// 00577a30  884730               mov byte ptr [edi + 0x30], al
// 00577a33  8b442414             mov eax, dword ptr [esp + 0x14]
// 00577a37  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00577a3f  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00577a44  3bc3                 cmp eax, ebx
// 00577a46  7419                 je 0x577a61
// 00577a48  8b00                 mov eax, dword ptr [eax]
// 00577a4a  3bc3                 cmp eax, ebx
// 00577a4c  740f                 je 0x577a5d
// 00577a4e  8d4c241c             lea ecx, [esp + 0x1c]
// 00577a52  6a01                 push 1
// 00577a54  51                   push ecx
// 00577a55  8bd1                 mov edx, ecx
// 00577a57  52                   push edx
// 00577a58  ffd0                 call eax
// 00577a5a  83c40c               add esp, 0xc
// 00577a5d  895c2414             mov dword ptr [esp + 0x14], ebx
// 00577a61  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00577a65  885c244c             mov byte ptr [esp + 0x4c], bl
// 00577a69  3bc3                 cmp eax, ebx
// 00577a6b  7415                 je 0x577a82
// 00577a6d  8b00                 mov eax, dword ptr [eax]
// 00577a6f  3bc3                 cmp eax, ebx
// 00577a71  740f                 je 0x577a82
// 00577a73  8d4c2464             lea ecx, [esp + 0x64]
// 00577a77  6a01                 push 1
// 00577a79  51                   push ecx
// 00577a7a  8bd1                 mov edx, ecx
// 00577a7c  52                   push edx
// 00577a7d  ffd0                 call eax
// 00577a7f  83c40c               add esp, 0xc
// 00577a82  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00577a86  8bc7                 mov eax, edi
// 00577a88  5f                   pop edi
// 00577a89  5e                   pop esi
// 00577a8a  64890d00000000       mov dword ptr fs:[0], ecx
// 00577a91  5b                   pop ebx
// 00577a92  83c444               add esp, 0x44
// 00577a95  c3                   ret 
// library rbxgs/roc_datamodel_http_native_family_8a874868dba17bdc.cpp (function ??$bind@XABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@W4MessageType@RBX@@_NV12@W434@_N@boost@@YA?AV?$bind_t@XP6AXABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@W4MessageType@RBX@@_N@ZV?$list3@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@W4MessageType@RBX@@@23@V?$value@_N@23@@_bi@2@@_bi@0@P6AXABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@0@W4MessageType@RBX@@_N@ZV30@12@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_datamodel_http_native_family_8a874868dba17bdc.cpp

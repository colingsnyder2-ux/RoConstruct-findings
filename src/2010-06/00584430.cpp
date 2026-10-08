// from server: 100% by auto
// roc 2010-06 00584430  unit: seg_00580000  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00584430
//
// 00584430  83ec18               sub esp, 0x18
// 00584433  56                   push esi
// 00584434  57                   push edi
// 00584435  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00584439  837f4c01             cmp dword ptr [edi + 0x4c], 1
// 0058443d  8bb7a8010000         mov esi, dword ptr [edi + 0x1a8]
// 00584443  89742418             mov dword ptr [esp + 0x18], esi
// 00584447  750e                 jne 0x584457
// 00584449  c7442408fe010000     mov dword ptr [esp + 8], 0x1fe
// 00584451  c6461c01             mov byte ptr [esi + 0x1c], 1
// 00584455  eb0c                 jmp 0x584463
// 00584457  c744240800000000     mov dword ptr [esp + 8], 0
// 0058445f  c6461c00             mov byte ptr [esi + 0x1c], 0
// 00584463  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 00584466  8b542408             mov edx, dword ptr [esp + 8]
// 0058446a  8b4704               mov eax, dword ptr [edi + 4]
// 0058446d  8b4008               mov eax, dword ptr [eax + 8]
// 00584470  51                   push ecx
// 00584471  81c200010000         add edx, 0x100
// 00584477  52                   push edx
// 00584478  6a01                 push 1
// 0058447a  57                   push edi
// 0058447b  ffd0                 call eax
// 0058447d  33c9                 xor ecx, ecx
// 0058447f  894618               mov dword ptr [esi + 0x18], eax
// 00584482  8b4614               mov eax, dword ptr [esi + 0x14]
// 00584485  83c410               add esp, 0x10
// 00584488  394f64               cmp dword ptr [edi + 0x64], ecx
// 0058448b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0058448f  0f8ee1000000         jle 0x584576
// 00584495  53                   push ebx
// 00584496  8d5620               lea edx, [esi + 0x20]
// 00584499  55                   push ebp
// 0058449a  89542414             mov dword ptr [esp + 0x14], edx
// 0058449e  eb08                 jmp 0x5844a8
// 005844a0  8b442418             mov eax, dword ptr [esp + 0x18]
// 005844a4  8b742420             mov esi, dword ptr [esp + 0x20]
// 005844a8  8b542414             mov edx, dword ptr [esp + 0x14]
// 005844ac  8b3a                 mov edi, dword ptr [edx]
// 005844ae  99                   cdq 
// 005844af  f7ff                 idiv edi
// 005844b1  837c241000           cmp dword ptr [esp + 0x10], 0
// 005844b6  89442418             mov dword ptr [esp + 0x18], eax
// 005844ba  740d                 je 0x5844c9
// 005844bc  8b4618               mov eax, dword ptr [esi + 0x18]
// 005844bf  810488ff000000       add dword ptr [eax + ecx*4], 0xff
// 005844c6  8d0488               lea eax, [eax + ecx*4]
// 005844c9  8b5618               mov edx, dword ptr [esi + 0x18]
// 005844cc  8b2c8a               mov ebp, dword ptr [edx + ecx*4]
// 005844cf  8d87fe000000         lea eax, [edi + 0xfe]
// 005844d5  8d743ffe             lea esi, [edi + edi - 2]
// 005844d9  99                   cdq 
// 005844da  f7fe                 idiv esi
// 005844dc  33db                 xor ebx, ebx
// 005844de  896c2424             mov dword ptr [esp + 0x24], ebp
// 005844e2  33f6                 xor esi, esi
// 005844e4  8bd0                 mov edx, eax
// 005844e6  3bf2                 cmp esi, edx
// 005844e8  7e35                 jle 0x58451f
// 005844ea  8bcb                 mov ecx, ebx
// 005844ec  8d6c3ffe             lea ebp, [edi + edi - 2]
// 005844f0  69c9fe010000         imul ecx, ecx, 0x1fe
// 005844f6  eb08                 jmp 0x584500
// 005844f8  8da42400000000       lea esp, [esp]
// 005844ff  90                   nop 
// 00584500  81c1fe010000         add ecx, 0x1fe
// 00584506  8d8439fe000000       lea eax, [ecx + edi + 0xfe]
// 0058450d  99                   cdq 
// 0058450e  f7fd                 idiv ebp
// 00584510  43                   inc ebx
// 00584511  8bd0                 mov edx, eax
// 00584513  3bf2                 cmp esi, edx
// 00584515  7fe9                 jg 0x584500
// 00584517  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0058451b  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0058451f  8a442418             mov al, byte ptr [esp + 0x18]
// 00584523  f6eb                 imul bl
// 00584525  88042e               mov byte ptr [esi + ebp], al
// 00584528  46                   inc esi
// 00584529  81feff000000         cmp esi, 0xff
// 0058452f  7eb5                 jle 0x5844e6
// 00584531  837c241000           cmp dword ptr [esp + 0x10], 0
// 00584536  7425                 je 0x58455d
// 00584538  b801000000           mov eax, 1
// 0058453d  8d55ff               lea edx, [ebp - 1]
// 00584540  0fb65d00             movzx ebx, byte ptr [ebp]
// 00584544  881a                 mov byte ptr [edx], bl
// 00584546  0fb69dff000000       movzx ebx, byte ptr [ebp + 0xff]
// 0058454d  889c28ff000000       mov byte ptr [eax + ebp + 0xff], bl
// 00584554  40                   inc eax
// 00584555  4a                   dec edx
// 00584556  3dff000000           cmp eax, 0xff
// 0058455b  7ee3                 jle 0x584540
// 0058455d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00584561  8344241404           add dword ptr [esp + 0x14], 4
// 00584566  41                   inc ecx
// 00584567  3b4864               cmp ecx, dword ptr [eax + 0x64]
// 0058456a  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0058456e  0f8c2cffffff         jl 0x5844a0
// 00584574  5d                   pop ebp
// 00584575  5b                   pop ebx
// 00584576  5f                   pop edi
// 00584577  5e                   pop esi
// 00584578  83c418               add esp, 0x18
// 0058457b  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_colorindex)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c

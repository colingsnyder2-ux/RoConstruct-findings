// from server: 100% by auto
// roc 2008-06 006f2650  unit: CXTPControls  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f2650
//
// 006f2650  83ec14               sub esp, 0x14
// 006f2653  8b442420             mov eax, dword ptr [esp + 0x20]
// 006f2657  890c24               mov dword ptr [esp], ecx
// 006f265a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006f265e  3bc8                 cmp ecx, eax
// 006f2660  0f8dd0000000         jge 0x6f2736
// 006f2666  53                   push ebx
// 006f2667  55                   push ebp
// 006f2668  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 006f266c  56                   push esi
// 006f266d  8bf1                 mov esi, ecx
// 006f266f  c1e606               shl esi, 6
// 006f2672  03742424             add esi, dword ptr [esp + 0x24]
// 006f2676  2bc1                 sub eax, ecx
// 006f2678  57                   push edi
// 006f2679  8944242c             mov dword ptr [esp + 0x2c], eax
// 006f267d  8d4900               lea ecx, [ecx]
// 006f2680  837c243800           cmp dword ptr [esp + 0x38], 0
// 006f2685  8b06                 mov eax, dword ptr [esi]
// 006f2687  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006f268a  8b7e04               mov edi, dword ptr [esi + 4]
// 006f268d  8b5e08               mov ebx, dword ptr [esi + 8]
// 006f2690  89442414             mov dword ptr [esp + 0x14], eax
// 006f2694  894c2420             mov dword ptr [esp + 0x20], ecx
// 006f2698  7444                 je 0x6f26de
// 006f269a  8b442448             mov eax, dword ptr [esp + 0x48]
// 006f269e  8b542440             mov edx, dword ptr [esp + 0x40]
// 006f26a2  8d0c10               lea ecx, [eax + edx]
// 006f26a5  51                   push ecx
// 006f26a6  53                   push ebx
// 006f26a7  50                   push eax
// 006f26a8  8bd3                 mov edx, ebx
// 006f26aa  2bd5                 sub edx, ebp
// 006f26ac  52                   push edx
// 006f26ad  8d4610               lea eax, [esi + 0x10]
// 006f26b0  50                   push eax
// 006f26b1  ff15102d8000         call dword ptr [0x802d10]
// 006f26b7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f26bb  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006f26be  f782ec00000000002000 test dword ptr [edx + 0xec], 0x200000
// 006f26c8  755a                 jne 0x6f2724
// 006f26ca  8b442414             mov eax, dword ptr [esp + 0x14]
// 006f26ce  2bc3                 sub eax, ebx
// 006f26d0  03c5                 add eax, ebp
// 006f26d2  99                   cdq 
// 006f26d3  2bc2                 sub eax, edx
// 006f26d5  d1f8                 sar eax, 1
// 006f26d7  6a00                 push 0
// 006f26d9  f7d8                 neg eax
// 006f26db  50                   push eax
// 006f26dc  eb3f                 jmp 0x6f271d
// 006f26de  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006f26e2  8d042f               lea eax, [edi + ebp]
// 006f26e5  50                   push eax
// 006f26e6  8b442448             mov eax, dword ptr [esp + 0x48]
// 006f26ea  8d1408               lea edx, [eax + ecx]
// 006f26ed  52                   push edx
// 006f26ee  57                   push edi
// 006f26ef  50                   push eax
// 006f26f0  8d4610               lea eax, [esi + 0x10]
// 006f26f3  50                   push eax
// 006f26f4  ff15102d8000         call dword ptr [0x802d10]
// 006f26fa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f26fe  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006f2701  f782ec00000000002000 test dword ptr [edx + 0xec], 0x200000
// 006f270b  7517                 jne 0x6f2724
// 006f270d  8bc7                 mov eax, edi
// 006f270f  2b442420             sub eax, dword ptr [esp + 0x20]
// 006f2713  03c5                 add eax, ebp
// 006f2715  99                   cdq 
// 006f2716  2bc2                 sub eax, edx
// 006f2718  d1f8                 sar eax, 1
// 006f271a  50                   push eax
// 006f271b  6a00                 push 0
// 006f271d  56                   push esi
// 006f271e  ff15682d8000         call dword ptr [0x802d68]
// 006f2724  83c640               add esi, 0x40
// 006f2727  836c242c01           sub dword ptr [esp + 0x2c], 1
// 006f272c  0f854effffff         jne 0x6f2680
// 006f2732  5f                   pop edi
// 006f2733  5e                   pop esi
// 006f2734  5d                   pop ebp
// 006f2735  5b                   pop ebx
// 006f2736  83c414               add esp, 0x14
// 006f2739  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_CenterControlsInRow@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@HHHHVCSize@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp

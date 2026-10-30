// roc 2010-06 006a75e0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a75e0
//
// 006a75e0  55                   push ebp
// 006a75e1  8bec                 mov ebp, esp
// 006a75e3  6aff                 push -1
// 006a75e5  68c02d9a00           push 0x9a2dc0
// 006a75ea  64a100000000         mov eax, dword ptr fs:[0]
// 006a75f0  50                   push eax
// 006a75f1  64892500000000       mov dword ptr fs:[0], esp
// 006a75f8  83ec38               sub esp, 0x38
// 006a75fb  53                   push ebx
// 006a75fc  8b5d08               mov ebx, dword ptr [ebp + 8]
// 006a75ff  56                   push esi
// 006a7600  8bf1                 mov esi, ecx
// 006a7602  f6465001             test byte ptr [esi + 0x50], 1
// 006a7606  57                   push edi
// 006a7607  8965f0               mov dword ptr [ebp - 0x10], esp
// 006a760a  7510                 jne 0x6a761c
// 006a760c  8d4508               lea eax, [ebp + 8]
// 006a760f  50                   push eax
// 006a7610  895d08               mov dword ptr [ebp + 8], ebx
// 006a7613  e868f2ffff           call 0x6a6880
// 006a7618  834e5001             or dword ptr [esi + 0x50], 1
// 006a761c  f6465002             test byte ptr [esi + 0x50], 2
// 006a7620  7416                 je 0x6a7638
// 006a7622  83c8ff               or eax, 0xffffffff
// 006a7625  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006a7628  64890d00000000       mov dword ptr fs:[0], ecx
// 006a762f  5f                   pop edi
// 006a7630  5e                   pop esi
// 006a7631  5b                   pop ebx
// 006a7632  8be5                 mov esp, ebp
// 006a7634  5d                   pop ebp
// 006a7635  c20c00               ret 0xc
// 006a7638  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 006a763b  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006a763e  57                   push edi
// 006a763f  51                   push ecx
// 006a7640  33c0                 xor eax, eax
// 006a7642  53                   push ebx
// 006a7643  8bce                 mov ecx, esi
// 006a7645  8945fc               mov dword ptr [ebp - 4], eax
// 006a7648  894508               mov dword ptr [ebp + 8], eax
// 006a764b  e820dbffff           call 0x6a5170
// 006a7650  83f8ff               cmp eax, -1
// 006a7653  7436                 je 0x6a768b
// 006a7655  3bc7                 cmp eax, edi
// 006a7657  894508               mov dword ptr [ebp + 8], eax
// 006a765a  7d41                 jge 0x6a769d
// 006a765c  8b550c               mov edx, dword ptr [ebp + 0xc]
// 006a765f  2bf8                 sub edi, eax
// 006a7661  57                   push edi
// 006a7662  03c2                 add eax, edx
// 006a7664  50                   push eax
// 006a7665  53                   push ebx
// 006a7666  8bce                 mov ecx, esi
// 006a7668  e803dbffff           call 0x6a5170
// 006a766d  83f8ff               cmp eax, -1
// 006a7670  7419                 je 0x6a768b
// 006a7672  014508               add dword ptr [ebp + 8], eax
// 006a7675  8b4508               mov eax, dword ptr [ebp + 8]
// 006a7678  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006a767b  64890d00000000       mov dword ptr fs:[0], ecx
// 006a7682  5f                   pop edi
// 006a7683  5e                   pop esi
// 006a7684  5b                   pop ebx
// 006a7685  8be5                 mov esp, ebp
// 006a7687  5d                   pop ebp
// 006a7688  c20c00               ret 0xc
// 006a768b  8d450c               lea eax, [ebp + 0xc]
// 006a768e  50                   push eax
// 006a768f  8bce                 mov ecx, esi
// 006a7691  895d0c               mov dword ptr [ebp + 0xc], ebx
// 006a7694  e8c7faffff           call 0x6a7160
// 006a7699  834e5002             or dword ptr [esi + 0x50], 2
// 006a769d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006a76a0  8b4508               mov eax, dword ptr [ebp + 8]
// 006a76a3  5f                   pop edi
// 006a76a4  5e                   pop esi
// 006a76a5  64890d00000000       mov dword ptr fs:[0], ecx
// 006a76ac  5b                   pop ebx
// 006a76ad  8be5                 mov esp, ebp
// 006a76af  5d                   pop ebp
// 006a76b0  c20c00               ret 0xc
// 006a76b3  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 006a76b6  51                   push ecx
// 006a76b7  8d4dbc               lea ecx, [ebp - 0x44]
// 006a76ba  e831cfffff           call 0x6a45f0
// 006a76bf  685872b300           push 0xb37258
// 006a76c4  8d55bc               lea edx, [ebp - 0x44]
// 006a76c7  52                   push edx
// 006a76c8  e8e5121000           call 0x7a89b2
// copied from an identical function in another client (function ??$read@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@QAEHAAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@12@PADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp
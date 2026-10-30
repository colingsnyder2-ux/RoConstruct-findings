// from server: 100% by auto
// roc 2007-03 004b2890  unit: seg_004b0000  size: 391 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b2890
//
// 004b2890  55                   push ebp
// 004b2891  8bec                 mov ebp, esp
// 004b2893  83ec68               sub esp, 0x68
// 004b2896  53                   push ebx
// 004b2897  56                   push esi
// 004b2898  57                   push edi
// 004b2899  33c0                 xor eax, eax
// 004b289b  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 004b289e  c703ffff0000         mov dword ptr [ebx], 0xffff
// 004b28a4  894304               mov dword ptr [ebx + 4], eax
// 004b28a7  894308               mov dword ptr [ebx + 8], eax
// 004b28aa  89430c               mov dword ptr [ebx + 0xc], eax
// 004b28ad  894310               mov dword ptr [ebx + 0x10], eax
// 004b28b0  894314               mov dword ptr [ebx + 0x14], eax
// 004b28b3  894318               mov dword ptr [ebx + 0x18], eax
// 004b28b6  8945bc               mov dword ptr [ebp - 0x44], eax
// 004b28b9  8945c0               mov dword ptr [ebp - 0x40], eax
// 004b28bc  8945c4               mov dword ptr [ebp - 0x3c], eax
// 004b28bf  8945c8               mov dword ptr [ebp - 0x38], eax
// 004b28c2  8945cc               mov dword ptr [ebp - 0x34], eax
// 004b28c5  8945d0               mov dword ptr [ebp - 0x30], eax
// 004b28c8  8945d4               mov dword ptr [ebp - 0x2c], eax
// 004b28cb  8945dc               mov dword ptr [ebp - 0x24], eax
// 004b28ce  8945e0               mov dword ptr [ebp - 0x20], eax
// 004b28d1  8945e4               mov dword ptr [ebp - 0x1c], eax
// 004b28d4  8945e8               mov dword ptr [ebp - 0x18], eax
// 004b28d7  8945ec               mov dword ptr [ebp - 0x14], eax
// 004b28da  8945f0               mov dword ptr [ebp - 0x10], eax
// 004b28dd  8945f4               mov dword ptr [ebp - 0xc], eax
// 004b28e0  89431c               mov dword ptr [ebx + 0x1c], eax
// 004b28e3  8b4508               mov eax, dword ptr [ebp + 8]
// 004b28e6  50                   push eax
// 004b28e7  be01000000           mov esi, 1
// 004b28ec  53                   push ebx
// 004b28ed  8975b8               mov dword ptr [ebp - 0x48], esi
// 004b28f0  c745d802000000       mov dword ptr [ebp - 0x28], 2
// 004b28f7  e8e4c2ffff           call 0x4aebe0
// 004b28fc  83c408               add esp, 8
// 004b28ff  84c0                 test al, al
// 004b2901  741d                 je 0x4b2920
// 004b2903  33c0                 xor eax, eax
// 004b2905  c70303000000         mov dword ptr [ebx], 3
// 004b290b  894304               mov dword ptr [ebx + 4], eax
// 004b290e  894308               mov dword ptr [ebx + 8], eax
// 004b2911  89430c               mov dword ptr [ebx + 0xc], eax
// 004b2914  894310               mov dword ptr [ebx + 0x10], eax
// 004b2917  894314               mov dword ptr [ebx + 0x14], eax
// 004b291a  894318               mov dword ptr [ebx + 0x18], eax
// 004b291d  89431c               mov dword ptr [ebx + 0x1c], eax
// 004b2920  8d4dd8               lea ecx, [ebp - 0x28]
// 004b2923  894df8               mov dword ptr [ebp - 8], ecx
// 004b2926  8975fc               mov dword ptr [ebp - 4], esi
// 004b2929  8da42400000000       lea esp, [esp]
// 004b2930  8b75f8               mov esi, dword ptr [ebp - 8]
// 004b2933  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004b2936  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004b2939  8b06                 mov eax, dword ptr [esi]
// 004b293b  33d2                 xor edx, edx
// 004b293d  0107                 add dword ptr [edi], eax
// 004b293f  8b4604               mov eax, dword ptr [esi + 4]
// 004b2942  114704               adc dword ptr [edi + 4], eax
// 004b2945  8b4608               mov eax, dword ptr [esi + 8]
// 004b2948  114708               adc dword ptr [edi + 8], eax
// 004b294b  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b294e  11470c               adc dword ptr [edi + 0xc], eax
// 004b2951  e322                 jecxz 0x4b2975
// 004b2953  42                   inc edx
// 004b2954  42                   inc edx
// 004b2955  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004b2958  1104d7               adc dword ptr [edi + edx*8], eax
// 004b295b  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004b295f  1144d704             adc dword ptr [edi + edx*8 + 4], eax
// 004b2963  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004b2967  1144d708             adc dword ptr [edi + edx*8 + 8], eax
// 004b296b  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004b296f  1144d70c             adc dword ptr [edi + edx*8 + 0xc], eax
// 004b2973  e2de                 loop 0x4b2953
// 004b2975  8b4508               mov eax, dword ptr [ebp + 8]
// 004b2978  8d5598               lea edx, [ebp - 0x68]
// 004b297b  52                   push edx
// 004b297c  53                   push ebx
// 004b297d  50                   push eax
// 004b297e  e89de0ffff           call 0x4b0a20
// 004b2983  83c40c               add esp, 0xc
// 004b2986  b820000000           mov eax, 0x20
// 004b298b  8d4db8               lea ecx, [ebp - 0x48]
// 004b298e  8d5598               lea edx, [ebp - 0x68]
// 004b2991  8b32                 mov esi, dword ptr [edx]
// 004b2993  3b31                 cmp esi, dword ptr [ecx]
// 004b2995  7512                 jne 0x4b29a9
// 004b2997  83e804               sub eax, 4
// 004b299a  83c104               add ecx, 4
// 004b299d  83c204               add edx, 4
// 004b29a0  83f804               cmp eax, 4
// 004b29a3  73ec                 jae 0x4b2991
// 004b29a5  85c0                 test eax, eax
// 004b29a7  745d                 je 0x4b2a06
// 004b29a9  0fb632               movzx esi, byte ptr [edx]
// 004b29ac  0fb639               movzx edi, byte ptr [ecx]
// 004b29af  2bf7                 sub esi, edi
// 004b29b1  7545                 jne 0x4b29f8
// 004b29b3  83e801               sub eax, 1
// 004b29b6  83c101               add ecx, 1
// 004b29b9  83c201               add edx, 1
// 004b29bc  85c0                 test eax, eax
// 004b29be  7446                 je 0x4b2a06
// 004b29c0  0fb632               movzx esi, byte ptr [edx]
// 004b29c3  0fb639               movzx edi, byte ptr [ecx]
// 004b29c6  2bf7                 sub esi, edi
// 004b29c8  752e                 jne 0x4b29f8
// 004b29ca  83e801               sub eax, 1
// 004b29cd  83c101               add ecx, 1
// 004b29d0  83c201               add edx, 1
// 004b29d3  85c0                 test eax, eax
// 004b29d5  742f                 je 0x4b2a06
// 004b29d7  0fb632               movzx esi, byte ptr [edx]
// 004b29da  0fb639               movzx edi, byte ptr [ecx]
// 004b29dd  2bf7                 sub esi, edi
// 004b29df  7517                 jne 0x4b29f8
// 004b29e1  83e801               sub eax, 1
// 004b29e4  83c101               add ecx, 1
// 004b29e7  83c201               add edx, 1
// 004b29ea  85c0                 test eax, eax
// 004b29ec  7418                 je 0x4b2a06
// 004b29ee  0fb632               movzx esi, byte ptr [edx]
// 004b29f1  0fb609               movzx ecx, byte ptr [ecx]
// 004b29f4  2bf1                 sub esi, ecx
// 004b29f6  740e                 je 0x4b2a06
// 004b29f8  85f6                 test esi, esi
// 004b29fa  b801000000           mov eax, 1
// 004b29ff  7f07                 jg 0x4b2a08
// 004b2a01  83c8ff               or eax, 0xffffffff
// 004b2a04  eb02                 jmp 0x4b2a08
// 004b2a06  33c0                 xor eax, eax
// 004b2a08  85c0                 test eax, eax
// 004b2a0a  0f8520ffffff         jne 0x4b2930
// 004b2a10  5f                   pop edi
// 004b2a11  5e                   pop esi
// 004b2a12  5b                   pop ebx
// 004b2a13  8be5                 mov esp, ebp
// 004b2a15  5d                   pop ebp
// 004b2a16  c3                   ret 

// from server: 30% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctltrack.cpp
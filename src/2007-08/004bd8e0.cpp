// roc 2007-08 004bd8e0  unit: RakPeer  size: 391 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bd8e0
//
// 004bd8e0  55                   push ebp
// 004bd8e1  8bec                 mov ebp, esp
// 004bd8e3  83ec68               sub esp, 0x68
// 004bd8e6  53                   push ebx
// 004bd8e7  56                   push esi
// 004bd8e8  57                   push edi
// 004bd8e9  33c0                 xor eax, eax
// 004bd8eb  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 004bd8ee  c703ffff0000         mov dword ptr [ebx], 0xffff
// 004bd8f4  894304               mov dword ptr [ebx + 4], eax
// 004bd8f7  894308               mov dword ptr [ebx + 8], eax
// 004bd8fa  89430c               mov dword ptr [ebx + 0xc], eax
// 004bd8fd  894310               mov dword ptr [ebx + 0x10], eax
// 004bd900  894314               mov dword ptr [ebx + 0x14], eax
// 004bd903  894318               mov dword ptr [ebx + 0x18], eax
// 004bd906  8945bc               mov dword ptr [ebp - 0x44], eax
// 004bd909  8945c0               mov dword ptr [ebp - 0x40], eax
// 004bd90c  8945c4               mov dword ptr [ebp - 0x3c], eax
// 004bd90f  8945c8               mov dword ptr [ebp - 0x38], eax
// 004bd912  8945cc               mov dword ptr [ebp - 0x34], eax
// 004bd915  8945d0               mov dword ptr [ebp - 0x30], eax
// 004bd918  8945d4               mov dword ptr [ebp - 0x2c], eax
// 004bd91b  8945dc               mov dword ptr [ebp - 0x24], eax
// 004bd91e  8945e0               mov dword ptr [ebp - 0x20], eax
// 004bd921  8945e4               mov dword ptr [ebp - 0x1c], eax
// 004bd924  8945e8               mov dword ptr [ebp - 0x18], eax
// 004bd927  8945ec               mov dword ptr [ebp - 0x14], eax
// 004bd92a  8945f0               mov dword ptr [ebp - 0x10], eax
// 004bd92d  8945f4               mov dword ptr [ebp - 0xc], eax
// 004bd930  89431c               mov dword ptr [ebx + 0x1c], eax
// 004bd933  8b4508               mov eax, dword ptr [ebp + 8]
// 004bd936  50                   push eax
// 004bd937  be01000000           mov esi, 1
// 004bd93c  53                   push ebx
// 004bd93d  8975b8               mov dword ptr [ebp - 0x48], esi
// 004bd940  c745d802000000       mov dword ptr [ebp - 0x28], 2
// 004bd947  e834c1ffff           call 0x4b9a80
// 004bd94c  83c408               add esp, 8
// 004bd94f  84c0                 test al, al
// 004bd951  741d                 je 0x4bd970
// 004bd953  33c0                 xor eax, eax
// 004bd955  c70303000000         mov dword ptr [ebx], 3
// 004bd95b  894304               mov dword ptr [ebx + 4], eax
// 004bd95e  894308               mov dword ptr [ebx + 8], eax
// 004bd961  89430c               mov dword ptr [ebx + 0xc], eax
// 004bd964  894310               mov dword ptr [ebx + 0x10], eax
// 004bd967  894314               mov dword ptr [ebx + 0x14], eax
// 004bd96a  894318               mov dword ptr [ebx + 0x18], eax
// 004bd96d  89431c               mov dword ptr [ebx + 0x1c], eax
// 004bd970  8d4dd8               lea ecx, [ebp - 0x28]
// 004bd973  894df8               mov dword ptr [ebp - 8], ecx
// 004bd976  8975fc               mov dword ptr [ebp - 4], esi
// 004bd979  8da42400000000       lea esp, [esp]
// 004bd980  8b75f8               mov esi, dword ptr [ebp - 8]
// 004bd983  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004bd986  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004bd989  8b06                 mov eax, dword ptr [esi]
// 004bd98b  33d2                 xor edx, edx
// 004bd98d  0107                 add dword ptr [edi], eax
// 004bd98f  8b4604               mov eax, dword ptr [esi + 4]
// 004bd992  114704               adc dword ptr [edi + 4], eax
// 004bd995  8b4608               mov eax, dword ptr [esi + 8]
// 004bd998  114708               adc dword ptr [edi + 8], eax
// 004bd99b  8b460c               mov eax, dword ptr [esi + 0xc]
// 004bd99e  11470c               adc dword ptr [edi + 0xc], eax
// 004bd9a1  e322                 jecxz 0x4bd9c5
// 004bd9a3  42                   inc edx
// 004bd9a4  42                   inc edx
// 004bd9a5  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004bd9a8  1104d7               adc dword ptr [edi + edx*8], eax
// 004bd9ab  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004bd9af  1144d704             adc dword ptr [edi + edx*8 + 4], eax
// 004bd9b3  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004bd9b7  1144d708             adc dword ptr [edi + edx*8 + 8], eax
// 004bd9bb  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004bd9bf  1144d70c             adc dword ptr [edi + edx*8 + 0xc], eax
// 004bd9c3  e2de                 loop 0x4bd9a3
// 004bd9c5  8b4508               mov eax, dword ptr [ebp + 8]
// 004bd9c8  8d5598               lea edx, [ebp - 0x68]
// 004bd9cb  52                   push edx
// 004bd9cc  53                   push ebx
// 004bd9cd  50                   push eax
// 004bd9ce  e8eddfffff           call 0x4bb9c0
// 004bd9d3  83c40c               add esp, 0xc
// 004bd9d6  b820000000           mov eax, 0x20
// 004bd9db  8d4db8               lea ecx, [ebp - 0x48]
// 004bd9de  8d5598               lea edx, [ebp - 0x68]
// 004bd9e1  8b32                 mov esi, dword ptr [edx]
// 004bd9e3  3b31                 cmp esi, dword ptr [ecx]
// 004bd9e5  7512                 jne 0x4bd9f9
// 004bd9e7  83e804               sub eax, 4
// 004bd9ea  83c104               add ecx, 4
// 004bd9ed  83c204               add edx, 4
// 004bd9f0  83f804               cmp eax, 4
// 004bd9f3  73ec                 jae 0x4bd9e1
// 004bd9f5  85c0                 test eax, eax
// 004bd9f7  745d                 je 0x4bda56
// 004bd9f9  0fb632               movzx esi, byte ptr [edx]
// 004bd9fc  0fb639               movzx edi, byte ptr [ecx]
// 004bd9ff  2bf7                 sub esi, edi
// 004bda01  7545                 jne 0x4bda48
// 004bda03  83e801               sub eax, 1
// 004bda06  83c101               add ecx, 1
// 004bda09  83c201               add edx, 1
// 004bda0c  85c0                 test eax, eax
// 004bda0e  7446                 je 0x4bda56
// 004bda10  0fb632               movzx esi, byte ptr [edx]
// 004bda13  0fb639               movzx edi, byte ptr [ecx]
// 004bda16  2bf7                 sub esi, edi
// 004bda18  752e                 jne 0x4bda48
// 004bda1a  83e801               sub eax, 1
// 004bda1d  83c101               add ecx, 1
// 004bda20  83c201               add edx, 1
// 004bda23  85c0                 test eax, eax
// 004bda25  742f                 je 0x4bda56
// 004bda27  0fb632               movzx esi, byte ptr [edx]
// 004bda2a  0fb639               movzx edi, byte ptr [ecx]
// 004bda2d  2bf7                 sub esi, edi
// 004bda2f  7517                 jne 0x4bda48
// 004bda31  83e801               sub eax, 1
// 004bda34  83c101               add ecx, 1
// 004bda37  83c201               add edx, 1
// 004bda3a  85c0                 test eax, eax
// 004bda3c  7418                 je 0x4bda56
// 004bda3e  0fb632               movzx esi, byte ptr [edx]
// 004bda41  0fb609               movzx ecx, byte ptr [ecx]
// 004bda44  2bf1                 sub esi, ecx
// 004bda46  740e                 je 0x4bda56
// 004bda48  85f6                 test esi, esi
// 004bda4a  b801000000           mov eax, 1
// 004bda4f  7f07                 jg 0x4bda58
// 004bda51  83c8ff               or eax, 0xffffffff
// 004bda54  eb02                 jmp 0x4bda58
// 004bda56  33c0                 xor eax, eax
// 004bda58  85c0                 test eax, eax
// 004bda5a  0f8520ffffff         jne 0x4bd980
// 004bda60  5f                   pop edi
// 004bda61  5e                   pop esi
// 004bda62  5b                   pop ebx
// 004bda63  8be5                 mov esp, ebp
// 004bda65  5d                   pop ebp
// 004bda66  c3                   ret 
// library openrbx-raknet/RakPeer.cpp (function ??$computePublicExponent@$$BY07I@big@@YAXAAY07I0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp

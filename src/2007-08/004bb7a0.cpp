// from server: 100% by auto
// roc 2007-08 004bb7a0  unit: RakPeer  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bb7a0
//
// 004bb7a0  55                   push ebp
// 004bb7a1  8bec                 mov ebp, esp
// 004bb7a3  81ec94000000         sub esp, 0x94
// 004bb7a9  8b4508               mov eax, dword ptr [ebp + 8]
// 004bb7ac  53                   push ebx
// 004bb7ad  56                   push esi
// 004bb7ae  57                   push edi
// 004bb7af  8bf0                 mov esi, eax
// 004bb7b1  6a40                 push 0x40
// 004bb7b3  b910000000           mov ecx, 0x10
// 004bb7b8  8dbd6cffffff         lea edi, [ebp - 0x94]
// 004bb7be  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bb7c0  8bf0                 mov esi, eax
// 004bb7c2  6a00                 push 0
// 004bb7c4  b910000000           mov ecx, 0x10
// 004bb7c9  8d7dac               lea edi, [ebp - 0x54]
// 004bb7cc  50                   push eax
// 004bb7cd  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bb7cf  e8b8531700           call 0x630b8c
// 004bb7d4  33c0                 xor eax, eax
// 004bb7d6  83c40c               add esp, 0xc
// 004bb7d9  33c9                 xor ecx, ecx
// 004bb7db  8945fc               mov dword ptr [ebp - 4], eax
// 004bb7de  894df4               mov dword ptr [ebp - 0xc], ecx
// 004bb7e1  eb0d                 jmp 0x4bb7f0
// 004bb7e3  8da42400000000       lea esp, [esp]
// 004bb7ea  8d9b00000000         lea ebx, [ebx]
// 004bb7f0  8b9c8d6cffffff       mov ebx, dword ptr [ebp + ecx*4 - 0x94]
// 004bb7f7  85db                 test ebx, ebx
// 004bb7f9  c745f820000000       mov dword ptr [ebp - 8], 0x20
// 004bb800  0f848c000000         je 0x4bb892
// 004bb806  f6c301               test bl, 1
// 004bb809  746d                 je 0x4bb878
// 004bb80b  85c0                 test eax, eax
// 004bb80d  7414                 je 0x4bb823
// 004bb80f  50                   push eax
// 004bb810  8d45ac               lea eax, [ebp - 0x54]
// 004bb813  50                   push eax
// 004bb814  e847e3ffff           call 0x4b9b60
// 004bb819  83c408               add esp, 8
// 004bb81c  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004bb823  8d4dac               lea ecx, [ebp - 0x54]
// 004bb826  894dec               mov dword ptr [ebp - 0x14], ecx
// 004bb829  c745f003000000       mov dword ptr [ebp - 0x10], 3
// 004bb830  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 004bb833  8b7d08               mov edi, dword ptr [ebp + 8]
// 004bb836  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004bb839  8b06                 mov eax, dword ptr [esi]
// 004bb83b  33d2                 xor edx, edx
// 004bb83d  0107                 add dword ptr [edi], eax
// 004bb83f  8b4604               mov eax, dword ptr [esi + 4]
// 004bb842  114704               adc dword ptr [edi + 4], eax
// 004bb845  8b4608               mov eax, dword ptr [esi + 8]
// 004bb848  114708               adc dword ptr [edi + 8], eax
// 004bb84b  8b460c               mov eax, dword ptr [esi + 0xc]
// 004bb84e  11470c               adc dword ptr [edi + 0xc], eax
// 004bb851  e322                 jecxz 0x4bb875
// 004bb853  42                   inc edx
// 004bb854  42                   inc edx
// 004bb855  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004bb858  1104d7               adc dword ptr [edi + edx*8], eax
// 004bb85b  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004bb85f  1144d704             adc dword ptr [edi + edx*8 + 4], eax
// 004bb863  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004bb867  1144d708             adc dword ptr [edi + edx*8 + 8], eax
// 004bb86b  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004bb86f  1144d70c             adc dword ptr [edi + edx*8 + 0xc], eax
// 004bb873  e2de                 loop 0x4bb853
// 004bb875  8b45fc               mov eax, dword ptr [ebp - 4]
// 004bb878  8145f8ffff0000       add dword ptr [ebp - 8], 0xffff
// 004bb87f  d1eb                 shr ebx, 1
// 004bb881  83c001               add eax, 1
// 004bb884  85db                 test ebx, ebx
// 004bb886  8945fc               mov dword ptr [ebp - 4], eax
// 004bb889  0f8577ffffff         jne 0x4bb806
// 004bb88f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004bb892  0fb755f8             movzx edx, word ptr [ebp - 8]
// 004bb896  83c101               add ecx, 1
// 004bb899  03c2                 add eax, edx
// 004bb89b  83f910               cmp ecx, 0x10
// 004bb89e  8945fc               mov dword ptr [ebp - 4], eax
// 004bb8a1  894df4               mov dword ptr [ebp - 0xc], ecx
// 004bb8a4  0f8246ffffff         jb 0x4bb7f0
// 004bb8aa  5f                   pop edi
// 004bb8ab  5e                   pop esi
// 004bb8ac  5b                   pop ebx
// 004bb8ad  8be5                 mov esp, ebp
// 004bb8af  5d                   pop ebp
// 004bb8b0  c3                   ret 

// from server: 32% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
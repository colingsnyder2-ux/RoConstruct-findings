// roc 2007-08 0051e8e0  unit: seg_00510000  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051e8e0
//
// 0051e8e0  83ec14               sub esp, 0x14
// 0051e8e3  a188518b00           mov eax, dword ptr [0x8b5188]
// 0051e8e8  33c4                 xor eax, esp
// 0051e8ea  89442410             mov dword ptr [esp + 0x10], eax
// 0051e8ee  55                   push ebp
// 0051e8ef  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0051e8f3  8b556c               mov edx, dword ptr [ebp + 0x6c]
// 0051e8f6  f7c200000c00         test edx, 0xc0000
// 0051e8fc  56                   push esi
// 0051e8fd  8b742424             mov esi, dword ptr [esp + 0x24]
// 0051e901  746d                 je 0x51e970
// 0051e903  803e23               cmp byte ptr [esi], 0x23
// 0051e906  7552                 jne 0x51e95a
// 0051e908  b801000000           mov eax, 1
// 0051e90d  b120                 mov cl, 0x20
// 0051e90f  90                   nop 
// 0051e910  380c06               cmp byte ptr [esi + eax], cl
// 0051e913  7413                 je 0x51e928
// 0051e915  384c0601             cmp byte ptr [esi + eax + 1], cl
// 0051e919  740a                 je 0x51e925
// 0051e91b  83c002               add eax, 2
// 0051e91e  83f80f               cmp eax, 0xf
// 0051e921  7ced                 jl 0x51e910
// 0051e923  eb03                 jmp 0x51e928
// 0051e925  83c001               add eax, 1
// 0051e928  f7c200000800         test edx, 0x80000
// 0051e92e  7426                 je 0x51e956
// 0051e930  57                   push edi
// 0051e931  8d78ff               lea edi, [eax - 1]
// 0051e934  33c9                 xor ecx, ecx
// 0051e936  85ff                 test edi, edi
// 0051e938  7e14                 jle 0x51e94e
// 0051e93a  8d4601               lea eax, [esi + 1]
// 0051e93d  57                   push edi
// 0051e93e  50                   push eax
// 0051e93f  8d442414             lea eax, [esp + 0x14]
// 0051e943  50                   push eax
// 0051e944  e803241100           call 0x630d4c
// 0051e949  83c40c               add esp, 0xc
// 0051e94c  8bcf                 mov ecx, edi
// 0051e94e  c6440c0c00           mov byte ptr [esp + ecx + 0xc], 0
// 0051e953  5f                   pop edi
// 0051e954  eb16                 jmp 0x51e96c
// 0051e956  03f0                 add esi, eax
// 0051e958  eb16                 jmp 0x51e970
// 0051e95a  f7c200000800         test edx, 0x80000
// 0051e960  740e                 je 0x51e970
// 0051e962  c644240830           mov byte ptr [esp + 8], 0x30
// 0051e967  c644240900           mov byte ptr [esp + 9], 0
// 0051e96c  8d742408             lea esi, [esp + 8]
// 0051e970  8b4540               mov eax, dword ptr [ebp + 0x40]
// 0051e973  85c0                 test eax, eax
// 0051e975  7407                 je 0x51e97e
// 0051e977  56                   push esi
// 0051e978  55                   push ebp
// 0051e979  ffd0                 call eax
// 0051e97b  83c408               add esp, 8
// 0051e97e  56                   push esi
// 0051e97f  55                   push ebp
// 0051e980  e8abfcffff           call 0x51e630
// 0051e985  5e                   pop esi
// 0051e986  5d                   pop ebp
// library libpng-1.2.7/pngerror.c (function _png_error)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: libpng-1.2.7 pngerror.c

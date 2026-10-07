// roc 2008-06 00661150  unit: RBX::FilterStairs  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00661150
//
// 00661150  83ec34               sub esp, 0x34
// 00661153  817b101d010000       cmp dword ptr [ebx + 0x10], 0x11d
// 0066115a  55                   push ebp
// 0066115b  8b6b30               mov ebp, dword ptr [ebx + 0x30]
// 0066115e  8b4524               mov eax, dword ptr [ebp + 0x24]
// 00661161  56                   push esi
// 00661162  57                   push edi
// 00661163  8944240c             mov dword ptr [esp + 0xc], eax
// 00661167  7527                 jne 0x661190
// 00661169  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0066116d  bafdffff7f           mov edx, 0x7ffffffd
// 00661172  39511c               cmp dword ptr [ecx + 0x1c], edx
// 00661175  7e0c                 jle 0x661183
// 00661177  b9bcc58400           mov ecx, 0x84c5bc
// 0066117c  8bf5                 mov esi, ebp
// 0066117e  e84df6ffff           call 0x6607d0
// 00661183  8d7c2410             lea edi, [esp + 0x10]
// 00661187  8bf3                 mov esi, ebx
// 00661189  e822f7ffff           call 0x6608b0
// 0066118e  eb0b                 jmp 0x66119b
// 00661190  8d7c2410             lea edi, [esp + 0x10]
// 00661194  8bf3                 mov esi, ebx
// 00661196  e865ffffff           call 0x661100
// 0066119b  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0066119f  ff471c               inc dword ptr [edi + 0x1c]
// 006611a2  837b103d             cmp dword ptr [ebx + 0x10], 0x3d
// 006611a6  7421                 je 0x6611c9
// 006611a8  6a3d                 push 0x3d
// 006611aa  53                   push ebx
// 006611ab  e8602f0000           call 0x664110
// 006611b0  8b5334               mov edx, dword ptr [ebx + 0x34]
// 006611b3  50                   push eax
// 006611b4  68c0c48400           push 0x84c4c0
// 006611b9  52                   push edx
// 006611ba  e80119fcff           call 0x622ac0
// 006611bf  50                   push eax
// 006611c0  53                   push ebx
// 006611c1  e84a300000           call 0x664210
// 006611c6  83c41c               add esp, 0x1c
// 006611c9  53                   push ebx
// 006611ca  e831440000           call 0x665600
// 006611cf  8d442414             lea eax, [esp + 0x14]
// 006611d3  50                   push eax
// 006611d4  55                   push ebp
// 006611d5  e846a70000           call 0x66b920
// 006611da  6a00                 push 0
// 006611dc  8d4c2438             lea ecx, [esp + 0x38]
// 006611e0  51                   push ecx
// 006611e1  53                   push ebx
// 006611e2  8bf0                 mov esi, eax
// 006611e4  e8070e0000           call 0x661ff0
// 006611e9  8d542440             lea edx, [esp + 0x40]
// 006611ed  52                   push edx
// 006611ee  55                   push ebp
// 006611ef  e82ca70000           call 0x66b920
// 006611f4  50                   push eax
// 006611f5  8b4718               mov eax, dword ptr [edi + 0x18]
// 006611f8  8b4808               mov ecx, dword ptr [eax + 8]
// 006611fb  56                   push esi
// 006611fc  51                   push ecx
// 006611fd  6a09                 push 9
// 006611ff  55                   push ebp
// 00661200  e82ba00000           call 0x66b230
// 00661205  8b542440             mov edx, dword ptr [esp + 0x40]
// 00661209  83c434               add esp, 0x34
// 0066120c  5f                   pop edi
// 0066120d  5e                   pop esi
// 0066120e  895524               mov dword ptr [ebp + 0x24], edx
// 00661211  5d                   pop ebp
// 00661212  83c434               add esp, 0x34
// 00661215  c3                   ret 
// library lua-5.1.4/lparser.c (function _recfield)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

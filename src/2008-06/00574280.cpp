// from server: 100% by colin
// roc 2008-06 00574280  unit: RBX::UnifiedWidget  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00574280
//
// 00574280  53                   push ebx
// 00574281  8bd9                 mov ebx, ecx
// 00574283  83bb4401000002       cmp dword ptr [ebx + 0x144], 2
// 0057428a  7c67                 jl 0x5742f3
// 0057428c  57                   push edi
// 0057428d  33ff                 xor edi, edi
// 0057428f  e88c6bf1ff           call 0x48ae20
// 00574294  85c0                 test eax, eax
// 00574296  765a                 jbe 0x5742f2
// 00574298  55                   push ebp
// 00574299  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0057429d  56                   push esi
// 0057429e  8bff                 mov edi, edi
// 005742a0  8bb308010000         mov esi, dword ptr [ebx + 0x108]
// 005742a6  8b4610               mov eax, dword ptr [esi + 0x10]
// 005742a9  2b460c               sub eax, dword ptr [esi + 0xc]
// 005742ac  c1f803               sar eax, 3
// 005742af  3bf8                 cmp edi, eax
// 005742b1  7206                 jb 0x5742b9
// 00574
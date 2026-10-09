// roc 2009-06 006b1240  unit: RBX::BallBallContact  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b1240
//
// 006b1240  53                   push ebx
// 006b1241  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006b1245  8b4310               mov eax, dword ptr [ebx + 0x10]
// 006b1248  2b430c               sub eax, dword ptr [ebx + 0xc]
// 006b124b  56                   push esi
// 006b124c  57                   push edi
// 006b124d  6a01                 push 1
// 006b124f  c1f802               sar eax, 2
// 006b1252  50                   push eax
// 006b1253  8bf9                 mov edi, ecx
// 006b1255  e8068bfaff           call 0x659d60
// 006b125a  33f6                 xor esi, esi
// 006b125c  397704               cmp dword ptr [edi + 4], esi
// 006b125f  7e30                 jle 0x6b1291
// 006b1261  55                   push ebp
// 006b1262  8b2dace98900         mov ebp, dword ptr [0x89e9ac]
// 006b1268  eb06                 jmp 0x6b1270
// 006b126a  8d9b00000000         lea ebx, [ebx]
// 006b1270  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 006b1273  2b4b0c               sub ecx, dword ptr [ebx + 0xc]
// 006b1276  c1f902               sar ecx, 2
// 006b1279  3bf1                 cmp esi, ecx
// 006b127b  7202                 jb 0x6b127f
// 006b127d  ffd5                 call ebp
// 006b127f  8b530c               mov edx, dword ptr [ebx + 0xc]
// 006b1282  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 006b1285  8b07                 mov eax, dword ptr [edi]
// 006b1287  890cb0               mov dword ptr [eax + esi*4], ecx
// 006b128a  46                   inc esi
// 006b128b  3b7704               cmp esi, dword ptr [edi + 4]
// 006b128e  7ce0                 jl 0x6b1270
// 006b1290  5d                   pop ebp
// 006b1291  8bc7                 mov eax, edi
// 006b1293  5f                   pop edi
// 006b1294  5e                   pop esi
// 006b1295  5b                   pop ebx
// 006b1296  c20400               ret 4
// library openrbx-client/App\v8world\ContactManager.cpp (function ??4?$Array@PBVPrimitive@RBX@@@G3D@@QAEAAV01@ABV?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp

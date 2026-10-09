// roc 2008-06 0060d200  unit: RBX::BallBlockContact  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060d200
//
// 0060d200  53                   push ebx
// 0060d201  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0060d205  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0060d208  2b430c               sub eax, dword ptr [ebx + 0xc]
// 0060d20b  56                   push esi
// 0060d20c  57                   push edi
// 0060d20d  6a01                 push 1
// 0060d20f  c1f802               sar eax, 2
// 0060d212  50                   push eax
// 0060d213  8bf9                 mov edi, ecx
// 0060d215  e886f7fbff           call 0x5cc9a0
// 0060d21a  33f6                 xor esi, esi
// 0060d21c  397704               cmp dword ptr [edi + 4], esi
// 0060d21f  7e30                 jle 0x60d251
// 0060d221  55                   push ebp
// 0060d222  8b2d90288000         mov ebp, dword ptr [0x802890]
// 0060d228  eb06                 jmp 0x60d230
// 0060d22a  8d9b00000000         lea ebx, [ebx]
// 0060d230  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 0060d233  2b4b0c               sub ecx, dword ptr [ebx + 0xc]
// 0060d236  c1f902               sar ecx, 2
// 0060d239  3bf1                 cmp esi, ecx
// 0060d23b  7202                 jb 0x60d23f
// 0060d23d  ffd5                 call ebp
// 0060d23f  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0060d242  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 0060d245  8b07                 mov eax, dword ptr [edi]
// 0060d247  890cb0               mov dword ptr [eax + esi*4], ecx
// 0060d24a  46                   inc esi
// 0060d24b  3b7704               cmp esi, dword ptr [edi + 4]
// 0060d24e  7ce0                 jl 0x60d230
// 0060d250  5d                   pop ebp
// 0060d251  8bc7                 mov eax, edi
// 0060d253  5f                   pop edi
// 0060d254  5e                   pop esi
// 0060d255  5b                   pop ebx
// 0060d256  c20400               ret 4
// library openrbx-client/App\v8world\ContactManager.cpp (function ??4?$Array@PBVPrimitive@RBX@@@G3D@@QAEAAV01@ABV?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp

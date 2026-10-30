// from server: 100% by auto
// roc 2010-06 007811d0  unit: seg_00780000  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007811d0
//
// 007811d0  83ec30               sub esp, 0x30
// 007811d3  817b101d010000       cmp dword ptr [ebx + 0x10], 0x11d
// 007811da  55                   push ebp
// 007811db  56                   push esi
// 007811dc  57                   push edi
// 007811dd  8b7b30               mov edi, dword ptr [ebx + 0x30]
// 007811e0  7424                 je 0x781206
// 007811e2  681d010000           push 0x11d
// 007811e7  53                   push ebx
// 007811e8  e8a3120000           call 0x782490
// 007811ed  50                   push eax
// 007811ee  8b4334               mov eax, dword ptr [ebx + 0x34]
// 007811f1  683830a500           push 0xa53038
// 007811f6  50                   push eax
// 007811f7  e8e41bfbff           call 0x732de0
// 007811fc  50                   push eax
// 007811fd  53                   push ebx
// 007811fe  e88d130000           call 0x782590
// 00781203  83c41c               add esp, 0x1c
// 00781206  8b6b18               mov ebp, dword ptr [ebx + 0x18]
// 00781209  53                   push ebx
// 0078120a  e871270000           call 0x783980
// 0078120f  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00781212  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00781216  41                   inc ecx
// 00781217  83c404               add esp, 4
// 0078121a  81f9c8000000         cmp ecx, 0xc8
// 00781220  7e0f                 jle 0x781231
// 00781222  b9dc30a500           mov ecx, 0xa530dc
// 00781227  bac8000000           mov edx, 0xc8
// 0078122c  e8afd8ffff           call 0x77eae0
// 00781231  55                   push ebp
// 00781232  53                   push ebx
// 00781233  e8e8d9ffff           call 0x77ec20
// 00781238  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 0078123c  66898456ac000000     mov word ptr [esi + edx*2 + 0xac], ax
// 00781244  8b4724               mov eax, dword ptr [edi + 0x24]
// 00781247  83c9ff               or ecx, 0xffffffff
// 0078124a  6a01                 push 1
// 0078124c  57                   push edi
// 0078124d  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00781251  894c2430             mov dword ptr [esp + 0x30], ecx
// 00781255  c744241c06000000     mov dword ptr [esp + 0x1c], 6
// 0078125d  89442424             mov dword ptr [esp + 0x24], eax
// 00781261  e85ae40000           call 0x78f6c0
// 00781266  8b4330               mov eax, dword ptr [ebx + 0x30]
// 00781269  fe4032               inc byte ptr [eax + 0x32]
// 0078126c  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 00781270  0fb78c48aa000000     movzx ecx, word ptr [eax + ecx*2 + 0xaa]
// 00781278  8d1449               lea edx, [ecx + ecx*2]
// 0078127b  8b08                 mov ecx, dword ptr [eax]
// 0078127d  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 00781280  8b4018               mov eax, dword ptr [eax + 0x18]
// 00781283  89449104             mov dword ptr [ecx + edx*4 + 4], eax
// 00781287  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0078128a  51                   push ecx
// 0078128b  8d542438             lea edx, [esp + 0x38]
// 0078128f  6a00                 push 0
// 00781291  52                   push edx
// 00781292  8bc3                 mov eax, ebx
// 00781294  e8a7e6ffff           call 0x77f940
// 00781299  8d442440             lea eax, [esp + 0x40]
// 0078129d  50                   push eax
// 0078129e  8d4c242c             lea ecx, [esp + 0x2c]
// 007812a2  51                   push ecx
// 007812a3  57                   push edi
// 007812a4  e8b7f00000           call 0x790360
// 007812a9  0fb65732             movzx edx, byte ptr [edi + 0x32]
// 007812ad  8b0f                 mov ecx, dword ptr [edi]
// 007812af  0fb78457aa000000     movzx eax, word ptr [edi + edx*2 + 0xaa]
// 007812b7  8b5118               mov edx, dword ptr [ecx + 0x18]
// 007812ba  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 007812bd  83c428               add esp, 0x28
// 007812c0  5f                   pop edi
// 007812c1  8d0440               lea eax, [eax + eax*2]
// 007812c4  5e                   pop esi
// 007812c5  894c8204             mov dword ptr [edx + eax*4 + 4], ecx
// 007812c9  5d                   pop ebp
// 007812ca  83c430               add esp, 0x30
// 007812cd  c3                   ret 
// library lua-5.1.4/lparser.c (function _localfunc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

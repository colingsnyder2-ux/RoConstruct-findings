// roc 2009-06 006eff30  unit: seg_006e0000  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006eff30
//
// 006eff30  83ec30               sub esp, 0x30
// 006eff33  817b101d010000       cmp dword ptr [ebx + 0x10], 0x11d
// 006eff3a  55                   push ebp
// 006eff3b  56                   push esi
// 006eff3c  57                   push edi
// 006eff3d  8b7b30               mov edi, dword ptr [ebx + 0x30]
// 006eff40  7424                 je 0x6eff66
// 006eff42  681d010000           push 0x11d
// 006eff47  53                   push ebx
// 006eff48  e8a3120000           call 0x6f11f0
// 006eff4d  50                   push eax
// 006eff4e  8b4334               mov eax, dword ptr [ebx + 0x34]
// 006eff51  68b8dd8e00           push 0x8eddb8
// 006eff56  50                   push eax
// 006eff57  e84491fdff           call 0x6c90a0
// 006eff5c  50                   push eax
// 006eff5d  53                   push ebx
// 006eff5e  e88d130000           call 0x6f12f0
// 006eff63  83c41c               add esp, 0x1c
// 006eff66  8b6b18               mov ebp, dword ptr [ebx + 0x18]
// 006eff69  53                   push ebx
// 006eff6a  e871270000           call 0x6f26e0
// 006eff6f  8b7330               mov esi, dword ptr [ebx + 0x30]
// 006eff72  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006eff76  41                   inc ecx
// 006eff77  83c404               add esp, 4
// 006eff7a  81f9c8000000         cmp ecx, 0xc8
// 006eff80  7e0f                 jle 0x6eff91
// 006eff82  b95cde8e00           mov ecx, 0x8ede5c
// 006eff87  bac8000000           mov edx, 0xc8
// 006eff8c  e8afd8ffff           call 0x6ed840
// 006eff91  55                   push ebp
// 006eff92  53                   push ebx
// 006eff93  e8e8d9ffff           call 0x6ed980
// 006eff98  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 006eff9c  66898456ac000000     mov word ptr [esi + edx*2 + 0xac], ax
// 006effa4  8b4724               mov eax, dword ptr [edi + 0x24]
// 006effa7  83c9ff               or ecx, 0xffffffff
// 006effaa  6a01                 push 1
// 006effac  57                   push edi
// 006effad  894c242c             mov dword ptr [esp + 0x2c], ecx
// 006effb1  894c2430             mov dword ptr [esp + 0x30], ecx
// 006effb5  c744241c06000000     mov dword ptr [esp + 0x1c], 6
// 006effbd  89442424             mov dword ptr [esp + 0x24], eax
// 006effc1  e87a9d0000           call 0x6f9d40
// 006effc6  8b4330               mov eax, dword ptr [ebx + 0x30]
// 006effc9  fe4032               inc byte ptr [eax + 0x32]
// 006effcc  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 006effd0  0fb78c48aa000000     movzx ecx, word ptr [eax + ecx*2 + 0xaa]
// 006effd8  8d1449               lea edx, [ecx + ecx*2]
// 006effdb  8b08                 mov ecx, dword ptr [eax]
// 006effdd  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 006effe0  8b4018               mov eax, dword ptr [eax + 0x18]
// 006effe3  89449104             mov dword ptr [ecx + edx*4 + 4], eax
// 006effe7  8b4b04               mov ecx, dword ptr [ebx + 4]
// 006effea  51                   push ecx
// 006effeb  8d542438             lea edx, [esp + 0x38]
// 006effef  6a00                 push 0
// 006efff1  52                   push edx
// 006efff2  8bc3                 mov eax, ebx
// 006efff4  e8a7e6ffff           call 0x6ee6a0
// 006efff9  8d442440             lea eax, [esp + 0x40]
// 006efffd  50                   push eax
// 006efffe  8d4c242c             lea ecx, [esp + 0x2c]
// 006f0002  51                   push ecx
// 006f0003  57                   push edi
// 006f0004  e8c7a90000           call 0x6fa9d0
// 006f0009  0fb65732             movzx edx, byte ptr [edi + 0x32]
// 006f000d  8b0f                 mov ecx, dword ptr [edi]
// 006f000f  0fb78457aa000000     movzx eax, word ptr [edi + edx*2 + 0xaa]
// 006f0017  8b5118               mov edx, dword ptr [ecx + 0x18]
// 006f001a  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 006f001d  83c428               add esp, 0x28
// 006f0020  5f                   pop edi
// 006f0021  8d0440               lea eax, [eax + eax*2]
// 006f0024  5e                   pop esi
// 006f0025  894c8204             mov dword ptr [edx + eax*4 + 4], ecx
// 006f0029  5d                   pop ebp
// 006f002a  83c430               add esp, 0x30
// 006f002d  c3                   ret 
// library lua-5.1.4/lparser.c (function _localfunc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c

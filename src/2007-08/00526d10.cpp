// from server: 100% by auto
// roc 2007-08 00526d10  unit: G3D::Line  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00526d10
//
// 00526d10  83ec18               sub esp, 0x18
// 00526d13  56                   push esi
// 00526d14  8b742420             mov esi, dword ptr [esp + 0x20]
// 00526d18  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00526d1e  b801000000           mov eax, 1
// 00526d23  d3e0                 shl eax, cl
// 00526d25  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 00526d2c  57                   push edi
// 00526d2d  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 00526d33  89442408             mov dword ptr [esp + 8], eax
// 00526d37  7415                 je 0x526d4e
// 00526d39  837f2800             cmp dword ptr [edi + 0x28], 0
// 00526d3d  750f                 jne 0x526d4e
// 00526d3f  e8acfaffff           call 0x5267f0
// 00526d44  84c0                 test al, al
// 00526d46  7506                 jne 0x526d4e
// 00526d48  5f                   pop edi
// 00526d49  5e                   pop esi
// 00526d4a  83c418               add esp, 0x18
// 00526d4d  c3                   ret 
// 00526d4e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00526d51  8974241c             mov dword ptr [esp + 0x1c], esi
// 00526d55  8b08                 mov ecx, dword ptr [eax]
// 00526d57  894c240c             mov dword ptr [esp + 0xc], ecx
// 00526d5b  8b5004               mov edx, dword ptr [eax + 4]
// 00526d5e  53                   push ebx
// 00526d5f  33db                 xor ebx, ebx
// 00526d61  399e40010000         cmp dword ptr [esi + 0x140], ebx
// 00526d67  89542414             mov dword ptr [esp + 0x14], edx
// 00526d6b  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00526d6e  55                   push ebp
// 00526d6f  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00526d72  7e50                 jle 0x526dc4
// 00526d74  83f901               cmp ecx, 1
// 00526d77  8b442430             mov eax, dword ptr [esp + 0x30]
// 00526d7b  8b0498               mov eax, dword ptr [eax + ebx*4]
// 00526d7e  8944242c             mov dword ptr [esp + 0x2c], eax
// 00526d82  7d21                 jge 0x526da5
// 00526d84  6a01                 push 1
// 00526d86  51                   push ecx
// 00526d87  8d4c241c             lea ecx, [esp + 0x1c]
// 00526d8b  55                   push ebp
// 00526d8c  51                   push ecx
// 00526d8d  e8fef1ffff           call 0x525f90
// 00526d92  83c410               add esp, 0x10
// 00526d95  84c0                 test al, al
// 00526d97  7452                 je 0x526deb
// 00526d99  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00526d9d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00526da1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00526da5  83e901               sub ecx, 1
// 00526da8  8bd5                 mov edx, ebp
// 00526daa  d3fa                 sar edx, cl
// 00526dac  f6c201               test dl, 1
// 00526daf  7408                 je 0x526db9
// 00526db1  668b542410           mov dx, word ptr [esp + 0x10]
// 00526db6  660910               or word ptr [eax], dx
// 00526db9  83c301               add ebx, 1
// 00526dbc  3b9e40010000         cmp ebx, dword ptr [esi + 0x140]
// 00526dc2  7cb0                 jl 0x526d74
// 00526dc4  8b4618               mov eax, dword ptr [esi + 0x18]
// 00526dc7  8b542414             mov edx, dword ptr [esp + 0x14]
// 00526dcb  8910                 mov dword ptr [eax], edx
// 00526dcd  8b4618               mov eax, dword ptr [esi + 0x18]
// 00526dd0  8b542418             mov edx, dword ptr [esp + 0x18]
// 00526dd4  895004               mov dword ptr [eax + 4], edx
// 00526dd7  834728ff             add dword ptr [edi + 0x28], -1
// 00526ddb  896f0c               mov dword ptr [edi + 0xc], ebp
// 00526dde  5d                   pop ebp
// 00526ddf  5b                   pop ebx
// 00526de0  894f10               mov dword ptr [edi + 0x10], ecx
// 00526de3  5f                   pop edi
// 00526de4  b001                 mov al, 1
// 00526de6  5e                   pop esi
// 00526de7  83c418               add esp, 0x18
// 00526dea  c3                   ret 
// 00526deb  5d                   pop ebp
// 00526dec  5b                   pop ebx
// 00526ded  5f                   pop edi
// 00526dee  32c0                 xor al, al
// 00526df0  5e                   pop esi
// 00526df1  83c418               add esp, 0x18
// 00526df4  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_DC_refine)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c

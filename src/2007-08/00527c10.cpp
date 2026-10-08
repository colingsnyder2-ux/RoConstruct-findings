// from server: 100% by auto
// roc 2007-08 00527c10  unit: G3D::Line  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00527c10
//
// 00527c10  53                   push ebx
// 00527c11  55                   push ebp
// 00527c12  56                   push esi
// 00527c13  57                   push edi
// 00527c14  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00527c18  8bafa0010000         mov ebp, dword ptr [edi + 0x1a0]
// 00527c1e  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 00527c21  3b8714010000         cmp eax, dword ptr [edi + 0x114]
// 00527c27  7c52                 jl 0x527c7b
// 00527c29  8b8fc4000000         mov ecx, dword ptr [edi + 0xc4]
// 00527c2f  33db                 xor ebx, ebx
// 00527c31  395f24               cmp dword ptr [edi + 0x24], ebx
// 00527c34  894c2414             mov dword ptr [esp + 0x14], ecx
// 00527c38  7e3a                 jle 0x527c74
// 00527c3a  8d750c               lea esi, [ebp + 0xc]
// 00527c3d  8d4900               lea ecx, [ecx]
// 00527c40  8b5658               mov edx, dword ptr [esi + 0x58]
// 00527c43  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00527c47  0faf10               imul edx, dword ptr [eax]
// 00527c4a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00527c4e  8b0499               mov eax, dword ptr [ecx + ebx*4]
// 00527c51  8d0c90               lea ecx, [eax + edx*4]
// 00527c54  8b542414             mov edx, dword ptr [esp + 0x14]
// 00527c58  8b4628               mov eax, dword ptr [esi + 0x28]
// 00527c5b  56                   push esi
// 00527c5c  51                   push ecx
// 00527c5d  52                   push edx
// 00527c5e  57                   push edi
// 00527c5f  ffd0                 call eax
// 00527c61  8344242454           add dword ptr [esp + 0x24], 0x54
// 00527c66  83c301               add ebx, 1
// 00527c69  83c410               add esp, 0x10
// 00527c6c  83c604               add esi, 4
// 00527c6f  3b5f24               cmp ebx, dword ptr [edi + 0x24]
// 00527c72  7ccc                 jl 0x527c40
// 00527c74  c7455c00000000       mov dword ptr [ebp + 0x5c], 0
// 00527c7b  8bb714010000         mov esi, dword ptr [edi + 0x114]
// 00527c81  2b755c               sub esi, dword ptr [ebp + 0x5c]
// 00527c84  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00527c87  3bf0                 cmp esi, eax
// 00527c89  7602                 jbe 0x527c8d
// 00527c8b  8bf0                 mov esi, eax
// 00527c8d  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00527c91  8b03                 mov eax, dword ptr [ebx]
// 00527c93  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00527c97  2bc8                 sub ecx, eax
// 00527c99  3bf1                 cmp esi, ecx
// 00527c9b  7602                 jbe 0x527c9f
// 00527c9d  8bf1                 mov esi, ecx
// 00527c9f  8b542424             mov edx, dword ptr [esp + 0x24]
// 00527ca3  8b8fa4010000         mov ecx, dword ptr [edi + 0x1a4]
// 00527ca9  8b4904               mov ecx, dword ptr [ecx + 4]
// 00527cac  56                   push esi
// 00527cad  8d0482               lea eax, [edx + eax*4]
// 00527cb0  8b555c               mov edx, dword ptr [ebp + 0x5c]
// 00527cb3  50                   push eax
// 00527cb4  52                   push edx
// 00527cb5  8d450c               lea eax, [ebp + 0xc]
// 00527cb8  50                   push eax
// 00527cb9  57                   push edi
// 00527cba  ffd1                 call ecx
// 00527cbc  0133                 add dword ptr [ebx], esi
// 00527cbe  297560               sub dword ptr [ebp + 0x60], esi
// 00527cc1  01755c               add dword ptr [ebp + 0x5c], esi
// 00527cc4  8b6d5c               mov ebp, dword ptr [ebp + 0x5c]
// 00527cc7  83c414               add esp, 0x14
// 00527cca  3baf14010000         cmp ebp, dword ptr [edi + 0x114]
// 00527cd0  5f                   pop edi
// 00527cd1  5e                   pop esi
// 00527cd2  5d                   pop ebp
// 00527cd3  5b                   pop ebx
// 00527cd4  7c07                 jl 0x527cdd
// 00527cd6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00527cda  830001               add dword ptr [eax], 1
// 00527cdd  c3                   ret 
// library jpeg-6b/jdsample.c (function _sep_upsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c

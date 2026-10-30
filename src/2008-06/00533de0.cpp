// from server: 100% by auto
// roc 2008-06 00533de0  unit: seg_00530000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00533de0
//
// 00533de0  53                   push ebx
// 00533de1  55                   push ebp
// 00533de2  56                   push esi
// 00533de3  57                   push edi
// 00533de4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00533de8  8bafa0010000         mov ebp, dword ptr [edi + 0x1a0]
// 00533dee  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 00533df1  3b8714010000         cmp eax, dword ptr [edi + 0x114]
// 00533df7  7c50                 jl 0x533e49
// 00533df9  8b8fc4000000         mov ecx, dword ptr [edi + 0xc4]
// 00533dff  33db                 xor ebx, ebx
// 00533e01  395f24               cmp dword ptr [edi + 0x24], ebx
// 00533e04  894c2414             mov dword ptr [esp + 0x14], ecx
// 00533e08  7e38                 jle 0x533e42
// 00533e0a  8d750c               lea esi, [ebp + 0xc]
// 00533e0d  8d4900               lea ecx, [ecx]
// 00533e10  8b5658               mov edx, dword ptr [esi + 0x58]
// 00533e13  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00533e17  0faf10               imul edx, dword ptr [eax]
// 00533e1a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00533e1e  8b0499               mov eax, dword ptr [ecx + ebx*4]
// 00533e21  8d0c90               lea ecx, [eax + edx*4]
// 00533e24  8b542414             mov edx, dword ptr [esp + 0x14]
// 00533e28  8b4628               mov eax, dword ptr [esi + 0x28]
// 00533e2b  56                   push esi
// 00533e2c  51                   push ecx
// 00533e2d  52                   push edx
// 00533e2e  57                   push edi
// 00533e2f  ffd0                 call eax
// 00533e31  8344242454           add dword ptr [esp + 0x24], 0x54
// 00533e36  43                   inc ebx
// 00533e37  83c410               add esp, 0x10
// 00533e3a  83c604               add esi, 4
// 00533e3d  3b5f24               cmp ebx, dword ptr [edi + 0x24]
// 00533e40  7cce                 jl 0x533e10
// 00533e42  c7455c00000000       mov dword ptr [ebp + 0x5c], 0
// 00533e49  8bb714010000         mov esi, dword ptr [edi + 0x114]
// 00533e4f  2b755c               sub esi, dword ptr [ebp + 0x5c]
// 00533e52  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00533e55  3bf0                 cmp esi, eax
// 00533e57  7602                 jbe 0x533e5b
// 00533e59  8bf0                 mov esi, eax
// 00533e5b  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00533e5f  8b03                 mov eax, dword ptr [ebx]
// 00533e61  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00533e65  2bc8                 sub ecx, eax
// 00533e67  3bf1                 cmp esi, ecx
// 00533e69  7602                 jbe 0x533e6d
// 00533e6b  8bf1                 mov esi, ecx
// 00533e6d  8b542424             mov edx, dword ptr [esp + 0x24]
// 00533e71  8b8fa4010000         mov ecx, dword ptr [edi + 0x1a4]
// 00533e77  8b4904               mov ecx, dword ptr [ecx + 4]
// 00533e7a  56                   push esi
// 00533e7b  8d0482               lea eax, [edx + eax*4]
// 00533e7e  8b555c               mov edx, dword ptr [ebp + 0x5c]
// 00533e81  50                   push eax
// 00533e82  52                   push edx
// 00533e83  8d450c               lea eax, [ebp + 0xc]
// 00533e86  50                   push eax
// 00533e87  57                   push edi
// 00533e88  ffd1                 call ecx
// 00533e8a  0133                 add dword ptr [ebx], esi
// 00533e8c  297560               sub dword ptr [ebp + 0x60], esi
// 00533e8f  01755c               add dword ptr [ebp + 0x5c], esi
// 00533e92  8b6d5c               mov ebp, dword ptr [ebp + 0x5c]
// 00533e95  83c414               add esp, 0x14
// 00533e98  3baf14010000         cmp ebp, dword ptr [edi + 0x114]
// 00533e9e  5f                   pop edi
// 00533e9f  5e                   pop esi
// 00533ea0  5d                   pop ebp
// 00533ea1  5b                   pop ebx
// 00533ea2  7c06                 jl 0x533eaa
// 00533ea4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00533ea8  ff00                 inc dword ptr [eax]
// 00533eaa  c3                   ret 
// library jpeg-6b/jdsample.c (function _sep_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c

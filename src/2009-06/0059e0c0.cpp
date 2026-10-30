// from server: 100% by auto
// roc 2009-06 0059e0c0  unit: seg_00590000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059e0c0
//
// 0059e0c0  53                   push ebx
// 0059e0c1  55                   push ebp
// 0059e0c2  56                   push esi
// 0059e0c3  57                   push edi
// 0059e0c4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0059e0c8  8bafa0010000         mov ebp, dword ptr [edi + 0x1a0]
// 0059e0ce  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 0059e0d1  3b8714010000         cmp eax, dword ptr [edi + 0x114]
// 0059e0d7  7c50                 jl 0x59e129
// 0059e0d9  8b8fc4000000         mov ecx, dword ptr [edi + 0xc4]
// 0059e0df  33db                 xor ebx, ebx
// 0059e0e1  395f24               cmp dword ptr [edi + 0x24], ebx
// 0059e0e4  894c2414             mov dword ptr [esp + 0x14], ecx
// 0059e0e8  7e38                 jle 0x59e122
// 0059e0ea  8d750c               lea esi, [ebp + 0xc]
// 0059e0ed  8d4900               lea ecx, [ecx]
// 0059e0f0  8b5658               mov edx, dword ptr [esi + 0x58]
// 0059e0f3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059e0f7  0faf10               imul edx, dword ptr [eax]
// 0059e0fa  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059e0fe  8b0499               mov eax, dword ptr [ecx + ebx*4]
// 0059e101  8d0c90               lea ecx, [eax + edx*4]
// 0059e104  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059e108  8b4628               mov eax, dword ptr [esi + 0x28]
// 0059e10b  56                   push esi
// 0059e10c  51                   push ecx
// 0059e10d  52                   push edx
// 0059e10e  57                   push edi
// 0059e10f  ffd0                 call eax
// 0059e111  8344242454           add dword ptr [esp + 0x24], 0x54
// 0059e116  43                   inc ebx
// 0059e117  83c410               add esp, 0x10
// 0059e11a  83c604               add esi, 4
// 0059e11d  3b5f24               cmp ebx, dword ptr [edi + 0x24]
// 0059e120  7cce                 jl 0x59e0f0
// 0059e122  c7455c00000000       mov dword ptr [ebp + 0x5c], 0
// 0059e129  8bb714010000         mov esi, dword ptr [edi + 0x114]
// 0059e12f  2b755c               sub esi, dword ptr [ebp + 0x5c]
// 0059e132  8b4560               mov eax, dword ptr [ebp + 0x60]
// 0059e135  3bf0                 cmp esi, eax
// 0059e137  7602                 jbe 0x59e13b
// 0059e139  8bf0                 mov esi, eax
// 0059e13b  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0059e13f  8b03                 mov eax, dword ptr [ebx]
// 0059e141  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059e145  2bc8                 sub ecx, eax
// 0059e147  3bf1                 cmp esi, ecx
// 0059e149  7602                 jbe 0x59e14d
// 0059e14b  8bf1                 mov esi, ecx
// 0059e14d  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059e151  8b8fa4010000         mov ecx, dword ptr [edi + 0x1a4]
// 0059e157  8b4904               mov ecx, dword ptr [ecx + 4]
// 0059e15a  56                   push esi
// 0059e15b  8d0482               lea eax, [edx + eax*4]
// 0059e15e  8b555c               mov edx, dword ptr [ebp + 0x5c]
// 0059e161  50                   push eax
// 0059e162  52                   push edx
// 0059e163  8d450c               lea eax, [ebp + 0xc]
// 0059e166  50                   push eax
// 0059e167  57                   push edi
// 0059e168  ffd1                 call ecx
// 0059e16a  0133                 add dword ptr [ebx], esi
// 0059e16c  297560               sub dword ptr [ebp + 0x60], esi
// 0059e16f  01755c               add dword ptr [ebp + 0x5c], esi
// 0059e172  8b6d5c               mov ebp, dword ptr [ebp + 0x5c]
// 0059e175  83c414               add esp, 0x14
// 0059e178  3baf14010000         cmp ebp, dword ptr [edi + 0x114]
// 0059e17e  5f                   pop edi
// 0059e17f  5e                   pop esi
// 0059e180  5d                   pop ebp
// 0059e181  5b                   pop ebx
// 0059e182  7c06                 jl 0x59e18a
// 0059e184  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0059e188  ff00                 inc dword ptr [eax]
// 0059e18a  c3                   ret 
// library jpeg-6b/jdsample.c (function _sep_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c

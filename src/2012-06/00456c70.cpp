// from server: 100% by auto
// roc 2012-06 00456c70  unit: IIHAAH::?$CMap  size: 884 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00456c70
//
// 00456c70  83ec14               sub esp, 0x14
// 00456c73  53                   push ebx
// 00456c74  55                   push ebp
// 00456c75  56                   push esi
// 00456c76  8bf1                 mov esi, ecx
// 00456c78  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00456c7c  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00456c7f  f7d0                 not eax
// 00456c81  57                   push edi
// 00456c82  89742414             mov dword ptr [esp + 0x14], esi
// 00456c86  a801                 test al, 1
// 00456c88  0f847d010000         je 0x456e0b
// 00456c8e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00456c91  52                   push edx
// 00456c92  e8e7bf5200           call 0x982c7e
// 00456c97  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00456c9b  0f8439030000         je 0x456fda
// 00456ca1  33c0                 xor eax, eax
// 00456ca3  8944241c             mov dword ptr [esp + 0x1c], eax
// 00456ca7  394608               cmp dword ptr [esi + 8], eax
// 00456caa  0f862a030000         jbe 0x456fda
// 00456cb0  8b4e04               mov ecx, dword ptr [esi + 4]
// 00456cb3  8b2c81               mov ebp, dword ptr [ecx + eax*4]
// 00456cb6  896c2410             mov dword ptr [esp + 0x10], ebp
// 00456cba  85ed                 test ebp, ebp
// 00456cbc  0f8422010000         je 0x456de4
// 00456cc2  eb04                 jmp 0x456cc8
// 00456cc4  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00456cc8  8d5504               lea edx, [ebp + 4]
// 00456ccb  89542418             mov dword ptr [esp + 0x18], edx
// 00456ccf  85ed                 test ebp, ebp
// 00456cd1  0f8426010000         je 0x456dfd
// 00456cd7  8b442428             mov eax, dword ptr [esp + 0x28]
// 00456cdb  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00456cde  f7d1                 not ecx
// 00456ce0  bf01000000           mov edi, 1
// 00456ce5  f6c101               test cl, 1
// 00456ce8  7436                 je 0x456d20
// 00456cea  8d9b00000000         lea ebx, [ebx]
// 00456cf0  8bdf                 mov ebx, edi
// 00456cf2  81ffffffff1f         cmp edi, 0x1fffffff
// 00456cf8  7205                 jb 0x456cff
// 00456cfa  bbffffff1f           mov ebx, 0x1fffffff
// 00456cff  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00456d03  8d349d00000000       lea esi, [ebx*4]
// 00456d0a  56                   push esi
// 00456d0b  55                   push ebp
// 00456d0c  e855bf5200           call 0x982c66
// 00456d11  2bfb                 sub edi, ebx
// 00456d13  03ee                 add ebp, esi
// 00456d15  85ff                 test edi, edi
// 00456d17  77d7                 ja 0x456cf0
// 00456d19  eb36                 jmp 0x456d51
// 00456d1b  eb03                 jmp 0x456d20
// 00456d1d  8d4900               lea ecx, [ecx]
// 00456d20  8bdf                 mov ebx, edi
// 00456d22  81ffffffff1f         cmp edi, 0x1fffffff
// 00456d28  7205                 jb 0x456d2f
// 00456d2a  bbffffff1f           mov ebx, 0x1fffffff
// 00456d2f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00456d33  8d349d00000000       lea esi, [ebx*4]
// 00456d3a  56                   push esi
// 00456d3b  55                   push ebp
// 00456d3c  e81fbf5200           call 0x982c60
// 00456d41  3bc6                 cmp eax, esi
// 00456d43  0f85b9000000         jne 0x456e02
// 00456d49  2bfb                 sub edi, ebx
// 00456d4b  03ee                 add ebp, esi
// 00456d4d  85ff                 test edi, edi
// 00456d4f  77cf                 ja 0x456d20
// 00456d51  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00456d55  85ed                 test ebp, ebp
// 00456d57  0f84a0000000         je 0x456dfd
// 00456d5d  8b542428             mov edx, dword ptr [esp + 0x28]
// 00456d61  8b4218               mov eax, dword ptr [edx + 0x18]
// 00456d64  f7d0                 not eax
// 00456d66  bf01000000           mov edi, 1
// 00456d6b  a801                 test al, 1
// 00456d6d  7431                 je 0x456da0
// 00456d6f  90                   nop 
// 00456d70  8bdf                 mov ebx, edi
// 00456d72  81ffffffff1f         cmp edi, 0x1fffffff
// 00456d78  7205                 jb 0x456d7f
// 00456d7a  bbffffff1f           mov ebx, 0x1fffffff
// 00456d7f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00456d83  8d349d00000000       lea esi, [ebx*4]
// 00456d8a  56                   push esi
// 00456d8b  55                   push ebp
// 00456d8c  e8d5be5200           call 0x982c66
// 00456d91  2bfb                 sub edi, ebx
// 00456d93  03ee                 add ebp, esi
// 00456d95  85ff                 test edi, edi
// 00456d97  77d7                 ja 0x456d70
// 00456d99  eb32                 jmp 0x456dcd
// 00456d9b  eb03                 jmp 0x456da0
// 00456d9d  8d4900               lea ecx, [ecx]
// 00456da0  8bdf                 mov ebx, edi
// 00456da2  81ffffffff1f         cmp edi, 0x1fffffff
// 00456da8  7205                 jb 0x456daf
// 00456daa  bbffffff1f           mov ebx, 0x1fffffff
// 00456daf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00456db3  8d349d00000000       lea esi, [ebx*4]
// 00456dba  56                   push esi
// 00456dbb  55                   push ebp
// 00456dbc  e89fbe5200           call 0x982c60
// 00456dc1  3bc6                 cmp eax, esi
// 00456dc3  753d                 jne 0x456e02
// 00456dc5  2bfb                 sub edi, ebx
// 00456dc7  03ee                 add ebp, esi
// 00456dc9  85ff                 test edi, edi
// 00456dcb  77d3                 ja 0x456da0
// 00456dcd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00456dd1  8b4108               mov eax, dword ptr [ecx + 8]
// 00456dd4  89442410             mov dword ptr [esp + 0x10], eax
// 00456dd8  85c0                 test eax, eax
// 00456dda  0f85e4feffff         jne 0x456cc4
// 00456de0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00456de4  8b542414             mov edx, dword ptr [esp + 0x14]
// 00456de8  40                   inc eax
// 00456de9  8944241c             mov dword ptr [esp + 0x1c], eax
// 00456ded  3b4208               cmp eax, dword ptr [edx + 8]
// 00456df0  0f83e4010000         jae 0x456fda
// 00456df6  8bf2                 mov esi, edx
// 00456df8  e9b3feffff           jmp 0x456cb0
// 00456dfd  e8beb55200           call 0x9823c0
// 00456e02  6a00                 push 0
// 00456e04  6a03                 push 3
// 00456e06  e84fbe5200           call 0x982c5a
// 00456e0b  e868be5200           call 0x982c78
// 00456e10  89442410             mov dword ptr [esp + 0x10], eax
// 00456e14  85c0                 test eax, eax
// 00456e16  0f84be010000         je 0x456fda
// 00456e1c  8d642400             lea esp, [esp]
// 00456e20  8b442428             mov eax, dword ptr [esp + 0x28]
// 00456e24  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00456e27  bd01000000           mov ebp, 1
// 00456e2c  296c2410             sub dword ptr [esp + 0x10], ebp
// 00456e30  f7d1                 not ecx
// 00456e32  8d5c241c             lea ebx, [esp + 0x1c]
// 00456e36  f6c101               test cl, 1
// 00456e39  7435                 je 0x456e70
// 00456e3b  8bfd                 mov edi, ebp
// 00456e3d  8d4900               lea ecx, [ecx]
// 00456e40  8bef                 mov ebp, edi
// 00456e42  81ffffffff1f         cmp edi, 0x1fffffff
// 00456e48  7205                 jb 0x456e4f
// 00456e4a  bdffffff1f           mov ebp, 0x1fffffff
// 00456e4f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00456e53  8d34ad00000000       lea esi, [ebp*4]
// 00456e5a  56                   push esi
// 00456e5b  53                   push ebx
// 00456e5c  e805be5200           call 0x982c66
// 00456e61  2bfd                 sub edi, ebp
// 00456e63  03de                 add ebx, esi
// 00456e65  85ff                 test edi, edi
// 00456e67  77d7                 ja 0x456e40
// 00456e69  eb36                 jmp 0x456ea1
// 00456e6b  eb03                 jmp 0x456e70
// 00456e6d  8d4900               lea ecx, [ecx]
// 00456e70  8bfd                 mov edi, ebp
// 00456e72  81fdffffff1f         cmp ebp, 0x1fffffff
// 00456e78  7205                 jb 0x456e7f
// 00456e7a  bfffffff1f           mov edi, 0x1fffffff
// 00456e7f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00456e83  8d34bd00000000       lea esi, [edi*4]
// 00456e8a  56                   push esi
// 00456e8b  53                   push ebx
// 00456e8c  e8cfbd5200           call 0x982c60
// 00456e91  3bc6                 cmp eax, esi
// 00456e93  0f8569ffffff         jne 0x456e02
// 00456e99  2bef                 sub ebp, edi
// 00456e9b  03de                 add ebx, esi
// 00456e9d  85ed                 test ebp, ebp
// 00456e9f  77cf                 ja 0x456e70
// 00456ea1  8b542428             mov edx, dword ptr [esp + 0x28]
// 00456ea5  8b4218               mov eax, dword ptr [edx + 0x18]
// 00456ea8  f7d0                 not eax
// 00456eaa  8d5c2418             lea ebx, [esp + 0x18]
// 00456eae  a801                 test al, 1
// 00456eb0  7439                 je 0x456eeb
// 00456eb2  bf01000000           mov edi, 1
// 00456eb7  eb07                 jmp 0x456ec0
// 00456eb9  8da42400000000       lea esp, [esp]
// 00456ec0  8bef                 mov ebp, edi
// 00456ec2  81ffffffff1f         cmp edi, 0x1fffffff
// 00456ec8  7205                 jb 0x456ecf
// 00456eca  bdffffff1f           mov ebp, 0x1fffffff
// 00456ecf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00456ed3  8d34ad00000000       lea esi, [ebp*4]
// 00456eda  56                   push esi
// 00456edb  53                   push ebx
// 00456edc  e885bd5200           call 0x982c66
// 00456ee1  2bfd                 sub edi, ebp
// 00456ee3  03de                 add ebx, esi
// 00456ee5  85ff                 test edi, edi
// 00456ee7  77d7                 ja 0x456ec0
// 00456ee9  eb36                 jmp 0x456f21
// 00456eeb  bd01000000           mov ebp, 1
// 00456ef0  8bfd                 mov edi, ebp
// 00456ef2  81fdffffff1f         cmp ebp, 0x1fffffff
// 00456ef8  7205                 jb 0x456eff
// 00456efa  bfffffff1f           mov edi, 0x1fffffff
// 00456eff  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00456f03  8d34bd00000000       lea esi, [edi*4]
// 00456f0a  56                   push esi
// 00456f0b  53                   push ebx
// 00456f0c  e84fbd5200           call 0x982c60
// 00456f11  3bc6                 cmp eax, esi
// 00456f13  0f85e9feffff         jne 0x456e02
// 00456f19  2bef                 sub ebp, edi
// 00456f1b  03de                 add ebx, esi
// 00456f1d  85ed                 test ebp, ebp
// 00456f1f  77cf                 ja 0x456ef0
// 00456f21  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00456f25  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00456f29  8b6f08               mov ebp, dword ptr [edi + 8]
// 00456f2c  8bf3                 mov esi, ebx
// 00456f2e  c1ee04               shr esi, 4
// 00456f31  33d2                 xor edx, edx
// 00456f33  8bc6                 mov eax, esi
// 00456f35  f7f5                 div ebp
// 00456f37  8b4f04               mov ecx, dword ptr [edi + 4]
// 00456f3a  89542420             mov dword ptr [esp + 0x20], edx
// 00456f3e  85c9                 test ecx, ecx
// 00456f40  7422                 je 0x456f64
// 00456f42  8b0491               mov eax, dword ptr [ecx + edx*4]
// 00456f45  85c0                 test eax, eax
// 00456f47  7417                 je 0x456f60
// 00456f49  8da42400000000       lea esp, [esp]
// 00456f50  39700c               cmp dword ptr [eax + 0xc], esi
// 00456f53  7504                 jne 0x456f59
// 00456f55  3918                 cmp dword ptr [eax], ebx
// 00456f57  746f                 je 0x456fc8
// 00456f59  8b4008               mov eax, dword ptr [eax + 8]
// 00456f5c  85c0                 test eax, eax
// 00456f5e  75f0                 jne 0x456f50
// 00456f60  85c9                 test ecx, ecx
// 00456f62  753c                 jne 0x456fa0
// 00456f64  33c9                 xor ecx, ecx
// 00456f66  8bc5                 mov eax, ebp
// 00456f68  ba04000000           mov edx, 4
// 00456f6d  f7e2                 mul edx
// 00456f6f  0f90c1               seto cl
// 00456f72  f7d9                 neg ecx
// 00456f74  0bc8                 or ecx, eax
// 00456f76  51                   push ecx
// 00456f77  e874b45200           call 0x9823f0
// 00456f7c  83c404               add esp, 4
// 00456f7f  894704               mov dword ptr [edi + 4], eax
// 00456f82  85c0                 test eax, eax
// 00456f84  0f8473feffff         je 0x456dfd
// 00456f8a  8d0cad00000000       lea ecx, [ebp*4]
// 00456f91  51                   push ecx
// 00456f92  6a00                 push 0
// 00456f94  50                   push eax
// 00456f95  e8dac35200           call 0x983374
// 00456f9a  83c40c               add esp, 0xc
// 00456f9d  896f08               mov dword ptr [edi + 8], ebp
// 00456fa0  837f0400             cmp dword ptr [edi + 4], 0
// 00456fa4  0f8453feffff         je 0x456dfd
// 00456faa  53                   push ebx
// 00456fab  8bcf                 mov ecx, edi
// 00456fad  e8aedc5800           call 0x9e4c60
// 00456fb2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00456fb6  89700c               mov dword ptr [eax + 0xc], esi
// 00456fb9  8b5704               mov edx, dword ptr [edi + 4]
// 00456fbc  8b148a               mov edx, dword ptr [edx + ecx*4]
// 00456fbf  895008               mov dword ptr [eax + 8], edx
// 00456fc2  8b5704               mov edx, dword ptr [edi + 4]
// 00456fc5  89048a               mov dword ptr [edx + ecx*4], eax
// 00456fc8  837c241000           cmp dword ptr [esp + 0x10], 0
// 00456fcd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00456fd1  894804               mov dword ptr [eax + 4], ecx
// 00456fd4  0f8546feffff         jne 0x456e20
// 00456fda  5f                   pop edi
// 00456fdb  5e                   pop esi
// 00456fdc  5d                   pop ebp
// 00456fdd  5b                   pop ebx
// 00456fde  83c414               add esp, 0x14
// 00456fe1  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarTheme.cpp (function ?Serialize@?$CMap@IIIAAI@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarTheme.cpp

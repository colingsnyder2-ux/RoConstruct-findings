// roc 2010-06 007b28a0  unit: CXTPPaintManager  size: 873 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b28a0
//
// 007b28a0  83ec64               sub esp, 0x64
// 007b28a3  53                   push ebx
// 007b28a4  56                   push esi
// 007b28a5  57                   push edi
// 007b28a6  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 007b28aa  8bf1                 mov esi, ecx
// 007b28ac  57                   push edi
// 007b28ad  8d4c2444             lea ecx, [esp + 0x44]
// 007b28b1  e85aca0400           call 0x7ff310
// 007b28b6  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007b28ba  2b442444             sub eax, dword ptr [esp + 0x44]
// 007b28be  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 007b28c4  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 007b28c8  2b5c2440             sub ebx, dword ptr [esp + 0x40]
// 007b28cc  89442414             mov dword ptr [esp + 0x14], eax
// 007b28d0  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 007b28d6  8bb7fc000000         mov esi, dword ptr [edi + 0xfc]
// 007b28dc  8944242c             mov dword ptr [esp + 0x2c], eax
// 007b28e0  33c0                 xor eax, eax
// 007b28e2  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007b28e6  89742474             mov dword ptr [esp + 0x74], esi
// 007b28ea  85c9                 test ecx, ecx
// 007b28ec  0f8e09030000         jle 0x7b2bfb
// 007b28f2  db44241c             fild dword ptr [esp + 0x1c]
// 007b28f6  55                   push ebp
// 007b28f7  dd5c243c             fstp qword ptr [esp + 0x3c]
// 007b28fb  eb03                 jmp 0x7b2900
// 007b28fd  8d4900               lea ecx, [ecx]
// 007b2900  40                   inc eax
// 007b2901  89442424             mov dword ptr [esp + 0x24], eax
// 007b2905  db442424             fild dword ptr [esp + 0x24]
// 007b2909  33ff                 xor edi, edi
// 007b290b  897c2414             mov dword ptr [esp + 0x14], edi
// 007b290f  897c2410             mov dword ptr [esp + 0x10], edi
// 007b2913  dc74243c             fdiv qword ptr [esp + 0x3c]
// 007b2917  dd5c2434             fstp qword ptr [esp + 0x34]
// 007b291b  39bc2484000000       cmp dword ptr [esp + 0x84], edi
// 007b2922  0f8457010000         je 0x7b2a7f
// 007b2928  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007b292b  33ed                 xor ebp, ebp
// 007b292d  3bc7                 cmp eax, edi
// 007b292f  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007b2933  0f8eff000000         jle 0x7b2a38
// 007b2939  8da42400000000       lea esp, [esp]
// 007b2940  85ed                 test ebp, ebp
// 007b2942  7c15                 jl 0x7b2959
// 007b2944  3be8                 cmp ebp, eax
// 007b2946  7d11                 jge 0x7b2959
// 007b2948  3b6e2c               cmp ebp, dword ptr [esi + 0x2c]
// 007b294b  0f8db3020000         jge 0x7b2c04
// 007b2951  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 007b2954  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 007b2957  eb02                 jmp 0x7b295b
// 007b2959  33f6                 xor esi, esi
// 007b295b  8b16                 mov edx, dword ptr [esi]
// 007b295d  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 007b2963  6a00                 push 0
// 007b2965  8bce                 mov ecx, esi
// 007b2967  ffd0                 call eax
// 007b2969  85c0                 test eax, eax
// 007b296b  0f84a4000000         je 0x7b2a15
// 007b2971  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 007b2977  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b297b  89442428             mov dword ptr [esp + 0x28], eax
// 007b297f  3bc1                 cmp eax, ecx
// 007b2981  0f848a000000         je 0x7b2a11
// 007b2987  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 007b298d  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 007b2993  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 007b2999  89542454             mov dword ptr [esp + 0x54], edx
// 007b299d  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 007b29a3  896c2458             mov dword ptr [esp + 0x58], ebp
// 007b29a7  8944245c             mov dword ptr [esp + 0x5c], eax
// 007b29ab  89542460             mov dword ptr [esp + 0x60], edx
// 007b29af  85c9                 test ecx, ecx
// 007b29b1  7406                 je 0x7b29b9
// 007b29b3  dd442434             fld qword ptr [esp + 0x34]
// 007b29b7  eb02                 jmp 0x7b29bb
// 007b29b9  d9e8                 fld1 
// 007b29bb  2bef                 sub ebp, edi
// 007b29bd  896c2410             mov dword ptr [esp + 0x10], ebp
// 007b29c1  da4c2410             fimul dword ptr [esp + 0x10]
// 007b29c5  e86664ffff           call 0x7a8e30
// 007b29ca  8bf0                 mov esi, eax
// 007b29cc  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 007b29d3  85c0                 test eax, eax
// 007b29d5  7403                 je 0x7b29da
// 007b29d7  8b4004               mov eax, dword ptr [eax + 4]
// 007b29da  682000cc00           push 0xcc0020
// 007b29df  55                   push ebp
// 007b29e0  53                   push ebx
// 007b29e1  57                   push edi
// 007b29e2  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007b29e6  6a00                 push 0
// 007b29e8  50                   push eax
// 007b29e9  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 007b29f0  8b4804               mov ecx, dword ptr [eax + 4]
// 007b29f3  56                   push esi
// 007b29f4  53                   push ebx
// 007b29f5  57                   push edi
// 007b29f6  6a00                 push 0
// 007b29f8  51                   push ecx
// 007b29f9  ff1564a19e00         call dword ptr [0x9ea164]
// 007b29ff  8b442428             mov eax, dword ptr [esp + 0x28]
// 007b2a03  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007b2a07  03fe                 add edi, esi
// 007b2a09  897c2414             mov dword ptr [esp + 0x14], edi
// 007b2a0d  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 007b2a11  89442410             mov dword ptr [esp + 0x10], eax
// 007b2a15  8b542478             mov edx, dword ptr [esp + 0x78]
// 007b2a19  8b422c               mov eax, dword ptr [edx + 0x2c]
// 007b2a1c  45                   inc ebp
// 007b2a1d  3be8                 cmp ebp, eax
// 007b2a1f  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007b2a23  8bf2                 mov esi, edx
// 007b2a25  0f8c15ffffff         jl 0x7b2940
// 007b2a2b  837c241000           cmp dword ptr [esp + 0x10], 0
// 007b2a30  7406                 je 0x7b2a38
// 007b2a32  dd442434             fld qword ptr [esp + 0x34]
// 007b2a36  eb02                 jmp 0x7b2a3a
// 007b2a38  d9e8                 fld1 
// 007b2a3a  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007b2a3e  2bef                 sub ebp, edi
// 007b2a40  896c2410             mov dword ptr [esp + 0x10], ebp
// 007b2a44  da4c2410             fimul dword ptr [esp + 0x10]
// 007b2a48  e8e363ffff           call 0x7a8e30
// 007b2a4d  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 007b2a54  85c9                 test ecx, ecx
// 007b2a56  7403                 je 0x7b2a5b
// 007b2a58  8b4904               mov ecx, dword ptr [ecx + 4]
// 007b2a5b  682000cc00           push 0xcc0020
// 007b2a60  55                   push ebp
// 007b2a61  53                   push ebx
// 007b2a62  57                   push edi
// 007b2a63  6a00                 push 0
// 007b2a65  51                   push ecx
// 007b2a66  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007b2a6d  8b5104               mov edx, dword ptr [ecx + 4]
// 007b2a70  50                   push eax
// 007b2a71  8b442430             mov eax, dword ptr [esp + 0x30]
// 007b2a75  53                   push ebx
// 007b2a76  50                   push eax
// 007b2a77  6a00                 push 0
// 007b2a79  52                   push edx
// 007b2a7a  e957010000           jmp 0x7b2bd6
// 007b2a7f  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 007b2a82  83ed01               sub ebp, 1
// 007b2a85  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007b2a89  0f88fe000000         js 0x7b2b8d
// 007b2a8f  90                   nop 
// 007b2a90  85ed                 test ebp, ebp
// 007b2a92  7c0d                 jl 0x7b2aa1
// 007b2a94  3b6e2c               cmp ebp, dword ptr [esi + 0x2c]
// 007b2a97  7d08                 jge 0x7b2aa1
// 007b2a99  8b4628               mov eax, dword ptr [esi + 0x28]
// 007b2a9c  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 007b2a9f  eb02                 jmp 0x7b2aa3
// 007b2aa1  33f6                 xor esi, esi
// 007b2aa3  8b16                 mov edx, dword ptr [esi]
// 007b2aa5  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 007b2aab  6a00                 push 0
// 007b2aad  8bce                 mov ecx, esi
// 007b2aaf  ffd0                 call eax
// 007b2ab1  85c0                 test eax, eax
// 007b2ab3  0f84b6000000         je 0x7b2b6f
// 007b2ab9  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 007b2abf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b2ac3  8944242c             mov dword ptr [esp + 0x2c], eax
// 007b2ac7  3bc1                 cmp eax, ecx
// 007b2ac9  0f849c000000         je 0x7b2b6b
// 007b2acf  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 007b2ad5  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 007b2adb  89542464             mov dword ptr [esp + 0x64], edx
// 007b2adf  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 007b2ae5  89442468             mov dword ptr [esp + 0x68], eax
// 007b2ae9  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 007b2aef  8b742418             mov esi, dword ptr [esp + 0x18]
// 007b2af3  2bf0                 sub esi, eax
// 007b2af5  8954246c             mov dword ptr [esp + 0x6c], edx
// 007b2af9  85c9                 test ecx, ecx
// 007b2afb  7406                 je 0x7b2b03
// 007b2afd  dd442434             fld qword ptr [esp + 0x34]
// 007b2b01  eb02                 jmp 0x7b2b05
// 007b2b03  d9e8                 fld1 
// 007b2b05  8bee                 mov ebp, esi
// 007b2b07  2bef                 sub ebp, edi
// 007b2b09  896c2428             mov dword ptr [esp + 0x28], ebp
// 007b2b0d  da4c2428             fimul dword ptr [esp + 0x28]
// 007b2b11  e81a63ffff           call 0x7a8e30
// 007b2b16  8bf8                 mov edi, eax
// 007b2b18  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 007b2b1f  85c0                 test eax, eax
// 007b2b21  7504                 jne 0x7b2b27
// 007b2b23  33c9                 xor ecx, ecx
// 007b2b25  eb03                 jmp 0x7b2b2a
// 007b2b27  8b4804               mov ecx, dword ptr [eax + 4]
// 007b2b2a  8b442418             mov eax, dword ptr [esp + 0x18]
// 007b2b2e  682000cc00           push 0xcc0020
// 007b2b33  55                   push ebp
// 007b2b34  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007b2b38  53                   push ebx
// 007b2b39  8bd0                 mov edx, eax
// 007b2b3b  2bd6                 sub edx, esi
// 007b2b3d  52                   push edx
// 007b2b3e  6a00                 push 0
// 007b2b40  51                   push ecx
// 007b2b41  57                   push edi
// 007b2b42  2bc7                 sub eax, edi
// 007b2b44  53                   push ebx
// 007b2b45  2bc5                 sub eax, ebp
// 007b2b47  50                   push eax
// 007b2b48  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 007b2b4f  8b4804               mov ecx, dword ptr [eax + 4]
// 007b2b52  6a00                 push 0
// 007b2b54  51                   push ecx
// 007b2b55  ff1564a19e00         call dword ptr [0x9ea164]
// 007b2b5b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007b2b5f  03ef                 add ebp, edi
// 007b2b61  896c2414             mov dword ptr [esp + 0x14], ebp
// 007b2b65  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007b2b69  8bfe                 mov edi, esi
// 007b2b6b  89442410             mov dword ptr [esp + 0x10], eax
// 007b2b6f  8b742478             mov esi, dword ptr [esp + 0x78]
// 007b2b73  83ed01               sub ebp, 1
// 007b2b76  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007b2b7a  0f8910ffffff         jns 0x7b2a90
// 007b2b80  837c241000           cmp dword ptr [esp + 0x10], 0
// 007b2b85  7406                 je 0x7b2b8d
// 007b2b87  dd442434             fld qword ptr [esp + 0x34]
// 007b2b8b  eb02                 jmp 0x7b2b8f
// 007b2b8d  d9e8                 fld1 
// 007b2b8f  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007b2b93  2bef                 sub ebp, edi
// 007b2b95  896c2410             mov dword ptr [esp + 0x10], ebp
// 007b2b99  da4c2410             fimul dword ptr [esp + 0x10]
// 007b2b9d  e88e62ffff           call 0x7a8e30
// 007b2ba2  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 007b2ba9  85c9                 test ecx, ecx
// 007b2bab  7403                 je 0x7b2bb0
// 007b2bad  8b4904               mov ecx, dword ptr [ecx + 4]
// 007b2bb0  8b542418             mov edx, dword ptr [esp + 0x18]
// 007b2bb4  682000cc00           push 0xcc0020
// 007b2bb9  55                   push ebp
// 007b2bba  53                   push ebx
// 007b2bbb  6a00                 push 0
// 007b2bbd  6a00                 push 0
// 007b2bbf  51                   push ecx
// 007b2bc0  50                   push eax
// 007b2bc1  2bd0                 sub edx, eax
// 007b2bc3  2b542430             sub edx, dword ptr [esp + 0x30]
// 007b2bc7  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 007b2bce  8b4804               mov ecx, dword ptr [eax + 4]
// 007b2bd1  53                   push ebx
// 007b2bd2  52                   push edx
// 007b2bd3  6a00                 push 0
// 007b2bd5  51                   push ecx
// 007b2bd6  ff1564a19e00         call dword ptr [0x9ea164]
// 007b2bdc  8b442430             mov eax, dword ptr [esp + 0x30]
// 007b2be0  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007b2be4  99                   cdq 
// 007b2be5  f7ff                 idiv edi
// 007b2be7  50                   push eax
// 007b2be8  ff1588a29e00         call dword ptr [0x9ea288]
// 007b2bee  8b442424             mov eax, dword ptr [esp + 0x24]
// 007b2bf2  3bc7                 cmp eax, edi
// 007b2bf4  0f8c06fdffff         jl 0x7b2900
// 007b2bfa  5d                   pop ebp
// 007b2bfb  5f                   pop edi
// 007b2bfc  5e                   pop esi
// 007b2bfd  5b                   pop ebx
// 007b2bfe  83c464               add esp, 0x64
// 007b2c01  c21000               ret 0x10
// 007b2c04  e84350ffff           call 0x7a7c4c
// copied from an identical function in another client (function ?AnimateExpanding@CXTPPaintManager@@UAEXPAVCXTPCommandBar@@PAVCDC@@1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp
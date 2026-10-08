// roc 2007-08 00591ca0  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 559 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00591ca0
//
// 00591ca0  55                   push ebp
// 00591ca1  8bec                 mov ebp, esp
// 00591ca3  83e4f8               and esp, 0xfffffff8
// 00591ca6  d9ee                 fldz 
// 00591ca8  83ec14               sub esp, 0x14
// 00591cab  33c0                 xor eax, eax
// 00591cad  3905344c8c00         cmp dword ptr [0x8c4c34], eax
// 00591cb3  53                   push ebx
// 00591cb4  56                   push esi
// 00591cb5  8b7508               mov esi, dword ptr [ebp + 8]
// 00591cb8  57                   push edi
// 00591cb9  dd1e                 fstp qword ptr [esi]
// 00591cbb  8bf9                 mov edi, ecx
// 00591cbd  894608               mov dword ptr [esi + 8], eax
// 00591cc0  89460c               mov dword ptr [esi + 0xc], eax
// 00591cc3  894610               mov dword ptr [esi + 0x10], eax
// 00591cc6  894614               mov dword ptr [esi + 0x14], eax
// 00591cc9  894618               mov dword ptr [esi + 0x18], eax
// 00591ccc  0f84f2010000         je 0x591ec4
// 00591cd2  e819e2f6ff           call 0x4ffef0
// 00591cd7  dca710000200         fsub qword ptr [edi + 0x20010]
// 00591cdd  8b4f08               mov ecx, dword ptr [edi + 8]
// 00591ce0  d97c240c             fnstcw word ptr [esp + 0xc]
// 00591ce4  dc6d0c               fsubr qword ptr [ebp + 0xc]
// 00591ce7  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 00591cec  0d000c0000           or eax, 0xc00
// 00591cf1  89442410             mov dword ptr [esp + 0x10], eax
// 00591cf5  81c1ff0f0000         add ecx, 0xfff
// 00591cfb  d9c0                 fld st(0)
// 00591cfd  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00591d01  dc37                 fdiv qword ptr [edi]
// 00591d03  c7442418fe0f0000     mov dword ptr [esp + 0x18], 0xffe
// 00591d0b  d96c2410             fldcw word ptr [esp + 0x10]
// 00591d0f  df7c2410             fistp qword ptr [esp + 0x10]
// 00591d13  8b442410             mov eax, dword ptr [esp + 0x10]
// 00591d17  89442410             mov dword ptr [esp + 0x10], eax
// 00591d1b  3dfe0f0000           cmp eax, 0xffe
// 00591d20  8d442418             lea eax, [esp + 0x18]
// 00591d24  d96c240c             fldcw word ptr [esp + 0xc]
// 00591d28  7704                 ja 0x591d2e
// 00591d2a  8d442410             lea eax, [esp + 0x10]
// 00591d2e  8b18                 mov ebx, dword ptr [eax]
// 00591d30  33d2                 xor edx, edx
// 00591d32  83fb04               cmp ebx, 4
// 00591d35  895c2418             mov dword ptr [esp + 0x18], ebx
// 00591d39  0f8c2b010000         jl 0x591e6a
// 00591d3f  83c1fe               add ecx, -2
// 00591d42  dc16                 fcom qword ptr [esi]
// 00591d44  dfe0                 fnstsw ax
// 00591d46  f6c441               test ah, 0x41
// 00591d49  0f8b73010000         jnp 0x591ec2
// 00591d4f  8d4102               lea eax, [ecx + 2]
// 00591d52  25ff0f0000           and eax, 0xfff
// 00591d57  c1e005               shl eax, 5
// 00591d5a  8b5c3818             mov ebx, dword ptr [eax + edi + 0x18]
// 00591d5e  dd443810             fld qword ptr [eax + edi + 0x10]
// 00591d62  015e08               add dword ptr [esi + 8], ebx
// 00591d65  dc06                 fadd qword ptr [esi]
// 00591d67  8b5c381c             mov ebx, dword ptr [eax + edi + 0x1c]
// 00591d6b  8d443810             lea eax, [eax + edi + 0x10]
// 00591d6f  115e0c               adc dword ptr [esi + 0xc], ebx
// 00591d72  dd16                 fst qword ptr [esi]
// 00591d74  8b5810               mov ebx, dword ptr [eax + 0x10]
// 00591d77  d8d9                 fcomp st(1)
// 00591d79  015e10               add dword ptr [esi + 0x10], ebx
// 00591d7c  8b5814               mov ebx, dword ptr [eax + 0x14]
// 00591d7f  8b4018               mov eax, dword ptr [eax + 0x18]
// 00591d82  115e14               adc dword ptr [esi + 0x14], ebx
// 00591d85  014618               add dword ptr [esi + 0x18], eax
// 00591d88  dfe0                 fnstsw ax
// 00591d8a  f6c401               test ah, 1
// 00591d8d  0f842f010000         je 0x591ec2
// 00591d93  8d4101               lea eax, [ecx + 1]
// 00591d96  25ff0f0000           and eax, 0xfff
// 00591d9b  c1e005               shl eax, 5
// 00591d9e  8b5c3818             mov ebx, dword ptr [eax + edi + 0x18]
// 00591da2  dd443810             fld qword ptr [eax + edi + 0x10]
// 00591da6  015e08               add dword ptr [esi + 8], ebx
// 00591da9  dc06                 fadd qword ptr [esi]
// 00591dab  8b5c381c             mov ebx, dword ptr [eax + edi + 0x1c]
// 00591daf  8d443810             lea eax, [eax + edi + 0x10]
// 00591db3  115e0c               adc dword ptr [esi + 0xc], ebx
// 00591db6  dd16                 fst qword ptr [esi]
// 00591db8  8b5810               mov ebx, dword ptr [eax + 0x10]
// 00591dbb  d8d9                 fcomp st(1)
// 00591dbd  015e10               add dword ptr [esi + 0x10], ebx
// 00591dc0  8b5814               mov ebx, dword ptr [eax + 0x14]
// 00591dc3  8b4018               mov eax, dword ptr [eax + 0x18]
// 00591dc6  115e14               adc dword ptr [esi + 0x14], ebx
// 00591dc9  014618               add dword ptr [esi + 0x18], eax
// 00591dcc  dfe0                 fnstsw ax
// 00591dce  f6c401               test ah, 1
// 00591dd1  0f84eb000000         je 0x591ec2
// 00591dd7  8bc1                 mov eax, ecx
// 00591dd9  25ff0f0000           and eax, 0xfff
// 00591dde  c1e005               shl eax, 5
// 00591de1  8b5c3818             mov ebx, dword ptr [eax + edi + 0x18]
// 00591de5  dd443810             fld qword ptr [eax + edi + 0x10]
// 00591de9  015e08               add dword ptr [esi + 8], ebx
// 00591dec  dc06                 fadd qword ptr [esi]
// 00591dee  8b5c381c             mov ebx, dword ptr [eax + edi + 0x1c]
// 00591df2  8d443810             lea eax, [eax + edi + 0x10]
// 00591df6  115e0c               adc dword ptr [esi + 0xc], ebx
// 00591df9  dd16                 fst qword ptr [esi]
// 00591dfb  8b5810               mov ebx, dword ptr [eax + 0x10]
// 00591dfe  d8d9                 fcomp st(1)
// 00591e00  015e10               add dword ptr [esi + 0x10], ebx
// 00591e03  8b5814               mov ebx, dword ptr [eax + 0x14]
// 00591e06  8b4018               mov eax, dword ptr [eax + 0x18]
// 00591e09  115e14               adc dword ptr [esi + 0x14], ebx
// 00591e0c  014618               add dword ptr [esi + 0x18], eax
// 00591e0f  dfe0                 fnstsw ax
// 00591e11  f6c401               test ah, 1
// 00591e14  0f84a8000000         je 0x591ec2
// 00591e1a  8d41ff               lea eax, [ecx - 1]
// 00591e1d  25ff0f0000           and eax, 0xfff
// 00591e22  c1e005               shl eax, 5
// 00591e25  8b5c3818             mov ebx, dword ptr [eax + edi + 0x18]
// 00591e29  dd443810             fld qword ptr [eax + edi + 0x10]
// 00591e2d  015e08               add dword ptr [esi + 8], ebx
// 00591e30  dc06                 fadd qword ptr [esi]
// 00591e32  8b5c381c             mov ebx, dword ptr [eax + edi + 0x1c]
// 00591e36  8d443810             lea eax, [eax + edi + 0x10]
// 00591e3a  115e0c               adc dword ptr [esi + 0xc], ebx
// 00591e3d  dd1e                 fstp qword ptr [esi]
// 00591e3f  8b5810               mov ebx, dword ptr [eax + 0x10]
// 00591e42  015e10               add dword ptr [esi + 0x10], ebx
// 00591e45  8b5814               mov ebx, dword ptr [eax + 0x14]
// 00591e48  8b4018               mov eax, dword ptr [eax + 0x18]
// 00591e4b  115e14               adc dword ptr [esi + 0x14], ebx
// 00591e4e  014618               add dword ptr [esi + 0x18], eax
// 00591e51  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00591e55  83c204               add edx, 4
// 00591e58  8d43fd               lea eax, [ebx - 3]
// 00591e5b  83e904               sub ecx, 4
// 00591e5e  3bd0                 cmp edx, eax
// 00591e60  0f82dcfeffff         jb 0x591d42
// 00591e66  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00591e6a  3bd3                 cmp edx, ebx
// 00591e6c  7354                 jae 0x591ec2
// 00591e6e  2bca                 sub ecx, edx
// 00591e70  894c240c             mov dword ptr [esp + 0xc], ecx
// 00591e74  dc16                 fcom qword ptr [esi]
// 00591e76  dfe0                 fnstsw ax
// 00591e78  f6c441               test ah, 0x41
// 00591e7b  7b45                 jnp 0x591ec2
// 00591e7d  81e1ff0f0000         and ecx, 0xfff
// 00591e83  c1e105               shl ecx, 5
// 00591e86  dd443910             fld qword ptr [ecx + edi + 0x10]
// 00591e8a  8d443910             lea eax, [ecx + edi + 0x10]
// 00591e8e  8b4808               mov ecx, dword ptr [eax + 8]
// 00591e91  dc06                 fadd qword ptr [esi]
// 00591e93  014e08               add dword ptr [esi + 8], ecx
// 00591e96  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00591e99  dd1e                 fstp qword ptr [esi]
// 00591e9b  114e0c               adc dword ptr [esi + 0xc], ecx
// 00591e9e  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00591ea1  014e10               add dword ptr [esi + 0x10], ecx
// 00591ea4  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00591ea7  8b4018               mov eax, dword ptr [eax + 0x18]
// 00591eaa  114e14               adc dword ptr [esi + 0x14], ecx
// 00591ead  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00591eb1  014618               add dword ptr [esi + 0x18], eax
// 00591eb4  83c201               add edx, 1
// 00591eb7  83e901               sub ecx, 1
// 00591eba  3bd3                 cmp edx, ebx
// 00591ebc  894c240c             mov dword ptr [esp + 0xc], ecx
// 00591ec0  72b2                 jb 0x591e74
// 00591ec2  ddd8                 fstp st(0)
// 00591ec4  5f                   pop edi
// 00591ec5  8bc6                 mov eax, esi
// 00591ec7  5e                   pop esi
// 00591ec8  5b                   pop ebx
// 00591ec9  8be5                 mov esp, ebp
// 00591ecb  5d                   pop ebp
// 00591ecc  c20c00               ret 0xc
// library rbxgs/util\Profiling.cpp (function ?getData@Profiler@Profiling@RBX@@QBE?AUBucket@23@N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Profiling.cpp

// from server: 100% by tester
// roc 2007-03 00480f20  unit: seg_00480000  size: 405 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480f20
//
// 00480f20  6aff                 push -1
// 00480f22  6839807400           push 0x748039
// 00480f27  64a100000000         mov eax, dword ptr fs:[0]
// 00480f2d  50                   push eax
// 00480f2e  83ec08               sub esp, 8
// 00480f31  53                   push ebx
// 00480f32  55                   push ebp
// 00480f33  56                   push esi
// 00480f34  57                   push edi
// 00480f35  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00480f3a  33c4                 xor eax, esp
// 00480f3c  50                   push eax
// 00480f3d  8d44241c             lea eax, [esp + 0x1c]
// 00480f41  64a300000000         mov dword ptr fs:[0], eax
// 00480f47  8bf1                 mov esi, ecx
// 00480f49  89742418             mov dword ptr [esp + 0x18], esi
// 00480f4d  8b4604               mov eax, dword ptr [esi + 4]
// 00480f50  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00480f54  3be8                 cmp ebp, eax
// 00480f56  89442414             mov dword ptr [esp + 0x14], eax
// 00480f5a  896e04               mov dword ptr [esi + 4], ebp
// 00480f5d  7d2a                 jge 0x480f89
// 00480f5f  8d7c6d00             lea edi, [ebp + ebp*2]
// 00480f63  8bd8                 mov ebx, eax
// 00480f65  c1e704               shl edi, 4
// 00480f68  2bdd                 sub ebx, ebp
// 00480f6a  8d9b00000000         lea ebx, [ebx]
// 00480f70  8b06                 mov eax, dword ptr [esi]
// 00480f72  03c7                 add eax, edi
// 00480f74  8d4808               lea ecx, [eax + 8]
// 00480f77  ff158ce77700         call dword ptr [0x77e78c]
// 00480f7d  83c730               add edi, 0x30
// 00480f80  83eb01               sub ebx, 1
// 00480f83  75eb                 jne 0x480f70
// 00480f85  8b442414             mov eax, dword ptr [esp + 0x14]
// 00480f89  f60588828b0001       test byte ptr [0x8b8288], 1
// 00480f90  7514                 jne 0x480fa6
// 00480f92  830d88828b0001       or dword ptr [0x8b8288], 1
// 00480f99  bb0a000000           mov ebx, 0xa
// 00480f9e  891d84828b00         mov dword ptr [0x8b8284], ebx
// 00480fa4  eb06                 jmp 0x480fac
// 00480fa6  8b1d84828b00         mov ebx, dword ptr [0x8b8284]
// 00480fac  8b7e04               mov edi, dword ptr [esi + 4]
// 00480faf  8b4e08               mov ecx, dword ptr [esi + 8]
// 00480fb2  3bf9                 cmp edi, ecx
// 00480fb4  7e7a                 jle 0x481030
// 00480fb6  85c9                 test ecx, ecx
// 00480fb8  7509                 jne 0x480fc3
// 00480fba  896e08               mov dword ptr [esi + 8], ebp
// 00480fbd  50                   push eax
// 00480fbe  e995000000           jmp 0x481058
// 00480fc3  3bfb                 cmp edi, ebx
// 00480fc5  7d09                 jge 0x480fd0
// 00480fc7  895e08               mov dword ptr [esi + 8], ebx
// 00480fca  50                   push eax
// 00480fcb  e988000000           jmp 0x481058
// 00480fd0  d905104c7900         fld dword ptr [0x794c10]
// 00480fd6  8bc1                 mov eax, ecx
// 00480fd8  8d0440               lea eax, [eax + eax*2]
// 00480fdb  d95c2430             fstp dword ptr [esp + 0x30]
// 00480fdf  c1e004               shl eax, 4
// 00480fe2  3d801a0600           cmp eax, 0x61a80
// 00480fe7  7608                 jbe 0x480ff1
// 00480fe9  d9050c4c7900         fld dword ptr [0x794c0c]
// 00480fef  eb0d                 jmp 0x480ffe
// 00480ff1  3d00fa0000           cmp eax, 0xfa00
// 00480ff6  760a                 jbe 0x481002
// 00480ff8  d905084c7900         fld dword ptr [0x794c08]
// 00480ffe  d95c2430             fstp dword ptr [esp + 0x30]
// 00481002  8be9                 mov ebp, ecx
// 00481004  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00481008  db44242c             fild dword ptr [esp + 0x2c]
// 0048100c  d84c2430             fmul dword ptr [esp + 0x30]
// 00481010  e8ebe11900           call 0x61f200
// 00481015  2bc5                 sub eax, ebp
// 00481017  03c7                 add eax, edi
// 00481019  894608               mov dword ptr [esi + 8], eax
// 0048101c  8b0d84828b00         mov ecx, dword ptr [0x8b8284]
// 00481022  3bc1                 cmp eax, ecx
// 00481024  8b442414             mov eax, dword ptr [esp + 0x14]
// 00481028  7d03                 jge 0x48102d
// 0048102a  894e08               mov dword ptr [esi + 8], ecx
// 0048102d  50                   push eax
// 0048102e  eb28                 jmp 0x481058
// 00481030  b856555555           mov eax, 0x55555556
// 00481035  f7e9                 imul ecx
// 00481037  8bc2                 mov eax, edx
// 00481039  c1e81f               shr eax, 0x1f
// 0048103c  03c2                 add eax, edx
// 0048103e  3bf8                 cmp edi, eax
// 00481040  7f1d                 jg 0x48105f
// 00481042  807c243000           cmp byte ptr [esp + 0x30], 0
// 00481047  7416                 je 0x48105f
// 00481049  3bfb                 cmp edi, ebx
// 0048104b  7e12                 jle 0x48105f
// 0048104d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00481051  3bf8                 cmp edi, eax
// 00481053  7c02                 jl 0x481057
// 00481055  8bf8                 mov edi, eax
// 00481057  57                   push edi
// 00481058  8bce                 mov ecx, esi
// 0048105a  e871fdffff           call 0x480dd0
// 0048105f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00481063  3b7e04               cmp edi, dword ptr [esi + 4]
// 00481066  897c2430             mov dword ptr [esp + 0x30], edi
// 0048106a  7d33                 jge 0x48109f
// 0048106c  83cbff               or ebx, 0xffffffff
// 0048106f  90                   nop 
// 00481070  8d047f               lea eax, [edi + edi*2]
// 00481073  c1e004               shl eax, 4
// 00481076  0306                 add eax, dword ptr [esi]
// 00481078  8944242c             mov dword ptr [esp + 0x2c], eax
// 0048107c  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00481084  7409                 je 0x48108f
// 00481086  8d4808               lea ecx, [eax + 8]
// 00481089  ff1584e77700         call dword ptr [0x77e784]
// 0048108f  83c701               add edi, 1
// 00481092  3b7e04               cmp edi, dword ptr [esi + 4]
// 00481095  895c2424             mov dword ptr [esp + 0x24], ebx
// 00481099  897c2430             mov dword ptr [esp + 0x30], edi
// 0048109d  7cd1                 jl 0x481070
// 0048109f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004810a3  64890d00000000       mov dword ptr fs:[0], ecx
// 004810aa  59                   pop ecx
// 004810ab  5f                   pop edi
// 004810ac  5e                   pop esi
// 004810ad  5d                   pop ebp
// 004810ae  5b                   pop ebx
// 004810af  83c414               add esp, 0x14
// 004810b2  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?resize@?$Array@VUniformDeclaration@VertexAndPixelShader@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp

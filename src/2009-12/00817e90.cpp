// roc 2009-12 00817e90  unit: CXTPCommandBarsOptions  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00817e90
//
// 00817e90  6aff                 push -1
// 00817e92  6840a79500           push 0x95a740
// 00817e97  64a100000000         mov eax, dword ptr fs:[0]
// 00817e9d  50                   push eax
// 00817e9e  83ec28               sub esp, 0x28
// 00817ea1  a10052b600           mov eax, dword ptr [0xb65200]
// 00817ea6  33c4                 xor eax, esp
// 00817ea8  89442424             mov dword ptr [esp + 0x24], eax
// 00817eac  53                   push ebx
// 00817ead  55                   push ebp
// 00817eae  56                   push esi
// 00817eaf  57                   push edi
// 00817eb0  a10052b600           mov eax, dword ptr [0xb65200]
// 00817eb5  33c4                 xor eax, esp
// 00817eb7  50                   push eax
// 00817eb8  8d44243c             lea eax, [esp + 0x3c]
// 00817ebc  64a300000000         mov dword ptr fs:[0], eax
// 00817ec2  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00817ec6  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 00817eca  b855000000           mov eax, 0x55
// 00817ecf  8bd0                 mov edx, eax
// 00817ed1  b9aa000000           mov ecx, 0xaa
// 00817ed6  6689442428           mov word ptr [esp + 0x28], ax
// 00817edb  8bc1                 mov eax, ecx
// 00817edd  66894c242a           mov word ptr [esp + 0x2a], cx
// 00817ee2  8bca                 mov ecx, edx
// 00817ee4  668954242c           mov word ptr [esp + 0x2c], dx
// 00817ee9  8bd0                 mov edx, eax
// 00817eeb  668944242e           mov word ptr [esp + 0x2e], ax
// 00817ef0  8bc1                 mov eax, ecx
// 00817ef2  66894c2430           mov word ptr [esp + 0x30], cx
// 00817ef7  8bca                 mov ecx, edx
// 00817ef9  33db                 xor ebx, ebx
// 00817efb  6689542432           mov word ptr [esp + 0x32], dx
// 00817f00  6689442434           mov word ptr [esp + 0x34], ax
// 00817f05  66894c2436           mov word ptr [esp + 0x36], cx
// 00817f0a  895c2420             mov dword ptr [esp + 0x20], ebx
// 00817f0e  c744241c18229a00     mov dword ptr [esp + 0x1c], 0x9a2218
// 00817f16  8d542428             lea edx, [esp + 0x28]
// 00817f1a  52                   push edx
// 00817f1b  6a01                 push 1
// 00817f1d  6a01                 push 1
// 00817f1f  6a08                 push 8
// 00817f21  6a08                 push 8
// 00817f23  895c2458             mov dword ptr [esp + 0x58], ebx
// 00817f27  ff1578b19800         call dword ptr [0x98b178]
// 00817f2d  50                   push eax
// 00817f2e  8d4c2420             lea ecx, [esp + 0x20]
// 00817f32  e8f3befdff           call 0x7f3e2a
// 00817f37  895c2418             mov dword ptr [esp + 0x18], ebx
// 00817f3b  c744241448189a00     mov dword ptr [esp + 0x14], 0x9a1848
// 00817f43  8b442420             mov eax, dword ptr [esp + 0x20]
// 00817f47  50                   push eax
// 00817f48  c644244801           mov byte ptr [esp + 0x48], 1
// 00817f4d  ff15e4b09800         call dword ptr [0x98b0e4]
// 00817f53  50                   push eax
// 00817f54  8d4c2418             lea ecx, [esp + 0x18]
// 00817f58  e8cdbefdff           call 0x7f3e2a
// 00817f5d  8d4c2414             lea ecx, [esp + 0x14]
// 00817f61  51                   push ecx
// 00817f62  8bce                 mov ecx, esi
// 00817f64  e863e51000           call 0x9264cc
// 00817f69  8be8                 mov ebp, eax
// 00817f6b  e8607a0100           call 0x82f9d0
// 00817f70  6a0f                 push 0xf
// 00817f72  8bc8                 mov ecx, eax
// 00817f74  e887710100           call 0x82f100
// 00817f79  8b16                 mov edx, dword ptr [esi]
// 00817f7b  50                   push eax
// 00817f7c  8b4234               mov eax, dword ptr [edx + 0x34]
// 00817f7f  8bce                 mov ecx, esi
// 00817f81  ffd0                 call eax
// 00817f83  8bd8                 mov ebx, eax
// 00817f85  e8467a0100           call 0x82f9d0
// 00817f8a  6a14                 push 0x14
// 00817f8c  8bc8                 mov ecx, eax
// 00817f8e  e86d710100           call 0x82f100
// 00817f93  8b16                 mov edx, dword ptr [esi]
// 00817f95  50                   push eax
// 00817f96  8b4238               mov eax, dword ptr [edx + 0x38]
// 00817f99  8bce                 mov ecx, esi
// 00817f9b  ffd0                 call eax
// 00817f9d  8b4f04               mov ecx, dword ptr [edi + 4]
// 00817fa0  8b17                 mov edx, dword ptr [edi]
// 00817fa2  89442424             mov dword ptr [esp + 0x24], eax
// 00817fa6  8b470c               mov eax, dword ptr [edi + 0xc]
// 00817fa9  8b7f08               mov edi, dword ptr [edi + 8]
// 00817fac  682100f000           push 0xf00021
// 00817fb1  2bc1                 sub eax, ecx
// 00817fb3  50                   push eax
// 00817fb4  2bfa                 sub edi, edx
// 00817fb6  57                   push edi
// 00817fb7  51                   push ecx
// 00817fb8  8b4e04               mov ecx, dword ptr [esi + 4]
// 00817fbb  52                   push edx
// 00817fbc  51                   push ecx
// 00817fbd  ff1508b19800         call dword ptr [0x98b108]
// 00817fc3  55                   push ebp
// 00817fc4  8bce                 mov ecx, esi
// 00817fc6  e801e51000           call 0x9264cc
// 00817fcb  8b16                 mov edx, dword ptr [esi]
// 00817fcd  8b4234               mov eax, dword ptr [edx + 0x34]
// 00817fd0  53                   push ebx
// 00817fd1  8bce                 mov ecx, esi
// 00817fd3  ffd0                 call eax
// 00817fd5  8b16                 mov edx, dword ptr [esi]
// 00817fd7  8b442424             mov eax, dword ptr [esp + 0x24]
// 00817fdb  8b5238               mov edx, dword ptr [edx + 0x38]
// 00817fde  50                   push eax
// 00817fdf  8bce                 mov ecx, esi
// 00817fe1  ffd2                 call edx
// 00817fe3  8d4c2414             lea ecx, [esp + 0x14]
// 00817fe7  e832befdff           call 0x7f3e1e
// 00817fec  8d4c2414             lea ecx, [esp + 0x14]
// 00817ff0  c644244400           mov byte ptr [esp + 0x44], 0
// 00817ff5  c744241448189a00     mov dword ptr [esp + 0x14], 0x9a1848
// 00817ffd  e82e72bfff           call 0x40f230
// 00818002  8d4c241c             lea ecx, [esp + 0x1c]
// 00818006  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0081800e  c744241c18229a00     mov dword ptr [esp + 0x1c], 0x9a2218
// 00818016  e81572bfff           call 0x40f230
// 0081801b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0081801f  64890d00000000       mov dword ptr fs:[0], ecx
// 00818026  59                   pop ecx
// 00818027  5f                   pop edi
// 00818028  5e                   pop esi
// 00818029  5d                   pop ebp
// 0081802a  5b                   pop ebx
// 0081802b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0081802f  33cc                 xor ecx, esp
// 00818031  e864d3fdff           call 0x7f539a
// 00818036  83c434               add esp, 0x34
// 00818039  c20800               ret 8
// copied from an identical function in another client (function ?XTFuncDrawShadedRect@@YGXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTFunctions.cpp
// roc 2009-12 004d5880  unit: G3D::Win32Window  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d5880
//
// 004d5880  53                   push ebx
// 004d5881  55                   push ebp
// 004d5882  56                   push esi
// 004d5883  8b35dccb9800         mov esi, dword ptr [0x98cbdc]
// 004d5889  57                   push edi
// 004d588a  6a00                 push 0
// 004d588c  8be9                 mov ebp, ecx
// 004d588e  ffd6                 call esi
// 004d5890  6a01                 push 1
// 004d5892  8bf8                 mov edi, eax
// 004d5894  ffd6                 call esi
// 004d5896  8b742414             mov esi, dword ptr [esp + 0x14]
// 004d589a  f30f100e             movss xmm1, dword ptr [esi]
// 004d589e  f30f2cc9             cvttss2si ecx, xmm1
// 004d58a2  85c9                 test ecx, ecx
// 004d58a4  7f04                 jg 0x4d58aa
// 004d58a6  33c9                 xor ecx, ecx
// 004d58a8  eb06                 jmp 0x4d58b0
// 004d58aa  3bcf                 cmp ecx, edi
// 004d58ac  7c02                 jl 0x4d58b0
// 004d58ae  8bcf                 mov ecx, edi
// 004d58b0  f30f104604           movss xmm0, dword ptr [esi + 4]
// 004d58b5  f30f2cd0             cvttss2si edx, xmm0
// 004d58b9  85d2                 test edx, edx
// 004d58bb  7f04                 jg 0x4d58c1
// 004d58bd  33db                 xor ebx, ebx
// 004d58bf  eb08                 jmp 0x4d58c9
// 004d58c1  3bd0                 cmp edx, eax
// 004d58c3  8bd8                 mov ebx, eax
// 004d58c5  7d02                 jge 0x4d58c9
// 004d58c7  8bda                 mov ebx, edx
// 004d58c9  f30f105608           movss xmm2, dword ptr [esi + 8]
// 004d58ce  f30f5cd1             subss xmm2, xmm1
// 004d58d2  f30f2cd2             cvttss2si edx, xmm2
// 004d58d6  83fa01               cmp edx, 1
// 004d58d9  7f07                 jg 0x4d58e2
// 004d58db  bf01000000           mov edi, 1
// 004d58e0  eb06                 jmp 0x4d58e8
// 004d58e2  3bd7                 cmp edx, edi
// 004d58e4  7d02                 jge 0x4d58e8
// 004d58e6  8bfa                 mov edi, edx
// 004d58e8  f30f104e0c           movss xmm1, dword ptr [esi + 0xc]
// 004d58ed  f30f5cc8             subss xmm1, xmm0
// 004d58f1  f30f2cd1             cvttss2si edx, xmm1
// 004d58f5  83fa01               cmp edx, 1
// 004d58f8  7f07                 jg 0x4d5901
// 004d58fa  b801000000           mov eax, 1
// 004d58ff  eb06                 jmp 0x4d5907
// 004d5901  3bd0                 cmp edx, eax
// 004d5903  7d02                 jge 0x4d5907
// 004d5905  8bc2                 mov eax, edx
// 004d5907  6a01                 push 1
// 004d5909  50                   push eax
// 004d590a  8b85e8010000         mov eax, dword ptr [ebp + 0x1e8]
// 004d5910  57                   push edi
// 004d5911  53                   push ebx
// 004d5912  51                   push ecx
// 004d5913  50                   push eax
// 004d5914  ff1518ca9800         call dword ptr [0x98ca18]
// 004d591a  5f                   pop edi
// 004d591b  5e                   pop esi
// 004d591c  5d                   pop ebp
// 004d591d  5b                   pop ebx
// 004d591e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setDimensions@Win32Window@G3D@@UAEXABVRect2D@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

// roc 2010-06 004877b0  unit: G3D::Win32Window  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004877b0
//
// 004877b0  53                   push ebx
// 004877b1  55                   push ebp
// 004877b2  56                   push esi
// 004877b3  8b356cba9e00         mov esi, dword ptr [0x9eba6c]
// 004877b9  57                   push edi
// 004877ba  6a00                 push 0
// 004877bc  8be9                 mov ebp, ecx
// 004877be  ffd6                 call esi
// 004877c0  6a01                 push 1
// 004877c2  8bf8                 mov edi, eax
// 004877c4  ffd6                 call esi
// 004877c6  8b742414             mov esi, dword ptr [esp + 0x14]
// 004877ca  f30f100e             movss xmm1, dword ptr [esi]
// 004877ce  f30f2cc9             cvttss2si ecx, xmm1
// 004877d2  85c9                 test ecx, ecx
// 004877d4  7f04                 jg 0x4877da
// 004877d6  33c9                 xor ecx, ecx
// 004877d8  eb06                 jmp 0x4877e0
// 004877da  3bcf                 cmp ecx, edi
// 004877dc  7c02                 jl 0x4877e0
// 004877de  8bcf                 mov ecx, edi
// 004877e0  f30f104604           movss xmm0, dword ptr [esi + 4]
// 004877e5  f30f2cd0             cvttss2si edx, xmm0
// 004877e9  85d2                 test edx, edx
// 004877eb  7f04                 jg 0x4877f1
// 004877ed  33db                 xor ebx, ebx
// 004877ef  eb08                 jmp 0x4877f9
// 004877f1  3bd0                 cmp edx, eax
// 004877f3  8bd8                 mov ebx, eax
// 004877f5  7d02                 jge 0x4877f9
// 004877f7  8bda                 mov ebx, edx
// 004877f9  f30f105608           movss xmm2, dword ptr [esi + 8]
// 004877fe  f30f5cd1             subss xmm2, xmm1
// 00487802  f30f2cd2             cvttss2si edx, xmm2
// 00487806  83fa01               cmp edx, 1
// 00487809  7f07                 jg 0x487812
// 0048780b  bf01000000           mov edi, 1
// 00487810  eb06                 jmp 0x487818
// 00487812  3bd7                 cmp edx, edi
// 00487814  7d02                 jge 0x487818
// 00487816  8bfa                 mov edi, edx
// 00487818  f30f104e0c           movss xmm1, dword ptr [esi + 0xc]
// 0048781d  f30f5cc8             subss xmm1, xmm0
// 00487821  f30f2cd1             cvttss2si edx, xmm1
// 00487825  83fa01               cmp edx, 1
// 00487828  7f07                 jg 0x487831
// 0048782a  b801000000           mov eax, 1
// 0048782f  eb06                 jmp 0x487837
// 00487831  3bd0                 cmp edx, eax
// 00487833  7d02                 jge 0x487837
// 00487835  8bc2                 mov eax, edx
// 00487837  6a01                 push 1
// 00487839  50                   push eax
// 0048783a  8b85e8010000         mov eax, dword ptr [ebp + 0x1e8]
// 00487840  57                   push edi
// 00487841  53                   push ebx
// 00487842  51                   push ecx
// 00487843  50                   push eax
// 00487844  ff15a0bb9e00         call dword ptr [0x9ebba0]
// 0048784a  5f                   pop edi
// 0048784b  5e                   pop esi
// 0048784c  5d                   pop ebp
// 0048784d  5b                   pop ebx
// 0048784e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setDimensions@Win32Window@G3D@@UAEXABVRect2D@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp

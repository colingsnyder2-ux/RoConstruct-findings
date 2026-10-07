// roc 2007-08 00483e20  unit: G3D::Shader  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00483e20
//
// 00483e20  6aff                 push -1
// 00483e22  68b8617400           push 0x7461b8
// 00483e27  64a100000000         mov eax, dword ptr fs:[0]
// 00483e2d  50                   push eax
// 00483e2e  83ec58               sub esp, 0x58
// 00483e31  53                   push ebx
// 00483e32  55                   push ebp
// 00483e33  56                   push esi
// 00483e34  57                   push edi
// 00483e35  a188518b00           mov eax, dword ptr [0x8b5188]
// 00483e3a  33c4                 xor eax, esp
// 00483e3c  50                   push eax
// 00483e3d  8d44246c             lea eax, [esp + 0x6c]
// 00483e41  64a300000000         mov dword ptr fs:[0], eax
// 00483e47  8be9                 mov ebp, ecx
// 00483e49  d9ee                 fldz 
// 00483e4b  33ff                 xor edi, edi
// 00483e4d  d9542430             fst dword ptr [esp + 0x30]
// 00483e51  897c2464             mov dword ptr [esp + 0x64], edi
// 00483e55  d954242c             fst dword ptr [esp + 0x2c]
// 00483e59  d9542428             fst dword ptr [esp + 0x28]
// 00483e5d  d9542424             fst dword ptr [esp + 0x24]
// 00483e61  d9542440             fst dword ptr [esp + 0x40]
// 00483e65  d954243c             fst dword ptr [esp + 0x3c]
// 00483e69  d9542438             fst dword ptr [esp + 0x38]
// 00483e6d  d9542434             fst dword ptr [esp + 0x34]
// 00483e71  d9542450             fst dword ptr [esp + 0x50]
// 00483e75  d954244c             fst dword ptr [esp + 0x4c]
// 00483e79  d9542448             fst dword ptr [esp + 0x48]
// 00483e7d  d9542444             fst dword ptr [esp + 0x44]
// 00483e81  d9542460             fst dword ptr [esp + 0x60]
// 00483e85  d954245c             fst dword ptr [esp + 0x5c]
// 00483e89  d9542458             fst dword ptr [esp + 0x58]
// 00483e8d  d95c2454             fstp dword ptr [esp + 0x54]
// 00483e91  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 00483e98  897c2474             mov dword ptr [esp + 0x74], edi
// 00483e9c  c74424685c8b0000     mov dword ptr [esp + 0x68], 0x8b5c
// 00483ea4  8d74242c             lea esi, [esp + 0x2c]
// 00483ea8  57                   push edi
// 00483ea9  8d442418             lea eax, [esp + 0x18]
// 00483ead  50                   push eax
// 00483eae  8bcb                 mov ecx, ebx
// 00483eb0  e86b6e0800           call 0x50ad20
// 00483eb5  d900                 fld dword ptr [eax]
// 00483eb7  d95ef8               fstp dword ptr [esi - 8]
// 00483eba  83c701               add edi, 1
// 00483ebd  d94004               fld dword ptr [eax + 4]
// 00483ec0  83c610               add esi, 0x10
// 00483ec3  83ff04               cmp edi, 4
// 00483ec6  d95eec               fstp dword ptr [esi - 0x14]
// 00483ec9  d94008               fld dword ptr [eax + 8]
// 00483ecc  d95ef0               fstp dword ptr [esi - 0x10]
// 00483ecf  d9400c               fld dword ptr [eax + 0xc]
// 00483ed2  d95ef4               fstp dword ptr [esi - 0xc]
// 00483ed5  7cd1                 jl 0x483ea8
// 00483ed7  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00483edb  8d4c2424             lea ecx, [esp + 0x24]
// 00483edf  51                   push ecx
// 00483ee0  52                   push edx
// 00483ee1  8bcd                 mov ecx, ebp
// 00483ee3  e8f8f8ffff           call 0x4837e0
// 00483ee8  8b442464             mov eax, dword ptr [esp + 0x64]
// 00483eec  85c0                 test eax, eax
// 00483eee  c7442474ffffffff     mov dword ptr [esp + 0x74], 0xffffffff
// 00483ef6  7444                 je 0x483f3c
// 00483ef8  83c004               add eax, 4
// 00483efb  50                   push eax
// 00483efc  ff15e8d27700         call dword ptr [0x77d2e8]
// 00483f02  85c0                 test eax, eax
// 00483f04  7536                 jne 0x483f3c
// 00483f06  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00483f0a  8b7108               mov esi, dword ptr [ecx + 8]
// 00483f0d  85f6                 test esi, esi
// 00483f0f  741f                 je 0x483f30
// 00483f11  8b0e                 mov ecx, dword ptr [esi]
// 00483f13  8b01                 mov eax, dword ptr [ecx]
// 00483f15  8b5004               mov edx, dword ptr [eax + 4]
// 00483f18  ffd2                 call edx
// 00483f1a  8bc6                 mov eax, esi
// 00483f1c  8b7604               mov esi, dword ptr [esi + 4]
// 00483f1f  50                   push eax
// 00483f20  e83dbd1a00           call 0x62fc62
// 00483f25  83c404               add esp, 4
// 00483f28  85f6                 test esi, esi
// 00483f2a  75e5                 jne 0x483f11
// 00483f2c  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00483f30  85c9                 test ecx, ecx
// 00483f32  7408                 je 0x483f3c
// 00483f34  8b01                 mov eax, dword ptr [ecx]
// 00483f36  8b10                 mov edx, dword ptr [eax]
// 00483f38  6a01                 push 1
// 00483f3a  ffd2                 call edx
// 00483f3c  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00483f40  64890d00000000       mov dword ptr fs:[0], ecx
// 00483f47  59                   pop ecx
// 00483f48  5f                   pop edi
// 00483f49  5e                   pop esi
// 00483f4a  5d                   pop ebp
// 00483f4b  5b                   pop ebx
// 00483f4c  83c464               add esp, 0x64
// 00483f4f  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVMatrix4@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp

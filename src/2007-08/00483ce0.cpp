// roc 2007-08 00483ce0  unit: G3D::Shader  size: 307 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00483ce0
//
// 00483ce0  6aff                 push -1
// 00483ce2  6888617400           push 0x746188
// 00483ce7  64a100000000         mov eax, dword ptr fs:[0]
// 00483ced  50                   push eax
// 00483cee  83ec48               sub esp, 0x48
// 00483cf1  55                   push ebp
// 00483cf2  56                   push esi
// 00483cf3  57                   push edi
// 00483cf4  a188518b00           mov eax, dword ptr [0x8b5188]
// 00483cf9  33c4                 xor eax, esp
// 00483cfb  50                   push eax
// 00483cfc  8d442458             lea eax, [esp + 0x58]
// 00483d00  64a300000000         mov dword ptr fs:[0], eax
// 00483d06  8bf9                 mov edi, ecx
// 00483d08  d9ee                 fldz 
// 00483d0a  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00483d12  d954241c             fst dword ptr [esp + 0x1c]
// 00483d16  d9542418             fst dword ptr [esp + 0x18]
// 00483d1a  d9542414             fst dword ptr [esp + 0x14]
// 00483d1e  d9542410             fst dword ptr [esp + 0x10]
// 00483d22  d954242c             fst dword ptr [esp + 0x2c]
// 00483d26  d9542428             fst dword ptr [esp + 0x28]
// 00483d2a  d9542424             fst dword ptr [esp + 0x24]
// 00483d2e  d9542420             fst dword ptr [esp + 0x20]
// 00483d32  d954243c             fst dword ptr [esp + 0x3c]
// 00483d36  d9542438             fst dword ptr [esp + 0x38]
// 00483d3a  d9542434             fst dword ptr [esp + 0x34]
// 00483d3e  d9542430             fst dword ptr [esp + 0x30]
// 00483d42  d954244c             fst dword ptr [esp + 0x4c]
// 00483d46  d9542448             fst dword ptr [esp + 0x48]
// 00483d4a  d9542444             fst dword ptr [esp + 0x44]
// 00483d4e  d95c2440             fstp dword ptr [esp + 0x40]
// 00483d52  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00483d56  8b0e                 mov ecx, dword ptr [esi]
// 00483d58  c744246000000000     mov dword ptr [esp + 0x60], 0
// 00483d60  e8bbc6feff           call 0x470420
// 00483d65  8b36                 mov esi, dword ptr [esi]
// 00483d67  8b2de8d27700         mov ebp, dword ptr [0x77d2e8]
// 00483d6d  89442454             mov dword ptr [esp + 0x54], eax
// 00483d71  8b442450             mov eax, dword ptr [esp + 0x50]
// 00483d75  3bf0                 cmp esi, eax
// 00483d77  7441                 je 0x483dba
// 00483d79  85c0                 test eax, eax
// 00483d7b  742b                 je 0x483da8
// 00483d7d  83c004               add eax, 4
// 00483d80  50                   push eax
// 00483d81  ffd5                 call ebp
// 00483d83  85c0                 test eax, eax
// 00483d85  7519                 jne 0x483da0
// 00483d87  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00483d8b  e84040fdff           call 0x457dd0
// 00483d90  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00483d94  85c9                 test ecx, ecx
// 00483d96  7408                 je 0x483da0
// 00483d98  8b01                 mov eax, dword ptr [ecx]
// 00483d9a  8b10                 mov edx, dword ptr [eax]
// 00483d9c  6a01                 push 1
// 00483d9e  ffd2                 call edx
// 00483da0  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00483da8  85f6                 test esi, esi
// 00483daa  740e                 je 0x483dba
// 00483dac  8d4604               lea eax, [esi + 4]
// 00483daf  50                   push eax
// 00483db0  89742454             mov dword ptr [esp + 0x54], esi
// 00483db4  ff15ecd27700         call dword ptr [0x77d2ec]
// 00483dba  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00483dbe  8d442410             lea eax, [esp + 0x10]
// 00483dc2  50                   push eax
// 00483dc3  51                   push ecx
// 00483dc4  8bcf                 mov ecx, edi
// 00483dc6  e815faffff           call 0x4837e0
// 00483dcb  8b442450             mov eax, dword ptr [esp + 0x50]
// 00483dcf  85c0                 test eax, eax
// 00483dd1  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 00483dd9  7423                 je 0x483dfe
// 00483ddb  83c004               add eax, 4
// 00483dde  50                   push eax
// 00483ddf  ffd5                 call ebp
// 00483de1  85c0                 test eax, eax
// 00483de3  7519                 jne 0x483dfe
// 00483de5  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00483de9  e8e23ffdff           call 0x457dd0
// 00483dee  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00483df2  85c9                 test ecx, ecx
// 00483df4  7408                 je 0x483dfe
// 00483df6  8b11                 mov edx, dword ptr [ecx]
// 00483df8  8b02                 mov eax, dword ptr [edx]
// 00483dfa  6a01                 push 1
// 00483dfc  ffd0                 call eax
// 00483dfe  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00483e02  64890d00000000       mov dword ptr fs:[0], ecx
// 00483e09  59                   pop ecx
// 00483e0a  5f                   pop edi
// 00483e0b  5e                   pop esi
// 00483e0c  5d                   pop ebp
// 00483e0d  83c454               add esp, 0x54
// 00483e10  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$ReferenceCountedPointer@VTexture@G3D@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp

// roc 2007-08 00483f60  unit: G3D::Shader  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00483f60
//
// 00483f60  6aff                 push -1
// 00483f62  68e8617400           push 0x7461e8
// 00483f67  64a100000000         mov eax, dword ptr fs:[0]
// 00483f6d  50                   push eax
// 00483f6e  83ec48               sub esp, 0x48
// 00483f71  a188518b00           mov eax, dword ptr [0x8b5188]
// 00483f76  33c4                 xor eax, esp
// 00483f78  50                   push eax
// 00483f79  8d44244c             lea eax, [esp + 0x4c]
// 00483f7d  64a300000000         mov dword ptr fs:[0], eax
// 00483f83  d9ee                 fldz 
// 00483f85  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00483f8d  d9542420             fst dword ptr [esp + 0x20]
// 00483f91  d954241c             fst dword ptr [esp + 0x1c]
// 00483f95  d9542418             fst dword ptr [esp + 0x18]
// 00483f99  d9542414             fst dword ptr [esp + 0x14]
// 00483f9d  d9542430             fst dword ptr [esp + 0x30]
// 00483fa1  d954242c             fst dword ptr [esp + 0x2c]
// 00483fa5  d9542428             fst dword ptr [esp + 0x28]
// 00483fa9  d9542424             fst dword ptr [esp + 0x24]
// 00483fad  d9542440             fst dword ptr [esp + 0x40]
// 00483fb1  d954243c             fst dword ptr [esp + 0x3c]
// 00483fb5  d9542438             fst dword ptr [esp + 0x38]
// 00483fb9  d95c2434             fstp dword ptr [esp + 0x34]
// 00483fbd  8b442460             mov eax, dword ptr [esp + 0x60]
// 00483fc1  d900                 fld dword ptr [eax]
// 00483fc3  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00483fc7  d95c2404             fstp dword ptr [esp + 4]
// 00483fcb  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00483fd3  d94004               fld dword ptr [eax + 4]
// 00483fd6  c7442448528b0000     mov dword ptr [esp + 0x48], 0x8b52
// 00483fde  d95c2408             fstp dword ptr [esp + 8]
// 00483fe2  d94008               fld dword ptr [eax + 8]
// 00483fe5  d95c240c             fstp dword ptr [esp + 0xc]
// 00483fe9  d9400c               fld dword ptr [eax + 0xc]
// 00483fec  8d442404             lea eax, [esp + 4]
// 00483ff0  50                   push eax
// 00483ff1  d95c2414             fstp dword ptr [esp + 0x14]
// 00483ff5  52                   push edx
// 00483ff6  e8e5f7ffff           call 0x4837e0
// 00483ffb  8b442444             mov eax, dword ptr [esp + 0x44]
// 00483fff  85c0                 test eax, eax
// 00484001  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00484009  7427                 je 0x484032
// 0048400b  83c004               add eax, 4
// 0048400e  50                   push eax
// 0048400f  ff15e8d27700         call dword ptr [0x77d2e8]
// 00484015  85c0                 test eax, eax
// 00484017  7519                 jne 0x484032
// 00484019  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0048401d  e8ae3dfdff           call 0x457dd0
// 00484022  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00484026  85c9                 test ecx, ecx
// 00484028  7408                 je 0x484032
// 0048402a  8b01                 mov eax, dword ptr [ecx]
// 0048402c  8b10                 mov edx, dword ptr [eax]
// 0048402e  6a01                 push 1
// 00484030  ffd2                 call edx
// 00484032  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00484036  64890d00000000       mov dword ptr fs:[0], ecx
// 0048403d  59                   pop ecx
// 0048403e  83c454               add esp, 0x54
// 00484041  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVVector4@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp

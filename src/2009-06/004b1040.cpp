// from server: 100% by auto
// roc 2009-06 004b1040  unit: G3D::Shader  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b1040
//
// 004b1040  6aff                 push -1
// 004b1042  68e8818500           push 0x8581e8
// 004b1047  64a100000000         mov eax, dword ptr fs:[0]
// 004b104d  50                   push eax
// 004b104e  64892500000000       mov dword ptr fs:[0], esp
// 004b1055  83ec48               sub esp, 0x48
// 004b1058  d9ee                 fldz 
// 004b105a  c744244000000000     mov dword ptr [esp + 0x40], 0
// 004b1062  d954241c             fst dword ptr [esp + 0x1c]
// 004b1066  d9542418             fst dword ptr [esp + 0x18]
// 004b106a  d9542414             fst dword ptr [esp + 0x14]
// 004b106e  d9542410             fst dword ptr [esp + 0x10]
// 004b1072  d954242c             fst dword ptr [esp + 0x2c]
// 004b1076  d9542428             fst dword ptr [esp + 0x28]
// 004b107a  d9542424             fst dword ptr [esp + 0x24]
// 004b107e  d9542420             fst dword ptr [esp + 0x20]
// 004b1082  d954243c             fst dword ptr [esp + 0x3c]
// 004b1086  d9542438             fst dword ptr [esp + 0x38]
// 004b108a  d9542434             fst dword ptr [esp + 0x34]
// 004b108e  d95c2430             fstp dword ptr [esp + 0x30]
// 004b1092  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 004b1096  d900                 fld dword ptr [eax]
// 004b1098  8b542458             mov edx, dword ptr [esp + 0x58]
// 004b109c  d91c24               fstp dword ptr [esp]
// 004b109f  c744245000000000     mov dword ptr [esp + 0x50], 0
// 004b10a7  d94004               fld dword ptr [eax + 4]
// 004b10aa  c7442444528b0000     mov dword ptr [esp + 0x44], 0x8b52
// 004b10b2  d95c2404             fstp dword ptr [esp + 4]
// 004b10b6  d94008               fld dword ptr [eax + 8]
// 004b10b9  d95c2408             fstp dword ptr [esp + 8]
// 004b10bd  d9400c               fld dword ptr [eax + 0xc]
// 004b10c0  8d0424               lea eax, [esp]
// 004b10c3  50                   push eax
// 004b10c4  d95c2410             fstp dword ptr [esp + 0x10]
// 004b10c8  52                   push edx
// 004b10c9  e872f7ffff           call 0x4b0840
// 004b10ce  8b442440             mov eax, dword ptr [esp + 0x40]
// 004b10d2  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 004b10da  85c0                 test eax, eax
// 004b10dc  7427                 je 0x4b1105
// 004b10de  83c004               add eax, 4
// 004b10e1  50                   push eax
// 004b10e2  ff15a4e18900         call dword ptr [0x89e1a4]
// 004b10e8  85c0                 test eax, eax
// 004b10ea  7519                 jne 0x4b1105
// 004b10ec  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004b10f0  e88b3cf9ff           call 0x444d80
// 004b10f5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004b10f9  85c9                 test ecx, ecx
// 004b10fb  7408                 je 0x4b1105
// 004b10fd  8b01                 mov eax, dword ptr [ecx]
// 004b10ff  8b10                 mov edx, dword ptr [eax]
// 004b1101  6a01                 push 1
// 004b1103  ffd2                 call edx
// 004b1105  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004b1109  64890d00000000       mov dword ptr fs:[0], ecx
// 004b1110  83c454               add esp, 0x54
// 004b1113  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVVector4@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp

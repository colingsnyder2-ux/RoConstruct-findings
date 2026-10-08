// from server: 100% by auto
// roc 2008-06 00487110  unit: G3D::Shader  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00487110
//
// 00487110  6aff                 push -1
// 00487112  6858577c00           push 0x7c5758
// 00487117  64a100000000         mov eax, dword ptr fs:[0]
// 0048711d  50                   push eax
// 0048711e  64892500000000       mov dword ptr fs:[0], esp
// 00487125  83ec48               sub esp, 0x48
// 00487128  d9ee                 fldz 
// 0048712a  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00487132  d954241c             fst dword ptr [esp + 0x1c]
// 00487136  d9542418             fst dword ptr [esp + 0x18]
// 0048713a  d9542414             fst dword ptr [esp + 0x14]
// 0048713e  d9542410             fst dword ptr [esp + 0x10]
// 00487142  d954242c             fst dword ptr [esp + 0x2c]
// 00487146  d9542428             fst dword ptr [esp + 0x28]
// 0048714a  d9542424             fst dword ptr [esp + 0x24]
// 0048714e  d9542420             fst dword ptr [esp + 0x20]
// 00487152  d954243c             fst dword ptr [esp + 0x3c]
// 00487156  d9542438             fst dword ptr [esp + 0x38]
// 0048715a  d9542434             fst dword ptr [esp + 0x34]
// 0048715e  d95c2430             fstp dword ptr [esp + 0x30]
// 00487162  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00487166  d900                 fld dword ptr [eax]
// 00487168  8b542458             mov edx, dword ptr [esp + 0x58]
// 0048716c  d91c24               fstp dword ptr [esp]
// 0048716f  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00487177  d94004               fld dword ptr [eax + 4]
// 0048717a  c7442444528b0000     mov dword ptr [esp + 0x44], 0x8b52
// 00487182  d95c2404             fstp dword ptr [esp + 4]
// 00487186  d94008               fld dword ptr [eax + 8]
// 00487189  d95c2408             fstp dword ptr [esp + 8]
// 0048718d  d9400c               fld dword ptr [eax + 0xc]
// 00487190  8d0424               lea eax, [esp]
// 00487193  50                   push eax
// 00487194  d95c2410             fstp dword ptr [esp + 0x10]
// 00487198  52                   push edx
// 00487199  e8f2f7ffff           call 0x486990
// 0048719e  8b442440             mov eax, dword ptr [esp + 0x40]
// 004871a2  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 004871aa  85c0                 test eax, eax
// 004871ac  7427                 je 0x4871d5
// 004871ae  83c004               add eax, 4
// 004871b1  50                   push eax
// 004871b2  ff15ac218000         call dword ptr [0x8021ac]
// 004871b8  85c0                 test eax, eax
// 004871ba  7519                 jne 0x4871d5
// 004871bc  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004871c0  e8cb3bfdff           call 0x45ad90
// 004871c5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004871c9  85c9                 test ecx, ecx
// 004871cb  7408                 je 0x4871d5
// 004871cd  8b01                 mov eax, dword ptr [ecx]
// 004871cf  8b10                 mov edx, dword ptr [eax]
// 004871d1  6a01                 push 1
// 004871d3  ffd2                 call edx
// 004871d5  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004871d9  64890d00000000       mov dword ptr fs:[0], ecx
// 004871e0  83c454               add esp, 0x54
// 004871e3  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVVector4@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp

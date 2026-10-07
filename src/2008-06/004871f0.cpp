// roc 2008-06 004871f0  unit: G3D::Shader  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004871f0
//
// 004871f0  6aff                 push -1
// 004871f2  6858577c00           push 0x7c5758
// 004871f7  64a100000000         mov eax, dword ptr fs:[0]
// 004871fd  50                   push eax
// 004871fe  64892500000000       mov dword ptr fs:[0], esp
// 00487205  83ec48               sub esp, 0x48
// 00487208  d9ee                 fldz 
// 0048720a  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00487212  d954241c             fst dword ptr [esp + 0x1c]
// 00487216  d9542418             fst dword ptr [esp + 0x18]
// 0048721a  d9542414             fst dword ptr [esp + 0x14]
// 0048721e  d9542410             fst dword ptr [esp + 0x10]
// 00487222  d954242c             fst dword ptr [esp + 0x2c]
// 00487226  d9542428             fst dword ptr [esp + 0x28]
// 0048722a  d9542424             fst dword ptr [esp + 0x24]
// 0048722e  d9542420             fst dword ptr [esp + 0x20]
// 00487232  d954243c             fst dword ptr [esp + 0x3c]
// 00487236  d9542438             fst dword ptr [esp + 0x38]
// 0048723a  d9542434             fst dword ptr [esp + 0x34]
// 0048723e  d9542430             fst dword ptr [esp + 0x30]
// 00487242  d944245c             fld dword ptr [esp + 0x5c]
// 00487246  8b542458             mov edx, dword ptr [esp + 0x58]
// 0048724a  d91c24               fstp dword ptr [esp]
// 0048724d  8d0424               lea eax, [esp]
// 00487250  50                   push eax
// 00487251  d9542408             fst dword ptr [esp + 8]
// 00487255  52                   push edx
// 00487256  d9542410             fst dword ptr [esp + 0x10]
// 0048725a  c744245800000000     mov dword ptr [esp + 0x58], 0
// 00487262  d95c2414             fstp dword ptr [esp + 0x14]
// 00487266  c744244c06140000     mov dword ptr [esp + 0x4c], 0x1406
// 0048726e  e81df7ffff           call 0x486990
// 00487273  8b442440             mov eax, dword ptr [esp + 0x40]
// 00487277  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0048727f  85c0                 test eax, eax
// 00487281  7427                 je 0x4872aa
// 00487283  83c004               add eax, 4
// 00487286  50                   push eax
// 00487287  ff15ac218000         call dword ptr [0x8021ac]
// 0048728d  85c0                 test eax, eax
// 0048728f  7519                 jne 0x4872aa
// 00487291  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00487295  e8f63afdff           call 0x45ad90
// 0048729a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0048729e  85c9                 test ecx, ecx
// 004872a0  7408                 je 0x4872aa
// 004872a2  8b01                 mov eax, dword ptr [ecx]
// 004872a4  8b10                 mov edx, dword ptr [eax]
// 004872a6  6a01                 push 1
// 004872a8  ffd2                 call edx
// 004872aa  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004872ae  64890d00000000       mov dword ptr fs:[0], ecx
// 004872b5  83c454               add esp, 0x54
// 004872b8  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp

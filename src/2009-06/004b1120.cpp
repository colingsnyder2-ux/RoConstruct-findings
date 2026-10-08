// from server: 100% by auto
// roc 2009-06 004b1120  unit: G3D::Shader  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b1120
//
// 004b1120  6aff                 push -1
// 004b1122  68e8818500           push 0x8581e8
// 004b1127  64a100000000         mov eax, dword ptr fs:[0]
// 004b112d  50                   push eax
// 004b112e  64892500000000       mov dword ptr fs:[0], esp
// 004b1135  83ec48               sub esp, 0x48
// 004b1138  d9ee                 fldz 
// 004b113a  c744244000000000     mov dword ptr [esp + 0x40], 0
// 004b1142  d954241c             fst dword ptr [esp + 0x1c]
// 004b1146  d9542418             fst dword ptr [esp + 0x18]
// 004b114a  d9542414             fst dword ptr [esp + 0x14]
// 004b114e  d9542410             fst dword ptr [esp + 0x10]
// 004b1152  d954242c             fst dword ptr [esp + 0x2c]
// 004b1156  d9542428             fst dword ptr [esp + 0x28]
// 004b115a  d9542424             fst dword ptr [esp + 0x24]
// 004b115e  d9542420             fst dword ptr [esp + 0x20]
// 004b1162  d954243c             fst dword ptr [esp + 0x3c]
// 004b1166  d9542438             fst dword ptr [esp + 0x38]
// 004b116a  d9542434             fst dword ptr [esp + 0x34]
// 004b116e  d9542430             fst dword ptr [esp + 0x30]
// 004b1172  d944245c             fld dword ptr [esp + 0x5c]
// 004b1176  8b542458             mov edx, dword ptr [esp + 0x58]
// 004b117a  d91c24               fstp dword ptr [esp]
// 004b117d  8d0424               lea eax, [esp]
// 004b1180  50                   push eax
// 004b1181  d9542408             fst dword ptr [esp + 8]
// 004b1185  52                   push edx
// 004b1186  d9542410             fst dword ptr [esp + 0x10]
// 004b118a  c744245800000000     mov dword ptr [esp + 0x58], 0
// 004b1192  d95c2414             fstp dword ptr [esp + 0x14]
// 004b1196  c744244c06140000     mov dword ptr [esp + 0x4c], 0x1406
// 004b119e  e89df6ffff           call 0x4b0840
// 004b11a3  8b442440             mov eax, dword ptr [esp + 0x40]
// 004b11a7  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 004b11af  85c0                 test eax, eax
// 004b11b1  7427                 je 0x4b11da
// 004b11b3  83c004               add eax, 4
// 004b11b6  50                   push eax
// 004b11b7  ff15a4e18900         call dword ptr [0x89e1a4]
// 004b11bd  85c0                 test eax, eax
// 004b11bf  7519                 jne 0x4b11da
// 004b11c1  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004b11c5  e8b63bf9ff           call 0x444d80
// 004b11ca  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004b11ce  85c9                 test ecx, ecx
// 004b11d0  7408                 je 0x4b11da
// 004b11d2  8b01                 mov eax, dword ptr [ecx]
// 004b11d4  8b10                 mov edx, dword ptr [eax]
// 004b11d6  6a01                 push 1
// 004b11d8  ffd2                 call edx
// 004b11da  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004b11de  64890d00000000       mov dword ptr fs:[0], ecx
// 004b11e5  83c454               add esp, 0x54
// 004b11e8  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp

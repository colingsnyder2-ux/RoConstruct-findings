// from server: 100% by tester
// roc 2007-03 00482150  unit: seg_00480000  size: 307 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00482150
//
// 00482150  6aff                 push -1
// 00482152  6898827400           push 0x748298
// 00482157  64a100000000         mov eax, dword ptr fs:[0]
// 0048215d  50                   push eax
// 0048215e  83ec48               sub esp, 0x48
// 00482161  55                   push ebp
// 00482162  56                   push esi
// 00482163  57                   push edi
// 00482164  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00482169  33c4                 xor eax, esp
// 0048216b  50                   push eax
// 0048216c  8d442458             lea eax, [esp + 0x58]
// 00482170  64a300000000         mov dword ptr fs:[0], eax
// 00482176  8bf9                 mov edi, ecx
// 00482178  d9ee                 fldz 
// 0048217a  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00482182  d954241c             fst dword ptr [esp + 0x1c]
// 00482186  d9542418             fst dword ptr [esp + 0x18]
// 0048218a  d9542414             fst dword ptr [esp + 0x14]
// 0048218e  d9542410             fst dword ptr [esp + 0x10]
// 00482192  d954242c             fst dword ptr [esp + 0x2c]
// 00482196  d9542428             fst dword ptr [esp + 0x28]
// 0048219a  d9542424             fst dword ptr [esp + 0x24]
// 0048219e  d9542420             fst dword ptr [esp + 0x20]
// 004821a2  d954243c             fst dword ptr [esp + 0x3c]
// 004821a6  d9542438             fst dword ptr [esp + 0x38]
// 004821aa  d9542434             fst dword ptr [esp + 0x34]
// 004821ae  d9542430             fst dword ptr [esp + 0x30]
// 004821b2  d954244c             fst dword ptr [esp + 0x4c]
// 004821b6  d9542448             fst dword ptr [esp + 0x48]
// 004821ba  d9542444             fst dword ptr [esp + 0x44]
// 004821be  d95c2440             fstp dword ptr [esp + 0x40]
// 004821c2  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 004821c6  8b0e                 mov ecx, dword ptr [esi]
// 004821c8  c744246000000000     mov dword ptr [esp + 0x60], 0
// 004821d0  e8ebe1feff           call 0x4703c0
// 004821d5  8b36                 mov esi, dword ptr [esi]
// 004821d7  8b2da8d27700         mov ebp, dword ptr [0x77d2a8]
// 004821dd  89442454             mov dword ptr [esp + 0x54], eax
// 004821e1  8b442450             mov eax, dword ptr [esp + 0x50]
// 004821e5  3bf0                 cmp esi, eax
// 004821e7  7441                 je 0x48222a
// 004821e9  85c0                 test eax, eax
// 004821eb  742b                 je 0x482218
// 004821ed  83c004               add eax, 4
// 004821f0  50                   push eax
// 004821f1  ffd5                 call ebp
// 004821f3  85c0                 test eax, eax
// 004821f5  7519                 jne 0x482210
// 004821f7  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 004821fb  e8c011feff           call 0x4633c0
// 00482200  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00482204  85c9                 test ecx, ecx
// 00482206  7408                 je 0x482210
// 00482208  8b01                 mov eax, dword ptr [ecx]
// 0048220a  8b10                 mov edx, dword ptr [eax]
// 0048220c  6a01                 push 1
// 0048220e  ffd2                 call edx
// 00482210  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00482218  85f6                 test esi, esi
// 0048221a  740e                 je 0x48222a
// 0048221c  8d4604               lea eax, [esi + 4]
// 0048221f  50                   push eax
// 00482220  89742454             mov dword ptr [esp + 0x54], esi
// 00482224  ff15acd27700         call dword ptr [0x77d2ac]
// 0048222a  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0048222e  8d442410             lea eax, [esp + 0x10]
// 00482232  50                   push eax
// 00482233  51                   push ecx
// 00482234  8bcf                 mov ecx, edi
// 00482236  e815faffff           call 0x481c50
// 0048223b  8b442450             mov eax, dword ptr [esp + 0x50]
// 0048223f  85c0                 test eax, eax
// 00482241  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 00482249  7423                 je 0x48226e
// 0048224b  83c004               add eax, 4
// 0048224e  50                   push eax
// 0048224f  ffd5                 call ebp
// 00482251  85c0                 test eax, eax
// 00482253  7519                 jne 0x48226e
// 00482255  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00482259  e86211feff           call 0x4633c0
// 0048225e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00482262  85c9                 test ecx, ecx
// 00482264  7408                 je 0x48226e
// 00482266  8b11                 mov edx, dword ptr [ecx]
// 00482268  8b02                 mov eax, dword ptr [edx]
// 0048226a  6a01                 push 1
// 0048226c  ffd0                 call eax
// 0048226e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00482272  64890d00000000       mov dword ptr fs:[0], ecx
// 00482279  59                   pop ecx
// 0048227a  5f                   pop edi
// 0048227b  5e                   pop esi
// 0048227c  5d                   pop ebp
// 0048227d  83c454               add esp, 0x54
// 00482280  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$ReferenceCountedPointer@VTexture@G3D@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp

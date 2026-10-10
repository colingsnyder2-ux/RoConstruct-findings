// from server: 100% by tester
// roc 2007-03 004824c0  unit: seg_00480000  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004824c0
//
// 004824c0  6aff                 push -1
// 004824c2  68f8827400           push 0x7482f8
// 004824c7  64a100000000         mov eax, dword ptr fs:[0]
// 004824cd  50                   push eax
// 004824ce  83ec48               sub esp, 0x48
// 004824d1  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004824d6  33c4                 xor eax, esp
// 004824d8  50                   push eax
// 004824d9  8d44244c             lea eax, [esp + 0x4c]
// 004824dd  64a300000000         mov dword ptr fs:[0], eax
// 004824e3  d9ee                 fldz 
// 004824e5  c744244400000000     mov dword ptr [esp + 0x44], 0
// 004824ed  d9542420             fst dword ptr [esp + 0x20]
// 004824f1  d954241c             fst dword ptr [esp + 0x1c]
// 004824f5  d9542418             fst dword ptr [esp + 0x18]
// 004824f9  d9542414             fst dword ptr [esp + 0x14]
// 004824fd  d9542430             fst dword ptr [esp + 0x30]
// 00482501  d954242c             fst dword ptr [esp + 0x2c]
// 00482505  d9542428             fst dword ptr [esp + 0x28]
// 00482509  d9542424             fst dword ptr [esp + 0x24]
// 0048250d  d9542440             fst dword ptr [esp + 0x40]
// 00482511  d954243c             fst dword ptr [esp + 0x3c]
// 00482515  d9542438             fst dword ptr [esp + 0x38]
// 00482519  d9542434             fst dword ptr [esp + 0x34]
// 0048251d  d9442460             fld dword ptr [esp + 0x60]
// 00482521  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00482525  d95c2404             fstp dword ptr [esp + 4]
// 00482529  8d442404             lea eax, [esp + 4]
// 0048252d  50                   push eax
// 0048252e  d954240c             fst dword ptr [esp + 0xc]
// 00482532  52                   push edx
// 00482533  d9542414             fst dword ptr [esp + 0x14]
// 00482537  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0048253f  d95c2418             fstp dword ptr [esp + 0x18]
// 00482543  c744245006140000     mov dword ptr [esp + 0x50], 0x1406
// 0048254b  e800f7ffff           call 0x481c50
// 00482550  8b442444             mov eax, dword ptr [esp + 0x44]
// 00482554  85c0                 test eax, eax
// 00482556  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 0048255e  7427                 je 0x482587
// 00482560  83c004               add eax, 4
// 00482563  50                   push eax
// 00482564  ff15a8d27700         call dword ptr [0x77d2a8]
// 0048256a  85c0                 test eax, eax
// 0048256c  7519                 jne 0x482587
// 0048256e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00482572  e8490efeff           call 0x4633c0
// 00482577  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0048257b  85c9                 test ecx, ecx
// 0048257d  7408                 je 0x482587
// 0048257f  8b01                 mov eax, dword ptr [ecx]
// 00482581  8b10                 mov edx, dword ptr [eax]
// 00482583  6a01                 push 1
// 00482585  ffd2                 call edx
// 00482587  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0048258b  64890d00000000       mov dword ptr fs:[0], ecx
// 00482592  59                   pop ecx
// 00482593  83c454               add esp, 0x54
// 00482596  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp

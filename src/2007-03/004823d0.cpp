// roc 2007-03 004823d0  unit: seg_00480000  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004823d0
//
// 004823d0  6aff                 push -1
// 004823d2  68f8827400           push 0x7482f8
// 004823d7  64a100000000         mov eax, dword ptr fs:[0]
// 004823dd  50                   push eax
// 004823de  83ec48               sub esp, 0x48
// 004823e1  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004823e6  33c4                 xor eax, esp
// 004823e8  50                   push eax
// 004823e9  8d44244c             lea eax, [esp + 0x4c]
// 004823ed  64a300000000         mov dword ptr fs:[0], eax
// 004823f3  d9ee                 fldz 
// 004823f5  c744244400000000     mov dword ptr [esp + 0x44], 0
// 004823fd  d9542420             fst dword ptr [esp + 0x20]
// 00482401  d954241c             fst dword ptr [esp + 0x1c]
// 00482405  d9542418             fst dword ptr [esp + 0x18]
// 00482409  d9542414             fst dword ptr [esp + 0x14]
// 0048240d  d9542430             fst dword ptr [esp + 0x30]
// 00482411  d954242c             fst dword ptr [esp + 0x2c]
// 00482415  d9542428             fst dword ptr [esp + 0x28]
// 00482419  d9542424             fst dword ptr [esp + 0x24]
// 0048241d  d9542440             fst dword ptr [esp + 0x40]
// 00482421  d954243c             fst dword ptr [esp + 0x3c]
// 00482425  d9542438             fst dword ptr [esp + 0x38]
// 00482429  d95c2434             fstp dword ptr [esp + 0x34]
// 0048242d  8b442460             mov eax, dword ptr [esp + 0x60]
// 00482431  d900                 fld dword ptr [eax]
// 00482433  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00482437  d95c2404             fstp dword ptr [esp + 4]
// 0048243b  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00482443  d94004               fld dword ptr [eax + 4]
// 00482446  c7442448528b0000     mov dword ptr [esp + 0x48], 0x8b52
// 0048244e  d95c2408             fstp dword ptr [esp + 8]
// 00482452  d94008               fld dword ptr [eax + 8]
// 00482455  d95c240c             fstp dword ptr [esp + 0xc]
// 00482459  d9400c               fld dword ptr [eax + 0xc]
// 0048245c  8d442404             lea eax, [esp + 4]
// 00482460  50                   push eax
// 00482461  d95c2414             fstp dword ptr [esp + 0x14]
// 00482465  52                   push edx
// 00482466  e8e5f7ffff           call 0x481c50
// 0048246b  8b442444             mov eax, dword ptr [esp + 0x44]
// 0048246f  85c0                 test eax, eax
// 00482471  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00482479  7427                 je 0x4824a2
// 0048247b  83c004               add eax, 4
// 0048247e  50                   push eax
// 0048247f  ff15a8d27700         call dword ptr [0x77d2a8]
// 00482485  85c0                 test eax, eax
// 00482487  7519                 jne 0x4824a2
// 00482489  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0048248d  e82e0ffeff           call 0x4633c0
// 00482492  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00482496  85c9                 test ecx, ecx
// 00482498  7408                 je 0x4824a2
// 0048249a  8b01                 mov eax, dword ptr [ecx]
// 0048249c  8b10                 mov edx, dword ptr [eax]
// 0048249e  6a01                 push 1
// 004824a0  ffd2                 call edx
// 004824a2  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004824a6  64890d00000000       mov dword ptr fs:[0], ecx
// 004824ad  59                   pop ecx
// 004824ae  83c454               add esp, 0x54
// 004824b1  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVVector4@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp

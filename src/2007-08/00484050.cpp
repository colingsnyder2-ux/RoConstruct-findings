// roc 2007-08 00484050  unit: G3D::Shader  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00484050
//
// 00484050  6aff                 push -1
// 00484052  68e8617400           push 0x7461e8
// 00484057  64a100000000         mov eax, dword ptr fs:[0]
// 0048405d  50                   push eax
// 0048405e  83ec48               sub esp, 0x48
// 00484061  a188518b00           mov eax, dword ptr [0x8b5188]
// 00484066  33c4                 xor eax, esp
// 00484068  50                   push eax
// 00484069  8d44244c             lea eax, [esp + 0x4c]
// 0048406d  64a300000000         mov dword ptr fs:[0], eax
// 00484073  d9ee                 fldz 
// 00484075  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0048407d  d9542420             fst dword ptr [esp + 0x20]
// 00484081  d954241c             fst dword ptr [esp + 0x1c]
// 00484085  d9542418             fst dword ptr [esp + 0x18]
// 00484089  d9542414             fst dword ptr [esp + 0x14]
// 0048408d  d9542430             fst dword ptr [esp + 0x30]
// 00484091  d954242c             fst dword ptr [esp + 0x2c]
// 00484095  d9542428             fst dword ptr [esp + 0x28]
// 00484099  d9542424             fst dword ptr [esp + 0x24]
// 0048409d  d9542440             fst dword ptr [esp + 0x40]
// 004840a1  d954243c             fst dword ptr [esp + 0x3c]
// 004840a5  d9542438             fst dword ptr [esp + 0x38]
// 004840a9  d9542434             fst dword ptr [esp + 0x34]
// 004840ad  d9442460             fld dword ptr [esp + 0x60]
// 004840b1  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004840b5  d95c2404             fstp dword ptr [esp + 4]
// 004840b9  8d442404             lea eax, [esp + 4]
// 004840bd  50                   push eax
// 004840be  d954240c             fst dword ptr [esp + 0xc]
// 004840c2  52                   push edx
// 004840c3  d9542414             fst dword ptr [esp + 0x14]
// 004840c7  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 004840cf  d95c2418             fstp dword ptr [esp + 0x18]
// 004840d3  c744245006140000     mov dword ptr [esp + 0x50], 0x1406
// 004840db  e800f7ffff           call 0x4837e0
// 004840e0  8b442444             mov eax, dword ptr [esp + 0x44]
// 004840e4  85c0                 test eax, eax
// 004840e6  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 004840ee  7427                 je 0x484117
// 004840f0  83c004               add eax, 4
// 004840f3  50                   push eax
// 004840f4  ff15e8d27700         call dword ptr [0x77d2e8]
// 004840fa  85c0                 test eax, eax
// 004840fc  7519                 jne 0x484117
// 004840fe  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00484102  e8c93cfdff           call 0x457dd0
// 00484107  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0048410b  85c9                 test ecx, ecx
// 0048410d  7408                 je 0x484117
// 0048410f  8b01                 mov eax, dword ptr [ecx]
// 00484111  8b10                 mov edx, dword ptr [eax]
// 00484113  6a01                 push 1
// 00484115  ffd2                 call edx
// 00484117  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0048411b  64890d00000000       mov dword ptr fs:[0], ecx
// 00484122  59                   pop ecx
// 00484123  83c454               add esp, 0x54
// 00484126  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?set@ArgList@VertexAndPixelShader@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp

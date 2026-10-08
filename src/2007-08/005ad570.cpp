// roc 2007-08 005ad570  unit: RBX::P8Lighting::?$GetSetImpl  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ad570
//
// 005ad570  8bc1                 mov eax, ecx
// 005ad572  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ad576  83ec0c               sub esp, 0xc
// 005ad579  85c9                 test ecx, ecx
// 005ad57b  7405                 je 0x5ad582
// 005ad57d  8d51fc               lea edx, [ecx - 4]
// 005ad580  eb02                 jmp 0x5ad584
// 005ad582  33d2                 xor edx, edx
// 005ad584  8d0c24               lea ecx, [esp]
// 005ad587  51                   push ecx
// 005ad588  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005ad58b  03ca                 add ecx, edx
// 005ad58d  8b5008               mov edx, dword ptr [eax + 8]
// 005ad590  ffd2                 call edx
// 005ad592  d900                 fld dword ptr [eax]
// 005ad594  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ad598  d919                 fstp dword ptr [ecx]
// 005ad59a  d94004               fld dword ptr [eax + 4]
// 005ad59d  d95904               fstp dword ptr [ecx + 4]
// 005ad5a0  d94008               fld dword ptr [eax + 8]
// 005ad5a3  8bc1                 mov eax, ecx
// 005ad5a5  d95908               fstp dword ptr [ecx + 8]
// 005ad5a8  83c40c               add esp, 0xc
// 005ad5ab  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?getValue@?$GetSetImpl@P8Lighting@RBX@@BE?AVColor3@G3D@@XZP812@AEXV34@@Z@?$PropDescriptor@VLighting@RBX@@VColor3@G3D@@@Reflection@RBX@@UBE?AVColor3@G3D@@PBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp

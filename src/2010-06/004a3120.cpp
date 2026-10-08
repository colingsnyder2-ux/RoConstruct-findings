// from server: 100% by auto
// roc 2010-06 004a3120  unit: seg_004a0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a3120
//
// 004a3120  56                   push esi
// 004a3121  8bf1                 mov esi, ecx
// 004a3123  e8f8410b00           call 0x557320
// 004a3128  50                   push eax
// 004a3129  8bce                 mov ecx, esi
// 004a312b  e8402f0b00           call 0x556070
// 004a3130  8b442408             mov eax, dword ptr [esp + 8]
// 004a3134  d900                 fld dword ptr [eax]
// 004a3136  d95e24               fstp dword ptr [esi + 0x24]
// 004a3139  d94004               fld dword ptr [eax + 4]
// 004a313c  d95e28               fstp dword ptr [esi + 0x28]
// 004a313f  d94008               fld dword ptr [eax + 8]
// 004a3142  8bc6                 mov eax, esi
// 004a3144  d95e2c               fstp dword ptr [esi + 0x2c]
// 004a3147  5e                   pop esi
// 004a3148  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??0CoordinateFrame@G3D@@QAE@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp

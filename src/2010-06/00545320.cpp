// roc 2010-06 00545320  unit: RBX::RbxG3D::RenderScene  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00545320
//
// 00545320  6aff                 push -1
// 00545322  68eefd9800           push 0x98fdee
// 00545327  64a100000000         mov eax, dword ptr fs:[0]
// 0054532d  50                   push eax
// 0054532e  64892500000000       mov dword ptr fs:[0], esp
// 00545335  51                   push ecx
// 00545336  56                   push esi
// 00545337  8bf1                 mov esi, ecx
// 00545339  57                   push edi
// 0054533a  33ff                 xor edi, edi
// 0054533c  c7065032a100         mov dword ptr [esi], 0xa13250
// 00545342  897e04               mov dword ptr [esi + 4], edi
// 00545345  89742408             mov dword ptr [esp + 8], esi
// 00545349  897e08               mov dword ptr [esi + 8], edi
// 0054534c  897c2414             mov dword ptr [esp + 0x14], edi
// 00545350  c706f4f2a100         mov dword ptr [esi], 0xa1f2f4
// 00545356  e8b54a0100           call 0x559e10
// 0054535b  d900                 fld dword ptr [eax]
// 0054535d  d95e0c               fstp dword ptr [esi + 0xc]
// 00545360  897e30               mov dword ptr [esi + 0x30], edi
// 00545363  d94004               fld dword ptr [eax + 4]
// 00545366  d95e10               fstp dword ptr [esi + 0x10]
// 00545369  d94008               fld dword ptr [eax + 8]
// 0054536c  d95e14               fstp dword ptr [esi + 0x14]
// 0054536f  897e44               mov dword ptr [esi + 0x44], edi
// 00545372  897e48               mov dword ptr [esi + 0x48], edi
// 00545375  897e40               mov dword ptr [esi + 0x40], edi
// 00545378  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054537c  897e50               mov dword ptr [esi + 0x50], edi
// 0054537f  897e54               mov dword ptr [esi + 0x54], edi
// 00545382  897e4c               mov dword ptr [esi + 0x4c], edi
// 00545385  5f                   pop edi
// 00545386  8bc6                 mov eax, esi
// 00545388  5e                   pop esi
// 00545389  64890d00000000       mov dword ptr fs:[0], ecx
// 00545390  83c410               add esp, 0x10
// 00545393  c3                   ret 
// library rbxgs-render/RenderScene.cpp (function ??0Lighting@G3D@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp

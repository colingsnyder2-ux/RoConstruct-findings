// roc 2009-12 005e0c90  unit: RBX::RbxG3D::RenderScene  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e0c90
//
// 005e0c90  51                   push ecx
// 005e0c91  83792400             cmp dword ptr [ecx + 0x24], 0
// 005e0c95  56                   push esi
// 005e0c96  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e0c9a  c744240400000000     mov dword ptr [esp + 4], 0
// 005e0ca2  c70600000000         mov dword ptr [esi], 0
// 005e0ca8  7512                 jne 0x5e0cbc
// 005e0caa  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 005e0cad  50                   push eax
// 005e0cae  8bce                 mov ecx, esi
// 005e0cb0  e8bbaee6ff           call 0x44bb70
// 005e0cb5  8bc6                 mov eax, esi
// 005e0cb7  5e                   pop esi
// 005e0cb8  59                   pop ecx
// 005e0cb9  c20400               ret 4
// 005e0cbc  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 005e0cbf  51                   push ecx
// 005e0cc0  8bce                 mov ecx, esi
// 005e0cc2  e8a9aee6ff           call 0x44bb70
// 005e0cc7  8bc6                 mov eax, esi
// 005e0cc9  5e                   pop esi
// 005e0cca  59                   pop ecx
// 005e0ccb  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?getEnvironmentMap@Sky@G3D@@QBE?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp

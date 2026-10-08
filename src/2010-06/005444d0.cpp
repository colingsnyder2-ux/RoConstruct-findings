// roc 2010-06 005444d0  unit: RBX::RbxG3D::RenderScene  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005444d0
//
// 005444d0  51                   push ecx
// 005444d1  83792400             cmp dword ptr [ecx + 0x24], 0
// 005444d5  56                   push esi
// 005444d6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005444da  c744240400000000     mov dword ptr [esp + 4], 0
// 005444e2  c70600000000         mov dword ptr [esi], 0
// 005444e8  7512                 jne 0x5444fc
// 005444ea  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 005444ed  50                   push eax
// 005444ee  8bce                 mov ecx, esi
// 005444f0  e82b28f4ff           call 0x486d20
// 005444f5  8bc6                 mov eax, esi
// 005444f7  5e                   pop esi
// 005444f8  59                   pop ecx
// 005444f9  c20400               ret 4
// 005444fc  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 005444ff  51                   push ecx
// 00544500  8bce                 mov ecx, esi
// 00544502  e81928f4ff           call 0x486d20
// 00544507  8bc6                 mov eax, esi
// 00544509  5e                   pop esi
// 0054450a  59                   pop ecx
// 0054450b  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?getEnvironmentMap@Sky@G3D@@QBE?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp

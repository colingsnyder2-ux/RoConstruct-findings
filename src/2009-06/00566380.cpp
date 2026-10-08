// roc 2009-06 00566380  unit: RBX::RbxG3D::RenderScene  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00566380
//
// 00566380  51                   push ecx
// 00566381  83792400             cmp dword ptr [ecx + 0x24], 0
// 00566385  56                   push esi
// 00566386  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056638a  c744240400000000     mov dword ptr [esp + 4], 0
// 00566392  c70600000000         mov dword ptr [esi], 0
// 00566398  7512                 jne 0x5663ac
// 0056639a  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0056639d  50                   push eax
// 0056639e  8bce                 mov ecx, esi
// 005663a0  e8bb94f3ff           call 0x49f860
// 005663a5  8bc6                 mov eax, esi
// 005663a7  5e                   pop esi
// 005663a8  59                   pop ecx
// 005663a9  c20400               ret 4
// 005663ac  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 005663af  51                   push ecx
// 005663b0  8bce                 mov ecx, esi
// 005663b2  e8a994f3ff           call 0x49f860
// 005663b7  8bc6                 mov eax, esi
// 005663b9  5e                   pop esi
// 005663ba  59                   pop ecx
// 005663bb  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?getEnvironmentMap@Sky@G3D@@QBE?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp

// roc 2007-03 004eba70  unit: seg_004e0000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004eba70
//
// 004eba70  51                   push ecx
// 004eba71  83792400             cmp dword ptr [ecx + 0x24], 0
// 004eba75  56                   push esi
// 004eba76  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004eba7a  c744240400000000     mov dword ptr [esp + 4], 0
// 004eba82  c70600000000         mov dword ptr [esi], 0
// 004eba88  7512                 jne 0x4eba9c
// 004eba8a  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 004eba8d  50                   push eax
// 004eba8e  8bce                 mov ecx, esi
// 004eba90  e8fb95f8ff           call 0x475090
// 004eba95  8bc6                 mov eax, esi
// 004eba97  5e                   pop esi
// 004eba98  59                   pop ecx
// 004eba99  c20400               ret 4
// 004eba9c  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 004eba9f  51                   push ecx
// 004ebaa0  8bce                 mov ecx, esi
// 004ebaa2  e8e995f8ff           call 0x475090
// 004ebaa7  8bc6                 mov eax, esi
// 004ebaa9  5e                   pop esi
// 004ebaaa  59                   pop ecx
// 004ebaab  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?getEnvironmentMap@Sky@G3D@@QBE?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp

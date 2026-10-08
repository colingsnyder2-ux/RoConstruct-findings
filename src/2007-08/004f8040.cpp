// roc 2007-08 004f8040  unit: G3D::Sphere  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f8040
//
// 004f8040  51                   push ecx
// 004f8041  83792400             cmp dword ptr [ecx + 0x24], 0
// 004f8045  56                   push esi
// 004f8046  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f804a  c744240400000000     mov dword ptr [esp + 4], 0
// 004f8052  c70600000000         mov dword ptr [esi], 0
// 004f8058  7512                 jne 0x4f806c
// 004f805a  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 004f805d  50                   push eax
// 004f805e  8bce                 mov ecx, esi
// 004f8060  e80bcff7ff           call 0x474f70
// 004f8065  8bc6                 mov eax, esi
// 004f8067  5e                   pop esi
// 004f8068  59                   pop ecx
// 004f8069  c20400               ret 4
// 004f806c  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 004f806f  51                   push ecx
// 004f8070  8bce                 mov ecx, esi
// 004f8072  e8f9cef7ff           call 0x474f70
// 004f8077  8bc6                 mov eax, esi
// 004f8079  5e                   pop esi
// 004f807a  59                   pop ecx
// 004f807b  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?getEnvironmentMap@Sky@G3D@@QBE?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp

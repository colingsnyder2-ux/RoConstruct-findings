// roc 2009-06 004a0b30  unit: G3D::VARArea  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a0b30
//
// 004a0b30  51                   push ecx
// 004a0b31  8b81e8030000         mov eax, dword ptr [ecx + 0x3e8]
// 004a0b37  85c0                 test eax, eax
// 004a0b39  750b                 jne 0x4a0b46
// 004a0b3b  8b09                 mov ecx, dword ptr [ecx]
// 004a0b3d  8b01                 mov eax, dword ptr [ecx]
// 004a0b3f  8b5008               mov edx, dword ptr [eax + 8]
// 004a0b42  ffd2                 call edx
// 004a0b44  eb03                 jmp 0x4a0b49
// 004a0b46  8b4040               mov eax, dword ptr [eax + 0x40]
// 004a0b49  2b44240c             sub eax, dword ptr [esp + 0xc]
// 004a0b4d  8b542408             mov edx, dword ptr [esp + 8]
// 004a0b51  8d0c24               lea ecx, [esp]
// 004a0b54  51                   push ecx
// 004a0b55  6806140000           push 0x1406
// 004a0b5a  6802190000           push 0x1902
// 004a0b5f  6a01                 push 1
// 004a0b61  6a01                 push 1
// 004a0b63  48                   dec eax
// 004a0b64  50                   push eax
// 004a0b65  52                   push edx
// 004a0b66  ff15fcea8900         call dword ptr [0x89eafc]
// 004a0b6c  d90424               fld dword ptr [esp]
// 004a0b6f  59                   pop ecx
// 004a0b70  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getDepthBufferValue@RenderDevice@G3D@@QBENHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp

// roc 2009-12 004cd310  unit: G3D::VARArea  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cd310
//
// 004cd310  51                   push ecx
// 004cd311  8b81e8030000         mov eax, dword ptr [ecx + 0x3e8]
// 004cd317  85c0                 test eax, eax
// 004cd319  750b                 jne 0x4cd326
// 004cd31b  8b09                 mov ecx, dword ptr [ecx]
// 004cd31d  8b01                 mov eax, dword ptr [ecx]
// 004cd31f  8b5008               mov edx, dword ptr [eax + 8]
// 004cd322  ffd2                 call edx
// 004cd324  eb03                 jmp 0x4cd329
// 004cd326  8b4040               mov eax, dword ptr [eax + 0x40]
// 004cd329  2b44240c             sub eax, dword ptr [esp + 0xc]
// 004cd32d  8b542408             mov edx, dword ptr [esp + 8]
// 004cd331  8d0c24               lea ecx, [esp]
// 004cd334  51                   push ecx
// 004cd335  6806140000           push 0x1406
// 004cd33a  6802190000           push 0x1902
// 004cd33f  6a01                 push 1
// 004cd341  6a01                 push 1
// 004cd343  48                   dec eax
// 004cd344  50                   push eax
// 004cd345  52                   push edx
// 004cd346  ff15f4ba9800         call dword ptr [0x98baf4]
// 004cd34c  d90424               fld dword ptr [esp]
// 004cd34f  59                   pop ecx
// 004cd350  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getDepthBufferValue@RenderDevice@G3D@@QBENHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp

// roc 2007-03 00484590  unit: seg_00480000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00484590
//
// 00484590  53                   push ebx
// 00484591  56                   push esi
// 00484592  8bf1                 mov esi, ecx
// 00484594  33db                 xor ebx, ebx
// 00484596  395e04               cmp dword ptr [esi + 4], ebx
// 00484599  7e34                 jle 0x4845cf
// 0048459b  57                   push edi
// 0048459c  33ff                 xor edi, edi
// 0048459e  8bff                 mov edi, edi
// 004845a0  8b06                 mov eax, dword ptr [esi]
// 004845a2  03c7                 add eax, edi
// 004845a4  83782401             cmp dword ptr [eax + 0x24], 1
// 004845a8  7519                 jne 0x4845c3
// 004845aa  83782003             cmp dword ptr [eax + 0x20], 3
// 004845ae  7513                 jne 0x4845c3
// 004845b0  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004845b3  8d4828               lea ecx, [eax + 0x28]
// 004845b6  8b442410             mov eax, dword ptr [esp + 0x10]
// 004845ba  51                   push ecx
// 004845bb  52                   push edx
// 004845bc  50                   push eax
// 004845bd  ff1500808b00         call dword ptr [0x8b8000]
// 004845c3  83c301               add ebx, 1
// 004845c6  83c738               add edi, 0x38
// 004845c9  3b5e04               cmp ebx, dword ptr [esi + 4]
// 004845cc  7cd2                 jl 0x4845a0
// 004845ce  5f                   pop edi
// 004845cf  5e                   pop esi
// 004845d0  5b                   pop ebx
// 004845d1  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\GPUProgram.cpp (function ?nvBind@BindingTable@GPUProgram@G3D@@QBEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GPUProgram.cpp

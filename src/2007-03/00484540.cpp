// roc 2007-03 00484540  unit: seg_00480000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00484540
//
// 00484540  53                   push ebx
// 00484541  56                   push esi
// 00484542  8bf1                 mov esi, ecx
// 00484544  33db                 xor ebx, ebx
// 00484546  395e04               cmp dword ptr [esi + 4], ebx
// 00484549  7e34                 jle 0x48457f
// 0048454b  57                   push edi
// 0048454c  33ff                 xor edi, edi
// 0048454e  8bff                 mov edi, edi
// 00484550  8b06                 mov eax, dword ptr [esi]
// 00484552  03c7                 add eax, edi
// 00484554  83782401             cmp dword ptr [eax + 0x24], 1
// 00484558  7519                 jne 0x484573
// 0048455a  83782003             cmp dword ptr [eax + 0x20], 3
// 0048455e  7513                 jne 0x484573
// 00484560  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00484563  8d4828               lea ecx, [eax + 0x28]
// 00484566  8b442410             mov eax, dword ptr [esp + 0x10]
// 0048456a  51                   push ecx
// 0048456b  52                   push edx
// 0048456c  50                   push eax
// 0048456d  ff1520808b00         call dword ptr [0x8b8020]
// 00484573  83c301               add ebx, 1
// 00484576  83c738               add edi, 0x38
// 00484579  3b5e04               cmp ebx, dword ptr [esi + 4]
// 0048457c  7cd2                 jl 0x484550
// 0048457e  5f                   pop edi
// 0048457f  5e                   pop esi
// 00484580  5b                   pop ebx
// 00484581  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\GPUProgram.cpp (function ?nvBind@BindingTable@GPUProgram@G3D@@QBEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GPUProgram.cpp

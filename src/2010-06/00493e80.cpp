// roc 2010-06 00493e80  unit: seg_00490000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00493e80
//
// 00493e80  51                   push ecx
// 00493e81  8b81e8030000         mov eax, dword ptr [ecx + 0x3e8]
// 00493e87  85c0                 test eax, eax
// 00493e89  750b                 jne 0x493e96
// 00493e8b  8b09                 mov ecx, dword ptr [ecx]
// 00493e8d  8b01                 mov eax, dword ptr [ecx]
// 00493e8f  8b5008               mov edx, dword ptr [eax + 8]
// 00493e92  ffd2                 call edx
// 00493e94  eb03                 jmp 0x493e99
// 00493e96  8b4040               mov eax, dword ptr [eax + 0x40]
// 00493e99  2b44240c             sub eax, dword ptr [esp + 0xc]
// 00493e9d  8b542408             mov edx, dword ptr [esp + 8]
// 00493ea1  8d0c24               lea ecx, [esp]
// 00493ea4  51                   push ecx
// 00493ea5  6806140000           push 0x1406
// 00493eaa  6802190000           push 0x1902
// 00493eaf  6a01                 push 1
// 00493eb1  6a01                 push 1
// 00493eb3  48                   dec eax
// 00493eb4  50                   push eax
// 00493eb5  52                   push edx
// 00493eb6  ff1514ab9e00         call dword ptr [0x9eab14]
// 00493ebc  d90424               fld dword ptr [esp]
// 00493ebf  59                   pop ecx
// 00493ec0  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getDepthBufferValue@RenderDevice@G3D@@QBENHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp

// roc 2008-06 00476870  unit: G3D::VARArea  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476870
//
// 00476870  83f807               cmp eax, 7
// 00476873  7731                 ja 0x4768a6
// 00476875  ff2485ac684700       jmp dword ptr [eax*4 + 0x4768ac]
// 0047687c  b801000000           mov eax, 1
// 00476881  c3                   ret 
// 00476882  b803000000           mov eax, 3
// 00476887  c3                   ret 
// 00476888  b804000000           mov eax, 4
// 0047688d  c3                   ret 
// 0047688e  b805000000           mov eax, 5
// 00476893  c3                   ret 
// 00476894  b806000000           mov eax, 6
// 00476899  c3                   ret 
// 0047689a  b807000000           mov eax, 7
// 0047689f  c3                   ret 
// 004768a0  b808000000           mov eax, 8
// 004768a5  c3                   ret 
// 004768a6  33c0                 xor eax, eax
// 004768a8  c3                   ret 
// 004768a9  8d4900               lea ecx, [ecx]
// 004768ac  7c68                 jl 0x476916
// 004768ae  47                   inc edi
// 004768af  008268470088         add byte ptr [edx - 0x77ffb898], al
// 004768b5  6847008e68           push 0x688e0047
// 004768ba  47                   inc edi
// 004768bb  00946847009a68       add byte ptr [eax + ebp*2 + 0x689a0047], dl
// 004768c2  47                   inc edi
// 004768c3  00a0684700a6         add byte ptr [eax - 0x59ffb898], ah
// library g3d-6.09-rbx2008/GLG3Dcpp\RenderDevice.cpp (function ?primitiveToGLenum@G3D@@YAIW4Primitive@RenderDevice@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/RenderDevice.cpp

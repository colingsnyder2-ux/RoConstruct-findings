// roc 2008-06 00476b50  unit: G3D::VARArea  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476b50
//
// 00476b50  8b442404             mov eax, dword ptr [esp + 4]
// 00476b54  ba01000000           mov edx, 1
// 00476b59  015178               add dword ptr [ecx + 0x78], edx
// 00476b5c  83f803               cmp eax, 3
// 00476b5f  7453                 je 0x476bb4
// 00476b61  398158040000         cmp dword ptr [ecx + 0x458], eax
// 00476b67  744b                 je 0x476bb4
// 00476b69  015170               add dword ptr [ecx + 0x70], edx
// 00476b6c  898158040000         mov dword ptr [ecx + 0x458], eax
// 00476b72  83f803               cmp eax, 3
// 00476b75  773d                 ja 0x476bb4
// 00476b77  ff2485b86b4700       jmp dword ptr [eax*4 + 0x476bb8]
// 00476b7e  68021b0000           push 0x1b02
// 00476b83  6808040000           push 0x408
// 00476b88  ff158c298000         call dword ptr [0x80298c]
// 00476b8e  c20400               ret 4
// 00476b91  68011b0000           push 0x1b01
// 00476b96  6808040000           push 0x408
// 00476b9b  ff158c298000         call dword ptr [0x80298c]
// 00476ba1  c20400               ret 4
// 00476ba4  68001b0000           push 0x1b00
// 00476ba9  6808040000           push 0x408
// 00476bae  ff158c298000         call dword ptr [0x80298c]
// 00476bb4  c20400               ret 4
// 00476bb7  90                   nop 
// 00476bb8  7e6b                 jle 0x476c25
// 00476bba  47                   inc edi
// 00476bbb  00916b4700a4         add byte ptr [ecx - 0x5bffb895], dl
// 00476bc1  6b4700b4             imul eax, dword ptr [edi], -0x4c
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setRenderMode@RenderDevice@G3D@@QAEXW4RenderMode@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp

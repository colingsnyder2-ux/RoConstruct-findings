// roc 2007-08 004f8ac0  unit: G3D::Sphere  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f8ac0
//
// 004f8ac0  51                   push ecx
// 004f8ac1  55                   push ebp
// 004f8ac2  57                   push edi
// 004f8ac3  8bf9                 mov edi, ecx
// 004f8ac5  33ed                 xor ebp, ebp
// 004f8ac7  396f04               cmp dword ptr [edi + 4], ebp
// 004f8aca  7e61                 jle 0x4f8b2d
// 004f8acc  53                   push ebx
// 004f8acd  56                   push esi
// 004f8ace  33db                 xor ebx, ebx
// 004f8ad0  8b37                 mov esi, dword ptr [edi]
// 004f8ad2  03f3                 add esi, ebx
// 004f8ad4  837e3400             cmp dword ptr [esi + 0x34], 0
// 004f8ad8  89742410             mov dword ptr [esp + 0x10], esi
// 004f8adc  7442                 je 0x4f8b20
// 004f8ade  8b4634               mov eax, dword ptr [esi + 0x34]
// 004f8ae1  d9ee                 fldz 
// 004f8ae3  d85824               fcomp dword ptr [eax + 0x24]
// 004f8ae6  dfe0                 fnstsw ax
// 004f8ae8  f6c405               test ah, 5
// 004f8aeb  7a0a                 jp 0x4f8af7
// 004f8aed  8d4c2410             lea ecx, [esp + 0x10]
// 004f8af1  51                   push ecx
// 004f8af2  8d4f24               lea ecx, [edi + 0x24]
// 004f8af5  eb24                 jmp 0x4f8b1b
// 004f8af7  8d542410             lea edx, [esp + 0x10]
// 004f8afb  52                   push edx
// 004f8afc  8d4f0c               lea ecx, [edi + 0xc]
// 004f8aff  e84cfbffff           call 0x4f8650
// 004f8b04  d9ee                 fldz 
// 004f8b06  8b4634               mov eax, dword ptr [esi + 0x34]
// 004f8b09  d85820               fcomp dword ptr [eax + 0x20]
// 004f8b0c  dfe0                 fnstsw ax
// 004f8b0e  f6c405               test ah, 5
// 004f8b11  7a0d                 jp 0x4f8b20
// 004f8b13  8d4c2410             lea ecx, [esp + 0x10]
// 004f8b17  51                   push ecx
// 004f8b18  8d4f18               lea ecx, [edi + 0x18]
// 004f8b1b  e830fbffff           call 0x4f8650
// 004f8b20  83c501               add ebp, 1
// 004f8b23  83c344               add ebx, 0x44
// 004f8b26  3b6f04               cmp ebp, dword ptr [edi + 4]
// 004f8b29  7ca5                 jl 0x4f8ad0
// 004f8b2b  5e                   pop esi
// 004f8b2c  5b                   pop ebx
// 004f8b2d  5f                   pop edi
// 004f8b2e  5d                   pop ebp
// 004f8b2f  59                   pop ecx
// 004f8b30  c3                   ret 
// library rbxgs-render/RenderScene.cpp (function ?classifyProxies@RenderScene@Render@RBX@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp

// roc 2009-06 004a0510  unit: G3D::VARArea  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a0510
//
// 004a0510  83ec34               sub esp, 0x34
// 004a0513  8b542438             mov edx, dword ptr [esp + 0x38]
// 004a0517  53                   push ebx
// 004a0518  55                   push ebp
// 004a0519  8be9                 mov ebp, ecx
// 004a051b  b801000000           mov eax, 1
// 004a0520  014574               add dword ptr [ebp + 0x74], eax
// 004a0523  01456c               add dword ptr [ebp + 0x6c], eax
// 004a0526  888578080000         mov byte ptr [ebp + 0x878], al
// 004a052c  56                   push esi
// 004a052d  8d85d8070000         lea eax, [ebp + 0x7d8]
// 004a0533  57                   push edi
// 004a0534  8bf8                 mov edi, eax
// 004a0536  8bf2                 mov esi, edx
// 004a0538  b909000000           mov ecx, 9
// 004a053d  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004a053f  d94224               fld dword ptr [edx + 0x24]
// 004a0542  d95824               fstp dword ptr [eax + 0x24]
// 004a0545  d94228               fld dword ptr [edx + 0x28]
// 004a0548  d95828               fstp dword ptr [eax + 0x28]
// 004a054b  d9422c               fld dword ptr [edx + 0x2c]
// 004a054e  d9582c               fstp dword ptr [eax + 0x2c]
// 004a0551  8d442414             lea eax, [esp + 0x14]
// 004a0555  50                   push eax
// 004a0556  8bca                 mov ecx, edx
// 004a0558  e8b3f3ffff           call 0x49f910
// 004a055d  8d9d08080000         lea ebx, [ebp + 0x808]
// 004a0563  8bf0                 mov esi, eax
// 004a0565  b909000000           mov ecx, 9
// 004a056a  8bfb                 mov edi, ebx
// 004a056c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004a056e  d94024               fld dword ptr [eax + 0x24]
// 004a0571  d95b24               fstp dword ptr [ebx + 0x24]
// 004a0574  d94028               fld dword ptr [eax + 0x28]
// 004a0577  d95b28               fstp dword ptr [ebx + 0x28]
// 004a057a  d9402c               fld dword ptr [eax + 0x2c]
// 004a057d  d95b2c               fstp dword ptr [ebx + 0x2c]
// 004a0580  6800170000           push 0x1700
// 004a0585  ff1544eb8900         call dword ptr [0x89eb44]
// 004a058b  8d8da8070000         lea ecx, [ebp + 0x7a8]
// 004a0591  51                   push ecx
// 004a0592  8d542418             lea edx, [esp + 0x18]
// 004a0596  52                   push edx
// 004a0597  8bcb                 mov ecx, ebx
// 004a0599  e8d2d7ffff           call 0x49dd70
// 004a059e  50                   push eax
// 004a059f  e89ccd0000           call 0x4ad340
// 004a05a4  8d8520010000         lea eax, [ebp + 0x120]
// 004a05aa  8944244c             mov dword ptr [esp + 0x4c], eax
// 004a05ae  b8603c0000           mov eax, 0x3c60
// 004a05b3  2bc5                 sub eax, ebp
// 004a05b5  bf60fcffff           mov edi, 0xfffffc60
// 004a05ba  83c404               add esp, 4
// 004a05bd  8db5a0030000         lea esi, [ebp + 0x3a0]
// 004a05c3  89442410             mov dword ptr [esp + 0x10], eax
// 004a05c7  2bfd                 sub edi, ebp
// 004a05c9  8da42400000000       lea esp, [esp]
// 004a05d0  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004a05d4  8a1e                 mov bl, byte ptr [esi]
// 004a05d6  6a01                 push 1
// 004a05d8  51                   push ecx
// 004a05d9  8d1437               lea edx, [edi + esi]
// 004a05dc  52                   push edx
// 004a05dd  8bcd                 mov ecx, ebp
// 004a05df  e85cf0ffff           call 0x49f640
// 004a05e4  84db                 test bl, bl
// 004a05e6  7526                 jne 0x4a060e
// 004a05e8  bb01000000           mov ebx, 1
// 004a05ed  015d78               add dword ptr [ebp + 0x78], ebx
// 004a05f0  803e00               cmp byte ptr [esi], 0
// 004a05f3  7416                 je 0x4a060b
// 004a05f5  8b442410             mov eax, dword ptr [esp + 0x10]
// 004a05f9  03c6                 add eax, esi
// 004a05fb  c60600               mov byte ptr [esi], 0
// 004a05fe  50                   push eax
// 004a05ff  889dbd030000         mov byte ptr [ebp + 0x3bd], bl
// 004a0605  ff15b8eb8900         call dword ptr [0x89ebb8]
// 004a060b  015d70               add dword ptr [ebp + 0x70], ebx
// 004a060e  8344244850           add dword ptr [esp + 0x48], 0x50
// 004a0613  46                   inc esi
// 004a0614  8d0c37               lea ecx, [edi + esi]
// 004a0617  83f908               cmp ecx, 8
// 004a061a  7cb4                 jl 0x4a05d0
// 004a061c  5f                   pop edi
// 004a061d  5e                   pop esi
// 004a061e  5d                   pop ebp
// 004a061f  5b                   pop ebx
// 004a0620  83c434               add esp, 0x34
// 004a0623  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setCameraToWorldMatrix@RenderDevice@G3D@@QAEXABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp

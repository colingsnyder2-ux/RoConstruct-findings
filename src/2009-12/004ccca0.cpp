// roc 2009-12 004ccca0  unit: G3D::VARArea  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ccca0
//
// 004ccca0  83ec34               sub esp, 0x34
// 004ccca3  8b542438             mov edx, dword ptr [esp + 0x38]
// 004ccca7  53                   push ebx
// 004ccca8  55                   push ebp
// 004ccca9  8be9                 mov ebp, ecx
// 004cccab  b801000000           mov eax, 1
// 004cccb0  014574               add dword ptr [ebp + 0x74], eax
// 004cccb3  01456c               add dword ptr [ebp + 0x6c], eax
// 004cccb6  888578080000         mov byte ptr [ebp + 0x878], al
// 004cccbc  56                   push esi
// 004cccbd  8d85d8070000         lea eax, [ebp + 0x7d8]
// 004cccc3  57                   push edi
// 004cccc4  8bf8                 mov edi, eax
// 004cccc6  8bf2                 mov esi, edx
// 004cccc8  b909000000           mov ecx, 9
// 004ccccd  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004ccccf  d94224               fld dword ptr [edx + 0x24]
// 004cccd2  d95824               fstp dword ptr [eax + 0x24]
// 004cccd5  d94228               fld dword ptr [edx + 0x28]
// 004cccd8  d95828               fstp dword ptr [eax + 0x28]
// 004cccdb  d9422c               fld dword ptr [edx + 0x2c]
// 004cccde  d9582c               fstp dword ptr [eax + 0x2c]
// 004ccce1  8d442414             lea eax, [esp + 0x14]
// 004ccce5  50                   push eax
// 004ccce6  8bca                 mov ecx, edx
// 004ccce8  e85357ffff           call 0x4c2440
// 004ccced  8d9d08080000         lea ebx, [ebp + 0x808]
// 004cccf3  8bf0                 mov esi, eax
// 004cccf5  b909000000           mov ecx, 9
// 004cccfa  8bfb                 mov edi, ebx
// 004cccfc  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004cccfe  d94024               fld dword ptr [eax + 0x24]
// 004ccd01  d95b24               fstp dword ptr [ebx + 0x24]
// 004ccd04  d94028               fld dword ptr [eax + 0x28]
// 004ccd07  d95b28               fstp dword ptr [ebx + 0x28]
// 004ccd0a  d9402c               fld dword ptr [eax + 0x2c]
// 004ccd0d  d95b2c               fstp dword ptr [ebx + 0x2c]
// 004ccd10  6800170000           push 0x1700
// 004ccd15  ff15acba9800         call dword ptr [0x98baac]
// 004ccd1b  8d8da8070000         lea ecx, [ebp + 0x7a8]
// 004ccd21  51                   push ecx
// 004ccd22  8d542418             lea edx, [esp + 0x18]
// 004ccd26  52                   push edx
// 004ccd27  8bcb                 mov ecx, ebx
// 004ccd29  e8b20bfbff           call 0x47d8e0
// 004ccd2e  50                   push eax
// 004ccd2f  e80cd10000           call 0x4d9e40
// 004ccd34  8d8520010000         lea eax, [ebp + 0x120]
// 004ccd3a  8944244c             mov dword ptr [esp + 0x4c], eax
// 004ccd3e  b8603c0000           mov eax, 0x3c60
// 004ccd43  2bc5                 sub eax, ebp
// 004ccd45  bf60fcffff           mov edi, 0xfffffc60
// 004ccd4a  83c404               add esp, 4
// 004ccd4d  8db5a0030000         lea esi, [ebp + 0x3a0]
// 004ccd53  89442410             mov dword ptr [esp + 0x10], eax
// 004ccd57  2bfd                 sub edi, ebp
// 004ccd59  8da42400000000       lea esp, [esp]
// 004ccd60  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004ccd64  8a1e                 mov bl, byte ptr [esi]
// 004ccd66  6a01                 push 1
// 004ccd68  51                   push ecx
// 004ccd69  8d1437               lea edx, [edi + esi]
// 004ccd6c  52                   push edx
// 004ccd6d  8bcd                 mov ecx, ebp
// 004ccd6f  e83cefffff           call 0x4cbcb0
// 004ccd74  84db                 test bl, bl
// 004ccd76  7526                 jne 0x4ccd9e
// 004ccd78  bb01000000           mov ebx, 1
// 004ccd7d  015d78               add dword ptr [ebp + 0x78], ebx
// 004ccd80  803e00               cmp byte ptr [esi], 0
// 004ccd83  7416                 je 0x4ccd9b
// 004ccd85  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ccd89  03c6                 add eax, esi
// 004ccd8b  c60600               mov byte ptr [esi], 0
// 004ccd8e  50                   push eax
// 004ccd8f  889dbd030000         mov byte ptr [ebp + 0x3bd], bl
// 004ccd95  ff15dcbb9800         call dword ptr [0x98bbdc]
// 004ccd9b  015d70               add dword ptr [ebp + 0x70], ebx
// 004ccd9e  8344244850           add dword ptr [esp + 0x48], 0x50
// 004ccda3  46                   inc esi
// 004ccda4  8d0c37               lea ecx, [edi + esi]
// 004ccda7  83f908               cmp ecx, 8
// 004ccdaa  7cb4                 jl 0x4ccd60
// 004ccdac  5f                   pop edi
// 004ccdad  5e                   pop esi
// 004ccdae  5d                   pop ebp
// 004ccdaf  5b                   pop ebx
// 004ccdb0  83c434               add esp, 0x34
// 004ccdb3  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setCameraToWorldMatrix@RenderDevice@G3D@@QAEXABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp

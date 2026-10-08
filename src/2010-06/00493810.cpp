// roc 2010-06 00493810  unit: seg_00490000  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00493810
//
// 00493810  83ec34               sub esp, 0x34
// 00493813  8b542438             mov edx, dword ptr [esp + 0x38]
// 00493817  53                   push ebx
// 00493818  55                   push ebp
// 00493819  8be9                 mov ebp, ecx
// 0049381b  b801000000           mov eax, 1
// 00493820  014574               add dword ptr [ebp + 0x74], eax
// 00493823  01456c               add dword ptr [ebp + 0x6c], eax
// 00493826  888578080000         mov byte ptr [ebp + 0x878], al
// 0049382c  56                   push esi
// 0049382d  8d85d8070000         lea eax, [ebp + 0x7d8]
// 00493833  57                   push edi
// 00493834  8bf8                 mov edi, eax
// 00493836  8bf2                 mov esi, edx
// 00493838  b909000000           mov ecx, 9
// 0049383d  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0049383f  d94224               fld dword ptr [edx + 0x24]
// 00493842  d95824               fstp dword ptr [eax + 0x24]
// 00493845  d94228               fld dword ptr [edx + 0x28]
// 00493848  d95828               fstp dword ptr [eax + 0x28]
// 0049384b  d9422c               fld dword ptr [edx + 0x2c]
// 0049384e  d9582c               fstp dword ptr [eax + 0x2c]
// 00493851  8d442414             lea eax, [esp + 0x14]
// 00493855  50                   push eax
// 00493856  8bca                 mov ecx, edx
// 00493858  e853f0ffff           call 0x4928b0
// 0049385d  8d9d08080000         lea ebx, [ebp + 0x808]
// 00493863  8bf0                 mov esi, eax
// 00493865  b909000000           mov ecx, 9
// 0049386a  8bfb                 mov edi, ebx
// 0049386c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0049386e  d94024               fld dword ptr [eax + 0x24]
// 00493871  d95b24               fstp dword ptr [ebx + 0x24]
// 00493874  d94028               fld dword ptr [eax + 0x28]
// 00493877  d95b28               fstp dword ptr [ebx + 0x28]
// 0049387a  d9402c               fld dword ptr [eax + 0x2c]
// 0049387d  d95b2c               fstp dword ptr [ebx + 0x2c]
// 00493880  6800170000           push 0x1700
// 00493885  ff1538ab9e00         call dword ptr [0x9eab38]
// 0049388b  8d8da8070000         lea ecx, [ebp + 0x7a8]
// 00493891  51                   push ecx
// 00493892  8d542418             lea edx, [esp + 0x18]
// 00493896  52                   push edx
// 00493897  8bcb                 mov ecx, ebx
// 00493899  e822d3ffff           call 0x490bc0
// 0049389e  50                   push eax
// 0049389f  e88cb3ffff           call 0x48ec30
// 004938a4  8d8520010000         lea eax, [ebp + 0x120]
// 004938aa  8944244c             mov dword ptr [esp + 0x4c], eax
// 004938ae  b8603c0000           mov eax, 0x3c60
// 004938b3  2bc5                 sub eax, ebp
// 004938b5  bf60fcffff           mov edi, 0xfffffc60
// 004938ba  83c404               add esp, 4
// 004938bd  8db5a0030000         lea esi, [ebp + 0x3a0]
// 004938c3  89442410             mov dword ptr [esp + 0x10], eax
// 004938c7  2bfd                 sub edi, ebp
// 004938c9  8da42400000000       lea esp, [esp]
// 004938d0  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004938d4  8a1e                 mov bl, byte ptr [esi]
// 004938d6  6a01                 push 1
// 004938d8  51                   push ecx
// 004938d9  8d1437               lea edx, [edi + esi]
// 004938dc  52                   push edx
// 004938dd  8bcd                 mov ecx, ebp
// 004938df  e86cecffff           call 0x492550
// 004938e4  84db                 test bl, bl
// 004938e6  7526                 jne 0x49390e
// 004938e8  bb01000000           mov ebx, 1
// 004938ed  015d78               add dword ptr [ebp + 0x78], ebx
// 004938f0  803e00               cmp byte ptr [esi], 0
// 004938f3  7416                 je 0x49390b
// 004938f5  8b442410             mov eax, dword ptr [esp + 0x10]
// 004938f9  03c6                 add eax, esi
// 004938fb  c60600               mov byte ptr [esi], 0
// 004938fe  50                   push eax
// 004938ff  889dbd030000         mov byte ptr [ebp + 0x3bd], bl
// 00493905  ff15e0aa9e00         call dword ptr [0x9eaae0]
// 0049390b  015d70               add dword ptr [ebp + 0x70], ebx
// 0049390e  8344244850           add dword ptr [esp + 0x48], 0x50
// 00493913  46                   inc esi
// 00493914  8d0c37               lea ecx, [edi + esi]
// 00493917  83f908               cmp ecx, 8
// 0049391a  7cb4                 jl 0x4938d0
// 0049391c  5f                   pop edi
// 0049391d  5e                   pop esi
// 0049391e  5d                   pop ebp
// 0049391f  5b                   pop ebx
// 00493920  83c434               add esp, 0x34
// 00493923  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setCameraToWorldMatrix@RenderDevice@G3D@@QAEXABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp

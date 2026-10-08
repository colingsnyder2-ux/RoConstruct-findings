// roc 2008-06 00479030  unit: CInstanceRecord::CNameItem  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00479030
//
// 00479030  83ec34               sub esp, 0x34
// 00479033  8b542438             mov edx, dword ptr [esp + 0x38]
// 00479037  53                   push ebx
// 00479038  55                   push ebp
// 00479039  8be9                 mov ebp, ecx
// 0047903b  b801000000           mov eax, 1
// 00479040  014574               add dword ptr [ebp + 0x74], eax
// 00479043  01456c               add dword ptr [ebp + 0x6c], eax
// 00479046  888578080000         mov byte ptr [ebp + 0x878], al
// 0047904c  56                   push esi
// 0047904d  8d85d8070000         lea eax, [ebp + 0x7d8]
// 00479053  57                   push edi
// 00479054  8bf8                 mov edi, eax
// 00479056  8bf2                 mov esi, edx
// 00479058  b909000000           mov ecx, 9
// 0047905d  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0047905f  d94224               fld dword ptr [edx + 0x24]
// 00479062  d95824               fstp dword ptr [eax + 0x24]
// 00479065  d94228               fld dword ptr [edx + 0x28]
// 00479068  d95828               fstp dword ptr [eax + 0x28]
// 0047906b  d9422c               fld dword ptr [edx + 0x2c]
// 0047906e  d9582c               fstp dword ptr [eax + 0x2c]
// 00479071  8d442414             lea eax, [esp + 0x14]
// 00479075  50                   push eax
// 00479076  8bca                 mov ecx, edx
// 00479078  e8b3f2ffff           call 0x478330
// 0047907d  8d9d08080000         lea ebx, [ebp + 0x808]
// 00479083  8bf0                 mov esi, eax
// 00479085  b909000000           mov ecx, 9
// 0047908a  8bfb                 mov edi, ebx
// 0047908c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0047908e  d94024               fld dword ptr [eax + 0x24]
// 00479091  d95b24               fstp dword ptr [ebx + 0x24]
// 00479094  d94028               fld dword ptr [eax + 0x28]
// 00479097  d95b28               fstp dword ptr [ebx + 0x28]
// 0047909a  d9402c               fld dword ptr [eax + 0x2c]
// 0047909d  d95b2c               fstp dword ptr [ebx + 0x2c]
// 004790a0  6800170000           push 0x1700
// 004790a5  ff1580298000         call dword ptr [0x802980]
// 004790ab  8d8da8070000         lea ecx, [ebp + 0x7a8]
// 004790b1  51                   push ecx
// 004790b2  8d542418             lea edx, [esp + 0x18]
// 004790b6  52                   push edx
// 004790b7  8bcb                 mov ecx, ebx
// 004790b9  e842d6ffff           call 0x476700
// 004790be  50                   push eax
// 004790bf  e86ca30000           call 0x483430
// 004790c4  8d8520010000         lea eax, [ebp + 0x120]
// 004790ca  8944244c             mov dword ptr [esp + 0x4c], eax
// 004790ce  b8603c0000           mov eax, 0x3c60
// 004790d3  2bc5                 sub eax, ebp
// 004790d5  bf60fcffff           mov edi, 0xfffffc60
// 004790da  83c404               add esp, 4
// 004790dd  8db5a0030000         lea esi, [ebp + 0x3a0]
// 004790e3  89442410             mov dword ptr [esp + 0x10], eax
// 004790e7  2bfd                 sub edi, ebp
// 004790e9  8da42400000000       lea esp, [esp]
// 004790f0  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004790f4  8a1e                 mov bl, byte ptr [esi]
// 004790f6  6a01                 push 1
// 004790f8  51                   push ecx
// 004790f9  8d1437               lea edx, [edi + esi]
// 004790fc  52                   push edx
// 004790fd  8bcd                 mov ecx, ebp
// 004790ff  e8cceeffff           call 0x477fd0
// 00479104  84db                 test bl, bl
// 00479106  7526                 jne 0x47912e
// 00479108  bb01000000           mov ebx, 1
// 0047910d  015d78               add dword ptr [ebp + 0x78], ebx
// 00479110  803e00               cmp byte ptr [esi], 0
// 00479113  7416                 je 0x47912b
// 00479115  8b442410             mov eax, dword ptr [esp + 0x10]
// 00479119  03c6                 add eax, esi
// 0047911b  c60600               mov byte ptr [esi], 0
// 0047911e  50                   push eax
// 0047911f  889dbd030000         mov byte ptr [ebp + 0x3bd], bl
// 00479125  ff1558298000         call dword ptr [0x802958]
// 0047912b  015d70               add dword ptr [ebp + 0x70], ebx
// 0047912e  8344244850           add dword ptr [esp + 0x48], 0x50
// 00479133  46                   inc esi
// 00479134  8d0c37               lea ecx, [edi + esi]
// 00479137  83f908               cmp ecx, 8
// 0047913a  7cb4                 jl 0x4790f0
// 0047913c  5f                   pop edi
// 0047913d  5e                   pop esi
// 0047913e  5d                   pop ebp
// 0047913f  5b                   pop ebx
// 00479140  83c434               add esp, 0x34
// 00479143  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setCameraToWorldMatrix@RenderDevice@G3D@@QAEXABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp

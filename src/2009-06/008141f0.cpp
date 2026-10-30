// roc 2009-06 008141f0  unit: CXTPRibbonGroupPopupToolBar  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008141f0
//
// 008141f0  56                   push esi
// 008141f1  57                   push edi
// 008141f2  8bf1                 mov esi, ecx
// 008141f4  e89791f1ff           call 0x72d390
// 008141f9  8bc8                 mov ecx, eax
// 008141fb  e8c06cf1ff           call 0x72aec0
// 00814200  8bf8                 mov edi, eax
// 00814202  837f0400             cmp dword ptr [edi + 4], 0
// 00814206  7f41                 jg 0x814249
// 00814208  8b4620               mov eax, dword ptr [esi + 0x20]
// 0081420b  50                   push eax
// 0081420c  e8affaf7ff           call 0x793cc0
// 00814211  83c404               add esp, 4
// 00814214  85c0                 test eax, eax
// 00814216  7431                 je 0x814249
// 00814218  56                   push esi
// 00814219  8bcf                 mov ecx, edi
// 0081421b  e820fcf7ff           call 0x793e40
// 00814220  85c0                 test eax, eax
// 00814222  7525                 jne 0x814249
// 00814224  83bed0000000ff       cmp dword ptr [esi + 0xd0], -1
// 0081422b  751c                 jne 0x814249
// 0081422d  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 00814233  e8e837faff           call 0x7b7a20
// 00814238  83b84c06000000       cmp dword ptr [eax + 0x64c], 0
// 0081423f  7408                 je 0x814249
// 00814241  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 00814247  eb02                 jmp 0x81424b
// 00814249  33c0                 xor eax, eax
// 0081424b  3b8670020000         cmp eax, dword ptr [esi + 0x270]
// 00814251  7420                 je 0x814273
// 00814253  50                   push eax
// 00814254  8d8e5c020000         lea ecx, [esi + 0x25c]
// 0081425a  e8a1f9ffff           call 0x813c00
// 0081425f  83be7002000000       cmp dword ptr [esi + 0x270], 0
// 00814266  740b                 je 0x814273
// 00814268  8b4620               mov eax, dword ptr [esi + 0x20]
// 0081426b  50                   push eax
// 0081426c  8bcf                 mov ecx, edi
// 0081426e  e87dfbf7ff           call 0x793df0
// 00814273  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00814277  8b542410             mov edx, dword ptr [esp + 0x10]
// 0081427b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0081427f  51                   push ecx
// 00814280  52                   push edx
// 00814281  50                   push eax
// 00814282  8bce                 mov ecx, esi
// 00814284  e8a74ef5ff           call 0x769130
// 00814289  5f                   pop edi
// 0081428a  5e                   pop esi
// 0081428b  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnMouseMove@CXTPRibbonGroupPopupToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp

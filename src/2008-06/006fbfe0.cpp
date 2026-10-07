// roc 2008-06 006fbfe0  unit: RBX::VTextureId::?$XItem  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fbfe0
//
// 006fbfe0  56                   push esi
// 006fbfe1  57                   push edi
// 006fbfe2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006fbfe6  8bf1                 mov esi, ecx
// 006fbfe8  85ff                 test edi, edi
// 006fbfea  7414                 je 0x6fc000
// 006fbfec  8d4670               lea eax, [esi + 0x70]
// 006fbfef  85c0                 test eax, eax
// 006fbff1  7406                 je 0x6fbff9
// 006fbff3  83782000             cmp dword ptr [eax + 0x20], 0
// 006fbff7  7507                 jne 0x6fc000
// 006fbff9  e8b2f7ffff           call 0x6fb7b0
// 006fbffe  eb1c                 jmp 0x6fc01c
// 006fc000  8d4e70               lea ecx, [esi + 0x70]
// 006fc003  85c9                 test ecx, ecx
// 006fc005  7415                 je 0x6fc01c
// 006fc007  83792000             cmp dword ptr [ecx + 0x20], 0
// 006fc00b  740f                 je 0x6fc01c
// 006fc00d  8bc7                 mov eax, edi
// 006fc00f  f7d8                 neg eax
// 006fc011  1bc0                 sbb eax, eax
// 006fc013  83e005               and eax, 5
// 006fc016  50                   push eax
// 006fc017  e85249faff           call 0x6a096e
// 006fc01c  8bce                 mov ecx, esi
// 006fc01e  897e6c               mov dword ptr [esi + 0x6c], edi
// 006fc021  e84af6ffff           call 0x6fb670
// 006fc026  8bce                 mov ecx, esi
// 006fc028  e8e3f7ffff           call 0x6fb810
// 006fc02d  5f                   pop edi
// 006fc02e  5e                   pop esi
// 006fc02f  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?ShowToolBar@CXTPPropertyGrid@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp

// roc 2008-06 007730a0  unit: CXTPPropertyGridInplaceButton  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007730a0
//
// 007730a0  56                   push esi
// 007730a1  8bf1                 mov esi, ecx
// 007730a3  e8028f0400           call 0x7bbfaa
// 007730a8  8d4e48               lea ecx, [esi + 0x48]
// 007730ab  c70604868600         mov dword ptr [esi], 0x868604
// 007730b1  ff15043f8000         call dword ptr [0x803f04]
// 007730b7  8d4e54               lea ecx, [esi + 0x54]
// 007730ba  ff15043f8000         call dword ptr [0x803f04]
// 007730c0  8b442408             mov eax, dword ptr [esp + 8]
// 007730c4  8d4e34               lea ecx, [esi + 0x34]
// 007730c7  51                   push ecx
// 007730c8  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 007730cf  894630               mov dword ptr [esi + 0x30], eax
// 007730d2  c7462800000000       mov dword ptr [esi + 0x28], 0
// 007730d9  ff157c2c8000         call dword ptr [0x802c7c]
// 007730df  6a0a                 push 0xa
// 007730e1  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 007730e8  c7462000000000       mov dword ptr [esi + 0x20], 0
// 007730ef  ff154c2d8000         call dword ptr [0x802d4c]
// 007730f5  894644               mov dword ptr [esi + 0x44], eax
// 007730f8  c7464cffffffff       mov dword ptr [esi + 0x4c], 0xffffffff
// 007730ff  c7465001000000       mov dword ptr [esi + 0x50], 1
// 00773106  8bc6                 mov eax, esi
// 00773108  5e                   pop esi
// 00773109  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ??0CXTPPropertyGridInplaceButton@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp

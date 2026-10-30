// roc 2009-12 008c6370  unit: CXTPPropertyGridInplaceButton  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6370
//
// 008c6370  56                   push esi
// 008c6371  8bf1                 mov esi, ecx
// 008c6373  e8ca000600           call 0x926442
// 008c6378  8d4e48               lea ecx, [esi + 0x48]
// 008c637b  c7069c9aa000         mov dword ptr [esi], 0xa09a9c
// 008c6381  ff1574de9800         call dword ptr [0x98de74]
// 008c6387  8d4e54               lea ecx, [esi + 0x54]
// 008c638a  ff1574de9800         call dword ptr [0x98de74]
// 008c6390  8b442408             mov eax, dword ptr [esp + 8]
// 008c6394  8d4e34               lea ecx, [esi + 0x34]
// 008c6397  51                   push ecx
// 008c6398  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 008c639f  894630               mov dword ptr [esi + 0x30], eax
// 008c63a2  c7462800000000       mov dword ptr [esi + 0x28], 0
// 008c63a9  ff159cca9800         call dword ptr [0x98ca9c]
// 008c63af  6a0a                 push 0xa
// 008c63b1  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 008c63b8  c7462000000000       mov dword ptr [esi + 0x20], 0
// 008c63bf  ff15dccb9800         call dword ptr [0x98cbdc]
// 008c63c5  894644               mov dword ptr [esi + 0x44], eax
// 008c63c8  c7464cffffffff       mov dword ptr [esi + 0x4c], 0xffffffff
// 008c63cf  c7465001000000       mov dword ptr [esi + 0x50], 1
// 008c63d6  8bc6                 mov eax, esi
// 008c63d8  5e                   pop esi
// 008c63d9  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPPropertyGridInplaceButton@@QAE@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
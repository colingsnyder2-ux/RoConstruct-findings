// roc 2007-03 005b5bd0  unit: seg_005b0000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b5bd0
//
// 005b5bd0  56                   push esi
// 005b5bd1  8bf1                 mov esi, ecx
// 005b5bd3  56                   push esi
// 005b5bd4  e8176ffcff           call 0x57caf0
// 005b5bd9  83c404               add esp, 4
// 005b5bdc  85c0                 test eax, eax
// 005b5bde  7421                 je 0x5b5c01
// 005b5be0  d9442408             fld dword ptr [esp + 8]
// 005b5be4  83ec0c               sub esp, 0xc
// 005b5be7  8bd4                 mov edx, esp
// 005b5be9  d91a                 fstp dword ptr [edx]
// 005b5beb  56                   push esi
// 005b5bec  d944241c             fld dword ptr [esp + 0x1c]
// 005b5bf0  8bc8                 mov ecx, eax
// 005b5bf2  d95a04               fstp dword ptr [edx + 4]
// 005b5bf5  d9442420             fld dword ptr [esp + 0x20]
// 005b5bf9  d95a08               fstp dword ptr [edx + 8]
// 005b5bfc  e87f41fcff           call 0x579d80
// 005b5c01  5e                   pop esi
// 005b5c02  c20c00               ret 0xc
// library rbxgs/v8datamodel\PVInstance.cpp (function ?moveToPoint@PVInstance@RBX@@QAEXVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp

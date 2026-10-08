// roc 2007-08 005bae60  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bae60
//
// 005bae60  56                   push esi
// 005bae61  8bf1                 mov esi, ecx
// 005bae63  56                   push esi
// 005bae64  e8b726fcff           call 0x57d520
// 005bae69  83c404               add esp, 4
// 005bae6c  85c0                 test eax, eax
// 005bae6e  7421                 je 0x5bae91
// 005bae70  d9442408             fld dword ptr [esp + 8]
// 005bae74  83ec0c               sub esp, 0xc
// 005bae77  8bd4                 mov edx, esp
// 005bae79  d91a                 fstp dword ptr [edx]
// 005bae7b  56                   push esi
// 005bae7c  d944241c             fld dword ptr [esp + 0x1c]
// 005bae80  8bc8                 mov ecx, eax
// 005bae82  d95a04               fstp dword ptr [edx + 4]
// 005bae85  d9442420             fld dword ptr [esp + 0x20]
// 005bae89  d95a08               fstp dword ptr [edx + 8]
// 005bae8c  e85fd5faff           call 0x5683f0
// 005bae91  5e                   pop esi
// 005bae92  c20c00               ret 0xc
// library rbxgs/v8datamodel\PVInstance.cpp (function ?moveToPoint@PVInstance@RBX@@QAEXVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PVInstance.cpp

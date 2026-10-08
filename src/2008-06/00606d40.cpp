// roc 2008-06 00606d40  unit: RBX::ContactConnector  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00606d40
//
// 00606d40  6aff                 push -1
// 00606d42  68f8887d00           push 0x7d88f8
// 00606d47  64a100000000         mov eax, dword ptr fs:[0]
// 00606d4d  50                   push eax
// 00606d4e  64892500000000       mov dword ptr fs:[0], esp
// 00606d55  51                   push ecx
// 00606d56  56                   push esi
// 00606d57  8bf1                 mov esi, ecx
// 00606d59  89742404             mov dword ptr [esp + 4], esi
// 00606d5d  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 00606d64  8d4e08               lea ecx, [esi + 8]
// 00606d67  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00606d6f  c70634288400         mov dword ptr [esi], 0x842834
// 00606d75  e8e6c20000           call 0x613060
// 00606d7a  d9ee                 fldz 
// 00606d7c  d95644               fst dword ptr [esi + 0x44]
// 00606d7f  b801000000           mov eax, 1
// 00606d84  d95648               fst dword ptr [esi + 0x48]
// 00606d87  d9564c               fst dword ptr [esi + 0x4c]
// 00606d8a  d9442418             fld dword ptr [esp + 0x18]
// 00606d8e  d95e2c               fstp dword ptr [esi + 0x2c]
// 00606d91  d944241c             fld dword ptr [esp + 0x1c]
// 00606d95  d95e34               fstp dword ptr [esi + 0x34]
// 00606d98  d9442420             fld dword ptr [esp + 0x20]
// 00606d9c  d95e30               fstp dword ptr [esi + 0x30]
// 00606d9f  840550f09600         test byte ptr [0x96f050], al
// 00606da5  7518                 jne 0x606dbf
// 00606da7  090550f09600         or dword ptr [0x96f050], eax
// 00606dad  d91544f09600         fst dword ptr [0x96f044]
// 00606db3  d91548f09600         fst dword ptr [0x96f048]
// 00606db9  d9154cf09600         fst dword ptr [0x96f04c]
// 00606dbf  d90544f09600         fld dword ptr [0x96f044]
// 00606dc5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00606dc9  d95e44               fstp dword ptr [esi + 0x44]
// 00606dcc  8bc6                 mov eax, esi
// 00606dce  d90548f09600         fld dword ptr [0x96f048]
// 00606dd4  d95e48               fstp dword ptr [esi + 0x48]
// 00606dd7  d9054cf09600         fld dword ptr [0x96f04c]
// 00606ddd  d95e4c               fstp dword ptr [esi + 0x4c]
// 00606de0  d95638               fst dword ptr [esi + 0x38]
// 00606de3  d9563c               fst dword ptr [esi + 0x3c]
// 00606de6  d95e40               fstp dword ptr [esi + 0x40]
// 00606de9  5e                   pop esi
// 00606dea  64890d00000000       mov dword ptr fs:[0], ecx
// 00606df1  83c410               add esp, 0x10
// 00606df4  c20c00               ret 0xc
// library rbxgs/v8world\Contact.cpp (function ??0ContactConnector@RBX@@QAE@MMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp

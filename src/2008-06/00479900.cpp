// roc 2008-06 00479900  unit: CInstanceRecord::CNameItem  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00479900
//
// 00479900  6aff                 push -1
// 00479902  68c8c77d00           push 0x7dc7c8
// 00479907  64a100000000         mov eax, dword ptr fs:[0]
// 0047990d  50                   push eax
// 0047990e  64892500000000       mov dword ptr fs:[0], esp
// 00479915  83ec34               sub esp, 0x34
// 00479918  53                   push ebx
// 00479919  56                   push esi
// 0047991a  57                   push edi
// 0047991b  8bf1                 mov esi, ecx
// 0047991d  8d86d8070000         lea eax, [esi + 0x7d8]
// 00479923  50                   push eax
// 00479924  8d4c2414             lea ecx, [esp + 0x14]
// 00479928  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00479930  e8eb980900           call 0x513220
// 00479935  bb01000000           mov ebx, 1
// 0047993a  841d50f09600         test byte ptr [0x96f050], bl
// 00479940  751a                 jne 0x47995c
// 00479942  d9ee                 fldz 
// 00479944  091d50f09600         or dword ptr [0x96f050], ebx
// 0047994a  d91544f09600         fst dword ptr [0x96f044]
// 00479950  d91548f09600         fst dword ptr [0x96f048]
// 00479956  d91d4cf09600         fstp dword ptr [0x96f04c]
// 0047995c  d90544f09600         fld dword ptr [0x96f044]
// 00479962  51                   push ecx
// 00479963  d95c2438             fstp dword ptr [esp + 0x38]
// 00479967  8bcc                 mov ecx, esp
// 00479969  d90548f09600         fld dword ptr [0x96f048]
// 0047996f  89642410             mov dword ptr [esp + 0x10], esp
// 00479973  d95c243c             fstp dword ptr [esp + 0x3c]
// 00479977  d9054cf09600         fld dword ptr [0x96f04c]
// 0047997d  d95c2440             fstp dword ptr [esp + 0x40]
// 00479981  c70100000000         mov dword ptr [ecx], 0
// 00479987  8b442458             mov eax, dword ptr [esp + 0x58]
// 0047998b  50                   push eax
// 0047998c  e80ff61100           call 0x598fa0
// 00479991  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00479995  57                   push edi
// 00479996  8bce                 mov ecx, esi
// 00479998  e8b3faffff           call 0x479450
// 0047999d  8d4c2410             lea ecx, [esp + 0x10]
// 004799a1  51                   push ecx
// 004799a2  57                   push edi
// 004799a3  8bce                 mov ecx, esi
// 004799a5  e8b6f9ffff           call 0x479360
// 004799aa  015e78               add dword ptr [esi + 0x78], ebx
// 004799ad  015e70               add dword ptr [esi + 0x70], ebx
// 004799b0  81c7c0840000         add edi, 0x84c0
// 004799b6  57                   push edi
// 004799b7  ff1504f89600         call dword ptr [0x96f804]
// 004799bd  8b35c4298000         mov esi, dword ptr [0x8029c4]
// 004799c3  6812850000           push 0x8512
// 004799c8  6800250000           push 0x2500
// 004799cd  6800200000           push 0x2000
// 004799d2  ffd6                 call esi
// 004799d4  6812850000           push 0x8512
// 004799d9  6800250000           push 0x2500
// 004799de  6801200000           push 0x2001
// 004799e3  ffd6                 call esi
// 004799e5  6812850000           push 0x8512
// 004799ea  6800250000           push 0x2500
// 004799ef  6802200000           push 0x2002
// 004799f4  ffd6                 call esi
// 004799f6  8b3550298000         mov esi, dword ptr [0x802950]
// 004799fc  68600c0000           push 0xc60
// 00479a01  ffd6                 call esi
// 00479a03  68610c0000           push 0xc61
// 00479a08  ffd6                 call esi
// 00479a0a  68620c0000           push 0xc62
// 00479a0f  ffd6                 call esi
// 00479a11  8b442454             mov eax, dword ptr [esp + 0x54]
// 00479a15  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 00479a1d  85c0                 test eax, eax
// 00479a1f  7426                 je 0x479a47
// 00479a21  83c004               add eax, 4
// 00479a24  50                   push eax
// 00479a25  ff15ac218000         call dword ptr [0x8021ac]
// 00479a2b  85c0                 test eax, eax
// 00479a2d  7518                 jne 0x479a47
// 00479a2f  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00479a33  e85813feff           call 0x45ad90
// 00479a38  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00479a3c  85c9                 test ecx, ecx
// 00479a3e  7407                 je 0x479a47
// 00479a40  8b11                 mov edx, dword ptr [ecx]
// 00479a42  8b02                 mov eax, dword ptr [edx]
// 00479a44  53                   push ebx
// 00479a45  ffd0                 call eax
// 00479a47  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00479a4b  5f                   pop edi
// 00479a4c  5e                   pop esi
// 00479a4d  64890d00000000       mov dword ptr fs:[0], ecx
// 00479a54  5b                   pop ebx
// 00479a55  83c440               add esp, 0x40
// 00479a58  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?configureReflectionMap@RenderDevice@G3D@@QAEXIV?$ReferenceCountedPointer@VTexture@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp

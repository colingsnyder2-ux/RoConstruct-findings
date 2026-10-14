// roc 2008-06 00647760  unit: RBX::GlueJoint  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00647760
//
// 00647760  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00647764  d901                 fld dword ptr [ecx]
// 00647766  8b542404             mov edx, dword ptr [esp + 4]
// 0064776a  d81a                 fcomp dword ptr [edx]
// 0064776c  dfe0                 fnstsw ax
// 0064776e  f6c441               test ah, 0x41
// 00647771  7505                 jne 0x647778
// 00647773  b001                 mov al, 1
// 00647775  c20800               ret 8
// 00647778  d901                 fld dword ptr [ecx]
// 0064777a  d81a                 fcomp dword ptr [edx]
// 0064777c  dfe0                 fnstsw ax
// 0064777e  f6c405               test ah, 5
// 00647781  7b27                 jnp 0x6477aa
// 00647783  d94104               fld dword ptr [ecx + 4]
// 00647786  d85a04               fcomp dword ptr [edx + 4]
// 00647789  dfe0                 fnstsw ax
// 0064778b  f6c441               test ah, 0x41
// 0064778e  74e3                 je 0x647773
// 00647790  d94104               fld dword ptr [ecx + 4]
// 00647793  d85a04               fcomp dword ptr [edx + 4]
// 00647796  dfe0                 fnstsw ax
// 00647798  f6c405               test ah, 5
// 0064779b  7b0d                 jnp 0x6477aa
// 0064779d  d94108               fld dword ptr [ecx + 8]
// 006477a0  d85a08               fcomp dword ptr [edx + 8]
// 006477a3  dfe0                 fnstsw ax
// 006477a5  f6c441               test ah, 0x41
// 006477a8  74c9                 je 0x647773
// 006477aa  32c0                 xor al, al
// 006477ac  c20800               ret 8
// library rbxgs-dll/v8world\Block.cpp (function ??RmyLess@RBX@@QBE_NABVVector3@G3D@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8world/Block.cpp

// roc 2008-06 006480b0  unit: RBX::Block  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006480b0
//
// 006480b0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006480b3  8b4804               mov ecx, dword ptr [eax + 4]
// 006480b6  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 006480ba  56                   push esi
// 006480bb  8bf0                 mov esi, eax
// 006480bd  7554                 jne 0x648113
// 006480bf  8b542408             mov edx, dword ptr [esp + 8]
// 006480c3  d902                 fld dword ptr [edx]
// 006480c5  d8590c               fcomp dword ptr [ecx + 0xc]
// 006480c8  dfe0                 fnstsw ax
// 006480ca  f6c441               test ah, 0x41
// 006480cd  7433                 je 0x648102
// 006480cf  d902                 fld dword ptr [edx]
// 006480d1  d8590c               fcomp dword ptr [ecx + 0xc]
// 006480d4  dfe0                 fnstsw ax
// 006480d6  f6c405               test ah, 5
// 006480d9  7b2c                 jnp 0x648107
// 006480db  d94204               fld dword ptr [edx + 4]
// 006480de  d85910               fcomp dword ptr [ecx + 0x10]
// 006480e1  dfe0                 fnstsw ax
// 006480e3  f6c441               test ah, 0x41
// 006480e6  741a                 je 0x648102
// 006480e8  d94204               fld dword ptr [edx + 4]
// 006480eb  d85910               fcomp dword ptr [ecx + 0x10]
// 006480ee  dfe0                 fnstsw ax
// 006480f0  f6c405               test ah, 5
// 006480f3  7b12                 jnp 0x648107
// 006480f5  d94208               fld dword ptr [edx + 8]
// 006480f8  d85914               fcomp dword ptr [ecx + 0x14]
// 006480fb  dfe0                 fnstsw ax
// 006480fd  f6c441               test ah, 0x41
// 00648100  7505                 jne 0x648107
// 00648102  8b4908               mov ecx, dword ptr [ecx + 8]
// 00648105  eb04                 jmp 0x64810b
// 00648107  8bf1                 mov esi, ecx
// 00648109  8b09                 mov ecx, dword ptr [ecx]
// 0064810b  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 0064810f  74b2                 je 0x6480c3
// 00648111  8bc6                 mov eax, esi
// 00648113  5e                   pop esi
// 00648114  c20400               ret 4
// library rbxgs-dll/v8world\Block.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@2@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8world/Block.cpp

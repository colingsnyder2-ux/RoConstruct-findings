// roc 2008-06 00606b60  unit: RBX::ContactConnector  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00606b60
//
// 00606b60  8b542404             mov edx, dword ptr [esp + 4]
// 00606b64  d9420c               fld dword ptr [edx + 0xc]
// 00606b67  d819                 fcomp dword ptr [ecx]
// 00606b69  dfe0                 fnstsw ax
// 00606b6b  f6c405               test ah, 5
// 00606b6e  7b45                 jnp 0x606bb5
// 00606b70  d94210               fld dword ptr [edx + 0x10]
// 00606b73  d85904               fcomp dword ptr [ecx + 4]
// 00606b76  dfe0                 fnstsw ax
// 00606b78  f6c405               test ah, 5
// 00606b7b  7b38                 jnp 0x606bb5
// 00606b7d  d94214               fld dword ptr [edx + 0x14]
// 00606b80  d85908               fcomp dword ptr [ecx + 8]
// 00606b83  dfe0                 fnstsw ax
// 00606b85  f6c405               test ah, 5
// 00606b88  7b2b                 jnp 0x606bb5
// 00606b8a  d94204               fld dword ptr [edx + 4]
// 00606b8d  d85910               fcomp dword ptr [ecx + 0x10]
// 00606b90  dfe0                 fnstsw ax
// 00606b92  f6c441               test ah, 0x41
// 00606b95  741e                 je 0x606bb5
// 00606b97  d902                 fld dword ptr [edx]
// 00606b99  d8590c               fcomp dword ptr [ecx + 0xc]
// 00606b9c  dfe0                 fnstsw ax
// 00606b9e  f6c441               test ah, 0x41
// 00606ba1  7412                 je 0x606bb5
// 00606ba3  d94208               fld dword ptr [edx + 8]
// 00606ba6  d85914               fcomp dword ptr [ecx + 0x14]
// 00606ba9  dfe0                 fnstsw ax
// 00606bab  f6c441               test ah, 0x41
// 00606bae  7405                 je 0x606bb5
// 00606bb0  b001                 mov al, 1
// 00606bb2  c20400               ret 4
// 00606bb5  32c0                 xor al, al
// 00606bb7  c20400               ret 4
// library openrbx-client/App\util\Extents.cpp (function ?overlapsOrTouches@Extents@RBX@@QBE_NABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client App/util/Extents.cpp

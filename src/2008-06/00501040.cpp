// roc 2008-06 00501040  unit: RBX::ViewNew::BevelMesh::Builder  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00501040
//
// 00501040  8b442404             mov eax, dword ptr [esp + 4]
// 00501044  56                   push esi
// 00501045  50                   push eax
// 00501046  8bf1                 mov esi, ecx
// 00501048  e8e3fcffff           call 0x500d30
// 0050104d  d9ee                 fldz 
// 0050104f  d85e20               fcomp dword ptr [esi + 0x20]
// 00501052  dfe0                 fnstsw ax
// 00501054  f6c405               test ah, 5
// 00501057  0f8a1c010000         jp 0x501179
// 0050105d  6a04                 push 4
// 0050105f  6a05                 push 5
// 00501061  6a03                 push 3
// 00501063  6a00                 push 0
// 00501065  8bce                 mov ecx, esi
// 00501067  e894ffffff           call 0x501000
// 0050106c  6a0b                 push 0xb
// 0050106e  6a08                 push 8
// 00501070  6a07                 push 7
// 00501072  6a04                 push 4
// 00501074  8bce                 mov ecx, esi
// 00501076  e885ffffff           call 0x501000
// 0050107b  6a00                 push 0
// 0050107d  6a01                 push 1
// 0050107f  6a0a                 push 0xa
// 00501081  6a0b                 push 0xb
// 00501083  8bce                 mov ecx, esi
// 00501085  e876ffffff           call 0x501000
// 0050108a  6a0f                 push 0xf
// 0050108c  6a0c                 push 0xc
// 0050108e  6a06                 push 6
// 00501090  6a07                 push 7
// 00501092  8bce                 mov ecx, esi
// 00501094  e867ffffff           call 0x501000
// 00501099  6a09                 push 9
// 0050109b  6a0a                 push 0xa
// 0050109d  6a13                 push 0x13
// 0050109f  6a10                 push 0x10
// 005010a1  8bce                 mov ecx, esi
// 005010a3  e858ffffff           call 0x501000
// 005010a8  6a14                 push 0x14
// 005010aa  6a15                 push 0x15
// 005010ac  6a02                 push 2
// 005010ae  6a03                 push 3
// 005010b0  8bce                 mov ecx, esi
// 005010b2  e849ffffff           call 0x501000
// 005010b7  6a01                 push 1
// 005010b9  6a02                 push 2
// 005010bb  6a12                 push 0x12
// 005010bd  6a13                 push 0x13
// 005010bf  8bce                 mov ecx, esi
// 005010c1  e83affffff           call 0x501000
// 005010c6  6a17                 push 0x17
// 005010c8  6a14                 push 0x14
// 005010ca  6a05                 push 5
// 005010cc  6a06                 push 6
// 005010ce  8bce                 mov ecx, esi
// 005010d0  e82bffffff           call 0x501000
// 005010d5  6a08                 push 8
// 005010d7  6a09                 push 9
// 005010d9  6a0e                 push 0xe
// 005010db  6a0f                 push 0xf
// 005010dd  8bce                 mov ecx, esi
// 005010df  e81cffffff           call 0x501000
// 005010e4  6a10                 push 0x10
// 005010e6  6a11                 push 0x11
// 005010e8  6a0d                 push 0xd
// 005010ea  6a0e                 push 0xe
// 005010ec  8bce                 mov ecx, esi
// 005010ee  e80dffffff           call 0x501000
// 005010f3  6a15                 push 0x15
// 005010f5  6a16                 push 0x16
// 005010f7  6a11                 push 0x11
// 005010f9  6a12                 push 0x12
// 005010fb  8bce                 mov ecx, esi
// 005010fd  e8fefeffff           call 0x501000
// 00501102  6a0c                 push 0xc
// 00501104  6a0d                 push 0xd
// 00501106  6a16                 push 0x16
// 00501108  6a17                 push 0x17
// 0050110a  8bce                 mov ecx, esi
// 0050110c  e8effeffff           call 0x501000
// 00501111  6a0b                 push 0xb
// 00501113  6a04                 push 4
// 00501115  6a00                 push 0
// 00501117  8bce                 mov ecx, esi
// 00501119  e8b2feffff           call 0x500fd0
// 0050111e  6a14                 push 0x14
// 00501120  6a03                 push 3
// 00501122  6a05                 push 5
// 00501124  8bce                 mov ecx, esi
// 00501126  e8a5feffff           call 0x500fd0
// 0050112b  6a13                 push 0x13
// 0050112d  6a0a                 push 0xa
// 0050112f  6a01                 push 1
// 00501131  8bce                 mov ecx, esi
// 00501133  e898feffff           call 0x500fd0
// 00501138  6a15                 push 0x15
// 0050113a  6a12                 push 0x12
// 0050113c  6a02                 push 2
// 0050113e  8bce                 mov ecx, esi
// 00501140  e88bfeffff           call 0x500fd0
// 00501145  6a07                 push 7
// 00501147  6a08                 push 8
// 00501149  6a0f                 push 0xf
// 0050114b  8bce                 mov ecx, esi
// 0050114d  e87efeffff           call 0x500fd0
// 00501152  6a17                 push 0x17
// 00501154  6a06                 push 6
// 00501156  6a0c                 push 0xc
// 00501158  8bce                 mov ecx, esi
// 0050115a  e871feffff           call 0x500fd0
// 0050115f  6a09                 push 9
// 00501161  6a10                 push 0x10
// 00501163  6a0e                 push 0xe
// 00501165  8bce                 mov ecx, esi
// 00501167  e864feffff           call 0x500fd0
// 0050116c  6a11                 push 0x11
// 0050116e  6a16                 push 0x16
// 00501170  6a0d                 push 0xd
// 00501172  8bce                 mov ecx, esi
// 00501174  e857feffff           call 0x500fd0
// 00501179  5e                   pop esi
// 0050117a  c20400               ret 4
// library rbxgs-view/BevelMesh.cpp (function ?build@Builder@BevelMesh@View@RBX@@UAEXW4Purpose@LevelBuilder@34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BevelMesh.cpp

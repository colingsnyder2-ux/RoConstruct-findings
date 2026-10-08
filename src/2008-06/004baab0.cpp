// roc 2008-06 004baab0  unit: Exposer  size: 764 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004baab0
//
// 004baab0  8a442404             mov al, byte ptr [esp + 4]
// 004baab4  81ec2c010000         sub esp, 0x12c
// 004baaba  3c4b                 cmp al, 0x4b
// 004baabc  7209                 jb 0x4baac7
// 004baabe  33c0                 xor eax, eax
// 004baac0  81c42c010000         add esp, 0x12c
// 004baac6  c3                   ret 
// 004baac7  0fb6c0               movzx eax, al
// 004baaca  c70424c05f8200       mov dword ptr [esp], 0x825fc0
// 004baad1  c7442404b85f8200     mov dword ptr [esp + 4], 0x825fb8
// 004baad9  c74424089c5f8200     mov dword ptr [esp + 8], 0x825f9c
// 004baae1  c744240c885f8200     mov dword ptr [esp + 0xc], 0x825f88
// 004baae9  c7442410705f8200     mov dword ptr [esp + 0x10], 0x825f70
// 004baaf1  c7442414505f8200     mov dword ptr [esp + 0x14], 0x825f50
// 004baaf9  c74424182c5f8200     mov dword ptr [esp + 0x18], 0x825f2c
// 004bab01  c744241c1c5f8200     mov dword ptr [esp + 0x1c], 0x825f1c
// 004bab09  c7442420005f8200     mov dword ptr [esp + 0x20], 0x825f00
// 004bab11  c7442424e45e8200     mov dword ptr [esp + 0x24], 0x825ee4
// 004bab19  c7442428c85e8200     mov dword ptr [esp + 0x28], 0x825ec8
// 004bab21  c744242cc05e8200     mov dword ptr [esp + 0x2c], 0x825ec0
// 004bab29  c7442430b05e8200     mov dword ptr [esp + 0x30], 0x825eb0
// 004bab31  c7442434905e8200     mov dword ptr [esp + 0x34], 0x825e90
// 004bab39  c7442438705e8200     mov dword ptr [esp + 0x38], 0x825e70
// 004bab41  c744243c585e8200     mov dword ptr [esp + 0x3c], 0x825e58
// 004bab49  c74424403c5e8200     mov dword ptr [esp + 0x40], 0x825e3c
// 004bab51  c74424441c5e8200     mov dword ptr [esp + 0x44], 0x825e1c
// 004bab59  c7442448fc5d8200     mov dword ptr [esp + 0x48], 0x825dfc
// 004bab61  c744244ce85d8200     mov dword ptr [esp + 0x4c], 0x825de8
// 004bab69  c7442450cc5d8200     mov dword ptr [esp + 0x50], 0x825dcc
// 004bab71  c7442454b45d8200     mov dword ptr [esp + 0x54], 0x825db4
// 004bab79  c7442458a05d8200     mov dword ptr [esp + 0x58], 0x825da0
// 004bab81  c744245c8c5d8200     mov dword ptr [esp + 0x5c], 0x825d8c
// 004bab89  c74424607c5d8200     mov dword ptr [esp + 0x60], 0x825d7c
// 004bab91  c7442464745d8200     mov dword ptr [esp + 0x64], 0x825d74
// 004bab99  c7442468605d8200     mov dword ptr [esp + 0x68], 0x825d60
// 004baba1  c744246c385d8200     mov dword ptr [esp + 0x6c], 0x825d38
// 004baba9  c74424701c5d8200     mov dword ptr [esp + 0x70], 0x825d1c
// 004babb1  c7442474f85c8200     mov dword ptr [esp + 0x74], 0x825cf8
// 004babb9  c7442478e05c8200     mov dword ptr [esp + 0x78], 0x825ce0
// 004babc1  c744247cc05c8200     mov dword ptr [esp + 0x7c], 0x825cc0
// 004babc9  c7842480000000a45c8200 mov dword ptr [esp + 0x80], 0x825ca4
// 004babd4  c78424840000008c5c8200 mov dword ptr [esp + 0x84], 0x825c8c
// 004babdf  c7842488000000785c8200 mov dword ptr [esp + 0x88], 0x825c78
// 004babea  c784248c000000585c8200 mov dword ptr [esp + 0x8c], 0x825c58
// 004babf5  c7842490000000385c8200 mov dword ptr [esp + 0x90], 0x825c38
// 004bac00  c7842494000000185c8200 mov dword ptr [esp + 0x94], 0x825c18
// 004bac0b  c7842498000000f85b8200 mov dword ptr [esp + 0x98], 0x825bf8
// 004bac16  c784249c000000d05b8200 mov dword ptr [esp + 0x9c], 0x825bd0
// 004bac21  c78424a0000000b45b8200 mov dword ptr [esp + 0xa0], 0x825bb4
// 004bac2c  c78424a4000000985b8200 mov dword ptr [esp + 0xa4], 0x825b98
// 004bac37  c78424a80000007c5b8200 mov dword ptr [esp + 0xa8], 0x825b7c
// 004bac42  c78424ac000000585b8200 mov dword ptr [esp + 0xac], 0x825b58
// 004bac4d  c78424b0000000345b8200 mov dword ptr [esp + 0xb0], 0x825b34
// 004bac58  c78424b4000000045b8200 mov dword ptr [esp + 0xb4], 0x825b04
// 004bac63  c78424b8000000ec5a8200 mov dword ptr [esp + 0xb8], 0x825aec
// 004bac6e  c78424bc000000c85a8200 mov dword ptr [esp + 0xbc], 0x825ac8
// 004bac79  c78424c0000000a85a8200 mov dword ptr [esp + 0xc0], 0x825aa8
// 004bac84  c78424c40000008c5a8200 mov dword ptr [esp + 0xc4], 0x825a8c
// 004bac8f  c78424c8000000785a8200 mov dword ptr [esp + 0xc8], 0x825a78
// 004bac9a  c78424cc0000004c5a8200 mov dword ptr [esp + 0xcc], 0x825a4c
// 004baca5  c78424d00000002c5a8200 mov dword ptr [esp + 0xd0], 0x825a2c
// 004bacb0  c78424d40000000c5a8200 mov dword ptr [esp + 0xd4], 0x825a0c
// 004bacbb  c78424d8000000f0598200 mov dword ptr [esp + 0xd8], 0x8259f0
// 004bacc6  c78424dc000000d4598200 mov dword ptr [esp + 0xdc], 0x8259d4
// 004bacd1  c78424e0000000ac598200 mov dword ptr [esp + 0xe0], 0x8259ac
// 004bacdc  c78424e400000088598200 mov dword ptr [esp + 0xe4], 0x825988
// 004bace7  c78424e800000070598200 mov dword ptr [esp + 0xe8], 0x825970
// 004bacf2  c78424ec0000004c598200 mov dword ptr [esp + 0xec], 0x82594c
// 004bacfd  c78424f000000030598200 mov dword ptr [esp + 0xf0], 0x825930
// 004bad08  c78424f400000014598200 mov dword ptr [esp + 0xf4], 0x825914
// 004bad13  c78424f8000000f4588200 mov dword ptr [esp + 0xf8], 0x8258f4
// 004bad1e  c78424fc000000dc588200 mov dword ptr [esp + 0xfc], 0x8258dc
// 004bad29  c7842400010000b8588200 mov dword ptr [esp + 0x100], 0x8258b8
// 004bad34  c78424040100009c588200 mov dword ptr [esp + 0x104], 0x82589c
// 004bad3f  c784240801000084588200 mov dword ptr [esp + 0x108], 0x825884
// 004bad4a  c784240c0100006c588200 mov dword ptr [esp + 0x10c], 0x82586c
// 004bad55  c784241001000054588200 mov dword ptr [esp + 0x110], 0x825854
// 004bad60  c784241401000038588200 mov dword ptr [esp + 0x114], 0x825838
// 004bad6b  c784241801000018588200 mov dword ptr [esp + 0x118], 0x825818
// 004bad76  c784241c01000004588200 mov dword ptr [esp + 0x11c], 0x825804
// 004bad81  c7842420010000ec578200 mov dword ptr [esp + 0x120], 0x8257ec
// 004bad8c  c7842424010000d4578200 mov dword ptr [esp + 0x124], 0x8257d4
// 004bad97  c7842428010000bc578200 mov dword ptr [esp + 0x128], 0x8257bc
// 004bada2  8b0484               mov eax, dword ptr [esp + eax*4]
// 004bada5  81c42c010000         add esp, 0x12c
// 004badab  c3                   ret 
// library rbxgs-raknet/PacketLogger.cpp (function ?BaseIDTOString@PacketLogger@@SAPADE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet PacketLogger.cpp

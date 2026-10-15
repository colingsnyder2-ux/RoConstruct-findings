// roc 2008-06 004697e0  unit: DxUserInput  size: 1138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004697e0
//
// 004697e0  803d04e9960000       cmp byte ptr [0x96e904], 0
// 004697e7  0f8559040000         jne 0x469c46
// 004697ed  57                   push edi
// 004697ee  33c0                 xor eax, eax
// 004697f0  b943010000           mov ecx, 0x143
// 004697f5  bff8e39600           mov edi, 0x96e3f8
// 004697fa  f3ab                 rep stosd dword ptr es:[edi], eax
// 004697fc  b801000000           mov eax, 1
// 00469801  a364e49600           mov dword ptr [0x96e464], eax
// 00469806  c705bce4960002000000 mov dword ptr [0x96e4bc], 2
// 00469810  c705c0e4960003000000 mov dword ptr [0x96e4c0], 3
// 0046981a  c705c4e4960004000000 mov dword ptr [0x96e4c4], 4
// 00469824  c705c8e4960005000000 mov dword ptr [0x96e4c8], 5
// 0046982e  c705cce4960006000000 mov dword ptr [0x96e4cc], 6
// 00469838  c705d0e4960007000000 mov dword ptr [0x96e4d0], 7
// 00469842  c705d4e4960008000000 mov dword ptr [0x96e4d4], 8
// 0046984c  c705d8e4960009000000 mov dword ptr [0x96e4d8], 9
// 00469856  c705dce496000a000000 mov dword ptr [0x96e4dc], 0xa
// 00469860  c705b8e496000b000000 mov dword ptr [0x96e4b8], 0xb
// 0046986a  c705ace496000c000000 mov dword ptr [0x96e4ac], 0xc
// 00469874  c705ece496000d000000 mov dword ptr [0x96e4ec], 0xd
// 0046987e  c70518e496000e000000 mov dword ptr [0x96e418], 0xe
// 00469888  c7051ce496000f000000 mov dword ptr [0x96e41c], 0xf
// 00469892  c705bce5960010000000 mov dword ptr [0x96e5bc], 0x10
// 0046989c  c705d4e5960011000000 mov dword ptr [0x96e5d4], 0x11
// 004698a6  c7058ce5960012000000 mov dword ptr [0x96e58c], 0x12
// 004698b0  c705c0e5960013000000 mov dword ptr [0x96e5c0], 0x13
// 004698ba  c705c8e5960014000000 mov dword ptr [0x96e5c8], 0x14
// 004698c4  c705dce5960015000000 mov dword ptr [0x96e5dc], 0x15
// 004698ce  c705cce5960016000000 mov dword ptr [0x96e5cc], 0x16
// 004698d8  c7059ce5960017000000 mov dword ptr [0x96e59c], 0x17
// 004698e2  c705b4e5960018000000 mov dword ptr [0x96e5b4], 0x18
// 004698ec  c705b8e5960019000000 mov dword ptr [0x96e5b8], 0x19
// 004698f6  c70564e596001a000000 mov dword ptr [0x96e564], 0x1a
// 00469900  c7056ce596001b000000 mov dword ptr [0x96e56c], 0x1b
// 0046990a  c7052ce496001c000000 mov dword ptr [0x96e42c], 0x1c
// 00469914  c705c0e896001d000000 mov dword ptr [0x96e8c0], 0x1d
// 0046991e  c7057ce596001e000000 mov dword ptr [0x96e57c], 0x1e
// 00469928  c705c4e596001f000000 mov dword ptr [0x96e5c4], 0x1f
// 00469932  c70588e5960020000000 mov dword ptr [0x96e588], 0x20
// 0046993c  c70590e5960021000000 mov dword ptr [0x96e590], 0x21
// 00469946  c70594e5960022000000 mov dword ptr [0x96e594], 0x22
// 00469950  c70598e5960023000000 mov dword ptr [0x96e598], 0x23
// 0046995a  c705a0e5960024000000 mov dword ptr [0x96e5a0], 0x24
// 00469964  c705a4e5960025000000 mov dword ptr [0x96e5a4], 0x25
// 0046996e  c705a8e5960026000000 mov dword ptr [0x96e5a8], 0x26
// 00469978  c705e4e4960027000000 mov dword ptr [0x96e4e4], 0x27
// 00469982  c70594e4960028000000 mov dword ptr [0x96e494], 0x28
// 0046998c  c70578e5960029000000 mov dword ptr [0x96e578], 0x29
// 00469996  c705b8e896002a000000 mov dword ptr [0x96e8b8], 0x2a
// 004699a0  c70568e5960056000000 mov dword ptr [0x96e568], 0x56
// 004699aa  c705e0e596002c000000 mov dword ptr [0x96e5e0], 0x2c
// 004699b4  c705d8e596002d000000 mov dword ptr [0x96e5d8], 0x2d
// 004699be  c70584e596002e000000 mov dword ptr [0x96e584], 0x2e
// 004699c8  c705d0e596002f000000 mov dword ptr [0x96e5d0], 0x2f
// 004699d2  c70580e5960030000000 mov dword ptr [0x96e580], 0x30
// 004699dc  c705b0e5960031000000 mov dword ptr [0x96e5b0], 0x31
// 004699e6  c705ace5960032000000 mov dword ptr [0x96e5ac], 0x32
// 004699f0  c705a8e4960033000000 mov dword ptr [0x96e4a8], 0x33
// 004699fa  c705b0e4960034000000 mov dword ptr [0x96e4b0], 0x34
// 00469a04  c705b4e4960035000000 mov dword ptr [0x96e4b4], 0x35
// 00469a0e  c705b4e8960036000000 mov dword ptr [0x96e8b4], 0x36
// 00469a18  c70528e8960037000000 mov dword ptr [0x96e828], 0x37
// 00469a22  c705c8e8960038000000 mov dword ptr [0x96e8c8], 0x38
// 00469a2c  c70578e4960039000000 mov dword ptr [0x96e478], 0x39
// 00469a36  c705ace896003a000000 mov dword ptr [0x96e8ac], 0x3a
// 00469a40  c70560e896003b000000 mov dword ptr [0x96e860], 0x3b
// 00469a4a  c70564e896003c000000 mov dword ptr [0x96e864], 0x3c
// 00469a54  c70568e896003d000000 mov dword ptr [0x96e868], 0x3d
// 00469a5e  c7056ce896003e000000 mov dword ptr [0x96e86c], 0x3e
// 00469a68  c70570e896003f000000 mov dword ptr [0x96e870], 0x3f
// 00469a72  c70574e8960040000000 mov dword ptr [0x96e874], 0x40
// 00469a7c  c70578e8960041000000 mov dword ptr [0x96e878], 0x41
// 00469a86  c7057ce8960042000000 mov dword ptr [0x96e87c], 0x42
// 00469a90  c70580e8960043000000 mov dword ptr [0x96e880], 0x43
// 00469a9a  c70584e8960044000000 mov dword ptr [0x96e884], 0x44
// 00469aa4  c705a8e8960045000000 mov dword ptr [0x96e8a8], 0x45
// 00469aae  c705b0e8960046000000 mov dword ptr [0x96e8b0], 0x46
// 00469ab8  c70514e8960047000000 mov dword ptr [0x96e814], 0x47
// 00469ac2  c70518e8960048000000 mov dword ptr [0x96e818], 0x48
// 00469acc  c7051ce8960049000000 mov dword ptr [0x96e81c], 0x49
// 00469ad6  c7052ce896004a000000 mov dword ptr [0x96e82c], 0x4a
// 00469ae0  c70508e896004b000000 mov dword ptr [0x96e808], 0x4b
// 00469aea  a204e99600           mov byte ptr [0x96e904], al
// 00469aef  8b442408             mov eax, dword ptr [esp + 8]
// 00469af3  c7050ce896004c000000 mov dword ptr [0x96e80c], 0x4c
// 00469afd  c70510e896004d000000 mov dword ptr [0x96e810], 0x4d
// 00469b07  c70530e896004e000000 mov dword ptr [0x96e830], 0x4e
// 00469b11  c705fce796004f000000 mov dword ptr [0x96e7fc], 0x4f
// 00469b1b  c70500e8960050000000 mov dword ptr [0x96e800], 0x50
// 00469b25  c70504e8960051000000 mov dword ptr [0x96e804], 0x51
// 00469b2f  c705f8e7960052000000 mov dword ptr [0x96e7f8], 0x52
// 00469b39  c70520e8960053000000 mov dword ptr [0x96e820], 0x53
// 00469b43  c70588e8960057000000 mov dword ptr [0x96e888], 0x57
// 00469b4d  c7058ce8960058000000 mov dword ptr [0x96e88c], 0x58
// 00469b57  c70590e8960064000000 mov dword ptr [0x96e890], 0x64
// 00469b61  c70594e8960065000000 mov dword ptr [0x96e894], 0x65
// 00469b6b  c70598e8960066000000 mov dword ptr [0x96e898], 0x66
// 00469b75  c70538e896008d000000 mov dword ptr [0x96e838], 0x8d
// 00469b7f  c70534e896009c000000 mov dword ptr [0x96e834], 0x9c
// 00469b89  c705bce896009d000000 mov dword ptr [0x96e8bc], 0x9d
// 00469b93  c70524e89600b5000000 mov dword ptr [0x96e824], 0xb5
// 00469b9d  c705ece89600b7000000 mov dword ptr [0x96e8ec], 0xb7
// 00469ba7  c705c4e89600b8000000 mov dword ptr [0x96e8c4], 0xb8
// 00469bb1  c70544e49600c5000000 mov dword ptr [0x96e444], 0xc5
// 00469bbb  c70550e89600c7000000 mov dword ptr [0x96e850], 0xc7
// 00469bc5  c7053ce89600c8000000 mov dword ptr [0x96e83c], 0xc8
// 00469bcf  c70558e89600c9000000 mov dword ptr [0x96e858], 0xc9
// 00469bd9  c70548e89600cb000000 mov dword ptr [0x96e848], 0xcb
// 00469be3  c70544e89600cd000000 mov dword ptr [0x96e844], 0xcd
// 00469bed  c70554e89600cf000000 mov dword ptr [0x96e854], 0xcf
// 00469bf7  c70540e89600d0000000 mov dword ptr [0x96e840], 0xd0
// 00469c01  c7055ce89600d1000000 mov dword ptr [0x96e85c], 0xd1
// 00469c0b  c7054ce89600d2000000 mov dword ptr [0x96e84c], 0xd2
// 00469c15  c705f4e59600d3000000 mov dword ptr [0x96e5f4], 0xd3
// 00469c1f  c705d0e89600db000000 mov dword ptr [0x96e8d0], 0xdb
// 00469c29  c705cce89600dc000000 mov dword ptr [0x96e8cc], 0xdc
// 00469c33  c705f4e89600dd000000 mov dword ptr [0x96e8f4], 0xdd
// 00469c3d  8b0485f8e39600       mov eax, dword ptr [eax*4 + 0x96e3f8]
// 00469c44  5f                   pop edi
// 00469c45  c3                   ret 
// 00469c46  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00469c4a  8b048df8e39600       mov eax, dword ptr [ecx*4 + 0x96e3f8]
// 00469c51  c3                   ret 
// library rbxgs/roc_input_map_alias_9c2f97ba1d40f5a8.cpp (function ?sdlToScan@@YAIW4SDLKey@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_input_map_alias_9c2f97ba1d40f5a8.cpp

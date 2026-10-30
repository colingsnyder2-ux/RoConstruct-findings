// roc 2009-12 00884fe0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 2606 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00884fe0
//
// 00884fe0  6aff                 push -1
// 00884fe2  68c10a9600           push 0x960ac1
// 00884fe7  64a100000000         mov eax, dword ptr fs:[0]
// 00884fed  50                   push eax
// 00884fee  81ec58010000         sub esp, 0x158
// 00884ff4  a10052b600           mov eax, dword ptr [0xb65200]
// 00884ff9  33c4                 xor eax, esp
// 00884ffb  89842454010000       mov dword ptr [esp + 0x154], eax
// 00885002  53                   push ebx
// 00885003  55                   push ebp
// 00885004  56                   push esi
// 00885005  57                   push edi
// 00885006  a10052b600           mov eax, dword ptr [0xb65200]
// 0088500b  33c4                 xor eax, esp
// 0088500d  50                   push eax
// 0088500e  8d84246c010000       lea eax, [esp + 0x16c]
// 00885015  64a300000000         mov dword ptr fs:[0], eax
// 0088501b  bbff000000           mov ebx, 0xff
// 00885020  b0ea                 mov al, 0xea
// 00885022  b27e                 mov dl, 0x7e
// 00885024  8bf1                 mov esi, ecx
// 00885026  b1c6                 mov cl, 0xc6
// 00885028  89742424             mov dword ptr [esp + 0x24], esi
// 0088502c  885c2468             mov byte ptr [esp + 0x68], bl
// 00885030  885c2469             mov byte ptr [esp + 0x69], bl
// 00885034  885c246a             mov byte ptr [esp + 0x6a], bl
// 00885038  885c246b             mov byte ptr [esp + 0x6b], bl
// 0088503c  c644246cfc           mov byte ptr [esp + 0x6c], 0xfc
// 00885041  8844246d             mov byte ptr [esp + 0x6d], al
// 00885045  884c246e             mov byte ptr [esp + 0x6e], cl
// 00885049  c644246fb4           mov byte ptr [esp + 0x6f], 0xb4
// 0088504e  c6442470b4           mov byte ptr [esp + 0x70], 0xb4
// 00885053  c6442471b4           mov byte ptr [esp + 0x71], 0xb4
// 00885058  884c2472             mov byte ptr [esp + 0x72], cl
// 0088505c  c6442473fc           mov byte ptr [esp + 0x73], 0xfc
// 00885061  885c2474             mov byte ptr [esp + 0x74], bl
// 00885065  885c2475             mov byte ptr [esp + 0x75], bl
// 00885069  885c2476             mov byte ptr [esp + 0x76], bl
// 0088506d  885c2477             mov byte ptr [esp + 0x77], bl
// 00885071  885c2478             mov byte ptr [esp + 0x78], bl
// 00885075  885c2479             mov byte ptr [esp + 0x79], bl
// 00885079  885c247a             mov byte ptr [esp + 0x7a], bl
// 0088507d  8844247b             mov byte ptr [esp + 0x7b], al
// 00885081  8844247c             mov byte ptr [esp + 0x7c], al
// 00885085  8844247d             mov byte ptr [esp + 0x7d], al
// 00885089  8844247e             mov byte ptr [esp + 0x7e], al
// 0088508d  884c247f             mov byte ptr [esp + 0x7f], cl
// 00885091  c6842480000000b4     mov byte ptr [esp + 0x80], 0xb4
// 00885099  c684248100000090     mov byte ptr [esp + 0x81], 0x90
// 008850a1  88942482000000       mov byte ptr [esp + 0x82], dl
// 008850a8  88942483000000       mov byte ptr [esp + 0x83], dl
// 008850af  888c2484000000       mov byte ptr [esp + 0x84], cl
// 008850b6  889c2485000000       mov byte ptr [esp + 0x85], bl
// 008850bd  889c2486000000       mov byte ptr [esp + 0x86], bl
// 008850c4  889c2487000000       mov byte ptr [esp + 0x87], bl
// 008850cb  889c2488000000       mov byte ptr [esp + 0x88], bl
// 008850d2  889c2489000000       mov byte ptr [esp + 0x89], bl
// 008850d9  8884248a000000       mov byte ptr [esp + 0x8a], al
// 008850e0  c684248b000000fc     mov byte ptr [esp + 0x8b], 0xfc
// 008850e8  c684248c000000fc     mov byte ptr [esp + 0x8c], 0xfc
// 008850f0  8884248d000000       mov byte ptr [esp + 0x8d], al
// 008850f7  8884248e000000       mov byte ptr [esp + 0x8e], al
// 008850fe  888c248f000000       mov byte ptr [esp + 0x8f], cl
// 00885105  c6842490000000b4     mov byte ptr [esp + 0x90], 0xb4
// 0088510d  c684249100000090     mov byte ptr [esp + 0x91], 0x90
// 00885115  88942492000000       mov byte ptr [esp + 0x92], dl
// 0088511c  c68424930000006c     mov byte ptr [esp + 0x93], 0x6c
// 00885124  c68424940000005a     mov byte ptr [esp + 0x94], 0x5a
// 0088512c  c684249500000090     mov byte ptr [esp + 0x95], 0x90
// 00885134  889c2496000000       mov byte ptr [esp + 0x96], bl
// 0088513b  889c2497000000       mov byte ptr [esp + 0x97], bl
// 00885142  889c2498000000       mov byte ptr [esp + 0x98], bl
// 00885149  88842499000000       mov byte ptr [esp + 0x99], al
// 00885150  c684249a000000fc     mov byte ptr [esp + 0x9a], 0xfc
// 00885158  c684249b000000fc     mov byte ptr [esp + 0x9b], 0xfc
// 00885160  c684249c000000fc     mov byte ptr [esp + 0x9c], 0xfc
// 00885168  8884249d000000       mov byte ptr [esp + 0x9d], al
// 0088516f  8884249e000000       mov byte ptr [esp + 0x9e], al
// 00885176  888c249f000000       mov byte ptr [esp + 0x9f], cl
// 0088517d  c68424a0000000b4     mov byte ptr [esp + 0xa0], 0xb4
// 00885185  c68424a100000090     mov byte ptr [esp + 0xa1], 0x90
// 0088518d  889424a2000000       mov byte ptr [esp + 0xa2], dl
// 00885194  c68424a30000006c     mov byte ptr [esp + 0xa3], 0x6c
// 0088519c  c68424a40000005a     mov byte ptr [esp + 0xa4], 0x5a
// 008851a4  c68424a500000036     mov byte ptr [esp + 0xa5], 0x36
// 008851ac  889424a6000000       mov byte ptr [esp + 0xa6], dl
// 008851b3  889c24a7000000       mov byte ptr [esp + 0xa7], bl
// 008851ba  888424a8000000       mov byte ptr [esp + 0xa8], al
// 008851c1  c68424a9000000fc     mov byte ptr [esp + 0xa9], 0xfc
// 008851c9  c68424aa000000fc     mov byte ptr [esp + 0xaa], 0xfc
// 008851d1  c68424ab000000fc     mov byte ptr [esp + 0xab], 0xfc
// 008851d9  c68424ac000000fc     mov byte ptr [esp + 0xac], 0xfc
// 008851e1  888424ad000000       mov byte ptr [esp + 0xad], al
// 008851e8  888424ae000000       mov byte ptr [esp + 0xae], al
// 008851ef  888c24af000000       mov byte ptr [esp + 0xaf], cl
// 008851f6  c68424b0000000b4     mov byte ptr [esp + 0xb0], 0xb4
// 008851fe  c68424b100000090     mov byte ptr [esp + 0xb1], 0x90
// 00885206  889424b2000000       mov byte ptr [esp + 0xb2], dl
// 0088520d  c68424b30000006c     mov byte ptr [esp + 0xb3], 0x6c
// 00885215  c68424b40000005a     mov byte ptr [esp + 0xb4], 0x5a
// 0088521d  c68424b500000036     mov byte ptr [esp + 0xb5], 0x36
// 00885225  c68424b600000024     mov byte ptr [esp + 0xb6], 0x24
// 0088522d  888424b7000000       mov byte ptr [esp + 0xb7], al
// 00885234  888424b8000000       mov byte ptr [esp + 0xb8], al
// 0088523b  c68424b9000000fc     mov byte ptr [esp + 0xb9], 0xfc
// 00885243  c68424ba000000fc     mov byte ptr [esp + 0xba], 0xfc
// 0088524b  c68424bb000000fc     mov byte ptr [esp + 0xbb], 0xfc
// 00885253  c68424bc000000fc     mov byte ptr [esp + 0xbc], 0xfc
// 0088525b  888424bd000000       mov byte ptr [esp + 0xbd], al
// 00885262  888424be000000       mov byte ptr [esp + 0xbe], al
// 00885269  888c24bf000000       mov byte ptr [esp + 0xbf], cl
// 00885270  c68424c0000000b4     mov byte ptr [esp + 0xc0], 0xb4
// 00885278  c68424c100000090     mov byte ptr [esp + 0xc1], 0x90
// 00885280  889424c2000000       mov byte ptr [esp + 0xc2], dl
// 00885287  c68424c30000006c     mov byte ptr [esp + 0xc3], 0x6c
// 0088528f  c68424c400000048     mov byte ptr [esp + 0xc4], 0x48
// 00885297  c68424c500000036     mov byte ptr [esp + 0xc5], 0x36
// 0088529f  c68424c600000024     mov byte ptr [esp + 0xc6], 0x24
// 008852a7  c68424c70000005a     mov byte ptr [esp + 0xc7], 0x5a
// 008852af  888424c8000000       mov byte ptr [esp + 0xc8], al
// 008852b6  888424c9000000       mov byte ptr [esp + 0xc9], al
// 008852bd  888424ca000000       mov byte ptr [esp + 0xca], al
// 008852c4  888424cb000000       mov byte ptr [esp + 0xcb], al
// 008852cb  888424cc000000       mov byte ptr [esp + 0xcc], al
// 008852d2  888424cd000000       mov byte ptr [esp + 0xcd], al
// 008852d9  888c24ce000000       mov byte ptr [esp + 0xce], cl
// 008852e0  c68424cf000000b4     mov byte ptr [esp + 0xcf], 0xb4
// 008852e8  c68424d000000090     mov byte ptr [esp + 0xd0], 0x90
// 008852f0  c68424d100000090     mov byte ptr [esp + 0xd1], 0x90
// 008852f8  889424d2000000       mov byte ptr [esp + 0xd2], dl
// 008852ff  c68424d30000006c     mov byte ptr [esp + 0xd3], 0x6c
// 00885307  c68424d400000048     mov byte ptr [esp + 0xd4], 0x48
// 0088530f  c68424d500000024     mov byte ptr [esp + 0xd5], 0x24
// 00885317  c68424d600000012     mov byte ptr [esp + 0xd6], 0x12
// 0088531f  c68424d700000024     mov byte ptr [esp + 0xd7], 0x24
// 00885327  888c24d8000000       mov byte ptr [esp + 0xd8], cl
// 0088532e  888424d9000000       mov byte ptr [esp + 0xd9], al
// 00885335  888424da000000       mov byte ptr [esp + 0xda], al
// 0088533c  888424db000000       mov byte ptr [esp + 0xdb], al
// 00885343  888c24dc000000       mov byte ptr [esp + 0xdc], cl
// 0088534a  888c24dd000000       mov byte ptr [esp + 0xdd], cl
// 00885351  888c24de000000       mov byte ptr [esp + 0xde], cl
// 00885358  c68424df000000b4     mov byte ptr [esp + 0xdf], 0xb4
// 00885360  c68424e000000090     mov byte ptr [esp + 0xe0], 0x90
// 00885368  889424e1000000       mov byte ptr [esp + 0xe1], dl
// 0088536f  889424e2000000       mov byte ptr [esp + 0xe2], dl
// 00885376  c68424e300000048     mov byte ptr [esp + 0xe3], 0x48
// 0088537e  c68424e400000036     mov byte ptr [esp + 0xe4], 0x36
// 00885386  c68424e500000024     mov byte ptr [esp + 0xe5], 0x24
// 0088538e  c68424e600000012     mov byte ptr [esp + 0xe6], 0x12
// 00885396  c68424e700000012     mov byte ptr [esp + 0xe7], 0x12
// 0088539e  888c24e8000000       mov byte ptr [esp + 0xe8], cl
// 008853a5  888c24e9000000       mov byte ptr [esp + 0xe9], cl
// 008853ac  888c24ea000000       mov byte ptr [esp + 0xea], cl
// 008853b3  888c24eb000000       mov byte ptr [esp + 0xeb], cl
// 008853ba  888c24ec000000       mov byte ptr [esp + 0xec], cl
// 008853c1  c68424ed000000b4     mov byte ptr [esp + 0xed], 0xb4
// 008853c9  c68424ee000000b4     mov byte ptr [esp + 0xee], 0xb4
// 008853d1  c68424ef00000090     mov byte ptr [esp + 0xef], 0x90
// 008853d9  889424f0000000       mov byte ptr [esp + 0xf0], dl
// 008853e0  889424f1000000       mov byte ptr [esp + 0xf1], dl
// 008853e7  c68424f20000006c     mov byte ptr [esp + 0xf2], 0x6c
// 008853ef  c68424f300000048     mov byte ptr [esp + 0xf3], 0x48
// 008853f7  c68424f400000036     mov byte ptr [esp + 0xf4], 0x36
// 008853ff  c68424f500000012     mov byte ptr [esp + 0xf5], 0x12
// 00885407  c68424f600000012     mov byte ptr [esp + 0xf6], 0x12
// 0088540f  c68424f700000000     mov byte ptr [esp + 0xf7], 0
// 00885417  888c24f8000000       mov byte ptr [esp + 0xf8], cl
// 0088541e  c68424f9000000b4     mov byte ptr [esp + 0xf9], 0xb4
// 00885426  c68424fa000000b4     mov byte ptr [esp + 0xfa], 0xb4
// 0088542e  c68424fb000000b4     mov byte ptr [esp + 0xfb], 0xb4
// 00885436  c68424fc000000b4     mov byte ptr [esp + 0xfc], 0xb4
// 0088543e  c68424fd000000b4     mov byte ptr [esp + 0xfd], 0xb4
// 00885446  c68424fe00000090     mov byte ptr [esp + 0xfe], 0x90
// 0088544e  889424ff000000       mov byte ptr [esp + 0xff], dl
// 00885455  88942400010000       mov byte ptr [esp + 0x100], dl
// 0088545c  c68424010100006c     mov byte ptr [esp + 0x101], 0x6c
// 00885464  c68424020100005a     mov byte ptr [esp + 0x102], 0x5a
// 0088546c  c684240301000036     mov byte ptr [esp + 0x103], 0x36
// 00885474  c684240401000024     mov byte ptr [esp + 0x104], 0x24
// 0088547c  c684240501000012     mov byte ptr [esp + 0x105], 0x12
// 00885484  c684240601000000     mov byte ptr [esp + 0x106], 0
// 0088548c  c684240701000000     mov byte ptr [esp + 0x107], 0
// 00885494  888c2408010000       mov byte ptr [esp + 0x108], cl
// 0088549b  c684240901000090     mov byte ptr [esp + 0x109], 0x90
// 008854a3  c684240a01000090     mov byte ptr [esp + 0x10a], 0x90
// 008854ab  c684240b01000090     mov byte ptr [esp + 0x10b], 0x90
// 008854b3  c684240c01000090     mov byte ptr [esp + 0x10c], 0x90
// 008854bb  c684240d01000090     mov byte ptr [esp + 0x10d], 0x90
// 008854c3  8894240e010000       mov byte ptr [esp + 0x10e], dl
// 008854ca  8894240f010000       mov byte ptr [esp + 0x10f], dl
// 008854d1  c68424100100006c     mov byte ptr [esp + 0x110], 0x6c
// 008854d9  c68424110100006c     mov byte ptr [esp + 0x111], 0x6c
// 008854e1  c684241201000048     mov byte ptr [esp + 0x112], 0x48
// 008854e9  c684241301000036     mov byte ptr [esp + 0x113], 0x36
// 008854f1  c684241401000024     mov byte ptr [esp + 0x114], 0x24
// 008854f9  c684241501000012     mov byte ptr [esp + 0x115], 0x12
// 00885501  c684241601000000     mov byte ptr [esp + 0x116], 0
// 00885509  c684241701000036     mov byte ptr [esp + 0x117], 0x36
// 00885511  c6842418010000fc     mov byte ptr [esp + 0x118], 0xfc
// 00885519  c684241901000090     mov byte ptr [esp + 0x119], 0x90
// 00885521  8894241a010000       mov byte ptr [esp + 0x11a], dl
// 00885528  8894241b010000       mov byte ptr [esp + 0x11b], dl
// 0088552f  8894241c010000       mov byte ptr [esp + 0x11c], dl
// 00885536  8894241d010000       mov byte ptr [esp + 0x11d], dl
// 0088553d  c684241e0100006c     mov byte ptr [esp + 0x11e], 0x6c
// 00885545  c684241f0100006c     mov byte ptr [esp + 0x11f], 0x6c
// 0088554d  c68424200100005a     mov byte ptr [esp + 0x120], 0x5a
// 00885555  c68424210100005a     mov byte ptr [esp + 0x121], 0x5a
// 0088555d  c684242201000036     mov byte ptr [esp + 0x122], 0x36
// 00885565  c684242301000024     mov byte ptr [esp + 0x123], 0x24
// 0088556d  c684242401000012     mov byte ptr [esp + 0x124], 0x12
// 00885575  c684242501000000     mov byte ptr [esp + 0x125], 0
// 0088557d  c684242601000000     mov byte ptr [esp + 0x126], 0
// 00885585  c6842427010000b4     mov byte ptr [esp + 0x127], 0xb4
// 0088558d  889c2428010000       mov byte ptr [esp + 0x128], bl
// 00885594  888c2429010000       mov byte ptr [esp + 0x129], cl
// 0088559b  c684242a0100006c     mov byte ptr [esp + 0x12a], 0x6c
// 008855a3  c684242b0100006c     mov byte ptr [esp + 0x12b], 0x6c
// 008855ab  c684242c0100006c     mov byte ptr [esp + 0x12c], 0x6c
// 008855b3  c684242d0100006c     mov byte ptr [esp + 0x12d], 0x6c
// 008855bb  c684242e0100005a     mov byte ptr [esp + 0x12e], 0x5a
// 008855c3  c684242f0100005a     mov byte ptr [esp + 0x12f], 0x5a
// 008855cb  c68424300100005a     mov byte ptr [esp + 0x130], 0x5a
// 008855d3  c684243101000048     mov byte ptr [esp + 0x131], 0x48
// 008855db  c684243201000036     mov byte ptr [esp + 0x132], 0x36
// 008855e3  c684243301000024     mov byte ptr [esp + 0x133], 0x24
// 008855eb  c684243401000012     mov byte ptr [esp + 0x134], 0x12
// 008855f3  c684243501000000     mov byte ptr [esp + 0x135], 0
// 008855fb  c684243601000048     mov byte ptr [esp + 0x136], 0x48
// 00885603  889c2437010000       mov byte ptr [esp + 0x137], bl
// 0088560a  889c2438010000       mov byte ptr [esp + 0x138], bl
// 00885611  889c2439010000       mov byte ptr [esp + 0x139], bl
// 00885618  c684243a010000b4     mov byte ptr [esp + 0x13a], 0xb4
// 00885620  c684243b0100006c     mov byte ptr [esp + 0x13b], 0x6c
// 00885628  c684243c0100005a     mov byte ptr [esp + 0x13c], 0x5a
// 00885630  c684243d0100005a     mov byte ptr [esp + 0x13d], 0x5a
// 00885638  c684243e0100005a     mov byte ptr [esp + 0x13e], 0x5a
// 00885640  c684243f01000048     mov byte ptr [esp + 0x13f], 0x48
// 00885648  c684244001000048     mov byte ptr [esp + 0x140], 0x48
// 00885650  c684244101000036     mov byte ptr [esp + 0x141], 0x36
// 00885658  c684244201000024     mov byte ptr [esp + 0x142], 0x24
// 00885660  c684244301000012     mov byte ptr [esp + 0x143], 0x12
// 00885668  c684244401000000     mov byte ptr [esp + 0x144], 0
// 00885670  c684244501000036     mov byte ptr [esp + 0x145], 0x36
// 00885678  889c2446010000       mov byte ptr [esp + 0x146], bl
// 0088567f  889c2447010000       mov byte ptr [esp + 0x147], bl
// 00885686  889c2448010000       mov byte ptr [esp + 0x148], bl
// 0088568d  889c2449010000       mov byte ptr [esp + 0x149], bl
// 00885694  889c244a010000       mov byte ptr [esp + 0x14a], bl
// 0088569b  888c244b010000       mov byte ptr [esp + 0x14b], cl
// 008856a2  c684244c0100005a     mov byte ptr [esp + 0x14c], 0x5a
// 008856aa  c684244d01000048     mov byte ptr [esp + 0x14d], 0x48
// 008856b2  c684244e01000048     mov byte ptr [esp + 0x14e], 0x48
// 008856ba  c684244f01000048     mov byte ptr [esp + 0x14f], 0x48
// 008856c2  c684245001000036     mov byte ptr [esp + 0x150], 0x36
// 008856ca  c684245101000024     mov byte ptr [esp + 0x151], 0x24
// 008856d2  c684245201000024     mov byte ptr [esp + 0x152], 0x24
// 008856da  c684245301000012     mov byte ptr [esp + 0x153], 0x12
// 008856e2  c68424540100006c     mov byte ptr [esp + 0x154], 0x6c
// 008856ea  8d8e48050000         lea ecx, [esi + 0x548]
// 008856f0  889c2455010000       mov byte ptr [esp + 0x155], bl
// 008856f7  889c2456010000       mov byte ptr [esp + 0x156], bl
// 008856fe  889c2457010000       mov byte ptr [esp + 0x157], bl
// 00885705  889c2458010000       mov byte ptr [esp + 0x158], bl
// 0088570c  889c2459010000       mov byte ptr [esp + 0x159], bl
// 00885713  889c245a010000       mov byte ptr [esp + 0x15a], bl
// 0088571a  889c245b010000       mov byte ptr [esp + 0x15b], bl
// 00885721  c684245c010000fc     mov byte ptr [esp + 0x15c], 0xfc
// 00885729  c684245d010000b4     mov byte ptr [esp + 0x15d], 0xb4
// 00885731  c684245e0100006c     mov byte ptr [esp + 0x15e], 0x6c
// 00885739  c684245f01000048     mov byte ptr [esp + 0x15f], 0x48
// 00885741  c684246001000036     mov byte ptr [esp + 0x160], 0x36
// 00885749  c68424610100005a     mov byte ptr [esp + 0x161], 0x5a
// 00885751  88942462010000       mov byte ptr [esp + 0x162], dl
// 00885758  88842463010000       mov byte ptr [esp + 0x163], al
// 0088575f  889c2464010000       mov byte ptr [esp + 0x164], bl
// 00885766  889c2465010000       mov byte ptr [esp + 0x165], bl
// 0088576d  889c2466010000       mov byte ptr [esp + 0x166], bl
// 00885774  889c2467010000       mov byte ptr [esp + 0x167], bl
// 0088577b  e81a150a00           call 0x926c9a
// 00885780  8b86c8040000         mov eax, dword ptr [esi + 0x4c8]
// 00885786  83f8ff               cmp eax, -1
// 00885789  7506                 jne 0x885791
// 0088578b  8b86c4040000         mov eax, dword ptr [esi + 0x4c4]
// 00885791  89442418             mov dword ptr [esp + 0x18], eax
// 00885795  8b86d4040000         mov eax, dword ptr [esi + 0x4d4]
// 0088579b  83f8ff               cmp eax, -1
// 0088579e  750c                 jne 0x8857ac
// 008857a0  8b8ed0040000         mov ecx, dword ptr [esi + 0x4d0]
// 008857a6  894c2414             mov dword ptr [esp + 0x14], ecx
// 008857aa  eb04                 jmp 0x8857b0
// 008857ac  89442414             mov dword ptr [esp + 0x14], eax
// 008857b0  ff15e4cb9800         call dword ptr [0x98cbe4]
// 008857b6  50                   push eax
// 008857b7  e86ee3f6ff           call 0x7f3b2a
// 008857bc  50                   push eax
// 008857bd  8d4c2458             lea ecx, [esp + 0x58]
// 008857c1  e8c40c0a00           call 0x92648a
// 008857c6  33ed                 xor ebp, ebp
// 008857c8  8d4c2444             lea ecx, [esp + 0x44]
// 008857cc  89ac2474010000       mov dword ptr [esp + 0x174], ebp
// 008857d3  e8d60c0a00           call 0x9264ae
// 008857d8  8b542458             mov edx, dword ptr [esp + 0x58]
// 008857dc  52                   push edx
// 008857dd  c684247801000001     mov byte ptr [esp + 0x178], 1
// 008857e5  ff1554b19800         call dword ptr [0x98b154]
// 008857eb  50                   push eax
// 008857ec  8d4c2448             lea ecx, [esp + 0x48]
// 008857f0  e8a70c0a00           call 0x92649c
// 008857f5  896c2420             mov dword ptr [esp + 0x20], ebp
// 008857f9  c744241c18229a00     mov dword ptr [esp + 0x1c], 0x9a2218
// 00885801  8b442458             mov eax, dword ptr [esp + 0x58]
// 00885805  6a10                 push 0x10
// 00885807  6a10                 push 0x10
// 00885809  50                   push eax
// 0088580a  c684248001000002     mov byte ptr [esp + 0x180], 2
// 00885812  ff1550b19800         call dword ptr [0x98b150]
// 00885818  50                   push eax
// 00885819  8d4c2420             lea ecx, [esp + 0x20]
// 0088581d  e808e6f6ff           call 0x7f3e2a
// 00885822  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00885826  8b542448             mov edx, dword ptr [esp + 0x48]
// 0088582a  51                   push ecx
// 0088582b  52                   push edx
// 0088582c  e8c70d0a00           call 0x9265f8
// 00885831  8b542418             mov edx, dword ptr [esp + 0x18]
// 00885835  8944242c             mov dword ptr [esp + 0x2c], eax
// 00885839  8b442414             mov eax, dword ptr [esp + 0x14]
// 0088583d  0fb6f0               movzx esi, al
// 00885840  0fb6ca               movzx ecx, dl
// 00885843  89742434             mov dword ptr [esp + 0x34], esi
// 00885847  2bf1                 sub esi, ecx
// 00885849  668bca               mov cx, dx
// 0088584c  66c1e908             shr cx, 8
// 00885850  66894c2414           mov word ptr [esp + 0x14], cx
// 00885855  668bc8               mov cx, ax
// 00885858  66c1e908             shr cx, 8
// 0088585c  c1ea10               shr edx, 0x10
// 0088585f  c1e810               shr eax, 0x10
// 00885862  8974243c             mov dword ptr [esp + 0x3c], esi
// 00885866  66894c2418           mov word ptr [esp + 0x18], cx
// 0088586b  89542428             mov dword ptr [esp + 0x28], edx
// 0088586f  89442430             mov dword ptr [esp + 0x30], eax
// 00885873  eb14                 jmp 0x885889
// 00885875  eb09                 jmp 0x885880
// 00885877  8da42400000000       lea esp, [esp]
// 0088587e  8bff                 mov edi, edi
// 00885880  668b4c2418           mov cx, word ptr [esp + 0x18]
// 00885885  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00885889  0fb67c2c68           movzx edi, byte ptr [esp + ebp + 0x68]
// 0088588e  0faff7               imul esi, edi
// 00885891  b881808080           mov eax, 0x80808081
// 00885896  f7ee                 imul esi
// 00885898  03d6                 add edx, esi
// 0088589a  c1fa07               sar edx, 7
// 0088589d  8bc2                 mov eax, edx
// 0088589f  c1e81f               shr eax, 0x1f
// 008858a2  03d0                 add edx, eax
// 008858a4  8b442434             mov eax, dword ptr [esp + 0x34]
// 008858a8  2bc2                 sub eax, edx
// 008858aa  89442440             mov dword ptr [esp + 0x40], eax
// 008858ae  0fb6442414           movzx eax, byte ptr [esp + 0x14]
// 008858b3  0fb6c9               movzx ecx, cl
// 008858b6  8bf1                 mov esi, ecx
// 008858b8  2bf0                 sub esi, eax
// 008858ba  0faff7               imul esi, edi
// 008858bd  b881808080           mov eax, 0x80808081
// 008858c2  f7ee                 imul esi
// 008858c4  03d6                 add edx, esi
// 008858c6  c1fa07               sar edx, 7
// 008858c9  8bc2                 mov eax, edx
// 008858cb  c1e81f               shr eax, 0x1f
// 008858ce  03c2                 add eax, edx
// 008858d0  0fb6542428           movzx edx, byte ptr [esp + 0x28]
// 008858d5  2bc8                 sub ecx, eax
// 008858d7  894c2438             mov dword ptr [esp + 0x38], ecx
// 008858db  0fb64c2430           movzx ecx, byte ptr [esp + 0x30]
// 008858e0  8bf1                 mov esi, ecx
// 008858e2  2bf2                 sub esi, edx
// 008858e4  0faff7               imul esi, edi
// 008858e7  b881808080           mov eax, 0x80808081
// 008858ec  f7ee                 imul esi
// 008858ee  03d6                 add edx, esi
// 008858f0  c1fa07               sar edx, 7
// 008858f3  8bc2                 mov eax, edx
// 008858f5  c1e81f               shr eax, 0x1f
// 008858f8  03c2                 add eax, edx
// 008858fa  2bc8                 sub ecx, eax
// 008858fc  3bfb                 cmp edi, ebx
// 008858fe  7507                 jne 0x885907
// 00885900  b800ff0000           mov eax, 0xff00
// 00885905  eb17                 jmp 0x88591e
// 00885907  0fb6542440           movzx edx, byte ptr [esp + 0x40]
// 0088590c  0fb6c1               movzx eax, cl
// 0088590f  0fb64c2438           movzx ecx, byte ptr [esp + 0x38]
// 00885914  c1e008               shl eax, 8
// 00885917  0bc1                 or eax, ecx
// 00885919  c1e008               shl eax, 8
// 0088591c  0bc2                 or eax, edx
// 0088591e  50                   push eax
// 0088591f  8bc5                 mov eax, ebp
// 00885921  250f000080           and eax, 0x8000000f
// 00885926  7905                 jns 0x88592d
// 00885928  48                   dec eax
// 00885929  83c8f0               or eax, 0xfffffff0
// 0088592c  40                   inc eax
// 0088592d  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00885931  50                   push eax
// 00885932  8bc5                 mov eax, ebp
// 00885934  99                   cdq 
// 00885935  83e20f               and edx, 0xf
// 00885938  03c2                 add eax, edx
// 0088593a  c1f804               sar eax, 4
// 0088593d  50                   push eax
// 0088593e  51                   push ecx
// 0088593f  ff1514b19800         call dword ptr [0x98b114]
// 00885945  45                   inc ebp
// 00885946  81fd00010000         cmp ebp, 0x100
// 0088594c  0f8c2effffff         jl 0x885880
// 00885952  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00885956  85c0                 test eax, eax
// 00885958  7403                 je 0x88595d
// 0088595a  8b4004               mov eax, dword ptr [eax + 4]
// 0088595d  8b542448             mov edx, dword ptr [esp + 0x48]
// 00885961  50                   push eax
// 00885962  52                   push edx
// 00885963  e8900c0a00           call 0x9265f8
// 00885968  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0088596c  6a00                 push 0
// 0088596e  6a01                 push 1
// 00885970  6a19                 push 0x19
// 00885972  6a10                 push 0x10
// 00885974  6a10                 push 0x10
// 00885976  81c148050000         add ecx, 0x548
// 0088597c  e889e6f6ff           call 0x7f400a
// 00885981  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00885985  8b442424             mov eax, dword ptr [esp + 0x24]
// 00885989  8b804c050000         mov eax, dword ptr [eax + 0x54c]
// 0088598f  6800ff0000           push 0xff00
// 00885994  51                   push ecx
// 00885995  50                   push eax
// 00885996  e883e1f6ff           call 0x7f3b1e
// 0088599b  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008859a1  8b0a                 mov ecx, dword ptr [edx]
// 008859a3  e878d7b8ff           call 0x413120
// 008859a8  8d4c241c             lea ecx, [esp + 0x1c]
// 008859ac  c684247401000001     mov byte ptr [esp + 0x174], 1
// 008859b4  c744241c18229a00     mov dword ptr [esp + 0x1c], 0x9a2218
// 008859bc  e86f98b8ff           call 0x40f230
// 008859c1  8d4c2444             lea ecx, [esp + 0x44]
// 008859c5  c684247401000000     mov byte ptr [esp + 0x174], 0
// 008859cd  e8d60a0a00           call 0x9264a8
// 008859d2  8d4c2454             lea ecx, [esp + 0x54]
// 008859d6  c7842474010000ffffffff mov dword ptr [esp + 0x174], 0xffffffff
// 008859e1  e89e0a0a00           call 0x926484
// 008859e6  8b8c246c010000       mov ecx, dword ptr [esp + 0x16c]
// 008859ed  64890d00000000       mov dword ptr fs:[0], ecx
// 008859f4  59                   pop ecx
// 008859f5  5f                   pop edi
// 008859f6  5e                   pop esi
// 008859f7  5d                   pop ebp
// 008859f8  5b                   pop ebx
// 008859f9  8b8c2454010000       mov ecx, dword ptr [esp + 0x154]
// 00885a00  33cc                 xor ecx, esp
// 00885a02  e893f9f6ff           call 0x7f539a
// 00885a07  81c464010000         add esp, 0x164
// 00885a0d  c3                   ret 
// copied from an identical function in another client (function ?CreateGradientCircle@CXTPOffice2003Theme@XTPPaintThemes@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPOffice2003Theme.cpp
// roc 2009-12 00474bd0  unit: DxUserInput  size: 665 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00474bd0
//
// 00474bd0  803dd4c9b70000       cmp byte ptr [0xb7c9d4], 0
// 00474bd7  0f8580020000         jne 0x474e5d
// 00474bdd  57                   push edi
// 00474bde  33c0                 xor eax, eax
// 00474be0  b943010000           mov ecx, 0x143
// 00474be5  bfc8c4b700           mov edi, 0xb7c4c8
// 00474bea  f3ab                 rep stosd dword ptr es:[edi], eax
// 00474bec  b80d000000           mov eax, 0xd
// 00474bf1  a3fcc4b700           mov dword ptr [0xb7c4fc], eax
// 00474bf6  a304c9b700           mov dword ptr [0xb7c904], eax
// 00474bfb  8b442408             mov eax, dword ptr [esp + 8]
// 00474bff  c705b8c9b7002a000000 mov dword ptr [0xb7c9b8], 0x2a
// 00474c09  c705bcc9b7002c000000 mov dword ptr [0xb7c9bc], 0x2c
// 00474c13  c70534c5b7001b000000 mov dword ptr [0xb7c534], 0x1b
// 00474c1d  c705e8c4b70008000000 mov dword ptr [0xb7c4e8], 8
// 00474c27  c705ecc4b70009000000 mov dword ptr [0xb7c4ec], 9
// 00474c31  c70590c9b700a2000000 mov dword ptr [0xb7c990], 0xa2
// 00474c3b  c70588c9b700a0000000 mov dword ptr [0xb7c988], 0xa0
// 00474c45  c70538c6b700e2000000 mov dword ptr [0xb7c638], 0xe2
// 00474c4f  c70584c9b700a1000000 mov dword ptr [0xb7c984], 0xa1
// 00474c59  c705f8c8b7006a000000 mov dword ptr [0xb7c8f8], 0x6a
// 00474c63  c70598c9b700a4000000 mov dword ptr [0xb7c998], 0xa4
// 00474c6d  c70548c5b70020000000 mov dword ptr [0xb7c548], 0x20
// 00474c77  c7057cc9b70014000000 mov dword ptr [0xb7c97c], 0x14
// 00474c81  c70530c9b70070000000 mov dword ptr [0xb7c930], 0x70
// 00474c8b  c70534c9b70071000000 mov dword ptr [0xb7c934], 0x71
// 00474c95  c70538c9b70072000000 mov dword ptr [0xb7c938], 0x72
// 00474c9f  c7053cc9b70073000000 mov dword ptr [0xb7c93c], 0x73
// 00474ca9  c70540c9b70074000000 mov dword ptr [0xb7c940], 0x74
// 00474cb3  c70544c9b70075000000 mov dword ptr [0xb7c944], 0x75
// 00474cbd  c70548c9b70076000000 mov dword ptr [0xb7c948], 0x76
// 00474cc7  c7054cc9b70077000000 mov dword ptr [0xb7c94c], 0x77
// 00474cd1  c70550c9b70078000000 mov dword ptr [0xb7c950], 0x78
// 00474cdb  c70554c9b70079000000 mov dword ptr [0xb7c954], 0x79
// 00474ce5  c70578c9b70090000000 mov dword ptr [0xb7c978], 0x90
// 00474cef  c70580c9b70091000000 mov dword ptr [0xb7c980], 0x91
// 00474cf9  c705e4c8b70067000000 mov dword ptr [0xb7c8e4], 0x67
// 00474d03  c705e8c8b70068000000 mov dword ptr [0xb7c8e8], 0x68
// 00474d0d  c705ecc8b70069000000 mov dword ptr [0xb7c8ec], 0x69
// 00474d17  c705fcc8b7006d000000 mov dword ptr [0xb7c8fc], 0x6d
// 00474d21  c705d8c8b70064000000 mov dword ptr [0xb7c8d8], 0x64
// 00474d2b  c705dcc8b70065000000 mov dword ptr [0xb7c8dc], 0x65
// 00474d35  c705e0c8b70066000000 mov dword ptr [0xb7c8e0], 0x66
// 00474d3f  c70500c9b7006b000000 mov dword ptr [0xb7c900], 0x6b
// 00474d49  c705ccc8b70061000000 mov dword ptr [0xb7c8cc], 0x61
// 00474d53  c705d0c8b70062000000 mov dword ptr [0xb7c8d0], 0x62
// 00474d5d  c705d4c8b70063000000 mov dword ptr [0xb7c8d4], 0x63
// 00474d67  c705c8c8b70060000000 mov dword ptr [0xb7c8c8], 0x60
// 00474d71  c705f0c8b7006e000000 mov dword ptr [0xb7c8f0], 0x6e
// 00474d7b  c70558c9b7007a000000 mov dword ptr [0xb7c958], 0x7a
// 00474d85  c7055cc9b7007b000000 mov dword ptr [0xb7c95c], 0x7b
// 00474d8f  c70560c9b7007c000000 mov dword ptr [0xb7c960], 0x7c
// 00474d99  c70564c9b7007d000000 mov dword ptr [0xb7c964], 0x7d
// 00474da3  c70568c9b7007e000000 mov dword ptr [0xb7c968], 0x7e
// 00474dad  c7058cc9b700a3000000 mov dword ptr [0xb7c98c], 0xa3
// 00474db7  c705f4c8b7006f000000 mov dword ptr [0xb7c8f4], 0x6f
// 00474dc1  c70594c9b700a5000000 mov dword ptr [0xb7c994], 0xa5
// 00474dcb  c70520c9b70024000000 mov dword ptr [0xb7c920], 0x24
// 00474dd5  c7050cc9b70026000000 mov dword ptr [0xb7c90c], 0x26
// 00474ddf  c70528c9b70021000000 mov dword ptr [0xb7c928], 0x21
// 00474de9  c70518c9b70025000000 mov dword ptr [0xb7c918], 0x25
// 00474df3  c70514c9b70027000000 mov dword ptr [0xb7c914], 0x27
// 00474dfd  c70524c9b70023000000 mov dword ptr [0xb7c924], 0x23
// 00474e07  c70510c9b70028000000 mov dword ptr [0xb7c910], 0x28
// 00474e11  c7052cc9b70022000000 mov dword ptr [0xb7c92c], 0x22
// 00474e1b  c7051cc9b7002d000000 mov dword ptr [0xb7c91c], 0x2d
// 00474e25  c705c4c6b7002e000000 mov dword ptr [0xb7c6c4], 0x2e
// 00474e2f  c705a0c9b7005b000000 mov dword ptr [0xb7c9a0], 0x5b
// 00474e39  c7059cc9b7005c000000 mov dword ptr [0xb7c99c], 0x5c
// 00474e43  c705c4c9b7005d000000 mov dword ptr [0xb7c9c4], 0x5d
// 00474e4d  8b0485c8c4b700       mov eax, dword ptr [eax*4 + 0xb7c4c8]
// 00474e54  c605d4c9b70001       mov byte ptr [0xb7c9d4], 1
// 00474e5b  5f                   pop edi
// 00474e5c  c3                   ret 
// 00474e5d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00474e61  8b048dc8c4b700       mov eax, dword ptr [ecx*4 + 0xb7c4c8]
// 00474e68  c3                   ret 
// copied from an identical function in another client (function ?getKeyCode@@YAHH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
static unsigned char g_initialized;
static int g_keyMap[0x143];

int __cdecl getKeyCode(int index)
{
    if (!g_initialized)
    {
        int i;
        for (i = 0; i < 0x143; ++i)
            g_keyMap[i] = 0;
        g_keyMap[0xd] = 0xd;
        g_keyMap[0x10f] = 0xd;
        g_keyMap[0x13c] = 0x2a;
        g_keyMap[0x13d] = 0x2c;
        g_keyMap[0x1b] = 0x1b;
        g_keyMap[0x8] = 0x8;
        g_keyMap[0x9] = 0x9;
        g_keyMap[0x132] = 0xa2;
        g_keyMap[0x130] = 0xa0;
        g_keyMap[0x5c] = 0xe2;
        g_keyMap[0x12f] = 0xa1;
        g_keyMap[0x10c] = 0x6a;
        g_keyMap[0x134] = 0xa4;
        g_keyMap[0x20] = 0x20;
        g_keyMap[0x12d] = 0x14;
        g_keyMap[0x11a] = 0x70;
        g_keyMap[0x11b] = 0x71;
        g_keyMap[0x11c] = 0x72;
        g_keyMap[0x11d] = 0x73;
        g_keyMap[0x11e] = 0x74;
        g_keyMap[0x11f] = 0x75;
        g_keyMap[0x120] = 0x76;
        g_keyMap[0x121] = 0x77;
        g_keyMap[0x122] = 0x78;
        g_keyMap[0x123] = 0x79;
        g_keyMap[0x12c] = 0x90;
        g_keyMap[0x12e] = 0x91;
        g_keyMap[0x107] = 0x67;
        g_keyMap[0x108] = 0x68;
        g_keyMap[0x109] = 0x69;
        g_keyMap[0x10d] = 0x6d;
        g_keyMap[0x104] = 0x64;
        g_keyMap[0x105] = 0x65;
        g_keyMap[0x106] = 0x66;
        g_keyMap[0x10e] = 0x6b;
        g_keyMap[0x101] = 0x61;
        g_keyMap[0x102] = 0x62;
        g_keyMap[0x103] = 0x63;
        g_keyMap[0x100] = 0x60;
        g_keyMap[0x10a] = 0x6e;
        g_keyMap[0x124] = 0x7a;
        g_keyMap[0x125] = 0x7b;
        g_keyMap[0x126] = 0x7c;
        g_keyMap[0x127] = 0x7d;
        g_keyMap[0x128] = 0x7e;
        g_keyMap[0x131] = 0xa3;
        g_keyMap[0x10b] = 0x6f;
        g_keyMap[0x133] = 0xa5;
        g_keyMap[0x116] = 0x24;
        g_keyMap[0x111] = 0x26;
        g_keyMap[0x118] = 0x21;
        g_keyMap[0x114] = 0x25;
        g_keyMap[0x113] = 0x27;
        g_keyMap[0x117] = 0x23;
        g_keyMap[0x112] = 0x28;
        g_keyMap[0x119] = 0x22;
        g_keyMap[0x115] = 0x2d;
        g_keyMap[0x7f] = 0x2e;
        g_keyMap[0x136] = 0x5b;
        g_keyMap[0x135] = 0x5c;
        g_keyMap[0x13f] = 0x5d;
        g_initialized = 1;
    }
    return g_keyMap[index];
}
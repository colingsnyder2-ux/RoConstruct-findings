// roc 2012-06 004ad4f0  unit: DxUserInput  size: 665 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004ad4f0
//
// 004ad4f0  803d1cbde10000       cmp byte ptr [0xe1bd1c], 0
// 004ad4f7  0f8580020000         jne 0x4ad77d
// 004ad4fd  57                   push edi
// 004ad4fe  33c0                 xor eax, eax
// 004ad500  b943010000           mov ecx, 0x143
// 004ad505  bf10b8e100           mov edi, 0xe1b810
// 004ad50a  f3ab                 rep stosd dword ptr es:[edi], eax
// 004ad50c  b80d000000           mov eax, 0xd
// 004ad511  a344b8e100           mov dword ptr [0xe1b844], eax
// 004ad516  a34cbce100           mov dword ptr [0xe1bc4c], eax
// 004ad51b  8b442408             mov eax, dword ptr [esp + 8]
// 004ad51f  c70500bde1002a000000 mov dword ptr [0xe1bd00], 0x2a
// 004ad529  c70504bde1002c000000 mov dword ptr [0xe1bd04], 0x2c
// 004ad533  c7057cb8e1001b000000 mov dword ptr [0xe1b87c], 0x1b
// 004ad53d  c70530b8e10008000000 mov dword ptr [0xe1b830], 8
// 004ad547  c70534b8e10009000000 mov dword ptr [0xe1b834], 9
// 004ad551  c705d8bce100a2000000 mov dword ptr [0xe1bcd8], 0xa2
// 004ad55b  c705d0bce100a0000000 mov dword ptr [0xe1bcd0], 0xa0
// 004ad565  c70580b9e100e2000000 mov dword ptr [0xe1b980], 0xe2
// 004ad56f  c705ccbce100a1000000 mov dword ptr [0xe1bccc], 0xa1
// 004ad579  c70540bce1006a000000 mov dword ptr [0xe1bc40], 0x6a
// 004ad583  c705e0bce100a4000000 mov dword ptr [0xe1bce0], 0xa4
// 004ad58d  c70590b8e10020000000 mov dword ptr [0xe1b890], 0x20
// 004ad597  c705c4bce10014000000 mov dword ptr [0xe1bcc4], 0x14
// 004ad5a1  c70578bce10070000000 mov dword ptr [0xe1bc78], 0x70
// 004ad5ab  c7057cbce10071000000 mov dword ptr [0xe1bc7c], 0x71
// 004ad5b5  c70580bce10072000000 mov dword ptr [0xe1bc80], 0x72
// 004ad5bf  c70584bce10073000000 mov dword ptr [0xe1bc84], 0x73
// 004ad5c9  c70588bce10074000000 mov dword ptr [0xe1bc88], 0x74
// 004ad5d3  c7058cbce10075000000 mov dword ptr [0xe1bc8c], 0x75
// 004ad5dd  c70590bce10076000000 mov dword ptr [0xe1bc90], 0x76
// 004ad5e7  c70594bce10077000000 mov dword ptr [0xe1bc94], 0x77
// 004ad5f1  c70598bce10078000000 mov dword ptr [0xe1bc98], 0x78
// 004ad5fb  c7059cbce10079000000 mov dword ptr [0xe1bc9c], 0x79
// 004ad605  c705c0bce10090000000 mov dword ptr [0xe1bcc0], 0x90
// 004ad60f  c705c8bce10091000000 mov dword ptr [0xe1bcc8], 0x91
// 004ad619  c7052cbce10067000000 mov dword ptr [0xe1bc2c], 0x67
// 004ad623  c70530bce10068000000 mov dword ptr [0xe1bc30], 0x68
// 004ad62d  c70534bce10069000000 mov dword ptr [0xe1bc34], 0x69
// 004ad637  c70544bce1006d000000 mov dword ptr [0xe1bc44], 0x6d
// 004ad641  c70520bce10064000000 mov dword ptr [0xe1bc20], 0x64
// 004ad64b  c70524bce10065000000 mov dword ptr [0xe1bc24], 0x65
// 004ad655  c70528bce10066000000 mov dword ptr [0xe1bc28], 0x66
// 004ad65f  c70548bce1006b000000 mov dword ptr [0xe1bc48], 0x6b
// 004ad669  c70514bce10061000000 mov dword ptr [0xe1bc14], 0x61
// 004ad673  c70518bce10062000000 mov dword ptr [0xe1bc18], 0x62
// 004ad67d  c7051cbce10063000000 mov dword ptr [0xe1bc1c], 0x63
// 004ad687  c70510bce10060000000 mov dword ptr [0xe1bc10], 0x60
// 004ad691  c70538bce1006e000000 mov dword ptr [0xe1bc38], 0x6e
// 004ad69b  c705a0bce1007a000000 mov dword ptr [0xe1bca0], 0x7a
// 004ad6a5  c705a4bce1007b000000 mov dword ptr [0xe1bca4], 0x7b
// 004ad6af  c705a8bce1007c000000 mov dword ptr [0xe1bca8], 0x7c
// 004ad6b9  c705acbce1007d000000 mov dword ptr [0xe1bcac], 0x7d
// 004ad6c3  c705b0bce1007e000000 mov dword ptr [0xe1bcb0], 0x7e
// 004ad6cd  c705d4bce100a3000000 mov dword ptr [0xe1bcd4], 0xa3
// 004ad6d7  c7053cbce1006f000000 mov dword ptr [0xe1bc3c], 0x6f
// 004ad6e1  c705dcbce100a5000000 mov dword ptr [0xe1bcdc], 0xa5
// 004ad6eb  c70568bce10024000000 mov dword ptr [0xe1bc68], 0x24
// 004ad6f5  c70554bce10026000000 mov dword ptr [0xe1bc54], 0x26
// 004ad6ff  c70570bce10021000000 mov dword ptr [0xe1bc70], 0x21
// 004ad709  c70560bce10025000000 mov dword ptr [0xe1bc60], 0x25
// 004ad713  c7055cbce10027000000 mov dword ptr [0xe1bc5c], 0x27
// 004ad71d  c7056cbce10023000000 mov dword ptr [0xe1bc6c], 0x23
// 004ad727  c70558bce10028000000 mov dword ptr [0xe1bc58], 0x28
// 004ad731  c70574bce10022000000 mov dword ptr [0xe1bc74], 0x22
// 004ad73b  c70564bce1002d000000 mov dword ptr [0xe1bc64], 0x2d
// 004ad745  c7050cbae1002e000000 mov dword ptr [0xe1ba0c], 0x2e
// 004ad74f  c705e8bce1005b000000 mov dword ptr [0xe1bce8], 0x5b
// 004ad759  c705e4bce1005c000000 mov dword ptr [0xe1bce4], 0x5c
// 004ad763  c7050cbde1005d000000 mov dword ptr [0xe1bd0c], 0x5d
// 004ad76d  8b048510b8e100       mov eax, dword ptr [eax*4 + 0xe1b810]
// 004ad774  c6051cbde10001       mov byte ptr [0xe1bd1c], 1
// 004ad77b  5f                   pop edi
// 004ad77c  c3                   ret 
// 004ad77d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ad781  8b048d10b8e100       mov eax, dword ptr [ecx*4 + 0xe1b810]
// 004ad788  c3                   ret 
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
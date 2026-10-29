// roc 2009-12 004742d0  unit: DxUserInput  size: 1145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004742d0
//
// 004742d0  803db0bfb70000       cmp byte ptr [0xb7bfb0], 0
// 004742d7  0f8560040000         jne 0x47473d
// 004742dd  57                   push edi
// 004742de  33c0                 xor eax, eax
// 004742e0  b900010000           mov ecx, 0x100
// 004742e5  bfb0bbb700           mov edi, 0xb7bbb0
// 004742ea  f3ab                 rep stosd dword ptr es:[edi], eax
// 004742ec  b85c000000           mov eax, 0x5c
// 004742f1  c705b4bbb7001b000000 mov dword ptr [0xb7bbb4], 0x1b
// 004742fb  c705b8bbb70031000000 mov dword ptr [0xb7bbb8], 0x31
// 00474305  c705bcbbb70032000000 mov dword ptr [0xb7bbbc], 0x32
// 0047430f  c705c0bbb70033000000 mov dword ptr [0xb7bbc0], 0x33
// 00474319  c705c4bbb70034000000 mov dword ptr [0xb7bbc4], 0x34
// 00474323  c705c8bbb70035000000 mov dword ptr [0xb7bbc8], 0x35
// 0047432d  c705ccbbb70036000000 mov dword ptr [0xb7bbcc], 0x36
// 00474337  c705d0bbb70037000000 mov dword ptr [0xb7bbd0], 0x37
// 00474341  c705d4bbb70038000000 mov dword ptr [0xb7bbd4], 0x38
// 0047434b  c705d8bbb70039000000 mov dword ptr [0xb7bbd8], 0x39
// 00474355  c705dcbbb70030000000 mov dword ptr [0xb7bbdc], 0x30
// 0047435f  c705e0bbb7002d000000 mov dword ptr [0xb7bbe0], 0x2d
// 00474369  c705e4bbb7003d000000 mov dword ptr [0xb7bbe4], 0x3d
// 00474373  c705e8bbb70008000000 mov dword ptr [0xb7bbe8], 8
// 0047437d  c705ecbbb70009000000 mov dword ptr [0xb7bbec], 9
// 00474387  c705f0bbb70071000000 mov dword ptr [0xb7bbf0], 0x71
// 00474391  c705f4bbb70077000000 mov dword ptr [0xb7bbf4], 0x77
// 0047439b  c705f8bbb70065000000 mov dword ptr [0xb7bbf8], 0x65
// 004743a5  c705fcbbb70072000000 mov dword ptr [0xb7bbfc], 0x72
// 004743af  c70500bcb70074000000 mov dword ptr [0xb7bc00], 0x74
// 004743b9  c70504bcb70079000000 mov dword ptr [0xb7bc04], 0x79
// 004743c3  c70508bcb70075000000 mov dword ptr [0xb7bc08], 0x75
// 004743cd  c7050cbcb70069000000 mov dword ptr [0xb7bc0c], 0x69
// 004743d7  c70510bcb7006f000000 mov dword ptr [0xb7bc10], 0x6f
// 004743e1  c70514bcb70070000000 mov dword ptr [0xb7bc14], 0x70
// 004743eb  c70518bcb7005b000000 mov dword ptr [0xb7bc18], 0x5b
// 004743f5  c7051cbcb7005d000000 mov dword ptr [0xb7bc1c], 0x5d
// 004743ff  c70520bcb7000d000000 mov dword ptr [0xb7bc20], 0xd
// 00474409  c70524bcb70032010000 mov dword ptr [0xb7bc24], 0x132
// 00474413  c70528bcb70061000000 mov dword ptr [0xb7bc28], 0x61
// 0047441d  c7052cbcb70073000000 mov dword ptr [0xb7bc2c], 0x73
// 00474427  c70530bcb70064000000 mov dword ptr [0xb7bc30], 0x64
// 00474431  c70534bcb70066000000 mov dword ptr [0xb7bc34], 0x66
// 0047443b  c70538bcb70067000000 mov dword ptr [0xb7bc38], 0x67
// 00474445  c7053cbcb70068000000 mov dword ptr [0xb7bc3c], 0x68
// 0047444f  c70540bcb7006a000000 mov dword ptr [0xb7bc40], 0x6a
// 00474459  c70544bcb7006b000000 mov dword ptr [0xb7bc44], 0x6b
// 00474463  c70548bcb7006c000000 mov dword ptr [0xb7bc48], 0x6c
// 0047446d  c7054cbcb7003b000000 mov dword ptr [0xb7bc4c], 0x3b
// 00474477  c70550bcb70027000000 mov dword ptr [0xb7bc50], 0x27
// 00474481  c70554bcb70060000000 mov dword ptr [0xb7bc54], 0x60
// 0047448b  c70558bcb70030010000 mov dword ptr [0xb7bc58], 0x130
// 00474495  a35cbcb700           mov dword ptr [0xb7bc5c], eax
// 0047449a  a308bdb700           mov dword ptr [0xb7bd08], eax
// 0047449f  c70560bcb7007a000000 mov dword ptr [0xb7bc60], 0x7a
// 004744a9  c70564bcb70078000000 mov dword ptr [0xb7bc64], 0x78
// 004744b3  c70568bcb70063000000 mov dword ptr [0xb7bc68], 0x63
// 004744bd  c7056cbcb70076000000 mov dword ptr [0xb7bc6c], 0x76
// 004744c7  c70570bcb70062000000 mov dword ptr [0xb7bc70], 0x62
// 004744d1  c70574bcb7006e000000 mov dword ptr [0xb7bc74], 0x6e
// 004744db  c70578bcb7006d000000 mov dword ptr [0xb7bc78], 0x6d
// 004744e5  c7057cbcb7002c000000 mov dword ptr [0xb7bc7c], 0x2c
// 004744ef  c70580bcb7002e000000 mov dword ptr [0xb7bc80], 0x2e
// 004744f9  c70584bcb7002f000000 mov dword ptr [0xb7bc84], 0x2f
// 00474503  c70588bcb7002f010000 mov dword ptr [0xb7bc88], 0x12f
// 0047450d  c7058cbcb7000c010000 mov dword ptr [0xb7bc8c], 0x10c
// 00474517  c70590bcb70034010000 mov dword ptr [0xb7bc90], 0x134
// 00474521  c70594bcb70020000000 mov dword ptr [0xb7bc94], 0x20
// 0047452b  c70598bcb7002d010000 mov dword ptr [0xb7bc98], 0x12d
// 00474535  c7059cbcb7001a010000 mov dword ptr [0xb7bc9c], 0x11a
// 0047453f  c705a0bcb7001b010000 mov dword ptr [0xb7bca0], 0x11b
// 00474549  c705a4bcb7001c010000 mov dword ptr [0xb7bca4], 0x11c
// 00474553  c705a8bcb7001d010000 mov dword ptr [0xb7bca8], 0x11d
// 0047455d  c705acbcb7001e010000 mov dword ptr [0xb7bcac], 0x11e
// 00474567  c705b0bcb7001f010000 mov dword ptr [0xb7bcb0], 0x11f
// 00474571  c705b4bcb70020010000 mov dword ptr [0xb7bcb4], 0x120
// 0047457b  c705b8bcb70021010000 mov dword ptr [0xb7bcb8], 0x121
// 00474585  c705bcbcb70022010000 mov dword ptr [0xb7bcbc], 0x122
// 0047458f  c705c0bcb70023010000 mov dword ptr [0xb7bcc0], 0x123
// 00474599  c705c4bcb7002c010000 mov dword ptr [0xb7bcc4], 0x12c
// 004745a3  c705c8bcb7002e010000 mov dword ptr [0xb7bcc8], 0x12e
// 004745ad  c705ccbcb70007010000 mov dword ptr [0xb7bccc], 0x107
// 004745b7  c705d0bcb70008010000 mov dword ptr [0xb7bcd0], 0x108
// 004745c1  c705d4bcb70009010000 mov dword ptr [0xb7bcd4], 0x109
// 004745cb  c705d8bcb7000d010000 mov dword ptr [0xb7bcd8], 0x10d
// 004745d5  8b442408             mov eax, dword ptr [esp + 8]
// 004745d9  c705dcbcb70004010000 mov dword ptr [0xb7bcdc], 0x104
// 004745e3  c705e0bcb70005010000 mov dword ptr [0xb7bce0], 0x105
// 004745ed  c705e4bcb70006010000 mov dword ptr [0xb7bce4], 0x106
// 004745f7  c705e8bcb7000e010000 mov dword ptr [0xb7bce8], 0x10e
// 00474601  c705ecbcb70001010000 mov dword ptr [0xb7bcec], 0x101
// 0047460b  c705f0bcb70002010000 mov dword ptr [0xb7bcf0], 0x102
// 00474615  c705f4bcb70003010000 mov dword ptr [0xb7bcf4], 0x103
// 0047461f  c705f8bcb70000010000 mov dword ptr [0xb7bcf8], 0x100
// 00474629  c705fcbcb7000a010000 mov dword ptr [0xb7bcfc], 0x10a
// 00474633  c7050cbdb70024010000 mov dword ptr [0xb7bd0c], 0x124
// 0047463d  c70510bdb70025010000 mov dword ptr [0xb7bd10], 0x125
// 00474647  c70540bdb70026010000 mov dword ptr [0xb7bd40], 0x126
// 00474651  c70544bdb70027010000 mov dword ptr [0xb7bd44], 0x127
// 0047465b  c70548bdb70028010000 mov dword ptr [0xb7bd48], 0x128
// 00474665  c705e4bdb70010010000 mov dword ptr [0xb7bde4], 0x110
// 0047466f  c70520beb7000f010000 mov dword ptr [0xb7be20], 0x10f
// 00474679  c70524beb70031010000 mov dword ptr [0xb7be24], 0x131
// 00474683  c70584beb7000b010000 mov dword ptr [0xb7be84], 0x10b
// 0047468d  c7058cbeb7003d010000 mov dword ptr [0xb7be8c], 0x13d
// 00474697  c70590beb70033010000 mov dword ptr [0xb7be90], 0x133
// 004746a1  c705c4beb70013000000 mov dword ptr [0xb7bec4], 0x13
// 004746ab  c705ccbeb70016010000 mov dword ptr [0xb7becc], 0x116
// 004746b5  c705d0beb70011010000 mov dword ptr [0xb7bed0], 0x111
// 004746bf  c705d4beb70018010000 mov dword ptr [0xb7bed4], 0x118
// 004746c9  c705dcbeb70014010000 mov dword ptr [0xb7bedc], 0x114
// 004746d3  c705e4beb70013010000 mov dword ptr [0xb7bee4], 0x113
// 004746dd  c705ecbeb70017010000 mov dword ptr [0xb7beec], 0x117
// 004746e7  c705f0beb70012010000 mov dword ptr [0xb7bef0], 0x112
// 004746f1  c705f4beb70019010000 mov dword ptr [0xb7bef4], 0x119
// 004746fb  c705f8beb70015010000 mov dword ptr [0xb7bef8], 0x115
// 00474705  c705fcbeb7007f000000 mov dword ptr [0xb7befc], 0x7f
// 0047470f  c7051cbfb70036010000 mov dword ptr [0xb7bf1c], 0x136
// 00474719  c70520bfb70035010000 mov dword ptr [0xb7bf20], 0x135
// 00474723  c70524bfb7003f010000 mov dword ptr [0xb7bf24], 0x13f
// 0047472d  8b0485b0bbb700       mov eax, dword ptr [eax*4 + 0xb7bbb0]
// 00474734  c605b0bfb70001       mov byte ptr [0xb7bfb0], 1
// 0047473b  5f                   pop edi
// 0047473c  c3                   ret 
// 0047473d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00474741  8b048db0bbb700       mov eax, dword ptr [ecx*4 + 0xb7bbb0]
// 00474748  c3                   ret 
// copied from an identical function in another client (function ?getKeyCode@DxUserInput@ns_ROCX00000e@@SAHH@Z)

namespace ns_ROCX00000e {
// from server: 100% by tester
struct DxUserInput {
    static int getKeyCode(int index);
};

static unsigned char g_initialized = 0;
static int g_keyMap[256];

int DxUserInput::getKeyCode(int index) {
    if (g_initialized == 0) {
        int i;
        for (i = 0; i < 256; ++i) {
            g_keyMap[i] = 0;
        }
        g_keyMap[1] = 0x1b;
        g_keyMap[2] = 0x31;
        g_keyMap[3] = 0x32;
        g_keyMap[4] = 0x33;
        g_keyMap[5] = 0x34;
        g_keyMap[6] = 0x35;
        g_keyMap[7] = 0x36;
        g_keyMap[8] = 0x37;
        g_keyMap[9] = 0x38;
        g_keyMap[10] = 0x39;
        g_keyMap[11] = 0x30;
        g_keyMap[12] = 0x2d;
        g_keyMap[13] = 0x3d;
        g_keyMap[14] = 8;
        g_keyMap[15] = 9;
        g_keyMap[16] = 0x71;
        g_keyMap[17] = 0x77;
        g_keyMap[18] = 0x65;
        g_keyMap[19] = 0x72;
        g_keyMap[20] = 0x74;
        g_keyMap[21] = 0x79;
        g_keyMap[22] = 0x75;
        g_keyMap[23] = 0x69;
        g_keyMap[24] = 0x6f;
        g_keyMap[25] = 0x70;
        g_keyMap[26] = 0x5b;
        g_keyMap[27] = 0x5d;
        g_keyMap[28] = 0xd;
        g_keyMap[29] = 0x132;
        g_keyMap[30] = 0x61;
        g_keyMap[31] = 0x73;
        g_keyMap[32] = 0x64;
        g_keyMap[33] = 0x66;
        g_keyMap[34] = 0x67;
        g_keyMap[35] = 0x68;
        g_keyMap[36] = 0x6a;
        g_keyMap[37] = 0x6b;
        g_keyMap[38] = 0x6c;
        g_keyMap[39] = 0x3b;
        g_keyMap[40] = 0x27;
        g_keyMap[41] = 0x60;
        g_keyMap[42] = 0x130;
        g_keyMap[43] = 0x5c;
        g_keyMap[86] = 0x5c;
        g_keyMap[44] = 0x7a;
        g_keyMap[45] = 0x78;
        g_keyMap[46] = 0x63;
        g_keyMap[47] = 0x76;
        g_keyMap[48] = 0x62;
        g_keyMap[49] = 0x6e;
        g_keyMap[50] = 0x6d;
        g_keyMap[51] = 0x2c;
        g_keyMap[52] = 0x2e;
        g_keyMap[53] = 0x2f;
        g_keyMap[54] = 0x12f;
        g_keyMap[55] = 0x10c;
        g_keyMap[56] = 0x134;
        g_keyMap[57] = 0x20;
        g_keyMap[58] = 0x12d;
        g_keyMap[59] = 0x11a;
        g_keyMap[60] = 0x11b;
        g_keyMap[61] = 0x11c;
        g_keyMap[62] = 0x11d;
        g_keyMap[63] = 0x11e;
        g_keyMap[64] = 0x11f;
        g_keyMap[65] = 0x120;
        g_keyMap[66] = 0x121;
        g_keyMap[67] = 0x122;
        g_keyMap[68] = 0x123;
        g_keyMap[69] = 0x12c;
        g_keyMap[70] = 0x12e;
        g_keyMap[71] = 0x107;
        g_keyMap[72] = 0x108;
        g_keyMap[73] = 0x109;
        g_keyMap[74] = 0x10d;
        g_keyMap[75] = 0x104;
        g_keyMap[76] = 0x105;
        g_keyMap[77] = 0x106;
        g_keyMap[78] = 0x10e;
        g_keyMap[79] = 0x101;
        g_keyMap[80] = 0x102;
        g_keyMap[81] = 0x103;
        g_keyMap[82] = 0x100;
        g_keyMap[83] = 0x10a;
        g_keyMap[87] = 0x124;
        g_keyMap[88] = 0x125;
        g_keyMap[100] = 0x126;
        g_keyMap[101] = 0x127;
        g_keyMap[102] = 0x128;
        g_keyMap[141] = 0x110;
        g_keyMap[156] = 0x10f;
        g_keyMap[157] = 0x131;
        g_keyMap[181] = 0x10b;
        g_keyMap[183] = 0x13d;
        g_keyMap[184] = 0x133;
        g_keyMap[197] = 0x13;
        g_keyMap[199] = 0x116;
        g_keyMap[200] = 0x111;
        g_keyMap[201] = 0x118;
        g_keyMap[203] = 0x114;
        g_keyMap[205] = 0x113;
        g_keyMap[207] = 0x117;
        g_keyMap[208] = 0x112;
        g_keyMap[209] = 0x119;
        g_keyMap[210] = 0x115;
        g_keyMap[211] = 0x7f;
        g_keyMap[219] = 0x136;
        g_keyMap[220] = 0x135;
        g_keyMap[221] = 0x13f;
        g_initialized = 1;
    }
    return g_keyMap[index];
}
}

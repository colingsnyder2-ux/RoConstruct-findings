// roc 2010-06 00479e70  unit: DxUserInput  size: 1145 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00479e70
//
// 00479e70  803d9025c00000       cmp byte ptr [0xc02590], 0
// 00479e77  0f8560040000         jne 0x47a2dd
// 00479e7d  57                   push edi
// 00479e7e  33c0                 xor eax, eax
// 00479e80  b900010000           mov ecx, 0x100
// 00479e85  bf9021c000           mov edi, 0xc02190
// 00479e8a  f3ab                 rep stosd dword ptr es:[edi], eax
// 00479e8c  b85c000000           mov eax, 0x5c
// 00479e91  c7059421c0001b000000 mov dword ptr [0xc02194], 0x1b
// 00479e9b  c7059821c00031000000 mov dword ptr [0xc02198], 0x31
// 00479ea5  c7059c21c00032000000 mov dword ptr [0xc0219c], 0x32
// 00479eaf  c705a021c00033000000 mov dword ptr [0xc021a0], 0x33
// 00479eb9  c705a421c00034000000 mov dword ptr [0xc021a4], 0x34
// 00479ec3  c705a821c00035000000 mov dword ptr [0xc021a8], 0x35
// 00479ecd  c705ac21c00036000000 mov dword ptr [0xc021ac], 0x36
// 00479ed7  c705b021c00037000000 mov dword ptr [0xc021b0], 0x37
// 00479ee1  c705b421c00038000000 mov dword ptr [0xc021b4], 0x38
// 00479eeb  c705b821c00039000000 mov dword ptr [0xc021b8], 0x39
// 00479ef5  c705bc21c00030000000 mov dword ptr [0xc021bc], 0x30
// 00479eff  c705c021c0002d000000 mov dword ptr [0xc021c0], 0x2d
// 00479f09  c705c421c0003d000000 mov dword ptr [0xc021c4], 0x3d
// 00479f13  c705c821c00008000000 mov dword ptr [0xc021c8], 8
// 00479f1d  c705cc21c00009000000 mov dword ptr [0xc021cc], 9
// 00479f27  c705d021c00071000000 mov dword ptr [0xc021d0], 0x71
// 00479f31  c705d421c00077000000 mov dword ptr [0xc021d4], 0x77
// 00479f3b  c705d821c00065000000 mov dword ptr [0xc021d8], 0x65
// 00479f45  c705dc21c00072000000 mov dword ptr [0xc021dc], 0x72
// 00479f4f  c705e021c00074000000 mov dword ptr [0xc021e0], 0x74
// 00479f59  c705e421c00079000000 mov dword ptr [0xc021e4], 0x79
// 00479f63  c705e821c00075000000 mov dword ptr [0xc021e8], 0x75
// 00479f6d  c705ec21c00069000000 mov dword ptr [0xc021ec], 0x69
// 00479f77  c705f021c0006f000000 mov dword ptr [0xc021f0], 0x6f
// 00479f81  c705f421c00070000000 mov dword ptr [0xc021f4], 0x70
// 00479f8b  c705f821c0005b000000 mov dword ptr [0xc021f8], 0x5b
// 00479f95  c705fc21c0005d000000 mov dword ptr [0xc021fc], 0x5d
// 00479f9f  c7050022c0000d000000 mov dword ptr [0xc02200], 0xd
// 00479fa9  c7050422c00032010000 mov dword ptr [0xc02204], 0x132
// 00479fb3  c7050822c00061000000 mov dword ptr [0xc02208], 0x61
// 00479fbd  c7050c22c00073000000 mov dword ptr [0xc0220c], 0x73
// 00479fc7  c7051022c00064000000 mov dword ptr [0xc02210], 0x64
// 00479fd1  c7051422c00066000000 mov dword ptr [0xc02214], 0x66
// 00479fdb  c7051822c00067000000 mov dword ptr [0xc02218], 0x67
// 00479fe5  c7051c22c00068000000 mov dword ptr [0xc0221c], 0x68
// 00479fef  c7052022c0006a000000 mov dword ptr [0xc02220], 0x6a
// 00479ff9  c7052422c0006b000000 mov dword ptr [0xc02224], 0x6b
// 0047a003  c7052822c0006c000000 mov dword ptr [0xc02228], 0x6c
// 0047a00d  c7052c22c0003b000000 mov dword ptr [0xc0222c], 0x3b
// 0047a017  c7053022c00027000000 mov dword ptr [0xc02230], 0x27
// 0047a021  c7053422c00060000000 mov dword ptr [0xc02234], 0x60
// 0047a02b  c7053822c00030010000 mov dword ptr [0xc02238], 0x130
// 0047a035  a33c22c000           mov dword ptr [0xc0223c], eax
// 0047a03a  a3e822c000           mov dword ptr [0xc022e8], eax
// 0047a03f  c7054022c0007a000000 mov dword ptr [0xc02240], 0x7a
// 0047a049  c7054422c00078000000 mov dword ptr [0xc02244], 0x78
// 0047a053  c7054822c00063000000 mov dword ptr [0xc02248], 0x63
// 0047a05d  c7054c22c00076000000 mov dword ptr [0xc0224c], 0x76
// 0047a067  c7055022c00062000000 mov dword ptr [0xc02250], 0x62
// 0047a071  c7055422c0006e000000 mov dword ptr [0xc02254], 0x6e
// 0047a07b  c7055822c0006d000000 mov dword ptr [0xc02258], 0x6d
// 0047a085  c7055c22c0002c000000 mov dword ptr [0xc0225c], 0x2c
// 0047a08f  c7056022c0002e000000 mov dword ptr [0xc02260], 0x2e
// 0047a099  c7056422c0002f000000 mov dword ptr [0xc02264], 0x2f
// 0047a0a3  c7056822c0002f010000 mov dword ptr [0xc02268], 0x12f
// 0047a0ad  c7056c22c0000c010000 mov dword ptr [0xc0226c], 0x10c
// 0047a0b7  c7057022c00034010000 mov dword ptr [0xc02270], 0x134
// 0047a0c1  c7057422c00020000000 mov dword ptr [0xc02274], 0x20
// 0047a0cb  c7057822c0002d010000 mov dword ptr [0xc02278], 0x12d
// 0047a0d5  c7057c22c0001a010000 mov dword ptr [0xc0227c], 0x11a
// 0047a0df  c7058022c0001b010000 mov dword ptr [0xc02280], 0x11b
// 0047a0e9  c7058422c0001c010000 mov dword ptr [0xc02284], 0x11c
// 0047a0f3  c7058822c0001d010000 mov dword ptr [0xc02288], 0x11d
// 0047a0fd  c7058c22c0001e010000 mov dword ptr [0xc0228c], 0x11e
// 0047a107  c7059022c0001f010000 mov dword ptr [0xc02290], 0x11f
// 0047a111  c7059422c00020010000 mov dword ptr [0xc02294], 0x120
// 0047a11b  c7059822c00021010000 mov dword ptr [0xc02298], 0x121
// 0047a125  c7059c22c00022010000 mov dword ptr [0xc0229c], 0x122
// 0047a12f  c705a022c00023010000 mov dword ptr [0xc022a0], 0x123
// 0047a139  c705a422c0002c010000 mov dword ptr [0xc022a4], 0x12c
// 0047a143  c705a822c0002e010000 mov dword ptr [0xc022a8], 0x12e
// 0047a14d  c705ac22c00007010000 mov dword ptr [0xc022ac], 0x107
// 0047a157  c705b022c00008010000 mov dword ptr [0xc022b0], 0x108
// 0047a161  c705b422c00009010000 mov dword ptr [0xc022b4], 0x109
// 0047a16b  c705b822c0000d010000 mov dword ptr [0xc022b8], 0x10d
// 0047a175  8b442408             mov eax, dword ptr [esp + 8]
// 0047a179  c705bc22c00004010000 mov dword ptr [0xc022bc], 0x104
// 0047a183  c705c022c00005010000 mov dword ptr [0xc022c0], 0x105
// 0047a18d  c705c422c00006010000 mov dword ptr [0xc022c4], 0x106
// 0047a197  c705c822c0000e010000 mov dword ptr [0xc022c8], 0x10e
// 0047a1a1  c705cc22c00001010000 mov dword ptr [0xc022cc], 0x101
// 0047a1ab  c705d022c00002010000 mov dword ptr [0xc022d0], 0x102
// 0047a1b5  c705d422c00003010000 mov dword ptr [0xc022d4], 0x103
// 0047a1bf  c705d822c00000010000 mov dword ptr [0xc022d8], 0x100
// 0047a1c9  c705dc22c0000a010000 mov dword ptr [0xc022dc], 0x10a
// 0047a1d3  c705ec22c00024010000 mov dword ptr [0xc022ec], 0x124
// 0047a1dd  c705f022c00025010000 mov dword ptr [0xc022f0], 0x125
// 0047a1e7  c7052023c00026010000 mov dword ptr [0xc02320], 0x126
// 0047a1f1  c7052423c00027010000 mov dword ptr [0xc02324], 0x127
// 0047a1fb  c7052823c00028010000 mov dword ptr [0xc02328], 0x128
// 0047a205  c705c423c00010010000 mov dword ptr [0xc023c4], 0x110
// 0047a20f  c7050024c0000f010000 mov dword ptr [0xc02400], 0x10f
// 0047a219  c7050424c00031010000 mov dword ptr [0xc02404], 0x131
// 0047a223  c7056424c0000b010000 mov dword ptr [0xc02464], 0x10b
// 0047a22d  c7056c24c0003d010000 mov dword ptr [0xc0246c], 0x13d
// 0047a237  c7057024c00033010000 mov dword ptr [0xc02470], 0x133
// 0047a241  c705a424c00013000000 mov dword ptr [0xc024a4], 0x13
// 0047a24b  c705ac24c00016010000 mov dword ptr [0xc024ac], 0x116
// 0047a255  c705b024c00011010000 mov dword ptr [0xc024b0], 0x111
// 0047a25f  c705b424c00018010000 mov dword ptr [0xc024b4], 0x118
// 0047a269  c705bc24c00014010000 mov dword ptr [0xc024bc], 0x114
// 0047a273  c705c424c00013010000 mov dword ptr [0xc024c4], 0x113
// 0047a27d  c705cc24c00017010000 mov dword ptr [0xc024cc], 0x117
// 0047a287  c705d024c00012010000 mov dword ptr [0xc024d0], 0x112
// 0047a291  c705d424c00019010000 mov dword ptr [0xc024d4], 0x119
// 0047a29b  c705d824c00015010000 mov dword ptr [0xc024d8], 0x115
// 0047a2a5  c705dc24c0007f000000 mov dword ptr [0xc024dc], 0x7f
// 0047a2af  c705fc24c00036010000 mov dword ptr [0xc024fc], 0x136
// 0047a2b9  c7050025c00035010000 mov dword ptr [0xc02500], 0x135
// 0047a2c3  c7050425c0003f010000 mov dword ptr [0xc02504], 0x13f
// 0047a2cd  8b04859021c000       mov eax, dword ptr [eax*4 + 0xc02190]
// 0047a2d4  c6059025c00001       mov byte ptr [0xc02590], 1
// 0047a2db  5f                   pop edi
// 0047a2dc  c3                   ret 
// 0047a2dd  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0047a2e1  8b048d9021c000       mov eax, dword ptr [ecx*4 + 0xc02190]
// 0047a2e8  c3                   ret 
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
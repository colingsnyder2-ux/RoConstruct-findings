// roc 2009-06 0046bd50  unit: DxUserInput  size: 665 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046bd50
//
// 0046bd50  803dacc4a30000       cmp byte ptr [0xa3c4ac], 0
// 0046bd57  0f8580020000         jne 0x46bfdd
// 0046bd5d  57                   push edi
// 0046bd5e  33c0                 xor eax, eax
// 0046bd60  b943010000           mov ecx, 0x143
// 0046bd65  bfa0bfa300           mov edi, 0xa3bfa0
// 0046bd6a  f3ab                 rep stosd dword ptr es:[edi], eax
// 0046bd6c  b80d000000           mov eax, 0xd
// 0046bd71  a3d4bfa300           mov dword ptr [0xa3bfd4], eax
// 0046bd76  a3dcc3a300           mov dword ptr [0xa3c3dc], eax
// 0046bd7b  8b442408             mov eax, dword ptr [esp + 8]
// 0046bd7f  c70590c4a3002a000000 mov dword ptr [0xa3c490], 0x2a
// 0046bd89  c70594c4a3002c000000 mov dword ptr [0xa3c494], 0x2c
// 0046bd93  c7050cc0a3001b000000 mov dword ptr [0xa3c00c], 0x1b
// 0046bd9d  c705c0bfa30008000000 mov dword ptr [0xa3bfc0], 8
// 0046bda7  c705c4bfa30009000000 mov dword ptr [0xa3bfc4], 9
// 0046bdb1  c70568c4a300a2000000 mov dword ptr [0xa3c468], 0xa2
// 0046bdbb  c70560c4a300a0000000 mov dword ptr [0xa3c460], 0xa0
// 0046bdc5  c70510c1a300e2000000 mov dword ptr [0xa3c110], 0xe2
// 0046bdcf  c7055cc4a300a1000000 mov dword ptr [0xa3c45c], 0xa1
// 0046bdd9  c705d0c3a3006a000000 mov dword ptr [0xa3c3d0], 0x6a
// 0046bde3  c70570c4a300a4000000 mov dword ptr [0xa3c470], 0xa4
// 0046bded  c70520c0a30020000000 mov dword ptr [0xa3c020], 0x20
// 0046bdf7  c70554c4a30014000000 mov dword ptr [0xa3c454], 0x14
// 0046be01  c70508c4a30070000000 mov dword ptr [0xa3c408], 0x70
// 0046be0b  c7050cc4a30071000000 mov dword ptr [0xa3c40c], 0x71
// 0046be15  c70510c4a30072000000 mov dword ptr [0xa3c410], 0x72
// 0046be1f  c70514c4a30073000000 mov dword ptr [0xa3c414], 0x73
// 0046be29  c70518c4a30074000000 mov dword ptr [0xa3c418], 0x74
// 0046be33  c7051cc4a30075000000 mov dword ptr [0xa3c41c], 0x75
// 0046be3d  c70520c4a30076000000 mov dword ptr [0xa3c420], 0x76
// 0046be47  c70524c4a30077000000 mov dword ptr [0xa3c424], 0x77
// 0046be51  c70528c4a30078000000 mov dword ptr [0xa3c428], 0x78
// 0046be5b  c7052cc4a30079000000 mov dword ptr [0xa3c42c], 0x79
// 0046be65  c70550c4a30090000000 mov dword ptr [0xa3c450], 0x90
// 0046be6f  c70558c4a30091000000 mov dword ptr [0xa3c458], 0x91
// 0046be79  c705bcc3a30067000000 mov dword ptr [0xa3c3bc], 0x67
// 0046be83  c705c0c3a30068000000 mov dword ptr [0xa3c3c0], 0x68
// 0046be8d  c705c4c3a30069000000 mov dword ptr [0xa3c3c4], 0x69
// 0046be97  c705d4c3a3006d000000 mov dword ptr [0xa3c3d4], 0x6d
// 0046bea1  c705b0c3a30064000000 mov dword ptr [0xa3c3b0], 0x64
// 0046beab  c705b4c3a30065000000 mov dword ptr [0xa3c3b4], 0x65
// 0046beb5  c705b8c3a30066000000 mov dword ptr [0xa3c3b8], 0x66
// 0046bebf  c705d8c3a3006b000000 mov dword ptr [0xa3c3d8], 0x6b
// 0046bec9  c705a4c3a30061000000 mov dword ptr [0xa3c3a4], 0x61
// 0046bed3  c705a8c3a30062000000 mov dword ptr [0xa3c3a8], 0x62
// 0046bedd  c705acc3a30063000000 mov dword ptr [0xa3c3ac], 0x63
// 0046bee7  c705a0c3a30060000000 mov dword ptr [0xa3c3a0], 0x60
// 0046bef1  c705c8c3a3006e000000 mov dword ptr [0xa3c3c8], 0x6e
// 0046befb  c70530c4a3007a000000 mov dword ptr [0xa3c430], 0x7a
// 0046bf05  c70534c4a3007b000000 mov dword ptr [0xa3c434], 0x7b
// 0046bf0f  c70538c4a3007c000000 mov dword ptr [0xa3c438], 0x7c
// 0046bf19  c7053cc4a3007d000000 mov dword ptr [0xa3c43c], 0x7d
// 0046bf23  c70540c4a3007e000000 mov dword ptr [0xa3c440], 0x7e
// 0046bf2d  c70564c4a300a3000000 mov dword ptr [0xa3c464], 0xa3
// 0046bf37  c705ccc3a3006f000000 mov dword ptr [0xa3c3cc], 0x6f
// 0046bf41  c7056cc4a300a5000000 mov dword ptr [0xa3c46c], 0xa5
// 0046bf4b  c705f8c3a30024000000 mov dword ptr [0xa3c3f8], 0x24
// 0046bf55  c705e4c3a30026000000 mov dword ptr [0xa3c3e4], 0x26
// 0046bf5f  c70500c4a30021000000 mov dword ptr [0xa3c400], 0x21
// 0046bf69  c705f0c3a30025000000 mov dword ptr [0xa3c3f0], 0x25
// 0046bf73  c705ecc3a30027000000 mov dword ptr [0xa3c3ec], 0x27
// 0046bf7d  c705fcc3a30023000000 mov dword ptr [0xa3c3fc], 0x23
// 0046bf87  c705e8c3a30028000000 mov dword ptr [0xa3c3e8], 0x28
// 0046bf91  c70504c4a30022000000 mov dword ptr [0xa3c404], 0x22
// 0046bf9b  c705f4c3a3002d000000 mov dword ptr [0xa3c3f4], 0x2d
// 0046bfa5  c7059cc1a3002e000000 mov dword ptr [0xa3c19c], 0x2e
// 0046bfaf  c70578c4a3005b000000 mov dword ptr [0xa3c478], 0x5b
// 0046bfb9  c70574c4a3005c000000 mov dword ptr [0xa3c474], 0x5c
// 0046bfc3  c7059cc4a3005d000000 mov dword ptr [0xa3c49c], 0x5d
// 0046bfcd  8b0485a0bfa300       mov eax, dword ptr [eax*4 + 0xa3bfa0]
// 0046bfd4  c605acc4a30001       mov byte ptr [0xa3c4ac], 1
// 0046bfdb  5f                   pop edi
// 0046bfdc  c3                   ret 
// 0046bfdd  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046bfe1  8b048da0bfa300       mov eax, dword ptr [ecx*4 + 0xa3bfa0]
// 0046bfe8  c3                   ret 
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
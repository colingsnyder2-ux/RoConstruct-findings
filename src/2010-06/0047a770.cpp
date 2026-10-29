// roc 2010-06 0047a770  unit: DxUserInput  size: 665 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047a770
//
// 0047a770  803db42fc00000       cmp byte ptr [0xc02fb4], 0
// 0047a777  0f8580020000         jne 0x47a9fd
// 0047a77d  57                   push edi
// 0047a77e  33c0                 xor eax, eax
// 0047a780  b943010000           mov ecx, 0x143
// 0047a785  bfa82ac000           mov edi, 0xc02aa8
// 0047a78a  f3ab                 rep stosd dword ptr es:[edi], eax
// 0047a78c  b80d000000           mov eax, 0xd
// 0047a791  a3dc2ac000           mov dword ptr [0xc02adc], eax
// 0047a796  a3e42ec000           mov dword ptr [0xc02ee4], eax
// 0047a79b  8b442408             mov eax, dword ptr [esp + 8]
// 0047a79f  c705982fc0002a000000 mov dword ptr [0xc02f98], 0x2a
// 0047a7a9  c7059c2fc0002c000000 mov dword ptr [0xc02f9c], 0x2c
// 0047a7b3  c705142bc0001b000000 mov dword ptr [0xc02b14], 0x1b
// 0047a7bd  c705c82ac00008000000 mov dword ptr [0xc02ac8], 8
// 0047a7c7  c705cc2ac00009000000 mov dword ptr [0xc02acc], 9
// 0047a7d1  c705702fc000a2000000 mov dword ptr [0xc02f70], 0xa2
// 0047a7db  c705682fc000a0000000 mov dword ptr [0xc02f68], 0xa0
// 0047a7e5  c705182cc000e2000000 mov dword ptr [0xc02c18], 0xe2
// 0047a7ef  c705642fc000a1000000 mov dword ptr [0xc02f64], 0xa1
// 0047a7f9  c705d82ec0006a000000 mov dword ptr [0xc02ed8], 0x6a
// 0047a803  c705782fc000a4000000 mov dword ptr [0xc02f78], 0xa4
// 0047a80d  c705282bc00020000000 mov dword ptr [0xc02b28], 0x20
// 0047a817  c7055c2fc00014000000 mov dword ptr [0xc02f5c], 0x14
// 0047a821  c705102fc00070000000 mov dword ptr [0xc02f10], 0x70
// 0047a82b  c705142fc00071000000 mov dword ptr [0xc02f14], 0x71
// 0047a835  c705182fc00072000000 mov dword ptr [0xc02f18], 0x72
// 0047a83f  c7051c2fc00073000000 mov dword ptr [0xc02f1c], 0x73
// 0047a849  c705202fc00074000000 mov dword ptr [0xc02f20], 0x74
// 0047a853  c705242fc00075000000 mov dword ptr [0xc02f24], 0x75
// 0047a85d  c705282fc00076000000 mov dword ptr [0xc02f28], 0x76
// 0047a867  c7052c2fc00077000000 mov dword ptr [0xc02f2c], 0x77
// 0047a871  c705302fc00078000000 mov dword ptr [0xc02f30], 0x78
// 0047a87b  c705342fc00079000000 mov dword ptr [0xc02f34], 0x79
// 0047a885  c705582fc00090000000 mov dword ptr [0xc02f58], 0x90
// 0047a88f  c705602fc00091000000 mov dword ptr [0xc02f60], 0x91
// 0047a899  c705c42ec00067000000 mov dword ptr [0xc02ec4], 0x67
// 0047a8a3  c705c82ec00068000000 mov dword ptr [0xc02ec8], 0x68
// 0047a8ad  c705cc2ec00069000000 mov dword ptr [0xc02ecc], 0x69
// 0047a8b7  c705dc2ec0006d000000 mov dword ptr [0xc02edc], 0x6d
// 0047a8c1  c705b82ec00064000000 mov dword ptr [0xc02eb8], 0x64
// 0047a8cb  c705bc2ec00065000000 mov dword ptr [0xc02ebc], 0x65
// 0047a8d5  c705c02ec00066000000 mov dword ptr [0xc02ec0], 0x66
// 0047a8df  c705e02ec0006b000000 mov dword ptr [0xc02ee0], 0x6b
// 0047a8e9  c705ac2ec00061000000 mov dword ptr [0xc02eac], 0x61
// 0047a8f3  c705b02ec00062000000 mov dword ptr [0xc02eb0], 0x62
// 0047a8fd  c705b42ec00063000000 mov dword ptr [0xc02eb4], 0x63
// 0047a907  c705a82ec00060000000 mov dword ptr [0xc02ea8], 0x60
// 0047a911  c705d02ec0006e000000 mov dword ptr [0xc02ed0], 0x6e
// 0047a91b  c705382fc0007a000000 mov dword ptr [0xc02f38], 0x7a
// 0047a925  c7053c2fc0007b000000 mov dword ptr [0xc02f3c], 0x7b
// 0047a92f  c705402fc0007c000000 mov dword ptr [0xc02f40], 0x7c
// 0047a939  c705442fc0007d000000 mov dword ptr [0xc02f44], 0x7d
// 0047a943  c705482fc0007e000000 mov dword ptr [0xc02f48], 0x7e
// 0047a94d  c7056c2fc000a3000000 mov dword ptr [0xc02f6c], 0xa3
// 0047a957  c705d42ec0006f000000 mov dword ptr [0xc02ed4], 0x6f
// 0047a961  c705742fc000a5000000 mov dword ptr [0xc02f74], 0xa5
// 0047a96b  c705002fc00024000000 mov dword ptr [0xc02f00], 0x24
// 0047a975  c705ec2ec00026000000 mov dword ptr [0xc02eec], 0x26
// 0047a97f  c705082fc00021000000 mov dword ptr [0xc02f08], 0x21
// 0047a989  c705f82ec00025000000 mov dword ptr [0xc02ef8], 0x25
// 0047a993  c705f42ec00027000000 mov dword ptr [0xc02ef4], 0x27
// 0047a99d  c705042fc00023000000 mov dword ptr [0xc02f04], 0x23
// 0047a9a7  c705f02ec00028000000 mov dword ptr [0xc02ef0], 0x28
// 0047a9b1  c7050c2fc00022000000 mov dword ptr [0xc02f0c], 0x22
// 0047a9bb  c705fc2ec0002d000000 mov dword ptr [0xc02efc], 0x2d
// 0047a9c5  c705a42cc0002e000000 mov dword ptr [0xc02ca4], 0x2e
// 0047a9cf  c705802fc0005b000000 mov dword ptr [0xc02f80], 0x5b
// 0047a9d9  c7057c2fc0005c000000 mov dword ptr [0xc02f7c], 0x5c
// 0047a9e3  c705a42fc0005d000000 mov dword ptr [0xc02fa4], 0x5d
// 0047a9ed  8b0485a82ac000       mov eax, dword ptr [eax*4 + 0xc02aa8]
// 0047a9f4  c605b42fc00001       mov byte ptr [0xc02fb4], 1
// 0047a9fb  5f                   pop edi
// 0047a9fc  c3                   ret 
// 0047a9fd  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0047aa01  8b048da82ac000       mov eax, dword ptr [ecx*4 + 0xc02aa8]
// 0047aa08  c3                   ret 
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
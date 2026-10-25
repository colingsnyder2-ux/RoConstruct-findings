// from server: 100% by colin
// roc 2008-06 00469c60  unit: DxUserInput  size: 665 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00469c60
//
// 00469c60  803d14ee960000       cmp byte ptr [0x96ee14], 0
// 00469c67  0f8580020000         jne 0x469eed
// 00469c6d  57                   push edi
// 00469c6e  33c0                 xor eax, eax
// 00469c70  b943010000           mov ecx, 0x143
// 00469c75  bf08e99600           mov edi, 0x96e908
// 00469c7a  f3ab                 rep stosd dword ptr es:[edi], eax
// 00469c7c  b80d000000           mov eax, 0xd
// 00469c81  a33ce99600           mov dword ptr [0x96e93c], eax
// 00469c86  a344ed9600           mov dword ptr [0x96ed44], eax
// 00469c8b  8b442408             mov eax, dword ptr [esp + 8]
// 00469c8f  c705f8ed96002a000000 mov dword ptr [0x96edf8], 0x2a
// 00469c99  c705fced96002c000000 mov dword ptr [0x96edfc], 0x2c
// 00469ca3  c70574e996001b000000 mov dword ptr [0x96e974], 0x1b
// 00469cad  c70528e9960008000000 mov dword ptr [0x96e928], 8
// 00469cb7  c7052ce9960009000000 mov dword ptr [0x96e92c], 9
// 00469cc1  c705d0ed9600a2000000 mov dword ptr [0x96edd0], 0xa2
// 00469ccb  c705c8ed9600a0000000 mov dword ptr [0x96edc8], 0xa0
// 00469cd5  c70578ea9600e2000000 mov dword ptr [0x96ea78], 0xe2
// 00469cdf  c705c4ed9600a1000000 mov dword ptr [0x96edc4], 0xa1
// 00469ce9  c70538ed96006a000000 mov dword ptr [0x96ed38], 0x6a
// 00469cf3  c705d8ed9600a4000000 mov dword ptr [0x96edd8], 0xa4
// 00469cfd  c70588e9960020000000 mov dword ptr [0x96e988], 0x20
// 00469d07  c705bced960014000000 mov dword ptr [0x96edbc], 0x14
// 00469d11  c70570ed960070000000 mov dword ptr [0x96ed70], 0x70
// 00469d1b  c70574ed960071000000 mov dword ptr [0x96ed74], 0x71
// 00469d25  c70578ed960072000000 mov dword ptr [0x96ed78], 0x72
// 00469d2f  c7057ced960073000000 mov dword ptr [0x96ed7c], 0x73
// 00469d39  c70580ed960074000000 mov dword ptr [0x96ed80], 0x74
// 00469d43  c70584ed960075000000 mov dword ptr [0x96ed84], 0x75
// 00469d4d  c70588ed960076000000 mov dword ptr [0x96ed88], 0x76
// 00469d57  c7058ced960077000000 mov dword ptr [0x96ed8c], 0x77
// 00469d61  c70590ed960078000000 mov dword ptr [0x96ed90], 0x78
// 00469d6b  c70594ed960079000000 mov dword ptr [0x96ed94], 0x79
// 00469d75  c705b8ed960090000000 mov dword ptr [0x96edb8], 0x90
// 00469d7f  c705c0ed960091000000 mov dword ptr [0x96edc0], 0x91
// 00469d89  c70524ed960067000000 mov dword ptr [0x96ed24], 0x67
// 00469d93  c70528ed960068000000 mov dword ptr [0x96ed28], 0x68
// 00469d9d  c7052ced960069000000 mov dword ptr [0x96ed2c], 0x69
// 00469da7  c7053ced96006d000000 mov dword ptr [0x96ed3c], 0x6d
// 00469db1  c70518ed960064000000 mov dword ptr [0x96ed18], 0x64
// 00469dbb  c7051ced960065000000 mov dword ptr [0x96ed1c], 0x65
// 00469dc5  c70520ed960066000000 mov dword ptr [0x96ed20], 0x66
// 00469dcf  c70540ed96006b000000 mov dword ptr [0x96ed40], 0x6b
// 00469dd9  c7050ced960061000000 mov dword ptr [0x96ed0c], 0x61
// 00469de3  c70510ed960062000000 mov dword ptr [0x96ed10], 0x62
// 00469ded  c70514ed960063000000 mov dword ptr [0x96ed14], 0x63
// 00469df7  c70508ed960060000000 mov dword ptr [0x96ed08], 0x60
// 00469e01  c70530ed96006e000000 mov dword ptr [0x96ed30], 0x6e
// 00469e0b  c70598ed96007a000000 mov dword ptr [0x96ed98], 0x7a
// 00469e15  c7059ced96007b000000 mov dword ptr [0x96ed9c], 0x7b
// 00469e1f  c705a0ed96007c000000 mov dword ptr [0x96eda0], 0x7c
// 00469e29  c705a4ed96007d000000 mov dword ptr [0x96eda4], 0x7d
// 00469e33  c705a8ed96007e000000 mov dword ptr [0x96eda8], 0x7e
// 00469e3d  c705cced9600a3000000 mov dword ptr [0x96edcc], 0xa3
// 00469e47  c70534ed96006f000000 mov dword ptr [0x96ed34], 0x6f
// 00469e51  c705d4ed9600a5000000 mov dword ptr [0x96edd4], 0xa5
// 00469e5b  c70560ed960024000000 mov dword ptr [0x96ed60], 0x24
// 00469e65  c7054ced960026000000 mov dword ptr [0x96ed4c], 0x26
// 00469e6f  c70568ed960021000000 mov dword ptr [0x96ed68], 0x21
// 00469e79  c70558ed960025000000 mov dword ptr [0x96ed58], 0x25
// 00469e83  c70554ed960027000000 mov dword ptr [0x96ed54], 0x27
// 00469e8d  c70564ed960023000000 mov dword ptr [0x96ed64], 0x23
// 00469e97  c70550ed960028000000 mov dword ptr [0x96ed50], 0x28
// 00469ea1  c7056ced960022000000 mov dword ptr [0x96ed6c], 0x22
// 00469eab  c7055ced96002d000000 mov dword ptr [0x96ed5c], 0x2d
// 00469eb5  c70504eb96002e000000 mov dword ptr [0x96eb04], 0x2e
// 00469ebf  c705e0ed96005b000000 mov dword ptr [0x96ede0], 0x5b
// 00469ec9  c705dced96005c000000 mov dword ptr [0x96eddc], 0x5c
// 00469ed3  c70504ee96005d000000 mov dword ptr [0x96ee04], 0x5d
// 00469edd  8b048508e99600       mov eax, dword ptr [eax*4 + 0x96e908]
// 00469ee4  c60514ee960001       mov byte ptr [0x96ee14], 1
// 00469eeb  5f                   pop edi
// 00469eec  c3                   ret 
// 00469eed  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00469ef1  8b048d08e99600       mov eax, dword ptr [ecx*4 + 0x96e908]
// 00469ef8  c3                   ret 

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

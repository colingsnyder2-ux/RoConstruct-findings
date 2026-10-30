// roc 2011-06 00498780  unit: DxUserInputJob  size: 665 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00498780
//
// 00498780  803d5451cb0000       cmp byte ptr [0xcb5154], 0
// 00498787  0f8580020000         jne 0x498a0d
// 0049878d  57                   push edi
// 0049878e  33c0                 xor eax, eax
// 00498790  b943010000           mov ecx, 0x143
// 00498795  bf484ccb00           mov edi, 0xcb4c48
// 0049879a  f3ab                 rep stosd dword ptr es:[edi], eax
// 0049879c  b80d000000           mov eax, 0xd
// 004987a1  a37c4ccb00           mov dword ptr [0xcb4c7c], eax
// 004987a6  a38450cb00           mov dword ptr [0xcb5084], eax
// 004987ab  8b442408             mov eax, dword ptr [esp + 8]
// 004987af  c7053851cb002a000000 mov dword ptr [0xcb5138], 0x2a
// 004987b9  c7053c51cb002c000000 mov dword ptr [0xcb513c], 0x2c
// 004987c3  c705b44ccb001b000000 mov dword ptr [0xcb4cb4], 0x1b
// 004987cd  c705684ccb0008000000 mov dword ptr [0xcb4c68], 8
// 004987d7  c7056c4ccb0009000000 mov dword ptr [0xcb4c6c], 9
// 004987e1  c7051051cb00a2000000 mov dword ptr [0xcb5110], 0xa2
// 004987eb  c7050851cb00a0000000 mov dword ptr [0xcb5108], 0xa0
// 004987f5  c705b84dcb00e2000000 mov dword ptr [0xcb4db8], 0xe2
// 004987ff  c7050451cb00a1000000 mov dword ptr [0xcb5104], 0xa1
// 00498809  c7057850cb006a000000 mov dword ptr [0xcb5078], 0x6a
// 00498813  c7051851cb00a4000000 mov dword ptr [0xcb5118], 0xa4
// 0049881d  c705c84ccb0020000000 mov dword ptr [0xcb4cc8], 0x20
// 00498827  c705fc50cb0014000000 mov dword ptr [0xcb50fc], 0x14
// 00498831  c705b050cb0070000000 mov dword ptr [0xcb50b0], 0x70
// 0049883b  c705b450cb0071000000 mov dword ptr [0xcb50b4], 0x71
// 00498845  c705b850cb0072000000 mov dword ptr [0xcb50b8], 0x72
// 0049884f  c705bc50cb0073000000 mov dword ptr [0xcb50bc], 0x73
// 00498859  c705c050cb0074000000 mov dword ptr [0xcb50c0], 0x74
// 00498863  c705c450cb0075000000 mov dword ptr [0xcb50c4], 0x75
// 0049886d  c705c850cb0076000000 mov dword ptr [0xcb50c8], 0x76
// 00498877  c705cc50cb0077000000 mov dword ptr [0xcb50cc], 0x77
// 00498881  c705d050cb0078000000 mov dword ptr [0xcb50d0], 0x78
// 0049888b  c705d450cb0079000000 mov dword ptr [0xcb50d4], 0x79
// 00498895  c705f850cb0090000000 mov dword ptr [0xcb50f8], 0x90
// 0049889f  c7050051cb0091000000 mov dword ptr [0xcb5100], 0x91
// 004988a9  c7056450cb0067000000 mov dword ptr [0xcb5064], 0x67
// 004988b3  c7056850cb0068000000 mov dword ptr [0xcb5068], 0x68
// 004988bd  c7056c50cb0069000000 mov dword ptr [0xcb506c], 0x69
// 004988c7  c7057c50cb006d000000 mov dword ptr [0xcb507c], 0x6d
// 004988d1  c7055850cb0064000000 mov dword ptr [0xcb5058], 0x64
// 004988db  c7055c50cb0065000000 mov dword ptr [0xcb505c], 0x65
// 004988e5  c7056050cb0066000000 mov dword ptr [0xcb5060], 0x66
// 004988ef  c7058050cb006b000000 mov dword ptr [0xcb5080], 0x6b
// 004988f9  c7054c50cb0061000000 mov dword ptr [0xcb504c], 0x61
// 00498903  c7055050cb0062000000 mov dword ptr [0xcb5050], 0x62
// 0049890d  c7055450cb0063000000 mov dword ptr [0xcb5054], 0x63
// 00498917  c7054850cb0060000000 mov dword ptr [0xcb5048], 0x60
// 00498921  c7057050cb006e000000 mov dword ptr [0xcb5070], 0x6e
// 0049892b  c705d850cb007a000000 mov dword ptr [0xcb50d8], 0x7a
// 00498935  c705dc50cb007b000000 mov dword ptr [0xcb50dc], 0x7b
// 0049893f  c705e050cb007c000000 mov dword ptr [0xcb50e0], 0x7c
// 00498949  c705e450cb007d000000 mov dword ptr [0xcb50e4], 0x7d
// 00498953  c705e850cb007e000000 mov dword ptr [0xcb50e8], 0x7e
// 0049895d  c7050c51cb00a3000000 mov dword ptr [0xcb510c], 0xa3
// 00498967  c7057450cb006f000000 mov dword ptr [0xcb5074], 0x6f
// 00498971  c7051451cb00a5000000 mov dword ptr [0xcb5114], 0xa5
// 0049897b  c705a050cb0024000000 mov dword ptr [0xcb50a0], 0x24
// 00498985  c7058c50cb0026000000 mov dword ptr [0xcb508c], 0x26
// 0049898f  c705a850cb0021000000 mov dword ptr [0xcb50a8], 0x21
// 00498999  c7059850cb0025000000 mov dword ptr [0xcb5098], 0x25
// 004989a3  c7059450cb0027000000 mov dword ptr [0xcb5094], 0x27
// 004989ad  c705a450cb0023000000 mov dword ptr [0xcb50a4], 0x23
// 004989b7  c7059050cb0028000000 mov dword ptr [0xcb5090], 0x28
// 004989c1  c705ac50cb0022000000 mov dword ptr [0xcb50ac], 0x22
// 004989cb  c7059c50cb002d000000 mov dword ptr [0xcb509c], 0x2d
// 004989d5  c705444ecb002e000000 mov dword ptr [0xcb4e44], 0x2e
// 004989df  c7052051cb005b000000 mov dword ptr [0xcb5120], 0x5b
// 004989e9  c7051c51cb005c000000 mov dword ptr [0xcb511c], 0x5c
// 004989f3  c7054451cb005d000000 mov dword ptr [0xcb5144], 0x5d
// 004989fd  8b0485484ccb00       mov eax, dword ptr [eax*4 + 0xcb4c48]
// 00498a04  c6055451cb0001       mov byte ptr [0xcb5154], 1
// 00498a0b  5f                   pop edi
// 00498a0c  c3                   ret 
// 00498a0d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00498a11  8b048d484ccb00       mov eax, dword ptr [ecx*4 + 0xcb4c48]
// 00498a18  c3                   ret 
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
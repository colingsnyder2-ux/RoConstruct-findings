// from server: 90% by king_originala
extern int keyMap[323];
extern unsigned char keyMapInitialized;

int __cdecl getKeyMapping(int key)
{
    if (!keyMapInitialized)
    {
        keyMap[266] = 0xA3;
        keyMap[267] = 0x6F;
        keyMap[307] = 0xA5;
        keyMap[278] = 0x24;
        keyMap[273] = 0x26;
        keyMap[280] = 0x21;
        keyMap[276] = 0x25;
        keyMap[275] = 0x27;
        keyMap[279] = 0x23;
        keyMap[274] = 0x28;
        keyMap[281] = 0x22;
        keyMap[277] = 0x2D;
        keyMap[127] = 0x2E;
        keyMap[310] = 0x5B;
        keyMap[309] = 0x5C;
        keyMap[319] = 0x5D;

        int result = keyMap[key];
        keyMapInitialized = 1;
        return result;
    }

    return keyMap[key];
}

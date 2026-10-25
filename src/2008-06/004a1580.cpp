// from server: 100% by king_originala
// roc 2008-06 004a1580  unit: RBX::Network::Server::ClientProxy  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a1580
//
// 004a1580  c7016c338200         mov dword ptr [ecx], 0x82336c
// 004a1586  c7411060338200       mov dword ptr [ecx + 0x10], 0x823360
// 004a158d  c7411458338200       mov dword ptr [ecx + 0x14], 0x823358
// 004a1594  c7412050338200       mov dword ptr [ecx + 0x20], 0x823350
// 004a159b  c7412440338200       mov dword ptr [ecx + 0x24], 0x823340
// 004a15a2  c7414430338200       mov dword ptr [ecx + 0x44], 0x823330
// 004a15a9  c7416420338200       mov dword ptr [ecx + 0x64], 0x823320
// 004a15b0  c7818400000010338200 mov dword ptr [ecx + 0x84], 0x823310
// 004a15ba  c781a400000000338200 mov dword ptr [ecx + 0xa4], 0x823300
// 004a15c4  c781c4000000f0328200 mov dword ptr [ecx + 0xc4], 0x8232f0
// 004a15ce  c78130010000c0328200 mov dword ptr [ecx + 0x130], 0x8232c0
// 004a15d8  c78134010000b4328200 mov dword ptr [ecx + 0x134], 0x8232b4
// 004a15e2  e949b20000           jmp 0x4ac830

struct S {
    unsigned int data[78];
    void reset();
    void finish();
};

void S::reset()
{
    data[0]  = 0x0082336C;
    data[4]  = 0x00823360;
    data[5]  = 0x00823358;
    data[8]  = 0x00823350;
    data[9]  = 0x00823340;
    data[17] = 0x00823330;
    data[25] = 0x00823320;
    data[33] = 0x00823310;
    data[41] = 0x00823300;
    data[49] = 0x008232F0;
    data[76] = 0x008232C0;
    data[77] = 0x008232B4;
    finish();
}

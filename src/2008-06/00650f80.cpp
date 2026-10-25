// from server: 100% by king_originala
// roc 2008-06 00650f80  unit: RBX::ChatOutput  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00650f80
//
// 00650f80  c701b4bc8400         mov dword ptr [ecx], 0x84bcb4
// 00650f86  c74110a4bc8400       mov dword ptr [ecx + 0x10], 0x84bca4
// 00650f8d  c741149cbc8400       mov dword ptr [ecx + 0x14], 0x84bc9c
// 00650f94  c7412094bc8400       mov dword ptr [ecx + 0x20], 0x84bc94
// 00650f9b  c7412484bc8400       mov dword ptr [ecx + 0x24], 0x84bc84
// 00650fa2  c7414474bc8400       mov dword ptr [ecx + 0x44], 0x84bc74
// 00650fa9  c7416464bc8400       mov dword ptr [ecx + 0x64], 0x84bc64
// 00650fb0  c7818400000054bc8400 mov dword ptr [ecx + 0x84], 0x84bc54
// 00650fba  c781a400000044bc8400 mov dword ptr [ecx + 0xa4], 0x84bc44
// 00650fc4  c781c400000034bc8400 mov dword ptr [ecx + 0xc4], 0x84bc34
// 00650fce  c781300100002cbc8400 mov dword ptr [ecx + 0x130], 0x84bc2c
// 00650fd8  c7814401000020bc8400 mov dword ptr [ecx + 0x144], 0x84bc20
// 00650fe2  c7814801000014bc8400 mov dword ptr [ecx + 0x148], 0x84bc14
// 00650fec  e94f05dcff           jmp 0x411540

struct S {
    unsigned long words[83];
    void f();
    void finish();
};

void S::f()
{
    words[0] = 0x0084BCB4;
    words[4] = 0x0084BCA4;
    words[5] = 0x0084BC9C;
    words[8] = 0x0084BC94;
    words[9] = 0x0084BC84;
    words[17] = 0x0084BC74;
    words[25] = 0x0084BC64;
    words[33] = 0x0084BC54;
    words[41] = 0x0084BC44;
    words[49] = 0x0084BC34;
    words[76] = 0x0084BC2C;
    words[81] = 0x0084BC20;
    words[82] = 0x0084BC14;
    finish();
}

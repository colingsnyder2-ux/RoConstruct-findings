// from server: 60% by colin
// roc 2007-08 00500580  unit: G3D::Shader  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00500580
//
// 00500580  e86bfdffff           call 0x5002f0
// 00500585  84c0                 test al, al
// 00500587  741d                 je 0x5005a6
// 00500589  e882fdffff           call 0x500310
// 0050058e  84c0                 test al, al
// 00500590  7414                 je 0x5005a6
// 00500592  0fb64c2408           movzx ecx, byte ptr [esp + 8]
// 00500597  69c901010101         imul ecx, ecx, 0x1010101
// 0050059d  894c2408             mov dword ptr [esp + 8], ecx
// 005005a1  e97aeeffff           jmp 0x4ff420
// 005005a6  0fb64c2408           movzx ecx, byte ptr [esp + 8]
// 005005ab  894c2408             mov dword ptr [esp + 8], ecx
// 005005af  e9d8051300           jmp 0x630b8c

extern "C" unsigned char __cdecl sub_5002F0();
extern "C" unsigned char __cdecl sub_500310();
extern "C" void __cdecl sub_4FF420();
extern "C" void __cdecl sub_630B8C();

void __cdecl sub_500580(unsigned char arg)
{
    if (sub_5002F0()) {
        if (sub_500310()) {
            unsigned int v = arg;
            v = v * 0x01010101u;
            sub_4FF420();
            return;
        }
    }
    unsigned int v = arg;
    sub_630B8C();
}

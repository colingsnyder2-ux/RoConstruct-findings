// from server: 100% by king_originala
// roc 2008-06 0040dba0  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040dba0
//
// 0040dba0  56                   push esi
// 0040dba1  8bf1                 mov esi, ecx
// 0040dba3  e8a8fdffff           call 0x40d950
// 0040dba8  c706a4cd8000         mov dword ptr [esi], 0x80cda4
// 0040dbae  c7461098cd8000       mov dword ptr [esi + 0x10], 0x80cd98
// 0040dbb5  c7461490cd8000       mov dword ptr [esi + 0x14], 0x80cd90
// 0040dbbc  c7462088cd8000       mov dword ptr [esi + 0x20], 0x80cd88
// 0040dbc3  c7462478cd8000       mov dword ptr [esi + 0x24], 0x80cd78
// 0040dbca  c7464468cd8000       mov dword ptr [esi + 0x44], 0x80cd68
// 0040dbd1  c7466458cd8000       mov dword ptr [esi + 0x64], 0x80cd58
// 0040dbd8  c7868400000048cd8000 mov dword ptr [esi + 0x84], 0x80cd48
// 0040dbe2  c786a400000038cd8000 mov dword ptr [esi + 0xa4], 0x80cd38
// 0040dbec  c786c400000028cd8000 mov dword ptr [esi + 0xc4], 0x80cd28
// 0040dbf6  c78650010000ffffffff mov dword ptr [esi + 0x150], 0xffffffff
// 0040dc00  c7865401000000000000 mov dword ptr [esi + 0x154], 0
// 0040dc0a  8bc6                 mov eax, esi
// 0040dc0c  5e                   pop esi
// 0040dc0d  c3                   ret 

struct S {
    unsigned long data[86];
    S* base_init();
    S* init();
};

S* S::init()
{
    base_init();
    data[0] = 0x0080cda4;
    data[4] = 0x0080cd98;
    data[5] = 0x0080cd90;
    data[8] = 0x0080cd88;
    data[9] = 0x0080cd78;
    data[17] = 0x0080cd68;
    data[25] = 0x0080cd58;
    data[33] = 0x0080cd48;
    data[41] = 0x0080cd38;
    data[49] = 0x0080cd28;
    data[84] = 0xffffffffUL;
    data[85] = 0;
    return this;
}

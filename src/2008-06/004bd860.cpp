// from server: 100% by tester
// roc 2008-06 004bd860  unit: ProfiledRakPeer  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bd860
//
// 004bd860  33c0                 xor eax, eax
// 004bd862  898184000000         mov dword ptr [ecx + 0x84], eax
// 004bd868  898188000000         mov dword ptr [ecx + 0x88], eax
// 004bd86e  89818c000000         mov dword ptr [ecx + 0x8c], eax
// 004bd874  898190000000         mov dword ptr [ecx + 0x90], eax
// 004bd87a  898194000000         mov dword ptr [ecx + 0x94], eax
// 004bd880  898198000000         mov dword ptr [ecx + 0x98], eax
// 004bd886  89819c000000         mov dword ptr [ecx + 0x9c], eax
// 004bd88c  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 004bd892  8981c4000000         mov dword ptr [ecx + 0xc4], eax
// 004bd898  8981c8000000         mov dword ptr [ecx + 0xc8], eax
// 004bd89e  8981cc000000         mov dword ptr [ecx + 0xcc], eax
// 004bd8a4  8981d0000000         mov dword ptr [ecx + 0xd0], eax
// 004bd8aa  8981f4000000         mov dword ptr [ecx + 0xf4], eax
// 004bd8b0  8981f8000000         mov dword ptr [ecx + 0xf8], eax
// 004bd8b6  8981fc000000         mov dword ptr [ecx + 0xfc], eax
// 004bd8bc  898100010000         mov dword ptr [ecx + 0x100], eax
// 004bd8c2  898124010000         mov dword ptr [ecx + 0x124], eax
// 004bd8c8  898128010000         mov dword ptr [ecx + 0x128], eax
// 004bd8ce  89812c010000         mov dword ptr [ecx + 0x12c], eax
// 004bd8d4  898130010000         mov dword ptr [ecx + 0x130], eax
// 004bd8da  888180000000         mov byte ptr [ecx + 0x80], al
// 004bd8e0  c3                   ret 

struct RakPeer {
    char pad0[0x80];
    unsigned char field80;
    char pad1[3];
    unsigned int field84;
    unsigned int field88;
    unsigned int field8c;
    unsigned int field90;
    unsigned int field94;
    unsigned int field98;
    unsigned int field9c;
    unsigned int fielda0;
    char pad2[0x20];
    unsigned int fieldc4;
    unsigned int fieldc8;
    unsigned int fieldcc;
    unsigned int fieldd0;
    char pad3[0x20];
    unsigned int fieldf4;
    unsigned int fieldf8;
    unsigned int fieldfc;
    unsigned int field100;
    char pad4[0x20];
    unsigned int field124;
    unsigned int field128;
    unsigned int field12c;
    unsigned int field130;

    void init();
};

void RakPeer::init()
{
    field84 = 0;
    field88 = 0;
    field8c = 0;
    field90 = 0;
    field94 = 0;
    field98 = 0;
    field9c = 0;
    fielda0 = 0;
    fieldc4 = 0;
    fieldc8 = 0;
    fieldcc = 0;
    fieldd0 = 0;
    fieldf4 = 0;
    fieldf8 = 0;
    fieldfc = 0;
    field100 = 0;
    field124 = 0;
    field128 = 0;
    field12c = 0;
    field130 = 0;
    field80 = 0;
}

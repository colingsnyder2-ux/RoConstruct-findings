// from server: 100% by king_originala
// roc 2008-06 0062f800  unit: RBX::VExplosion::?$BoundPropGetSet  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062f800
//
// 0062f800  8b442404             mov eax, dword ptr [esp + 4]
// 0062f804  56                   push esi
// 0062f805  50                   push eax
// 0062f806  8bf1                 mov esi, ecx
// 0062f808  e813ebffff           call 0x62e320
// 0062f80d  c7068c718400         mov dword ptr [esi], 0x84718c
// 0062f813  c746107c718400       mov dword ptr [esi + 0x10], 0x84717c
// 0062f81a  c7461474718400       mov dword ptr [esi + 0x14], 0x847174
// 0062f821  c746206c718400       mov dword ptr [esi + 0x20], 0x84716c
// 0062f828  c746245c718400       mov dword ptr [esi + 0x24], 0x84715c
// 0062f82f  c746444c718400       mov dword ptr [esi + 0x44], 0x84714c
// 0062f836  c746643c718400       mov dword ptr [esi + 0x64], 0x84713c
// 0062f83d  c786840000002c718400 mov dword ptr [esi + 0x84], 0x84712c
// 0062f847  c786a40000001c718400 mov dword ptr [esi + 0xa4], 0x84711c
// 0062f851  c786c40000000c718400 mov dword ptr [esi + 0xc4], 0x84710c
// 0062f85b  c78630010000f0708400 mov dword ptr [esi + 0x130], 0x8470f0
// 0062f865  c78638010000e4708400 mov dword ptr [esi + 0x138], 0x8470e4
// 0062f86f  8bc6                 mov eax, esi
// 0062f871  5e                   pop esi
// 0062f872  c20400               ret 4

struct S {
    volatile unsigned int data[82];
    void initialize(int argument);
    S* construct(int argument);
};

S* S::construct(int argument)
{
    initialize(argument);
    data[0x000 / 4] = 0x0084718c;
    data[0x010 / 4] = 0x0084717c;
    data[0x014 / 4] = 0x00847174;
    data[0x020 / 4] = 0x0084716c;
    data[0x024 / 4] = 0x0084715c;
    data[0x044 / 4] = 0x0084714c;
    data[0x064 / 4] = 0x0084713c;
    data[0x084 / 4] = 0x0084712c;
    data[0x0a4 / 4] = 0x0084711c;
    data[0x0c4 / 4] = 0x0084710c;
    data[0x130 / 4] = 0x008470f0;
    data[0x138 / 4] = 0x008470e4;
    return this;
}

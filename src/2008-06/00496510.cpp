// from server: 100% by king_originala
// roc 2008-06 00496510  unit: RBX::Network::Players::Plugin  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496510
//
// 00496510  56                   push esi
// 00496511  8bf1                 mov esi, ecx
// 00496513  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 00496519  85c9                 test ecx, ecx
// 0049651b  7411                 je 0x49652e
// 0049651d  8b01                 mov eax, dword ptr [ecx]
// 0049651f  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 00496525  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 0049652b  52                   push edx
// 0049652c  ffd0                 call eax
// 0049652e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00496532  898ea8010000         mov dword ptr [esi + 0x1a8], ecx
// 00496538  85c9                 test ecx, ecx
// 0049653a  7415                 je 0x496551
// 0049653c  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00496542  8b11                 mov edx, dword ptr [ecx]
// 00496544  5e                   pop esi
// 00496545  89442404             mov dword ptr [esp + 4], eax
// 00496549  8b92e8000000         mov edx, dword ptr [edx + 0xe8]
// 0049654f  ffe2                 jmp edx
// 00496551  5e                   pop esi
// 00496552  c20400               ret 4

struct Peer
{
    virtual void slot00(), slot01(), slot02(), slot03(), slot04(), slot05(),
        slot06(), slot07(), slot08(), slot09(), slot10(), slot11(),
        slot12(), slot13(), slot14(), slot15(), slot16(), slot17(),
        slot18(), slot19(), slot20(), slot21(), slot22(), slot23(),
        slot24(), slot25(), slot26(), slot27(), slot28(), slot29(),
        slot30(), slot31(), slot32(), slot33(), slot34(), slot35(),
        slot36(), slot37(), slot38(), slot39(), slot40(), slot41(),
        slot42(), slot43(), slot44(), slot45(), slot46(), slot47(),
        slot48(), slot49(), slot50(), slot51(), slot52(), slot53(),
        slot54(), slot55(), slot56(), slot57();
    virtual void attach(void*);
    virtual void detach(void*);
};

struct S
{
    char padding[0x194];
    void* owner;
    char gap[0x10];
    Peer* peer;

    void setPeer(Peer*);
};

void S::setPeer(Peer* value)
{
    if (peer)
        peer->detach(owner);

    peer = value;

    if (value)
        value->attach(owner);
}

// from server: 100% by king_originala
// roc 2008-06 0049f130  unit: RBX::Network::Client  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049f130
//
// 0049f130  56                   push esi
// 0049f131  8db1bcfeffff         lea esi, [ecx - 0x144]
// 0049f137  8bce                 mov ecx, esi
// 0049f139  e892be0b00           call 0x55afd0
// 0049f13e  8b964c010000         mov edx, dword ptr [esi + 0x14c]
// 0049f144  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 0049f14a  8b01                 mov eax, dword ptr [ecx]
// 0049f14c  8b4064               mov eax, dword ptr [eax + 0x64]
// 0049f14f  6a00                 push 0
// 0049f151  6a01                 push 1
// 0049f153  52                   push edx
// 0049f154  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 0049f15a  52                   push edx
// 0049f15b  ffd0                 call eax
// 0049f15d  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 0049f163  8b11                 mov edx, dword ptr [ecx]
// 0049f165  8b4228               mov eax, dword ptr [edx + 0x28]
// 0049f168  6a00                 push 0
// 0049f16a  68b80b0000           push 0xbb8
// 0049f16f  ffd0                 call eax
// 0049f171  5e                   pop esi
// 0049f172  c20800               ret 8

extern "C" void _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

struct Peer
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void stop(int, int);
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void slot19();
    virtual void slot20();
    virtual void slot21();
    virtual void slot22();
    virtual void slot23();
    virtual void slot24();
    virtual void start(unsigned, unsigned, int, int);
};

struct Callback
{
    void func_0049f130(int, int);
};

struct Client
{
    char padding[0x140];
    Peer* peer;
    Callback callback;
    unsigned first;
    unsigned second;

    void prepare();
};

void Callback::func_0049f130(int, int)
{
    Client* client = reinterpret_cast<Client*>(
        reinterpret_cast<char*>(this) - 0x144);
    client->prepare();
    client->peer->start(client->first, client->second, 1, 0);
    client->peer->stop(3000, 0);
    _ReadWriteBarrier();
}

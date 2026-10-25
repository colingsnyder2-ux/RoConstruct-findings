// from server: 100% by king_originala
// roc 2008-06 0049fe50  unit: RBX::Network::Client  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049fe50
//
// 0049fe50  53                   push ebx
// 0049fe51  56                   push esi
// 0049fe52  8bf1                 mov esi, ecx
// 0049fe54  57                   push edi
// 0049fe55  85f6                 test esi, esi
// 0049fe57  7408                 je 0x49fe61
// 0049fe59  8d8644010000         lea eax, [esi + 0x144]
// 0049fe5f  eb02                 jmp 0x49fe63
// 0049fe61  33c0                 xor eax, eax
// 0049fe63  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0049fe67  85ff                 test edi, edi
// 0049fe69  7456                 je 0x49fec1
// 0049fe6b  50                   push eax
// 0049fe6c  8d8f30010000         lea ecx, [edi + 0x130]
// 0049fe72  e8095c1400           call 0x5e5a80
// 0049fe77  8bce                 mov ecx, esi
// 0049fe79  e852b10b00           call 0x55afd0
// 0049fe7e  8b964c010000         mov edx, dword ptr [esi + 0x14c]
// 0049fe84  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 0049fe8a  8b01                 mov eax, dword ptr [ecx]
// 0049fe8c  8b4064               mov eax, dword ptr [eax + 0x64]
// 0049fe8f  6a00                 push 0
// 0049fe91  6a01                 push 1
// 0049fe93  52                   push edx
// 0049fe94  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 0049fe9a  52                   push edx
// 0049fe9b  ffd0                 call eax
// 0049fe9d  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 0049fea3  8b11                 mov edx, dword ptr [ecx]
// 0049fea5  8b4228               mov eax, dword ptr [edx + 0x28]
// 0049fea8  6a00                 push 0
// 0049feaa  68b80b0000           push 0xbb8
// 0049feaf  ffd0                 call eax
// 0049feb1  8bcf                 mov ecx, edi
// 0049feb3  e81827f7ff           call 0x4125d0
// 0049feb8  6a00                 push 0
// 0049feba  8bc8                 mov ecx, eax
// 0049febc  e84f66ffff           call 0x496510
// 0049fec1  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0049fec5  53                   push ebx
// 0049fec6  57                   push edi
// 0049fec7  8bce                 mov ecx, esi
// 0049fec9  e832580100           call 0x4b5700
// 0049fece  85db                 test ebx, ebx
// 0049fed0  7415                 je 0x49fee7
// 0049fed2  8bcb                 mov ecx, ebx
// 0049fed4  e83728f7ff           call 0x412710
// 0049fed9  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 0049fedf  51                   push ecx
// 0049fee0  8bc8                 mov ecx, eax
// 0049fee2  e82966ffff           call 0x496510
// 0049fee7  85f6                 test esi, esi
// 0049fee9  7408                 je 0x49fef3
// 0049feeb  8d8644010000         lea eax, [esi + 0x144]
// 0049fef1  eb02                 jmp 0x49fef5
// 0049fef3  33c0                 xor eax, eax
// 0049fef5  85db                 test ebx, ebx
// 0049fef7  740c                 je 0x49ff05
// 0049fef9  50                   push eax
// 0049fefa  8d8b30010000         lea ecx, [ebx + 0x130]
// 0049ff00  e89b19f8ff           call 0x4218a0
// 0049ff05  5f                   pop edi
// 0049ff06  5e                   pop esi
// 0049ff07  5b                   pop ebx
// 0049ff08  c20800               ret 8

struct Client;
struct Peer;

struct Listener
{
    unsigned state;
    void detach(Listener*);
    void attach(Listener*);
};

struct Property
{
    void set(Peer*);
};

struct Node
{
    char padding[0x130];
    Listener listener;
    Property* oldProperty();
    Property* newProperty();
};

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

struct Client
{
    char padding[0x140];
    Peer* peer;
    Listener listener;
    unsigned first;
    unsigned second;

    void prepare();
    void change(Node*, Node*);
    void func_0049fe50(Node*, Node*);
};

void Client::func_0049fe50(Node* oldNode, Node* newNode)
{
    Listener* link = this ? &listener : 0;
    if (oldNode)
    {
        oldNode->listener.detach(link);
        prepare();
        peer->start(first, second, 1, 0);
        peer->stop(3000, 0);
        Property* property = oldNode->oldProperty();
        property->set(0);
    }

    change(oldNode, newNode);

    if (newNode)
    {
        Property* property = newNode->newProperty();
        property->set(peer);
    }

    link = this ? &listener : 0;
    if (newNode)
        newNode->listener.attach(link);
}

// from server: 100% by king_originala
// roc 2008-06 0064c130  unit: RBX::SleepStage  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064c130
//
// 0064c130  56                   push esi
// 0064c131  8b742408             mov esi, dword ptr [esp + 8]
// 0064c135  8b06                 mov eax, dword ptr [esi]
// 0064c137  8b500c               mov edx, dword ptr [eax + 0xc]
// 0064c13a  57                   push edi
// 0064c13b  8bf9                 mov edi, ecx
// 0064c13d  8bce                 mov ecx, esi
// 0064c13f  ffd2                 call edx
// 0064c141  83f801               cmp eax, 1
// 0064c144  753f                 jne 0x64c185
// 0064c146  8b4608               mov eax, dword ptr [esi + 8]
// 0064c149  83f804               cmp eax, 4
// 0064c14c  7405                 je 0x64c153
// 0064c14e  83f803               cmp eax, 3
// 0064c151  7508                 jne 0x64c15b
// 0064c153  56                   push esi
// 0064c154  8bcf                 mov ecx, edi
// 0064c156  e805feffff           call 0x64bf60
// 0064c15b  837e0802             cmp dword ptr [esi + 8], 2
// 0064c15f  740a                 je 0x64c16b
// 0064c161  6a02                 push 2
// 0064c163  56                   push esi
// 0064c164  8bcf                 mov ecx, edi
// 0064c166  e825feffff           call 0x64bf90
// 0064c16b  ff8fd0000000         dec dword ptr [edi + 0xd0]
// 0064c171  57                   push edi
// 0064c172  8bce                 mov ecx, esi
// 0064c174  c7460800000000       mov dword ptr [esi + 8], 0
// 0064c17b  e8c096ffff           call 0x645840
// 0064c180  5f                   pop edi
// 0064c181  5e                   pop esi
// 0064c182  c20400               ret 4
// 0064c185  837e0802             cmp dword ptr [esi + 8], 2
// 0064c189  8bcf                 mov ecx, edi
// 0064c18b  751a                 jne 0x64c1a7
// 0064c18d  56                   push esi
// 0064c18e  e8cdfdffff           call 0x64bf60
// 0064c193  57                   push edi
// 0064c194  8bce                 mov ecx, esi
// 0064c196  c7460800000000       mov dword ptr [esi + 8], 0
// 0064c19d  e89e96ffff           call 0x645840
// 0064c1a2  5f                   pop edi
// 0064c1a3  5e                   pop esi
// 0064c1a4  c20400               ret 4
// 0064c1a7  6a02                 push 2
// 0064c1a9  56                   push esi
// 0064c1aa  e861ecffff           call 0x64ae10
// 0064c1af  57                   push edi
// 0064c1b0  8bce                 mov ecx, esi
// 0064c1b2  c7460800000000       mov dword ptr [esi + 8], 0
// 0064c1b9  e88296ffff           call 0x645840
// 0064c1be  5f                   pop edi
// 0064c1bf  5e                   pop esi
// 0064c1c0  c20400               ret 4

struct SleepStage;

struct Item {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual int query();

    int field4;
    int state;

    void f(int);
};

struct SleepStage {
    char padding[0xd0];
    int count;

    void remove(Item*);
    void change(Item*, int);
    void update(Item*, int);
    void process(Item*);
};

void SleepStage::process(Item* item)
{
    if (item->query() == 1) {
        if (item->state == 4 || item->state == 3)
            remove(item);

        if (item->state != 2)
            change(item, 2);

        --count;
        item->state = 0;
        item->f(reinterpret_cast<int>(this));
    } else if (item->state == 2) {
        remove(item);
        item->state = 0;
        item->f(reinterpret_cast<int>(this));
    } else {
        update(item, 2);
        item->state = 0;
        item->f(reinterpret_cast<int>(this));
    }
}

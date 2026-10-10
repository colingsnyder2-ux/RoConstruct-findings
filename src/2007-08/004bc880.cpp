// from server: 45% by tester
// roc 2007-08 004bc880  unit: RakPeer  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bc880

struct Peer;

struct PeerList {
    Peer** data;
    unsigned int size;
    void removeAtIndex(unsigned int index);
};

struct RakPeer {
    char pad0[0x284];
    char lockObj;
    char pad1[0x29c - 0x285];
    Peer** peerList;
    unsigned int peerCount;
    char pad2[0x2a4 - 0x2a0];

    void removePeer(const char* name);
};

extern "C" void __stdcall sub_671390(void* p);
extern "C" void __stdcall sub_4ca1d0(void* p);
extern "C" void __stdcall sub_62fc62(void* p);
extern "C" void __stdcall sub_4baba0(unsigned int index);

void RakPeer::removePeer(const char* name)
{
    if (name == 0)
        return;
    if (name[0] == 0)
        return;

    const char* p = name;
    const char* q = p + 1;
    while (*p)
        p++;
    if ((unsigned int)(p - q) > 0xf)
        return;

    Peer* found = 0;
    sub_671390(&this->lockObj);

    unsigned int i = 0;
    if (this->peerCount > 0)
    {
        Peer** list = this->peerList;
        while (i < this->peerCount)
        {
            const char* a = name;
            const char* b = (const char*)(*list);
            while (*a && *a == *b)
            {
                a++;
                b++;
            }
            if (*a == *b)
            {
                found = *list;
                list[i] = this->peerList[this->peerCount - 1];
                this->peerCount = this->peerCount - 1;
                sub_4baba0(this->peerCount);
                break;
            }
            i++;
            list++;
        }
    }

    sub_4ca1d0(&this->lockObj);

    if (found)
    {
        sub_62fc62(*(void**)found);
        sub_62fc62(found);
    }
}

// from server: 73% by colin
struct RakPeer {
    void* getNext();
    void processPacket(void*, unsigned int, unsigned int, unsigned int);
    void handlePacket(void*);

    void run();
};

void* RakPeer::getNext()
{
    extern void* __fastcall sub_4c1640(RakPeer*);
    return sub_4c1640(this);
}

void RakPeer::processPacket(void* a, unsigned int b, unsigned int c, unsigned int d)
{
    extern void __fastcall sub_4bccd0(RakPeer*, void*, unsigned int, unsigned int, unsigned int);
    sub_4bccd0(this, a, b, c, d);
}

void RakPeer::handlePacket(void* p)
{
    void* vtable = *(void**)this;
    void (__fastcall *fn)(RakPeer*, void*) = *(void (__fastcall**)(RakPeer*, void*))((char*)vtable + 0x40);
    fn(this, p);
}

void RakPeer::run()
{
    void* node = getNext();
    while (node != 0) {
        unsigned char* data = *(unsigned char**)((char*)node + 0x14);
        unsigned char type = *data;
        if (type != 0xb) {
            if (*(unsigned int*)((char*)node + 0xc) <= 5)
                break;
            if (type != 0x18)
                break;
            if (data[5] != 0xb)
                break;
        }
        unsigned int a = *(unsigned int*)((char*)node + 8);
        unsigned int b = *(unsigned int*)((char*)node + 4);
        unsigned int c = *(unsigned int*)((char*)node + 0xc);
        processPacket(data, c, b, a);
        handlePacket(node);
        node = getNext();
    }
}

// from server: 52% by colin
struct Peer {
    void* field0;
    Peer(void* arg);
};

extern "C" void* __cdecl sub_718A38(unsigned int size);

Peer::Peer(void* arg)
{
    field0 = 0;
    void* p = sub_718A38(0x10);
    if (p != 0) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0x8c6a4c;
        *(void**)((char*)p + 0xc) = arg;
    } else {
        p = 0;
    }
    field0 = p;
}

// from server: 99% by colin
struct Mutex {
    void lock();
    void unlock();
};

struct Key {
    unsigned int first;
    unsigned int second;
};

struct Stream {
    void writeBits(const void*, int, bool);
};

struct Target {
    unsigned char pad[0x130];
    void methodA(Stream*, const void*);
};

struct Creator {
    void invoke(Stream*, Key*);
};

extern "C" unsigned int* __cdecl sub_554270();

void Creator::invoke(Stream* stream, Key* key)
{
    if (key) {
        ((Mutex*)key)->lock();
        Key local;
        local.first = *(unsigned int*)((char*)key + 8);
        local.second = *(unsigned int*)((char*)key + 0xc);
        ((Target*)((char*)this + 0x130))->methodA(stream, (char*)local.first + 4);
        stream->writeBits(&local, 0x18, true);
    } else {
        unsigned int* p = sub_554270();
        ((Target*)((char*)this + 0x130))->methodA(stream, (char*)p + 4);
    }
}

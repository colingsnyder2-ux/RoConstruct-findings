// from server: 81% by colin
struct Mutex {
    void lock();
    void unlock();
};

struct Key {
    unsigned int first;
    unsigned int second;
};

struct Stream {
    void writeBits(const unsigned*, int, bool);
};

struct Target {
    unsigned char pad[0x130];
    void methodA(Stream*, const Key*);
};

struct Creator {
    void invoke(Stream*, const Key*);
};

extern "C" void __cdecl sub_554270();

void Creator::invoke(Stream* stream, const Key* key)
{
    if (key) {
        ((Mutex*)key)->lock();
        Key local;
        local.first = key->first;
        local.second = key->second;
        ((Target*)((char*)this + 0x130))->methodA(stream, &local);
        stream->writeBits((const unsigned*)&local, 0x18, true);
    } else {
        sub_554270();
        ((Target*)((char*)this + 0x130))->methodA(stream, key);
    }
}

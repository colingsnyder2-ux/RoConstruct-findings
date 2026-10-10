// from server: 23% by tester
struct ContentId {
    void construct(const ContentId& other);
    ContentId(const ContentId& other) { construct(other); }
    ContentId() {}
};

struct SoundId {
    ContentId content;
    SoundId(const ContentId& id);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl free(void* p);

SoundId::SoundId(const ContentId& id)
{
    void* mem = operator_new(0x24);
    if (mem) {
        content.construct(id);
    }
}

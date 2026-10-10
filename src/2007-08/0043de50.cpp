// from server: 30% by colin
struct ContentId {
    void* data;
    ContentId();
    ContentId(const ContentId&);
    ~ContentId();
};

struct SoundId : ContentId {
    SoundId(const ContentId& id);
};

extern "C" void* __cdecl malloc(unsigned int size);
extern "C" void __stdcall ContentId_ctor(void* p);
extern "C" void __stdcall SoundId_ctor(SoundId* self, ContentId* id);

SoundId::SoundId(const ContentId& id) {
    void* p = malloc(0x138);
    if (p) {
        ContentId_ctor(p);
    } else {
        p = 0;
    }
    SoundId_ctor(this, (ContentId*)p);
}

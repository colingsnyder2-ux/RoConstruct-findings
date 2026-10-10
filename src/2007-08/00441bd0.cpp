// from server: 43% by colin
struct ContentId {
    char pad[0x24];
    ContentId(const ContentId&);
};

struct SoundId : ContentId {
    SoundId(const ContentId& id);
};

extern "C" {
    void* __stdcall sub_77DD74(void*, const char*);
    void __stdcall sub_77DDBC(void*);
    void __stdcall sub_77E6AC(void*);
    void __stdcall sub_698700(void);
    void __stdcall sub_440440(void);
}

SoundId::SoundId(const ContentId& id) : ContentId(id)
{
    char buf[0x24];
    sub_77DD74(buf, "");
    sub_698700();
    sub_440440();
    sub_77E6AC(buf);
    sub_77DDBC(buf);
}

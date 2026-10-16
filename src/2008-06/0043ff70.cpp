// from server: 11% by colin



extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);
extern "C" void __stdcall _invalid_parameter_noinfo();

struct RefCounted {
    void acquire();
    void release();
};

struct ContentId {
    void* rep;
    ContentId();
    ContentId(const ContentId&);
    ~ContentId();
};

struct SoundId : ContentId {
    SoundId(const ContentId& id);
};

struct ContentItem {
    ContentItem(const ContentId& t, const ContentId& r, int d);
    ContentId title;
    ContentId reference;
    int depth;
};

struct Sound {
    char pad0[0x110];
    void* begin;
    char pad1[0x8];
    void* end;
    char pad2[0x4];
    void* cap;
    char pad3[0x4];
    void* mgr;
    char pad4[0x4];
    void* sys;
    char pad5[0x1c];
    void* obj198;
    char pad6[0x4];
    void* obj12c;

    void addContentItem(const ContentId& id, const float* pos);
};

extern "C" void __stdcall sub_802890();
extern "C" void __stdcall sub_802464();

void __cdecl sub_43a320(void* a, const void* b);
void __cdecl sub_43b390(void* a, void* b, void* c, void* d, void* e);
void __cdecl sub_576f00(void* a, void* b);
void __cdecl sub_5773c0(void* a);
void __cdecl sub_58c5c0(void* a, void* b);
void __cdecl sub_5a2fe0(void* a);
void* __cdecl sub_6a0920(unsigned int);
void __cdecl sub_420110(void* a, const void* b);

void Sound::addContentItem(const ContentId& id, const float* pos)
{
    ContentItem* item = (ContentItem*)sub_6a0920(4);
    if (item) {
        item->title.rep = 0;
        item->reference.rep = 0;
        item->depth = 0;
    }
    ContentId tmp;
    tmp.rep = 0;
    sub_43a320(&tmp, &id);
    sub_420110(&tmp, pos);
    sub_5a2fe0(&tmp);
}

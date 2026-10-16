// from server: 10% by colin
#pragma optimize("y", off)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct ContentId {
    void* rep;
    ContentId(const ContentId&);
    ContentId();
    ~ContentId();
};

struct SoundId {
    ContentId content;
    SoundId(const ContentId&);
};

struct String {
    char pad[0x1c];
    String(const String&);
    ~String();
    const char* c_str() const;
};

struct MapNode {
    MapNode* left;
    MapNode* parent;
    MapNode* right;
    char color;
    char pad[3];
    String key;
    ContentId value;
};

struct Map {
    MapNode* head;
    int size;
};

struct ContentItem {
    String title;
    String reference;
    int depth;
};

struct ContentList {
    ContentItem* first;
    ContentItem* last;
    ContentItem* end;
};

struct Soundscape {
    char pad0[0x110];
    ContentList list;
    char pad1[0x8];
    void* system;
    void* system2;
};

void* __cdecl operator new(unsigned int);

extern void* __stdcall sub_802890();
extern void __stdcall sub_80245c();
extern void __stdcall sub_802464();
extern void __stdcall sub_802468();

void __cdecl sub_43a320(void*, void*);
void __cdecl sub_43bb50(void*, void*, void*, void*, void*, void*);
void __cdecl sub_43bf60(void*, void*, void*, void*, void*);
void __cdecl sub_420110(void*, void*);
void __cdecl sub_576f00(void*, void*);
void __cdecl sub_5773c0(void*);
void __cdecl sub_58c5c0(void*, void*);
void __cdecl sub_5a2fe0(void*);

struct SoundId_ContentItem {
    void __cdecl f(const ContentId&);
};

void SoundId_ContentItem::f(const ContentId& id)
{
    Soundscape* self = (Soundscape*)this;
    ContentList* list = &self->list;

    ContentItem* first = list->first;
    ContentItem* last = list->last;

    while (first != last) {
        ContentItem* cur = first;
        if (cur->title.c_str() == 0) {
            _invalid_parameter_noinfo();
        }
        first += 1;
    }

    ContentItem* begin = list->first;
    ContentItem* end = list->last;

    while (begin != end) {
        ContentItem* cur = begin;
        if (cur->title.c_str() == 0) {
            _invalid_parameter_noinfo();
        }
        begin += 1;
    }
}

// from server: 80% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

struct ContentId {
    virtual ~ContentId();
};

struct placeholder {
    virtual ~placeholder();
};

struct Holder {
    void* ptr;
};

extern "C" int __stdcall sub_98B768(type_info*, type_info*);

void* __cdecl func(Holder* h) {
    if (h == 0)
        return 0;
    ContentId* c = (ContentId*)h->ptr;
    type_info* ti;
    if (c != 0) {
        ti = (type_info*)(*(void***)c)[1];
    } else {
        ti = (type_info*)0xB0030C;
    }
    if (sub_98B768(ti, (type_info*)0xB03434)) {
        return (char*)h->ptr + 4;
    }
    return 0;
}

// from server: 27% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

void* __cdecl sub_52CB30();
void __cdecl sub_545A40(void*, char);
void __cdecl sub_546040(void*, void*);
void __cdecl sub_547A10(void*, int);
bool __cdecl sub_5491E0(void*);

extern "C" {
    void __stdcall ofstream_ctor(void* self);
    void __stdcall ofstream_dtor(void* self);
    void __stdcall ofstream_open(void* self, const char* name, int mode, int prot);
    void __stdcall string_ctor_copy(void* self, const void* other);
    void __stdcall string_ctor_cstr(void* self, const char* s);
    void __stdcall ios_clear(void* self, int state, bool ex);
    void __stdcall istream_get(void* self, char* ch);
    void __stdcall istream_seekg(void* self, long off, int dir);
}

struct IfstreamObj {
    void* vptr;
    char pad04[0x18];
    void* stream;
};

struct StdString {
    union {
        char buf[16];
        char* ptr;
    } u;
    unsigned int size;
    unsigned int cap;
};

struct RefHeader {
    void* vptr;
    char pad04[8];
    volatile long refcnt;
};

struct FileLoader {
    IfstreamObj* load(const char* name, int a2, int a3, int a4);
};

IfstreamObj* FileLoader::load(const char* name, int a2, int a3, int a4)
{
    StdString str;
    char ch;
    unsigned int count;
    RefHeader* hdr;
    long old;

    char objbuf[0x20];
    IfstreamObj* self = (IfstreamObj*)objbuf;

    ofstream_ctor(self);

    self->stream = sub_52CB30();

    string_ctor_cstr(&str, name);

    if (sub_5491E0(self)) {
        istream_seekg(self, 0, 0);
        ios_clear(self, 0, true);
        return self;
    }

    ofstream_open(self, name, 0x40, 0x22);

    count = 0;
    while (true) {
        istream_get(self, &ch);
        if (self->stream == 0) break;
        sub_545A40(&str, ch);
        count++;
        if (count >= 0x1000) break;
    }

    hdr = (RefHeader*)((char*)str.u.ptr - 0x10);
    old = _InterlockedExchangeAdd(&hdr->refcnt, -1);
    if (old == 1) {
        void** vtbl = *(void***)hdr;
        void (*dtor)(void*) = (void (*)(void*))vtbl[1];
        dtor(hdr);
    }

    return self;
}

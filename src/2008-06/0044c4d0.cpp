// from server: 92% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)


struct String {
    unsigned char storage[32];
    const char* c_str() const;
    ~String();
};

extern const char* (__thiscall *string_c_str)(const String*);
extern void (__thiscall *string_destroy)(String*);

inline const char* String::c_str() const {
    return string_c_str(this);
}

inline String::~String() {
    string_destroy(this);
}

String __cdecl formatText(const char*, const char*);

struct Stream {
    Stream& write(int, const char*);
};

struct StreamSource {
    virtual Stream* getStream() = 0;
};

extern StreamSource* streamSource;

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct RangeData {
    unsigned char padding[8];
    void* map;
    unsigned char padding2[8];
    unsigned long first;
    unsigned long last;
};

struct Range {
    unsigned char padding[8];
    RangeData* data;
};

struct Object {
    unsigned char padding[0x14];
    Range range;
    unsigned char padding2[0x110 - 0x14 - sizeof(Range)];
    String text;
};

struct Shared {
    Object* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared() {
    if (control) {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 1) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 1)
                p->destroy();
        }
    }
}

struct Iterator {
    Range* owner;
    void* map;
    unsigned long offset;
};

extern "C" void (__cdecl *invalid_parameter_noinfo)();
void __cdecl visitElement(void*);
void __cdecl visitRange(Iterator, Iterator, void (__cdecl *)(void*));

void __cdecl process(Shared value) {
    {
        const String& message = formatText(
            "End GlobalSettings -----------------------------------",
            value.object->text.c_str());
        Stream* stream = streamSource ? streamSource->getStream() : 0;
        stream->write(0, message.c_str());
    }

    Range* endOwner = &value.object->range;
    RangeData* endData = endOwner->data;
    unsigned long endOffset = endData->last;
    if (endData->first > endOffset)
        invalid_parameter_noinfo();
    void* endMap = endData->map;

    Range* beginOwner = &value.object->range;
    RangeData* beginData = beginOwner->data;
    unsigned long beginOffset = beginData->first;
    if (beginOffset > beginData->last)
        invalid_parameter_noinfo();

    Iterator end = { endOwner, endMap, endOffset };
    Iterator begin = { beginOwner, beginData->map, beginOffset };
    visitRange(begin, end, visitElement);
}

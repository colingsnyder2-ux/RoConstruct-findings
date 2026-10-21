// from server: 95% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espclaude_196bcf2f1ef2b6ea.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
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

typedef boost::shared_ptr<Object> Shared;

struct Iterator {
    Range* owner;
    void* map;
    unsigned long offset;
};

extern "C" void (__cdecl *invalid_parameter_noinfo)();
void __cdecl visitElement(void*);
void __cdecl visitRange(Iterator, Iterator, void (__cdecl *)(void*));

inline void print(int type, const String& message) {
    Stream* stream = streamSource ? streamSource->getStream() : 0;
    stream->write(type, message.c_str());
}

void __cdecl process(Shared value) {
    print(0, formatText(
            "End GlobalSettings -----------------------------------",
            value.get()->text.c_str()));

    Range* endOwner = &value.get()->range;
    RangeData* endData = endOwner->data;
    unsigned long endOffset = endData->last;
    if (endData->first > endOffset)
        invalid_parameter_noinfo();
    void* endMap = endData->map;

    Range* beginOwner = &value.get()->range;
    RangeData* beginData = beginOwner->data;
    unsigned long beginOffset = beginData->first;
    if (beginOffset > beginData->last)
        invalid_parameter_noinfo();

    Iterator end = { endOwner, endMap, endOffset };
    Iterator begin = { beginOwner, beginData->map, beginOffset };
    visitRange(begin, end, visitElement);
}


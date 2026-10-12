// from server: 91% by king_originala
struct StringData;

struct StringManager {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual StringData* GetNilString();
    virtual StringManager* Clone();
};

struct StringData {
    StringManager* manager;
    int length;
    int capacity;
    long references;
};

struct ManagerStorage {
    void* vtable;
};

extern ManagerStorage defaultManager;

namespace ATL {
    __declspec(noreturn) void __stdcall AtlThrowImpl(long);
}

extern "C" unsigned int __cdecl strlen(const char*);

struct String {
    char* data;

    String(StringManager*);
    ~String();
    static unsigned int Length(const char*);
};

extern void __cdecl Concatenate(
    String*, const char*, int, const char*, unsigned int);

inline String::String(StringManager* manager)
{
    int valid = manager != 0;
    if (!valid)
        ATL::AtlThrowImpl((long)0x80004005);
    data = reinterpret_cast<char*>(manager->GetNilString()) + 16;
}

inline unsigned int String::Length(const char* text)
{
    if (!text)
        return 0;
    return strlen(text);
}

String __cdecl Combine(const String& first, const char* second)
{
    StringManager* manager =
        (reinterpret_cast<StringData*>(first.data) - 1)->manager;

    StringManager* selected = 0;
    if (manager)
        selected = manager->Clone();
    if (!selected)
        selected = reinterpret_cast<StringManager*>(&defaultManager)->Clone();

    String result(selected);
    unsigned int length = String::Length(second);
    Concatenate(
        &result,
        first.data,
        (reinterpret_cast<StringData*>(first.data) - 1)->length,
        second,
        length);
    return result;
}

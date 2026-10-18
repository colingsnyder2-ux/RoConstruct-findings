// from server: 66% by colin
struct Text;
struct String;

extern void (__thiscall *text_construct)(Text*);
extern void (__thiscall *text_destroy)(Text*);
extern char* (__thiscall *text_buffer)(Text*, int);
extern void (__thiscall *text_release)(Text*, int);
extern void (__thiscall *text_append)(Text*, const char*);
extern const char* (__thiscall *text_data)(const Text*);

extern void (__thiscall *string_construct)(String*, const char*);
extern void (__thiscall *string_destroy)(String*);
extern const char* (__thiscall *string_data)(const String*);

extern unsigned long (__stdcall *GetShortPathNameA)(
    const char*, char*, unsigned long);
extern void (__stdcall *SysFreeString)(unsigned short*);

struct Text
{
    char* data;
    Text();
    ~Text();
    char* buffer(int);
    void release(int);
    void append(const char*);
    const char* c_str() const;
};

struct String
{
    unsigned char storage[28];
    String(const char*);
    ~String();
    const char* c_str() const;
};

inline Text::Text() { text_construct(this); }
inline Text::~Text() { text_destroy(this); }
inline char* Text::buffer(int n) { return text_buffer(this, n); }
inline void Text::release(int n) { text_release(this, n); }
inline void Text::append(const char* s) { text_append(this, s); }
inline const char* Text::c_str() const { return text_data(this); }

inline String::String(const char* s) { string_construct(this, s); }
inline String::~String() { string_destroy(this); }
inline const char* String::c_str() const { return string_data(this); }

String __cdecl make_name(int, const char*);

struct Wide
{
    unsigned short* data;
    Wide(const char*);
    ~Wide();
    operator unsigned short*() const;
};

inline Wide::~Wide() { SysFreeString(data); }
inline Wide::operator unsigned short*() const { return data; }

struct Error
{
    unsigned char storage[40];
    Error(const String&);
    Error(const Error&);
    ~Error();
};

struct Interface
{
    virtual void __stdcall slot0() = 0;
    virtual void __stdcall slot1() = 0;
    virtual void __stdcall slot2() = 0;
    virtual void __stdcall slot3() = 0;
    virtual void __stdcall slot4() = 0;
    virtual void __stdcall slot5() = 0;
    virtual void __stdcall slot6() = 0;
    virtual long __stdcall copy(unsigned short*) = 0;
};

struct Document
{
    unsigned char padding[148];
    Interface* object;
};

Text __cdecl copy_document(Document* document, const char* suffix)
{
    Text result;
    GetShortPathNameA(make_name(1, "Test").c_str(),
                      result.buffer(260), 260);
    result.release(-1);
    result.append(suffix);
    result.append(".rbxl");

    long hr = document->object->copy(Wide(result.c_str()));

    if (hr != 0)
        throw Error(String("Failed to copy document"));

    return result;
}

// from server: 84% by king_originala
namespace std {
template<class T> struct char_traits;
template<class T> struct allocator;
template<class T, class Traits, class Alloc>
class basic_string {
    char storage[28];
public:
    basic_string();
    ~basic_string();
};
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

extern void (__thiscall *constructString)(String*);

template<>
__forceinline String::basic_string()
{
    constructString(this);
}

struct Name;
extern Name* __cdecl getLocalScope();
extern void __cdecl initializeScriptName();
extern void __cdecl initializeOnce(void (__cdecl *)(), void*);
extern char scriptNameState;
extern Name* scriptName;

extern const char table00[], table10[], table14[], table20[], table24[];
extern const char table44[], table64[], table84[], tableA4[], tableC4[];

struct NameRef {
    Name* value;
    NameRef(int);
    ~NameRef();
    NameRef& operator=(const NameRef&);
};

__forceinline NameRef::NameRef(int) {}

extern NameRef scriptNameRef;

struct Base {
    char storage[0x130];
    Base(const char*);
};

struct Product : Base {
    Name* name;
    Product();
    ~Product();
};

__forceinline Product::Product() : Base("Script")
{
    *reinterpret_cast<const void**>(reinterpret_cast<char*>(this) + 0x00) = table00;
    *reinterpret_cast<const void**>(reinterpret_cast<char*>(this) + 0x10) = table10;
    *reinterpret_cast<const void**>(reinterpret_cast<char*>(this) + 0x14) = table14;
    *reinterpret_cast<const void**>(reinterpret_cast<char*>(this) + 0x20) = table20;
    *reinterpret_cast<const void**>(reinterpret_cast<char*>(this) + 0x24) = table24;
    *reinterpret_cast<const void**>(reinterpret_cast<char*>(this) + 0x44) = table44;
    *reinterpret_cast<const void**>(reinterpret_cast<char*>(this) + 0x64) = table64;
    *reinterpret_cast<const void**>(reinterpret_cast<char*>(this) + 0x84) = table84;
    *reinterpret_cast<const void**>(reinterpret_cast<char*>(this) + 0xa4) = tableA4;
    *reinterpret_cast<const void**>(reinterpret_cast<char*>(this) + 0xc4) = tableC4;
    name = 0;
}

struct Guid {
    String text;
    Name* scope;
    Guid();
    ~Guid();
};

__forceinline Guid::Guid() : scope(getLocalScope()) {}

struct S : Product {
    NameRef nameRef;
    Guid guid;
    bool enabled;
    unsigned int value;
    S();
};

S::S()
    : Product(),
      nameRef((nameRef.value = 0, 0)),
      guid(),
      enabled(false),
      value(0)
{
    initializeOnce(initializeScriptName, &scriptNameState);
    name = scriptName;
    nameRef = scriptNameRef;
}

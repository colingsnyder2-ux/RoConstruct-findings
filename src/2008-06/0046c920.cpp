// from server: 80% by king_originala
extern "C" void* __cdecl getState();
extern "C" void __stdcall releaseState(int, void*);
extern "C" int __cdecl checkUrl(const wchar_t*);
extern "C" void __cdecl logMessage(int, int, int);
extern const char logContext[];

struct Text
{
    const wchar_t* value;
    Text();
    Text(const wchar_t*);
    ~Text();
    const char* data() const;
};

extern Text* (__thiscall *textDefault)(Text*);
extern Text* (__thiscall *textConstruct)(Text*, const wchar_t*);
extern void (__cdecl *textFormat)(Text*, const char*, const wchar_t*);
extern const char* (__thiscall *textData)(const Text*);
extern void (__thiscall *textDestroy)(Text*);

inline Text::Text()
{
    textDefault(this);
}

inline Text::Text(const wchar_t* s)
{
    textConstruct(this, s);
}

inline Text::~Text()
{
    textDestroy(this);
}

inline const char* Text::data() const
{
    return textData(this);
}

struct State
{
    void* previous;
    State* owner;
    void* resource;
    int active;

    State(void*);
    ~State();
};

inline State::~State()
{
    if (owner)
        owner->owner = static_cast<State*>(previous);
    if (active)
        releaseState(0, resource);
}

struct String
{
    unsigned char storage[32];
    String(const char*);
};

struct S
{
    void navigate(String, int);
    static int __stdcall f(S*, const wchar_t*);
};

int __stdcall S::f(S* object, const wchar_t* url)
{
    State state(getState());
    try
    {
        int result = checkUrl(url);
        if (result)
        {
            Text message;
            {
                Text original(url);
                textFormat(&message, "Untrusted Url: %s", original.value);
            }
            typedef int (__cdecl *Report)(int, int, int);
            return reinterpret_cast<Report>(&logMessage)(
                reinterpret_cast<int>(logContext),
                reinterpret_cast<int>(message.data()),
                result);
        }

        object->navigate(String(Text(url).data()), 0);
        return 0;
    }
    catch (...)
    {
        return -2147467259;
    }
}

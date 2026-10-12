// from server: 83% by king_originala
void* __cdecl make_exception(void* object);

struct Text;

extern Text __cdecl prepend(const char*, const Text&);
extern Text __cdecl append(const Text&, const char*);

typedef const char* (__thiscall *TextValue)(const Text*);
typedef void (__thiscall *TextDestroy)(Text*);

extern TextValue textValue;
extern TextDestroy textDestroy;
extern const char prefix[];
extern const char suffix[];

struct Text
{
    char storage[4];

    ~Text();
    const char* value() const;
};

inline Text::~Text()
{
    textDestroy(this);
}

inline const char* Text::value() const
{
    return textValue(this);
}

extern void __fastcall dispatch(void*);

struct CRobloxDoc
{
    const char* func_004502b0();
};

const char* CRobloxDoc::func_004502b0()
{
    typedef Text (__cdecl *Factory)();
    const char* result;

    try
    {
        return (result = append(
                    prepend(prefix, reinterpret_cast<Factory>(make_exception)()),
                    suffix).value(),
                dispatch(0),
                result);
    }
    catch (...)
    {
        return 0;
    }
}

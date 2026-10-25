// from server: 97% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// w1: v2-recipe (typed catch + stdcall helper + try-return) for 004502b0.
struct Text;
typedef const char *(__thiscall *TextValue)(const Text *);
extern TextValue textValue;

struct Exception
{
    virtual void reserved();
    virtual int report(int a, int b);
};

extern int __stdcall helper(int);

struct Text
{
    char storage[4];
    __declspec(dllimport) ~Text() throw();
    const char *value() const { return textValue((const Text *)this); }
};
struct BaseText
{
    char storage[4];
    __declspec(dllimport) ~BaseText() throw();
    const char *value() const { return textValue((const Text *)this); }
};
struct PrefixedText
{
    char storage[4];
    __declspec(dllimport) ~PrefixedText() throw();
    const char *value() const { return textValue((const Text *)this); }
};

extern BaseText __cdecl makeText();
extern PrefixedText __cdecl prepend(const char *, const BaseText &);
extern Text __cdecl append(const PrefixedText &, const char *);
extern const char prefix[];
extern const char suffix[];
extern void __fastcall dispatch(void *);

struct CRobloxDoc
{
    const char *func_004502b0();
};

const char *CRobloxDoc::func_004502b0()
{
    const char *result;
    try
    {
        return (result = append(prepend(prefix, makeText()), suffix).value(),
                dispatch(0),
                result);
    }
    catch (Exception &e)
    {
        helper(e.report(0, 0));
    }
}

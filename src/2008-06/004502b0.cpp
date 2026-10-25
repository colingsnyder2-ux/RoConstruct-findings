// roc 2008-06 004502b0  unit: CRobloxDoc  size: 161 bytes
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD

struct Text;
typedef const char* (__thiscall *TextValue)(const Text*);
extern TextValue textValue;
struct Text
{
    char storage[4];
    __declspec(dllimport) ~Text() throw();
    const char* value() const { return textValue((const Text*)this); }
};
struct BaseText
{
    char storage[4];
    __declspec(dllimport) ~BaseText() throw();
    const char* value() const { return textValue((const Text*)this); }
};
struct PrefixedText
{
    char storage[4];
    __declspec(dllimport) ~PrefixedText() throw();
    const char* value() const { return textValue((const Text*)this); }
};

extern BaseText __cdecl makeText();
extern PrefixedText __cdecl prepend(const char*, const BaseText&);
extern Text __cdecl append(const PrefixedText&, const char*);
extern void __fastcall dispatch(void*);
struct CRobloxDoc
{
    const char* func_004502b0();
};
const char* CRobloxDoc::func_004502b0()
{
    const char* result;
    try
    {
        return (result = append(prepend(" -script \"loadfile('", makeText()), "/game/join.ashx?UserID=0&serverPort=53640')()\"").value(),
                dispatch(0),
                result);
    }
    catch (...)
    {
        return 0;
    }
}

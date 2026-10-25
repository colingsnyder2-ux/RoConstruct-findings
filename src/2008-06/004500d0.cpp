// from server: 98% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// v1: void visitGame (no return value - matches the target's clean epilogue),
//     typed catch with 2-arg virtual + cdecl helper (funclet: mov ecx,[slot]; vtable+4; push 0,0; call; push eax; call helper).
struct Text;
struct Document;
typedef const char *(__thiscall *TextData)(const Text *);
extern TextData textData;

struct Exception
{
    virtual void reserved();
    virtual int report(int a, int b);
};

extern int __stdcall helper(int);

// each temporary has its own imported-dtor type so MSVC does not cache the IAT address
struct Text
{
    char *value;
    __declspec(dllimport) ~Text() throw();
    const char *data() const { return textData((const Text *)this); }
};
struct BaseText
{
    char *value;
    __declspec(dllimport) ~BaseText() throw();
    const char *data() const { return textData((const Text *)this); }
};
struct PrefixedText
{
    char *value;
    __declspec(dllimport) ~PrefixedText() throw();
    const char *data() const { return textData((const Text *)this); }
};
struct JoinedText
{
    char *value;
    __declspec(dllimport) ~JoinedText() throw();
    const char *data() const { return textData((const Text *)this); }
};

extern BaseText __cdecl makeText();
extern PrefixedText __cdecl prepend(const char *, const BaseText &);
extern JoinedText __cdecl append(const PrefixedText &, const char *);
extern Text __cdecl documentText(Document *, const char *);
extern const char prefix[];
extern const char suffix[];
extern const char visit[];

struct Command
{
    void execute();
};

inline const char *executeText(const Text &target, const JoinedText &command)
{
    const char *result = command.data();
    ((Command *)target.data())->execute();
    return result;
}

struct Document
{
    const char *visitGame();
};

const char *Document::visitGame()
{
    try
    {
        return executeText(documentText(this, visit),
                    append(prepend(prefix, makeText()), suffix));
    }
    catch (Exception &e)
    {
        helper(e.report(0, 0));
    }
}

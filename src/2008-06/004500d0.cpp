// from server: 85% by king_originala
struct Text;
struct Document;

typedef const char *(__thiscall *TextData)(const Text *);
typedef void (__thiscall *TextDestroy)(Text *);

extern TextData textData;
extern TextDestroy textDestroy;

struct Text
{
    char *value;
    ~Text();
    const char *data() const;
};

inline Text::~Text()
{
    textDestroy(this);
}

inline const char *Text::data() const
{
    return textData(this);
}

extern Text __cdecl makeText();
extern Text __cdecl prepend(const char *, const Text &);
extern Text __cdecl append(const Text &, const char *);
extern Text __cdecl documentText(Document *, const char *);

extern const char prefix[];
extern const char suffix[];
extern const char visit[];

struct Command
{
    void execute();
};

inline const char *executeText(const Text &target, const Text &command)
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
    catch (...)
    {
        return 0;
    }
}

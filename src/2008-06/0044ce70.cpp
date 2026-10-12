// from server: 79% by king_originala
extern "C" bool __stdcall GetState();

struct Configuration
{
    char reserved[0x134];
    int mode;
};

extern Configuration* __cdecl getConfiguration();
extern void __cdecl reportError(const char*);

struct Text;
extern const char* (__thiscall *textData)(const Text*);
extern void (__thiscall *textDestroy)(Text*);

struct Text
{
    void* storage;
    ~Text() throw();
    const char* data() const;
};

inline Text::~Text() throw()
{
    textDestroy(this);
}

inline const char* Text::data() const
{
    return textData(this);
}

extern Text __cdecl make_exception();
extern Text __cdecl appendText(const Text&, const char*);
extern const char reportDialogPath[];
extern const char dumpPath[];

struct String
{
    char storage[28];
    ~String();
};

struct Dialog : String
{
    char remaining[276];
    Dialog(int, const char*, int);
    ~Dialog();
    void run();
};

inline Dialog::~Dialog()
{
}

void handleError()
{
    if (GetState())
    {
        switch (getConfiguration()->mode)
        {
        case 1:
            {
                Dialog dialog(124,
                    appendText(make_exception(), reportDialogPath).data(), 0);
                dialog.run();
            }
            break;

        case 2:
            reportError(appendText(make_exception(), dumpPath).data());
            break;
        }
    }
}

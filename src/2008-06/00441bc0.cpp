// from server: 91% by king_originala
struct Text;
struct String;
struct FileStorage;

extern void (__thiscall *textConstruct)(Text *);
extern void (__thiscall *textDestroy)(Text *) throw();
extern void (__thiscall *textLoad)(Text *, int);
extern const char *(__thiscall *textConvert)(Text *, int, int, int);
extern FileStorage *(__thiscall *fileConstruct)(FileStorage *, const char *);
extern void (__thiscall *stringCopy)(String *, const String *);
extern void (__thiscall *stringDestroy)(String *);

struct Text {
    unsigned char data[4];
    Text();
    ~Text() throw();
    void load(int);
    const char *convert(int, int, int);
};

struct String {
    unsigned char data[28];
    String(const String &);
    ~String();
};

struct FileStorage {
    unsigned char data[128];
    FileStorage(const char *);
};

struct InputFile {
    unsigned char padding[12];
    FileStorage storage;
    InputFile(const char *);
    ~InputFile();
};

extern void (__thiscall *fileDestroy)(InputFile *);

struct RawPayload {
    String text;
    int value;
};

struct Payload {
    String text;
    int value;
    Payload(const RawPayload &);
};

struct DialogStorage {
    unsigned char data[468];
    DialogStorage(int, const char *, const char *, unsigned int, const char *);
};

struct Dialog {
    unsigned char padding[12];
    DialogStorage storage;
    Dialog(int, const char *, const char *, unsigned int, const char *);
    ~Dialog();
    int run();
    Text filename();
};

struct Related {
    void prepare();
};

struct Owner {
    unsigned char padding[0x198];
    Related *related;
};

struct SoundItem {
    unsigned char padding[0x128];
    Owner *owner;
    void accept(const Payload &);
    void f();
};

extern const char *__cdecl makeType(const char *, int);
extern RawPayload __cdecl readFile(const InputFile &, const char *);

inline Text::Text() {
    textConstruct(this);
}

inline Text::~Text() throw() {
    textDestroy(this);
}

inline void Text::load(int id) {
    textLoad(this, id);
}

inline const char *Text::convert(int a, int b, int c) {
    return textConvert(this, a, b, c);
}

inline String::String(const String &other) {
    stringCopy(this, &other);
}

inline String::~String() {
    stringDestroy(this);
}

inline FileStorage::FileStorage(const char *name) {
    fileConstruct(this, name);
}

inline InputFile::InputFile(const char *name) : storage(name) {
}

inline InputFile::~InputFile() {
    fileDestroy(this);
}

inline Payload::Payload(const RawPayload &other)
    : text(other.text), value(other.value) {
}

inline Dialog::Dialog(int a, const char *b, const char *c,
                      unsigned int d, const char *e)
    : storage(a, b, c, d, e) {
}

void SoundItem::f() {
    Text filter;
    filter.load(0x86);
    Dialog dialog(1, 0, 0, 0, filter.convert(0, 0, 1));
    if (dialog.run() == 1) {
        if (owner->related)
            owner->related->prepare();

        Payload result(
            readFile(
                InputFile(dialog.filename().convert(0x21, 0x40, 1)),
                makeType("audio/x-wav", -1)));
        accept(result);
    }
}

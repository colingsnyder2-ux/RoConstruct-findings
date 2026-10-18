// from server: 97% by colin
// from server: 91% by king_originala
// roc 2008-06 00441bc0  unit: SoundItem  size: 406 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00441bc0
//
// 00441bc0  6aff                 push -1
// 00441bc2  68650b7c00           push 0x7c0b65
// 00441bc7  64a100000000         mov eax, dword ptr fs:[0]
// 00441bcd  50                   push eax
// 00441bce  64892500000000       mov dword ptr fs:[0], esp
// 00441bd5  81ecb4020000         sub esp, 0x2b4
// 00441bdb  57                   push edi
// 00441bdc  8bf9                 mov edi, ecx
// 00441bde  8d4c2404             lea ecx, [esp + 4]
// 00441be2  ff15043f8000         call dword ptr [0x803f04]
// 00441be8  6886000000           push 0x86
// 00441bed  8d4c2408             lea ecx, [esp + 8]
// 00441bf1  c78424c402000000000000 mov dword ptr [esp + 0x2c4], 0
// 00441bfc  ff15c0328000         call dword ptr [0x8032c0]
// 00441c02  6a01                 push 1
// 00441c04  6a00                 push 0
// 00441c06  6a00                 push 0
// 00441c08  8d4c2410             lea ecx, [esp + 0x10]
// 00441c0c  ff15e03e8000         call dword ptr [0x803ee0]
// 00441c12  50                   push eax
// 00441c13  6a00                 push 0
// 00441c15  6a00                 push 0
// 00441c17  6a00                 push 0
// 00441c19  6a01                 push 1
// 00441c1b  8d8c24f8000000       lea ecx, [esp + 0xf8]
// 00441c22  e84bf22500           call 0x6a0e72
// 00441c27  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 00441c2e  c68424c002000001     mov byte ptr [esp + 0x2c0], 1
// 00441c36  e831f22500           call 0x6a0e6c
// 00441c3b  83f801               cmp eax, 1
// 00441c3e  0f85de000000         jne 0x441d22
// 00441c44  8b8728010000         mov eax, dword ptr [edi + 0x128]
// 00441c4a  8b8898010000         mov ecx, dword ptr [eax + 0x198]
// 00441c50  85c9                 test ecx, ecx
// 00441c52  7405                 je 0x441c59
// 00441c54  e847d2fdff           call 0x41eea0
// 00441c59  56                   push esi
// 00441c5a  8d4c240c             lea ecx, [esp + 0xc]
// 00441c5e  51                   push ecx
// 00441c5f  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 00441c66  e8fbf12500           call 0x6a0e66
// 00441c6b  6a01                 push 1
// 00441c6d  6a40                 push 0x40
// 00441c6f  6a21                 push 0x21
// 00441c71  8bc8                 mov ecx, eax
// 00441c73  c68424d002000002     mov byte ptr [esp + 0x2d0], 2
// 00441c7b  ff15e03e8000         call dword ptr [0x803ee0]
// 00441c81  50                   push eax
// 00441c82  8d4c2460             lea ecx, [esp + 0x60]
// 00441c86  ff1504248000         call dword ptr [0x802404]
// 00441c8c  8bf0                 mov esi, eax
// 00441c8e  6aff                 push -1
// 00441c90  682c568100           push 0x81562c
// 00441c95  c68424cc02000003     mov byte ptr [esp + 0x2cc], 3
// 00441c9d  e8ee221100           call 0x553f90
// 00441ca2  50                   push eax
// 00441ca3  8d54243c             lea edx, [esp + 0x3c]
// 00441ca7  56                   push esi
// 00441ca8  52                   push edx
// 00441ca9  e812df1100           call 0x55fbc0
// 00441cae  83c414               add esp, 0x14
// 00441cb1  8bf0                 mov esi, eax
// 00441cb3  56                   push esi
// 00441cb4  8d4c2414             lea ecx, [esp + 0x14]
// 00441cb8  c68424c802000004     mov byte ptr [esp + 0x2c8], 4
// 00441cc0  ff155c248000         call dword ptr [0x80245c]
// 00441cc6  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00441cc9  8944242c             mov dword ptr [esp + 0x2c], eax
// 00441ccd  8d4c2430             lea ecx, [esp + 0x30]
// 00441cd1  c68424c402000006     mov byte ptr [esp + 0x2c4], 6
// 00441cd9  ff1568248000         call dword ptr [0x802468]
// 00441cdf  8d4c2450             lea ecx, [esp + 0x50]
// 00441ce3  c68424c402000007     mov byte ptr [esp + 0x2c4], 7
// 00441ceb  ff1508248000         call dword ptr [0x802408]
// 00441cf1  8d4c240c             lea ecx, [esp + 0xc]
// 00441cf5  c68424c402000008     mov byte ptr [esp + 0x2c4], 8
// 00441cfd  ff15143f8000         call dword ptr [0x803f14]
// 00441d03  8d4c2410             lea ecx, [esp + 0x10]
// 00441d07  51                   push ecx
// 00441d08  8bcf                 mov ecx, edi
// 00441d0a  e8b1c7ffff           call 0x43e4c0
// 00441d0f  8d4c2410             lea ecx, [esp + 0x10]
// 00441d13  c68424c402000001     mov byte ptr [esp + 0x2c4], 1
// 00441d1b  ff1568248000         call dword ptr [0x802468]
// 00441d21  5e                   pop esi
// 00441d22  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 00441d29  c68424c002000000     mov byte ptr [esp + 0x2c0], 0
// 00441d31  e824f12500           call 0x6a0e5a
// 00441d36  8d4c2404             lea ecx, [esp + 4]
// 00441d3a  ff15143f8000         call dword ptr [0x803f14]
// 00441d40  8b8c24b8020000       mov ecx, dword ptr [esp + 0x2b8]
// 00441d47  5f                   pop edi
// 00441d48  64890d00000000       mov dword ptr fs:[0], ecx
// 00441d4f  81c4c0020000         add esp, 0x2c0
// 00441d55  c3                   ret 

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

struct __declspec(dllimport) InputFile {
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

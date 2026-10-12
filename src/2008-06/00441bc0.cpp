// from server: 64% by king_originala
struct Text {
    void* data;
    Text();
    ~Text();
    int load(unsigned int);
    const char* get(int, int, int);
};

struct StringBase {
    char storage[28];
    StringBase(const StringBase&);
    ~StringBase();
};

struct String : StringBase {
    unsigned int extra;
};

struct Input {
    char storage[136];
    Input(const char*);
    ~Input();
};

struct Dialog {
    char storage[476];
    Dialog(int, int, int, int, const char*);
    ~Dialog();
    int run();
    Text path();
};

struct Related {
    void prepare();
};

struct Owner {
    char padding[408];
    Related* related;
};

struct SoundItem {
    char padding[296];
    Owner* owner;
    void apply(const String*);
    void f();
};

extern const char* __cdecl makeType(const char*, int);
extern String __cdecl readSound(const Input&, const char*);

void SoundItem::f()
{
    Text filter;
    filter.load(134);
    Dialog dialog(1, 0, 0, 0, filter.get(0, 0, 1));
    if (dialog.run() == 1) {
        if (owner->related)
            owner->related->prepare();

        String value(readSound(
            Input(dialog.path().get(33, 64, 1)),
            makeType("audio/x-wav", -1)));
        apply(&value);
    }
}

// from server: 77% by king_originala
struct Text;
extern void (__thiscall *constructText)(Text*, const char*);
extern void (__thiscall *destroyText)(Text*);

struct Text {
    unsigned char storage[28];
    Text(const char*);
    ~Text();
};

inline Text::Text(const char* value)
{
    constructText(this, value);
}

inline Text::~Text()
{
    destroyText(this);
}

struct Resource {
    unsigned char padding[0x240];
    unsigned char ready;
};

struct Handle {
    Resource* get();
};

struct Receiver;
typedef void (__thiscall *Notify)(
    Receiver*, int, const Text*, float, int, void*, void*);

struct Receiver {
    Notify* table;
};

struct Argument {
    unsigned char padding[4];
    Receiver* receiver;
};

extern float notificationValue;
extern void* notificationArgument1;
extern void* notificationArgument2;

struct S {
    unsigned char padding0[0x14];
    Handle* handle;
    unsigned char padding1[0x2C];
    unsigned char disabled;
    unsigned char padding2[3];
    unsigned char initialized;

    void initialize(Argument*);
    void f(Argument*);
};

void S::f(Argument* argument)
{
    if (!disabled) {
        Resource* resource = handle ? handle->get() : 0;

        if (!resource->ready) {
            Text text(">Authoring");
            Receiver* receiver = argument->receiver;
            receiver->table[0x198 / 4](
                receiver, 0, &text, notificationValue, 1,
                notificationArgument2, notificationArgument1);
        } else if (!initialized) {
            try {
                initialize(argument);
                initialized = 1;
            } catch (const Text& text) {
                Receiver* receiver = argument->receiver;
                receiver->table[0x198 / 4](
                    receiver, 0, &text, notificationValue, 1,
                    notificationArgument2, notificationArgument1);
            }
        }

        initialized = resource->ready;
    }
}

// from server: 87% by king_originala
struct Instance
{
    char padding[0x204];
    Instance* selection;
};

struct String
{
    unsigned int reserved;
    union
    {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;
};

struct Label
{
    unsigned int reserved;
    String text;
};

struct Callback
{
    virtual void finish(int value) = 0;
};

extern unsigned int __cdecl childCount(Instance*, int);

namespace RBX
{
    void __cdecl handle(int, int);
}

struct AllCanSelectCommand
{
    unsigned int reserved;
    Label* label;
    unsigned int reserved2;
    Instance* volatile context;

    void prepare();
    void execute(Callback* callback);
};

void AllCanSelectCommand::execute(Callback* callback)
{
    Instance* instance = context;
    prepare();
    instance = context->selection;
    childCount(instance, 0);

    String* text = &label->text;
    char* name = text->capacity >= 16
        ? text->storage.pointer
        : text->storage.buffer;

    RBX::handle(reinterpret_cast<int>(name),
                reinterpret_cast<int>(instance));
    callback->finish(1);
}

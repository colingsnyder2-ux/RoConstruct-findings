// from server: 88% by king_originala
namespace RBX {
    void handle(int a, int b);
}

struct StringData {
    unsigned int unused;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;
};

struct CommandData {
    unsigned int unused;
    StringData text;
};

struct Receiver {
    virtual void finish(int value);
};

struct S {
    unsigned int unused0;
    CommandData* data;
    unsigned int unused8;
    int context;

    void prepare(int value);
    void execute(Receiver* receiver);
};

void S::execute(Receiver* receiver)
{
    prepare(2);
    StringData* text = &data->text;
    int value = context;
    const char* characters = text->capacity >= 16
        ? text->storage.pointer
        : text->storage.buffer;
    RBX::handle(reinterpret_cast<int>(characters), value);
    receiver->finish(1);
}

// from server: 88% by king_originala
namespace RBX {
    void handle(int a, int b);
}

struct Text {
    unsigned int reserved;
    union {
        char local[16];
        char* heap;
    } storage;
    unsigned int size;
    unsigned int capacity;
};

struct TextHolder {
    unsigned int reserved;
    Text text;
};

struct Callback {
    virtual void invoke(int value);
};

struct S {
    unsigned int reserved0;
    TextHolder* holder;
    unsigned int reserved8;
    int value;

    void prepare(int mode);
    void f(Callback* callback);
};

void S::f(Callback* callback)
{
    prepare(1);
    Text* text = &holder->text;
    int argument = value;
    char* data = text->capacity >= 16
        ? text->storage.heap
        : text->storage.local;
    RBX::handle((int)data, argument);
    callback->invoke(1);
}

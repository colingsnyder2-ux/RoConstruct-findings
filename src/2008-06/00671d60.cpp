// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD

struct Handler {
    virtual void process(int code);
};

struct Buffer {
    char pad[0x38];
    ~Buffer();
};

class AdornRbxGfx {
    char pad0[0x54];
    int* start;
    int* end;
    char pad2[4];
    Buffer buffer;
    Handler* handler;

public:
    int cleanup();
};

int AdornRbxGfx::cleanup()
{
    int size = end - start;
    if ((size & ~3) == 0 && size != 0) {
        int last = *(end - 1);
        if (((char*)last - (char*)start) & ~3) {
            end = (int*)((char*)last - 4);
        }
    }

    try {
        throw 0x15c;
    } catch (...) {
        if (handler) {
            handler->process(0x15c);
        }
    }

    buffer.~Buffer();

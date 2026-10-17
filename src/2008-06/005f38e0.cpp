// from server: 73% by colin
struct Buffer {
    int pubsync();
};

struct Stream {
    unsigned char padding[8];
    int* offsets;
};

struct S {
    Stream** stream;
    unsigned int flags;
    ~S();
};

S::~S()
{
    Stream* p = *stream;
    unsigned int state = flags;
    try {
        if (state & 2)
            (*reinterpret_cast<Buffer**>(
                reinterpret_cast<char*>(p) + p->offsets[1] + 48))->pubsync();
    }
    catch (...) {
        flags |= 4;
    }
}

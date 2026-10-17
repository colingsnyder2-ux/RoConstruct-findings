// from server: 79% by colin




struct Buffer {
    int pubsync();
};

struct Stream {
    int* offsets;
};

struct S {
    Stream* stream;
    unsigned int flags;
    ~S();
};

S::~S()
{
    unsigned int state = flags;
    Stream* p = stream;
    try {
        if (state & 2) {
            void* q = *(void**)p;
            void* r = *(void**)((char*)q + 8);
            void* s = *(void**)((char*)r + 4);
            Buffer* b = *(Buffer**)((char*)s + (int)q + 0x30);
            b->pubsync();
        }
    }
    catch (...) {
        flags |= 4;
    }
}

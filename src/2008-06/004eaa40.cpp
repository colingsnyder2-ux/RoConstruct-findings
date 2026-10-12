// from server: 95% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Pair {
    int first;
    int second;
};

struct Object {
    unsigned char storage[40];
    Object();
};

struct Owner {
    int first;
    int second;

    Owner() : first(0), second(0) {}
    ~Owner();
    void reset(Object*);
};

struct Texture {
    int f(int, int, int);
    Texture(int a, int b, int c) { f(a, b, c); }
    ~Texture();
};

struct Part : Owner {
    Texture texture;

    Part(const Pair&);
    void finish();
};

Part::Part(const Pair& value)
    : Owner(), texture(value.first, value.second, 0)
{
    reset(new Object);
    finish();
}

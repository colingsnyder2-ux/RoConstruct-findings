// from server: 97% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Base {
    int storage[7];
    int f(int);
};

struct Clone : Base {
    int first;
    int second;
    Clone(int);
};

inline Clone::Clone(int value)
{
    f(value);
    storage[0] = 0x84a4dc;
    storage[1] = 0x84a4c0;
    first = 0;
    second = 0;
}

struct Tool {
    char storage[0x18];
    int value;
    Clone* clone();
};

Clone* Tool::clone()
{
    return new Clone(value);
}

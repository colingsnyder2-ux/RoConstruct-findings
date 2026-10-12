// from server: 99% by king_originala
struct Tag {
    Tag() {}
};

struct Base {
    char storage[0x20];
    Base(const Tag&, const Tag&);
    ~Base();
};

typedef void (__thiscall *ElementRoutine)(void*);

extern ElementRoutine elementConstructor;
extern ElementRoutine elementDestructor;

void __stdcall constructArray(
    void*, unsigned int, unsigned int, ElementRoutine, ElementRoutine);

struct S : Base {
    char elements[0xE00];
    int flag;
    S();
};

S::S() : Base(Tag(), Tag())
{
    constructArray(elements, 0x1C, 0x80,
                   elementConstructor, elementDestructor);
    flag = 1;
}

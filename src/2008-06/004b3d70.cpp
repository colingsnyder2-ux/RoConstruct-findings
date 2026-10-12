// from server: 92% by king_originala
struct Element {
    char storage[0x1c];
    ~Element();
};

struct Base {
    char storage[0xe24];
    ~Base();
};

struct S : Base {
    Element elements[0x100];
    ~S();
};

S::~S()
{
}

// from server: 73% by king_originala
#pragma optimize("", off)

struct VChunk;

struct Reference {
    VChunk* pointer;
    Reference(const Reference&);
    ~Reference();
};

struct S {
    char pad[0x18];
    VChunk* pointer;
    int state;

    S(int, Reference);
    ~S();
    void initialize();
};

struct T : S {
    T(int, const Reference&);
};

T::T(int value, const Reference& reference)
    : S(value, reference)
{
    initialize();
}

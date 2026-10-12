// from server: 84% by king_originala
#pragma optimize("", off)

struct Base {
    char data[0x20];
    Base();
    ~Base();
};

struct Member {
    char data[0x0C];
    Member();
};

struct Mesh : Base {
    unsigned int value;
    Member member;
    Mesh();
};

Mesh::Mesh()
{
    value = 0;
}

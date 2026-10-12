// from server: 74% by king_originala
#pragma optimize("", off)

struct Base {
    ~Base();
};

struct Mesh : Base {
    void clear();
    ~Mesh();
};

Mesh::~Mesh()
{
    clear();
}

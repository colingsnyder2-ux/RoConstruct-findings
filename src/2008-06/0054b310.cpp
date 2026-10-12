// from server: 74% by king_originala
struct Base
{
    ~Base();
};

struct Mesh : Base
{
    void cleanup();
    ~Mesh();
};

#pragma optimize("", off)
Mesh::~Mesh()
{
    cleanup();
}
#pragma optimize("", on)

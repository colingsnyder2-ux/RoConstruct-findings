// from server: 42% by colin
#pragma optimize("", off)

struct Element {
    int data[3];
};

struct Allocator {
    int state;
    void deallocate(Element* p, unsigned int count);
};

struct Mesh {
    int reserved[2];
    Allocator allocator;
    Element* first;

    void clear();
    void destroy();
};

void Mesh::destroy()
{
    clear();
    allocator.deallocate(first, 0);
}

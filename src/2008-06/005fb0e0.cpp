// from server: 72% by colin
struct Node {
    int activeIndex;
    int freeIndex;
};

struct NodeArray {
    Node** data;
    int size;
    int capacity;
    void resize(int newSize, Node* value);
};

struct Body {
    char pad[0x2c];
    float* someFloatPtr;
};

struct Kernel {
    char pad[0x10];
    NodeArray* nodeArray;
    void insertBody(Body* b);
};

float getInfinity();

void Kernel::insertBody(Body* b)
{
    nodeArray->resize(0, (Node*)b);
    float f = getInfinity();
    if (b->someFloatPtr)
        *b->someFloatPtr = f;
}

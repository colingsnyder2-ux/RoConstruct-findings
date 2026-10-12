// from server: 47% by colin
struct Accessor {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void get(void*, void*) = 0;
};

struct Descriptor {
    unsigned char padding[24];
    Accessor* accessor;
    bool equalTo(void*, void*);
};

bool Descriptor::equalTo(void* a, void* b)
{
    float v1[3];
    float v2[3];
    accessor->get(a, v1);
    accessor->get(b, v2);
    if (v1[0] == v2[0]) return false;
    if (v1[0] != v2[0]) return false;
    if (v1[1] != v2[1]) return false;
    return true;
}

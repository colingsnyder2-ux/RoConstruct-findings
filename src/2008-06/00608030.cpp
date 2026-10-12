// from server: 91% by king_originala
struct Geometry {
    int reserved;
    float extent[3];
    int feature(int);
};

struct Primitive {
    char reserved[0x9c];
    Geometry* geometry;
    void* data;
};

struct Contact {
    char reserved0[8];
    int type;
    int feature0;
    int feature1;
    char reserved1[8];
    float extent;
    int face0;
    int face1;
    int value;
};

struct BlockBlockContact {
    char reserved0[12];
    Primitive* primitive[2];
    char reserved1[0x60];
    int value;

    Contact* create(void*, void*, int, int, int);
    void build(int, int, int, int);
};

void BlockBlockContact::build(int first, int second, int feature0, int feature1)
{
    int face0 = (feature0 % 2) * 3 + feature0 / 4;
    if (feature0 > 12)
        face0 = (face0 + 3) % 6;

    int face1 = (feature1 % 2) * 3 + feature1 / 4;
    if (feature1 > 12)
        face1 = (face1 + 3) % 6;

    Contact* contact = create(primitive[first]->data,
                              primitive[second]->data,
                              5, face0, face1);

    Geometry* geometry0 = primitive[first]->geometry;
    float extent = geometry0->extent[face0 % 3];
    int savedValue = value;
    int id1 = primitive[second]->geometry->feature(feature1);
    int id0 = geometry0->feature(feature0);

    contact->feature0 = id0;
    contact->extent = extent;
    contact->feature1 = id1;
    contact->face0 = face0;
    contact->face1 = face1;
    contact->value = savedValue;
    contact->type = 5;
}

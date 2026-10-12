// from server: 91% by king_originala
struct Link {
    char padding[0x10];
    int value;
};

struct Object {
    char padding[0x2C8];
    Link* link;
};

struct Owner {
    Object* getObject();
};

struct S {
    int f(int argument);
};

int S::f(int argument)
{
    if (argument == 0) {
        Object* object = reinterpret_cast<Owner*>(
            reinterpret_cast<char*>(this) - 0x130)->getObject();
        Link* link = object ? object->link : 0;
        if (link)
            return link->value;
    }
    return 0;
}

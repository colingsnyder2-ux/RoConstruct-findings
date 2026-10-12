// from server: 79% by king_originala
struct Link {
    char pad[20];
    Link* parent;
};

struct Part {
    char pad0[92];
    void* identity;
    char pad1[64];
    Link* link;

    int f();
};

struct Joint {
    char pad[36];
    bool enabled;
};

extern bool __cdecl checkFirst(Joint*);
extern bool __cdecl checkSecond(Joint*);

bool __cdecl match(Part* a, Part* b, Joint* joint, int extended)
{
    if (a && b && joint->enabled) {
        bool valid;
        if (extended)
            valid = checkFirst(joint) || checkSecond(joint);
        else
            valid = checkFirst(joint);

        if (valid && b->link->parent == a->link) {
            bool same = a->identity == b->identity;
            if (!extended)
                return same;
            return same || a->f() == b->f();
        }
        return false;
    }
    return false;
}

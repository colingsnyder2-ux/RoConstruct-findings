// from server: 79% by colin
struct Descriptor {
    bool equals(const Descriptor& other) const;
};

const Descriptor& __cdecl firstDescriptor();
const Descriptor& __cdecl secondDescriptor();

struct Object {
    char padding[28];
    Descriptor* descriptor;
};

int __stdcall matches(Object* object)
{
    Descriptor* d = object->descriptor;
    if (d->equals(firstDescriptor()) ||
        object->descriptor->equals(secondDescriptor()))
        return 1;
    return 0;
}

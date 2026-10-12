// from server: 73% by king_originala
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
    if (object->descriptor->equals(firstDescriptor()) ||
        object->descriptor->equals(secondDescriptor()))
        return 1;
    return 0;
}

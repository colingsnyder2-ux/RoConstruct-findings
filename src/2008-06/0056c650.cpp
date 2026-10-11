// from server: 24% by colin




struct Name;

struct Descriptor {
    const Name& name;
    void* isReplicable;
    void* isOutdated;
    unsigned int attributes;
    unsigned int field14;
};

struct EnumDescriptor {
    char pad[8];
    Descriptor descriptor;

    EnumDescriptor(const Name& name, unsigned int attributes, unsigned int extra);
};

extern "C" void __fastcall sub_56B480(Descriptor* self, void* unused, const Name* name, unsigned int attributes, unsigned int extra);
extern "C" void __fastcall sub_56C170(Descriptor* self, void* unused, EnumDescriptor* parent);

EnumDescriptor::EnumDescriptor(const Name& name, unsigned int attributes, unsigned int extra)
    : descriptor(*(Descriptor*)0)
{
    sub_56B480(&this->descriptor, 0, &name, attributes, extra);
    unsigned int a = attributes;
    unsigned int b = extra;
    unsigned int edx = ((int)(b >> 2) & 1);
    edx += edx;
    edx |= (b & 1);
    unsigned int old = this->descriptor.attributes;
    old &= 0xfffffffc;
    edx |= old;
    this->descriptor.field14 = a;
    this->descriptor.attributes = edx;
    sub_56C170(&this->descriptor, 0, this);
}

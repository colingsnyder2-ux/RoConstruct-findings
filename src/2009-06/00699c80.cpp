// from server: 69% by atomic.potato
struct RefPropDescriptor;

struct VVelocityMotor {
    char pad[0x1c];
    void* field_1c;
    void setProp(RefPropDescriptor* a, RefPropDescriptor* b);
};

extern "C" RefPropDescriptor* __cdecl sub_699C30(RefPropDescriptor*);

void VVelocityMotor::setProp(RefPropDescriptor* a, RefPropDescriptor* b)
{
    RefPropDescriptor* v;
    if (a)
        v = sub_699C30(a);
    else
        v = 0;
    void** obj = (void**)field_1c;
    void (*fn)(void*, RefPropDescriptor*, RefPropDescriptor*) =
        (void (*)(void*, RefPropDescriptor*, RefPropDescriptor*))obj[3];
    fn(field_1c, v, b);
}

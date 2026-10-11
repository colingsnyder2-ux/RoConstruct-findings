// from server: 61% by colin
// roc 2008-06 005ee5d0  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee5d0

extern "C" int __stdcall sub_557330(int, int);
extern "C" int __cdecl sub_5ed5c0();
extern "C" void __cdecl invalid_parameter_noinfo();

struct EnumItem {
    int value;
};

struct EnumDesc {
    char pad[0x28];
    unsigned int count;
    char pad2[0xc4 - 0x2c];
    EnumItem** items;
    EnumItem** itemsEnd;
};

struct DescribedBase {
    char pad[0x1c];
    void* vtable;
};

struct SurfaceEnumPropDescriptor {
    bool setValue(DescribedBase* instance, const EnumItem* value);
};

bool SurfaceEnumPropDescriptor::setValue(DescribedBase* instance, const EnumItem* value)
{
    sub_557330(0x97b11c, 0x5ed620);
    EnumDesc* desc = (EnumDesc*)sub_5ed5c0();
    unsigned int index = (unsigned int)value;
    if (index < desc->count)
        return false;
    unsigned int n = (unsigned int)(desc->itemsEnd - desc->items) >> 2;
    if (index >= n)
        invalid_parameter_noinfo();
    EnumItem* item = desc->items[index];
    void* obj = *(void**)((char*)instance + 0x1c);
    void* vtbl = *(void**)obj;
    void (__stdcall *fn)(void*, const EnumItem*, void*) = *(void (__stdcall**)(void*, const EnumItem*, void*))((char*)vtbl + 0xc);
    fn(obj, item, (void*)value);
    return true;
}

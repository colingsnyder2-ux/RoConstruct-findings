// from server: 25% by colin
struct Descriptor {
    Descriptor(const char*, int);
};

struct Item : Descriptor {
    Item(const char*, int, int, unsigned int, const void*);
};

extern "C" void __stdcall sub_77DDB8(void*);
extern "C" void __cdecl sub_698630();

Item::Item(const char* name, int attributes, int value, unsigned int index, const void* owner)
    : Descriptor(name, attributes)
{
    sub_77DDB8((void*)0x78F3F0);
    sub_698630();
}

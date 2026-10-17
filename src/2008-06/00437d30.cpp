// from server: 42% by colin
struct Descriptor {
    void construct(const char* name, int attributes);
};

struct Item : Descriptor {
    const void* owner;
    int value;
    unsigned int index;
    void __cdecl construct(const char* name, int attributes, int value, unsigned int index, const void* owner);
};

extern "C" const char* __stdcall c_str_std_string(const void* s);
extern "C" void* __stdcall mfc_310(void* dest, const char* src);

void Item::construct(const char* name, int attributes, int value, unsigned int index, const void* owner)
{
    Descriptor::construct(name, attributes);
    this->value = value;
    this->index = index;
    this->owner = owner;
}

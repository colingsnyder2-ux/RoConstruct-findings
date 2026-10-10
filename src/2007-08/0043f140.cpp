// from server: 36% by colin
struct Descriptor {
    Descriptor(const char*, int);
    void* vtable;
};

struct EnumDescriptor;

struct Item : Descriptor {
    const EnumDescriptor& owner;
    const int value;
    const unsigned int index;
    Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner);
};

struct EnumDescriptor {
    void* vtable;
    char pad[0xb8];
    void* field_bc;
    void addItem(const Item* item);
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void __stdcall c_str_helper();

Item::Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner)
    : Descriptor(name, attributes), owner(owner), value(value), index(index)
{
    this->vtable = (void*)0x78ed2c;
    *(void**)((char*)this + 0x20) = (void*)0x78eccc;
    *(void**)((char*)this + 0x108) = (void*)0x78ecc0;

    void* p = *(void**)((char*)&owner + 0x18);
    void* begin = *(void**)((char*)p + 0x14);
    void* end = *(void**)((char*)p + 0x18);
    void* first = (char*)p + 0x10;

    if (begin > *(void**)((char*)first + 8)) {
        _invalid_parameter_noinfo();
    }

    void* p2 = *(void**)((char*)&owner + 0x18);
    void* end2 = *(void**)((char*)p2 + 0x18);
    void* first2 = (char*)p2 + 0x10;

    if (*(void**)((char*)first2 + 4) > end2) {
        _invalid_parameter_noinfo();
    }

    if (first != 0 && first != first2) {
        _invalid_parameter_noinfo();
    }

    while (begin != end2) {
        if (first != 0) {
            _invalid_parameter_noinfo();
        }
        if (begin >= *(void**)((char*)first + 8)) {
            _invalid_parameter_noinfo();
            if (begin >= *(void**)((char*)first + 8)) {
                _invalid_parameter_noinfo();
            }
        }

        void* item = *(void**)begin;
        void* vt = *(void**)item;
        void* fn = *(void**)((char*)vt + 4);
        void* arg = (char*)fn + 4;
        c_str_helper();

        void* item2 = *(void**)begin;
        void* str = *(void**)((char*)item2 + 8);
        void* ed = *(void**)((char*)&owner + 0xbc);
        void* edfn = *(void**)((char*)ed + 0x58);
        edfn = *(void**)((char*)edfn + 0x58);
        ((void(__thiscall*)(void*, void*, void*, int))edfn)(ed, str, arg, -1);

        if (begin >= *(void**)((char*)first + 8)) {
            _invalid_parameter_noinfo();
        }
        begin = (char*)begin + 4;
    }
}

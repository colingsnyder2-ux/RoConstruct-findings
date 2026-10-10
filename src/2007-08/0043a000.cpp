// from server: 33% by colin
struct Descriptor {
    void* vtable;
    int field4;
    int field8;
};

struct Item : Descriptor {
    const void* owner;
    const int value;
    const unsigned int index;
};

struct EnumDescriptor {
    char pad[0x10];
    Item** begin;
    Item** end;
    Item** capacity;

    void convertToValue(unsigned int index, void* value) const;
};

extern "C" void __stdcall _invalid_parameter_noinfo();

void EnumDescriptor::convertToValue(unsigned int index, void* value) const {
    Item** first = begin;
    Item** last = end;
    while (first != last) {
        if (first == 0 || first == end) {
            _invalid_parameter_noinfo();
        }
        if (last != end) {
            if (first == 0) {
                _invalid_parameter_noinfo();
            }
            if (last == first) {
                _invalid_parameter_noinfo();
            }
            Item* item = *last;
            item->owner;
            ((void (__stdcall*)(void*))((void**)item->owner)[3])(value);
            first++;
            last = end;
        }
    }
}

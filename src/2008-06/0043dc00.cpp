// from server: 5% by colin
struct EnumDescriptor;

struct Item {
    char pad0[0x10];
    int value;
    char pad1[0x8];
    size_t index;
    char pad2[0x4];
    const EnumDescriptor* owner;
};

struct EnumDescriptor {
    char pad0[0x4];
    Item** itemsBegin;
    Item** itemsEnd;
    char pad1[0x8];
    size_t enumCount;
    size_t enumCountMSB;
    char pad2[0x4];
    void* converter;
    void convertToValue(size_t index, void* value) const;
    void convertToString(size_t index, void* value) const;
    void setHidden(int hidden);
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void __stdcall mfc_call_802458(void* dst, const char* src);
extern "C" void __stdcall mfc_call_802468(void* p);
extern "C" void __stdcall mfc_call_803f10(void* p, const char* src);

struct String {
    char buf[0x1c];
    String(const char* s);
    ~String();
};

void sub_43a320(EnumDescriptor* self, void* a, void* b);

void EnumDescriptor::convertToValue(size_t index, void* value) const {
    Item** it = itemsBegin;
    Item** end = itemsEnd;
    bool found = false;
    while (it != end) {
        Item* item = *it;
        if (item->index == index) {
            found = true;
            break;
        }
        ++it;
    }
    if (!found) {
        _invalid_parameter_noinfo();
    }
    Item* item = *it;
    if (item->owner) {
        item->owner->convertToValue(item->index, value);
    }
}

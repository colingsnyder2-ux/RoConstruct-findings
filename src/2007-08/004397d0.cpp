// from server: 56% by colin
// roc 2007-08 004397d0  unit: RBX::VSoundId::XItem  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004397d0

struct RBX_Name {
    void* data;
};

struct RBX_ContentId {
    void* data;
};

struct RBX_EnumDescriptor;

struct RBX_EnumItem {
    void* vtable;
    RBX_Name* name;
    int attributes;
    int value;
    unsigned int index;
    RBX_EnumDescriptor* owner;
};

struct RBX_EnumDescriptor {
    void* vtable;
    void* allItems[4];
    unsigned int enumCount;
    unsigned int enumCountMSB;
};

extern "C" {
    const char* __stdcall RBX_Name_c_str(RBX_Name* self);
    RBX_EnumDescriptor* __stdcall RBX_EnumDescriptor_lookupDescriptor(RBX_ContentId* name);
    void* __stdcall RBX_EnumDescriptor_convertToValue(RBX_EnumDescriptor* self, unsigned int index);
    void* __stdcall RBX_EnumDescriptor_convertToString(RBX_EnumDescriptor* self, unsigned int index);
    void* __stdcall RBX_EnumItem_ctor(RBX_EnumItem* self, const char* name, int attributes, int value, unsigned int index, RBX_EnumDescriptor* owner);
}

struct RBX_VSoundId_XItem {
    bool convertToValue(RBX_ContentId* value) const;
};

bool RBX_VSoundId_XItem::convertToValue(RBX_ContentId* value) const {
    const RBX_EnumItem* self = (const RBX_EnumItem*)this;
    RBX_Name* name = (RBX_Name*)((char*)value + 4);
    const char* str = RBX_Name_c_str(name);
    RBX_EnumDescriptor* desc = RBX_EnumDescriptor_lookupDescriptor((RBX_ContentId*)str);
    void* result = RBX_EnumDescriptor_convertToValue(desc, self->index);
    if (result == 0) {
        const char* str2 = RBX_Name_c_str(name);
        RBX_EnumDescriptor* desc2 = RBX_EnumDescriptor_lookupDescriptor((RBX_ContentId*)str2);
        void* result2 = RBX_EnumDescriptor_convertToString(desc2, self->index);
        return result2 != 0;
    }
    return true;
}

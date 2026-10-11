// from server: 61% by atomic.potato




struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" const type_info type_info_Vector3;
extern "C" const type_info type_info_placeholder;

struct EnumDescriptor {
    void* field0;
    const type_info* getType() const;
    bool isVector3() const;
};

const type_info* EnumDescriptor::getType() const {
    if (field0) {
        return (const type_info*)(*(void***)field0)[1];
    }
    return &type_info_placeholder;
}

bool EnumDescriptor::isVector3() const {
    if (this) {
        const type_info* t = getType();
        return type_info_Vector3 == *t;
    }
    return false;
}

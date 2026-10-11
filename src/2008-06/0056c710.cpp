// from server: 46% by colin




struct type_info {
    bool operator==(const type_info&) const;
};

struct Descriptor {
    const type_info* getTypeInfo() const;

    bool isCoordinateFrame() const;
};

extern const type_info typeInfoCoordinateFrame;
extern const type_info typeInfoPlaceholder;

bool Descriptor::isCoordinateFrame() const {
    if (this == 0)
        return false;
    const type_info* ti = getTypeInfo();
    if (ti == 0)
        ti = &typeInfoPlaceholder;
    return *ti == typeInfoCoordinateFrame;
}

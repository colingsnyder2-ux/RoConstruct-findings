// from server: 80% by colin




namespace RBX {

struct Message {
    char pad[0x17c];
    bool flag;
    char pad2[0x1a4 - 0x17d];
    const void* getPersistentDataCost() const;
};

const void* Message::getPersistentDataCost() const {
    if (flag)
        return (const char*)this + 0x198;
    return (const char*)this + 0x1a4;
}

}

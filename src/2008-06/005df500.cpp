// from server: 80% by colin
struct Message {
    char padding[0x17c];
    unsigned char flag;
    char alignment[3];
    char first[0xc];
    char second[0xc];
    char* getPtr() const;
};

char* Message::getPtr() const {
    return flag ? (char*)first : (char*)second;
}

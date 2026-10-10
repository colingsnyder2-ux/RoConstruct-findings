// from server: 79% by colin
struct BoundFuncDesc {
    int field0;
    unsigned short field4;
    bool equals(const BoundFuncDesc* other);
    bool notEquals(const BoundFuncDesc* other);
};

struct RakPeer {
    char pad0[8];
    unsigned short field_8;
    char pad1[0x22c - 0xa];
    char* field_22c;
    bool func(unsigned char mode, int a, int b, int c);
};

bool RakPeer::func(unsigned char mode, int a, int b, int c)
{
    unsigned int i = 0;
    unsigned int offset = 0;
    while (i < field_8) {
        char* p = field_22c + offset;
        if (*p != 0 && *(int*)(p + 0x838) == 8) {
            BoundFuncDesc* desc = (BoundFuncDesc*)(p + 4);
            bool r;
            if (mode == 0) {
                r = desc->equals((BoundFuncDesc*)&a);
            } else if (mode == 1) {
                r = desc->notEquals((BoundFuncDesc*)&a);
            } else {
                r = false;
            }
            if (r)
                return true;
        }
        i++;
        offset += 0x840;
    }
    return false;
}

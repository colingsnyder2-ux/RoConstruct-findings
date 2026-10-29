// from server: 96% by colin
struct RakPeer
{
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
};

bool compare(const RakPeer* self, const RakPeer* other)
{
    int i = 3;
    const int* a = &self->field_c;
    int diff = (int)other - (int)self;
    while (i >= 0)
    {
        unsigned int lhs = *(const unsigned int*)((const char*)a + diff);
        unsigned int rhs = *(const unsigned int*)a;
        if (lhs > rhs)
            return true;
        if (lhs < rhs)
            return false;
        i--;
        a--;
    }
    return false;
}

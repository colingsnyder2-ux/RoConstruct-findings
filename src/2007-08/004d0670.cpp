// from server: 95% by colin
struct PartChunk
{
    char pad0[0xc];
    int field_c;
    char pad10[0x4];
};

bool __stdcall compare(PartChunk* a, PartChunk* b)
{
    char* pa = (char*)a + 0x10;
    char* pb = (char*)b + 0x10;
    if (pa < pb)
        return true;
    if (pa > pb)
        return false;
    if (a->field_c < b->field_c)
        return true;
    if (a->field_c > b->field_c)
        return false;
    return a < b;
}

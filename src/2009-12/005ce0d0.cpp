// from server: 59% by atomic.potato
struct PartChunk {
    unsigned int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    void copyTo(int* dst, int a, int b);
};

void PartChunk::copyTo(int* dst, int a, int b)
{
    dst[0] = field0;
    dst[1] = field4;
    dst[2] = field8;
    dst[3] = fieldC;
    dst[4] = field10;
    dst[5] = field14;

    field4 = *(int*)(field4 + 0x18);
    if (field4 == 0) {
        int limit = fieldC;
        field0++;
        while (field0 < limit) {
            field4 = ((int*)field10)[field0];
            if (field4 != 0)
                return;
            field0++;
        }
        *(char*)((char*)this + 0x14) = 1;
    }
}

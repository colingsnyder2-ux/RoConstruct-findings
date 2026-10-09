// from server: 27% by colin
// roc 2007-08 004b9880  unit: seg_004b0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9880

struct RakPeer {
    void sub128(unsigned int* dst, unsigned int* src);
};

void RakPeer::sub128(unsigned int* dst, unsigned int* src)
{
    unsigned int i = 0;
    unsigned int borrow;

    borrow = dst[0] < src[0];
    dst[0] -= src[0];
    borrow = (dst[1] < src[1]) || (borrow && dst[1] == src[1]);
    dst[1] -= src[1];
    borrow = (dst[2] < src[2]) || (borrow && dst[2] == src[2]);
    dst[2] -= src[2];
    borrow = (dst[3] < src[3]) || (borrow && dst[3] == src[3]);
    dst[3] -= src[3];

    while (i != 0)
    {
        i++;
        i++;
        borrow = (dst[i * 2] < src[i * 2]) || (borrow && dst[i * 2] == src[i * 2]);
        dst[i * 2] -= src[i * 2];
        borrow = (dst[i * 2 + 1] < src[i * 2 + 1]) || (borrow && dst[i * 2 + 1] == src[i * 2 + 1]);
        dst[i * 2 + 1] -= src[i * 2 + 1];
        borrow = (dst[i * 2 + 2] < src[i * 2 + 2]) || (borrow && dst[i * 2 + 2] == src[i * 2 + 2]);
        dst[i * 2 + 2] -= src[i * 2 + 2];
        borrow = (dst[i * 2 + 3] < src[i * 2 + 3]) || (borrow && dst[i * 2 + 3] == src[i * 2 + 3]);
        dst[i * 2 + 3] -= src[i * 2 + 3];
    }
}

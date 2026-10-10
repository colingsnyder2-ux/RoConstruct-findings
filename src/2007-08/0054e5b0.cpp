// from server: 95% by colin
struct S_func_0054e5b0 {
    void* m_buf;
    int f(char* dst, int count);
};

struct streambuf {
    int sgetn(char* dst, int count);
};

int S_func_0054e5b0::f(char* dst, int count)
{
    int total = 0;
    if (count > 0) {
        do {
            streambuf* sb = (streambuf*)m_buf;
            int n = sb->sgetn(dst, count);
            if (n == 0) {
                unsigned char c = *(unsigned char*)((char*)sb + 0x3c);
                n = (c != 0) ? -1 : 0;
            }
            if (n == -1)
                break;
            total += n;
            if (total >= count)
                break;
        } while (1);
    }
    if (total != 0)
        return total;
    return -1;
}

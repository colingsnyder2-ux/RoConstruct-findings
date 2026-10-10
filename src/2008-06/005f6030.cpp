// from server: 76% by colin
struct streambuf {
    int sgetn(char*, int);
};

struct S {
    streambuf* p;
    int f(char*, int);
};

int S::f(char* buf, int n)
{
    int total = 0;
    if (n > 0) {
        do {
            streambuf* sb = p;
            int r = sb->sgetn(buf, n);
            if (r == 0) {
                unsigned char c = *(unsigned char*)((char*)sb + 0x3c);
                r = -(int)c;
                r = r | (r >> 31);
                r = (r != 0) ? -1 : 0;
            }
            if (r == -1)
                break;
            total += r;
        } while (total < n);
    }
    if (total == 0)
        return -1;
    return total;
}

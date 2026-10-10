// from server: 55% by colin
struct S {
    int *data;
    int size;
    int capacity;
    void resize(int n, int b);
};

extern "C" int __cdecl _ftol2_sse(float);
extern "C" void __cdecl sub_50F6B0(void *);
extern "C" void __cdecl sub_4F3F60(S *self, int n);

extern float flt_797B38;
extern float flt_797B34;
extern float flt_797988;
extern int dword_8BFBB8;
extern int dword_8BFBBC;

void S::resize(int n, int b)
{
    int old = size;
    size = n;
    int ten;
    if (!(dword_8BFBBC & 1)) {
        dword_8BFBBC |= 1;
        ten = 10;
        dword_8BFBB8 = ten;
    } else {
        ten = dword_8BFBB8;
    }
    int cap = capacity;
    int newcap = size;
    if (newcap > cap) {
        if (cap == 0) {
            capacity = n;
            sub_4F3F60(this, old);
        } else if (newcap < ten) {
            capacity = ten;
            sub_4F3F60(this, old);
        } else {
            float f = flt_797B38;
            unsigned int bytes = (unsigned int)cap * 24;
            if (bytes > 0x61A80) {
                f = flt_797B34;
            } else if (bytes > 0xFA00) {
                f = flt_797988;
            }
            int grown = _ftol2_sse((float)cap * f) - newcap + cap;
            capacity = grown;
            if (grown < dword_8BFBB8)
                capacity = dword_8BFBB8;
            sub_4F3F60(this, old);
        }
    } else {
        int third = cap / 3;
        if (newcap > third && b != 0 && newcap > ten) {
            if (newcap < old)
                old = newcap;
            sub_4F3F60(this, old);
        }
    }
    if (old < size) {
        int i = old;
        do {
            int *p = data + i * 24;
            if (p)
                sub_50F6B0(p);
            i++;
        } while (i < size);
    }
}

// from server: 33% by colin
struct VCXTPReportRows {
    int field_0x30;
    int field_0x34;
    void adjust(int a, int b);
};

extern "C" void __stdcall sub_62ff20();

void VCXTPReportRows::adjust(int a, int b)
{
    int count = field_0x34 - 1;
    if (count < 0)
        return;

    int i = count;
    do {
        if (i < 0 || i >= field_0x34)
            sub_62ff20();

        int* p = (int*)(i + field_0x30 * 8);
        int* q = (int*)(field_0x30 + i * 8 + 4);

        int v = *p;
        if (v <= a) {
            int w = *q;
            if (w > a + 1) {
                int t = w - b;
                v = v + 1;
                if (v <= t)
                    v = t;
            } else {
                if (w < a)
                    sub_62ff20();
                if (v > a) {
                    *p = a;
                    int t = *q - b;
                    int u = a + 1;
                    if (u > t)
                        t = u;
                    *q = t;
                }
            }
        } else {
            int t = a + b;
            if (v > t) {
                v -= b;
                *p = v;
                *q -= b;
            } else {
                if (*q < a)
                    sub_62ff20();
                if (v > a) {
                    *p = a;
                    int t2 = *q - b;
                    int u2 = a + 1;
                    if (u2 > t2)
                        t2 = u2;
                    *q = t2;
                }
            }
        }

        i--;
    } while (i >= 0);
}

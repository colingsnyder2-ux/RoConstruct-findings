// from server: 68% by colin
struct S_func_00574370 {
    char pad0[4];
    int m_field4;
    int m_field8;
    void f(int a, int b);
};

extern "C" int __stdcall sub_00599700(int);
extern "C" int __stdcall sub_00630d60();

extern int dword_8C2B18;
extern int dword_8C2B14;
extern float flt_797B38;
extern float flt_797B34;
extern float flt_797988;

void S_func_00574370::f(int a, int b)
{
    int old = m_field4;
    m_field4 = a;

    int limit;
    if ((dword_8C2B18 & 1) == 0) {
        dword_8C2B18 |= 1;
        dword_8C2B14 = 10;
        limit = 10;
    } else {
        limit = dword_8C2B14;
    }

    int cur = m_field8;
    int val = m_field4;

    if (val > cur) {
        if (cur == 0) {
            m_field8 = a;
            sub_00599700(old);
            return;
        }
        if (val < limit) {
            m_field8 = limit;
            sub_00599700(old);
            return;
        }

        float scale = flt_797B38;
        int doubled = cur + cur;
        int quadrupled = doubled + doubled;
        if (quadrupled > 0x61A80) {
            scale = flt_797B34;
        } else if (quadrupled > 0xFA00) {
            scale = flt_797988;
        }

        int tmp = cur;
        int product = (int)(scale * (float)tmp);
        int result = product - cur + val;
        m_field8 = result;
        int lim2 = dword_8C2B14;
        if (result < lim2) {
            m_field8 = lim2;
        }
        sub_00599700(old);
        return;
    }

    int third = cur / 3;
    if (val > third) {
        if (b != 0 && val > limit && val < old) {
            if (val >= old) {
                val = old;
            }
            sub_00599700(val);
        }
    }
}

// from server: 41% by colin
struct S_func_004abe40 {
    char pad0[4];
    int m_4;
    int m_8;
    void f(int a, int b);
};

extern "C" void __stdcall sub_00502080();
extern "C" int __cdecl sub_006a17f0();

extern float g_81e380;
extern float g_81e37c;
extern float g_81c434;
extern int g_971468;
extern int g_97146c;

void S_func_004abe40::f(int a, int b)
{
    int old = m_4;
    m_4 = a;
    int limit;
    if ((g_97146c & 1) == 0) {
        g_97146c |= 1;
        g_971468 = 10;
        limit = 10;
    } else {
        limit = g_971468;
    }
    int cur = m_8;
    int val = m_4;
    if (val > cur) {
        if (cur == 0) {
            m_8 = a;
            sub_00502080();
            return;
        }
        if (val >= limit) {
            float f = g_81e380;
            unsigned int t = (unsigned int)cur * 4;
            if (t > 0x61a80) {
                f = g_81e37c;
            } else if (t > 0xfa00) {
                f = g_81c434;
            }
            int tmp = cur;
            int r = sub_006a17f0();
            r = r - tmp;
            r = r + val;
            m_8 = r;
            int l = g_971468;
            if (r < l) {
                m_8 = l;
            }
            sub_00502080();
            return;
        }
        m_8 = limit;
        sub_00502080();
        return;
    }
    int q = cur / 3;
    if (val <= q && b != 0 && val > limit) {
        if (val < old) {
            val = old;
        }
        sub_00502080();
    }
}

// from server: 68% by colin
struct IStage {
    int field0;
    int field4;
    int field8;
    void resize(int newSize, int arg2);
    void func_599700(int oldSize);
};

extern float g_797b38;
extern float g_797b34;
extern float g_797988;
extern int g_8c683c;
extern int g_8c6840;

extern "C" int __cdecl func_630d60(float f);

void IStage::resize(int newSize, int arg2)
{
    int oldSize = this->field4;
    this->field4 = newSize;

    int flag = 1;
    if ((g_8c6840 & flag) == 0) {
        g_8c6840 |= flag;
        g_8c683c = 10;
    }

    int cap = this->field8;
    int cur = this->field4;

    if (cur > cap) {
        if (cap == 0) {
            this->field8 = newSize;
            this->func_599700(oldSize);
            return;
        }
        if (cur < g_8c683c) {
            this->field8 = g_8c683c;
            this->func_599700(oldSize);
            return;
        }

        float scale = g_797b38;
        int doubled = cap + cap;
        if (doubled > 0x61a80) {
            scale = g_797b34;
        } else if (doubled > 0xfa00) {
            scale = g_797988;
        }

        int tmp = cap;
        int result = func_630d60(scale * (float)tmp);
        result = result - tmp + cur;
        this->field8 = result;
        if (result < g_8c683c) {
            this->field8 = g_8c683c;
        }
        this->func_599700(oldSize);
        return;
    }

    int third = cap / 3;
    if (cur <= third && arg2 != 0 && cur > g_8c683c) {
        if (cur >= oldSize) {
            cur = oldSize;
        }
        this->func_599700(cur);
    }
}

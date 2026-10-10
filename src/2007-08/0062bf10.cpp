// from server: 67% by colin
struct MouseCommand {
    char pad[4];
    int field4;
    int field8;
};

struct GroupDragTool : MouseCommand {
    void update(int a, int b);
};

extern int g_8c8304;
extern int g_8c8308;
extern float g_797b38;
extern float g_797b34;
extern float g_797988;

extern "C" int __stdcall sub_599700(int);
extern "C" int __cdecl sub_630d60(int);

void GroupDragTool::update(int a, int b) {
    int old = field4;
    field4 = a;

    int limit;
    if (!(g_8c8308 & 1)) {
        g_8c8308 |= 1;
        limit = 10;
        g_8c8304 = limit;
    } else {
        limit = g_8c8304;
    }

    int cur8 = field8;
    int cur4 = field4;

    if (cur4 > cur8) {
        if (cur8 != 0) {
            field8 = a;
            sub_599700(old);
            return;
        }
        if (cur4 < limit) {
            field8 = limit;
            sub_599700(old);
            return;
        }

        float scale = g_797b38;
        unsigned int t = (unsigned int)cur8 * 4;
        if (t > 0x61a80) {
            scale = g_797b34;
        } else if (t > 0xfa00) {
            scale = g_797988;
        }

        int tmp = cur8;
        int prod = (int)((float)tmp * scale);
        int res = sub_630d60(prod);
        res = res - cur8 + cur4;
        field8 = res;
        if (res < g_8c8304) {
            field8 = g_8c8304;
        }
        sub_599700(old);
        return;
    }

    int third = cur8 / 3;
    if (cur4 <= third) {
        if (b != 0 && cur4 > limit) {
            if (cur4 >= old) {
                cur4 = old;
            }
            sub_599700(cur4);
        }
    }
}

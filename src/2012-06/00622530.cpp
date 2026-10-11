// from server: 34% by atomic.potato
struct WedgeBuilder {
    void sub_622530(int, int, int, int);
    void sub_621FE0(int, int, int, int);
    void sub_622010(int, int, int, int);
    void sub_622040(int, int, int, int);
    void sub_622080(int, int, int, int);
    void sub_6220B0(int, int, int, int);
    void sub_622500(int, int, int, int);
    void sub_61F290(int, int, int, int);
};

extern float g_b5abb8;
extern float g_b4c440;

void WedgeBuilder::sub_622530(int a, int b, int c, int d)
{
    switch (a) {
    case 0:
        sub_621FE0(*(int*)&g_b5abb8, *(int*)&g_b5abb8, 1, 1);
        break;
    case 1:
        sub_622010(*(int*)&g_b5abb8, 1, 1, 1);
        break;
    case 2:
        sub_622040(1, 1, 1, 1);
        break;
    case 3:
        sub_622080(*(int*)&g_b4c440, 1, 1, 1);
        break;
    case 4:
        sub_6220B0(1, 1, 1, 1);
        break;
    case 5:
        sub_622500(*(int*)&g_b5abb8, 1, 1, 1);
        break;
    }
}

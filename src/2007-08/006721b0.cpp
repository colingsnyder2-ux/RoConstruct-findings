// from server: 33% by colin
struct CXTPAccessible_006721b0 {
    void f();
};

extern unsigned char g_8c8d4c;
extern int g_8c8d14;
extern int g_8b5188;

void sub_00671fd0();
void sub_00630d23(int);

void CXTPAccessible_006721b0::f()
{
    if (!(g_8c8d4c & 1)) {
        g_8c8d4c |= 1;
        sub_00671fd0();
        sub_00630d23(0x77cc00);
    }
}

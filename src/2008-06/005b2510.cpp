// from server: 31% by colin
struct Sub {
    char pad[0x14];
    void destroy();
};

struct Accoutrement {
    char pad[0x154];
    int state;
    char pad2[0x188 - 0x158];
    Sub sub;
    void f(int, int);
    void method1();
    void method2();
    void method3();
    void method4();
    void method5();
    void method6();
    void method7();
};

void Accoutrement::f(int a, int b)
{
    while (b != state) {
        if (b > state) {
            switch (state) {
            case 0:
                method1();
                break;
            case 1:
                method2();
                break;
            case 2:
                method3();
                break;
            default:
                break;
            }
            int newState = state + 1;
            if (newState != state) {
                state = newState;
                method7();
            }
        } else {
            int old = state - 1;
            switch (old) {
            case 0:
                method4();
                break;
            case 1:
                method5();
                break;
            case 2:
                sub.destroy();
                break;
            default:
                break;
            }
            int newState = state - 1;
            if (newState != state) {
                state = newState;
                method7();
            }
        }
    }
}

// from server: 44% by colin
struct Sub {
    char pad[0x14];
    void destroy();
};

struct Accoutrement {
    char pad[0x154];
    int state;
    char pad2[0x188 - 0x158];
    Sub sub;
    void step1();
    void step2();
    void step3();
    void step4();
    void step5();
    void step6();
    void notify(int);
    void setState(int);
    void f(int, int);
};

void Accoutrement::f(int target, int unused)
{
    while (target != state) {
        if (target > state) {
            switch (state) {
            case 0:
                step1();
                break;
            case 1:
                step2();
                break;
            case 2:
                step3();
                break;
            default:
                break;
            }
            setState(state + 1);
        } else {
            switch (state - 1) {
            case 0:
                step4();
                break;
            case 1:
                step5();
                break;
            case 2:
                sub.destroy();
                break;
            default:
                break;
            }
            setState(state - 1);
        }
    }
}

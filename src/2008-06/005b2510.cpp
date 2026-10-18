// from server: 57% by colin
struct Sub {
    char pad[0x14];
    void destroy();
};

struct Accoutrement {
    char pad[0x154];
    int state;
    char pad2[0x188 - 0x158];
    Sub sub;
    void step0();
    void step1();
    void step2();
    void back0();
    void back1();
    void back2();
    void notify(const char*);
    void f(int, int);
};

void Accoutrement::f(int target, int unused)
{
    do {
        if (target > state) {
            switch (state) {
            case 0:
                step0();
                break;
            case 1:
                step1();
                break;
            case 2:
                step2();
                break;
            default:
                break;
            }
            int n = state + 1;
            if (n != state) {
                state = n;
                notify((const char*)0x976ccc);
            }
        } else if (target < state) {
            int s = state - 1;
            switch (s) {
            case 0:
                back0();
                break;
            case 1:
                back1();
                break;
            case 2:
                back2();
                break;
            case 3:
                sub.destroy();
                break;
            default:
                break;
            }
            int n = state - 1;
            if (n != state) {
                state = n;
                notify((const char*)0x976ccc);
            }
        }
    } while (target != state);
}

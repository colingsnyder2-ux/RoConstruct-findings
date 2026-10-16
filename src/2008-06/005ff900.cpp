// from server: 24% by colin
struct Mouse {
    char pad[0x1c4];
    int state;
    char pad2[0x204 - 0x1c8];
    char sub204;
    void setState(int);
    void update();
    void methodA();
    void methodB();
    void methodC();
    void methodD();
    void methodE();
    void methodF();
    void methodG();
    void methodH();
    void methodI();
};

extern "C" void __stdcall sub_40db00(int);
extern "C" void __stdcall sub_595230(int);
extern "C" void __stdcall sub_5fd4c0();
extern "C" void __stdcall sub_5fd4e0();
extern "C" void __stdcall sub_5fe6d0();
extern "C" void __stdcall sub_5fec80();
extern "C" void __stdcall sub_5fed60();
extern "C" void __stdcall sub_5feed0();
extern "C" void __stdcall sub_5ff050();
extern "C" void __stdcall sub_5ff750(int);

void Mouse::setState(int target)
{
    while (target != state) {
        if (target > state) {
            switch (state) {
            case 0:
                sub_5fe6d0();
                break;
            case 1:
                sub_5feed0();
                break;
            case 2:
                sub_5fed60();
                break;
            case 3:
                sub_5fec80();
                break;
            default:
                break;
            }
            int newState = state + 1;
            if (newState != state) {
                sub_5ff750(newState);
                sub_40db00(0x97b7e0);
            }
        } else {
            switch (state) {
            case 0:
                sub_5ff050();
                break;
            case 1:
                sub_5fd4e0();
                break;
            case 2:
                sub_5fd4c0();
                break;
            case 3:
                sub_595230(0);
                break;
            default:
                break;
            }
            int newState = state - 1;
            if (newState != state) {
                sub_5ff750(newState);
                sub_40db00(0x97b7e0);
            }
        }
    }
}

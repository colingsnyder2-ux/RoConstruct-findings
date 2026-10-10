// from server: 47% by colin
struct SleepStage {
    char pad[0x20];
    char field20[0x48];
    char field68[0x100];
    void stepSleepStage(int);
};

struct Helper1 {
    char data[0x18];
    Helper1();
};

struct Helper2 {
    char data[0x18];
    void method(int, char, int);
};

void SleepStage::stepSleepStage(int arg) {
    Helper1 h1;
    char bl = h1.data[0];
    int ebp = *(int*)(h1.data + 4);
    Helper2* p2 = (Helper2*)((char*)this + 0x20);
    p2->method(arg, bl, ebp);
    Helper2* p3 = (Helper2*)((char*)this + 0x68);
    p3->method(arg, bl, ebp);
}

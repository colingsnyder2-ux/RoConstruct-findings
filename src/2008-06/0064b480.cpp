// from server: 69% by colin
// roc 2008-06 0064b480  unit: RBX::SleepStage  size: 346 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064b480

extern "C" void __cdecl free(void*);

struct SleepStage {
    char pad0[8];
    void* p08;
    char pad0c[4];
    void* p10;
    void* p14;
    void* p18;
    void* p1c;
    void* p20;
    void* p24;
    void* p28;
    void* p2c;
    void* p30;
    void* p34;
    void* p38;
    void* p3c;
    void* p40;
    void* p44;
    void* p48;
    void* p4c;
    void* p50;
    void* p54;
    void* p58;
    void* p5c;
    void* p60;
    void* p64;
    void* p68;
    void* p6c;
    void* p70;
    void* p74;
    void* p78;
    void* p7c;
    void* p80;
    void* p84;
    void* p88;
    void* p8c;
    void* p90;
    void* p94;
    void* p98;
    void* p9c;
    void* pa0;
    char pad_a4[8];
    void* pac;
    void* pb0;
    void* pb4;

    void destroy();
};

void SleepStage::destroy()
{
    if (this->pac != 0) {
        free(this->pac);
    }
    this->pac = 0;
    this->pb0 = 0;
    this->pb4 = 0;
    free(this->pa0);

    if (this->p94 != 0) {
        free(this->p94);
    }
    this->p94 = 0;
    this->p98 = 0;
    this->p9c = 0;
    free(this->p88);

    if (this->p7c != 0) {
        free(this->p7c);
    }
    this->p7c = 0;
    this->p80 = 0;
    this->p84 = 0;
    free(this->p70);

    if (this->p64 != 0) {
        free(this->p64);
    }
    this->p64 = 0;
    this->p68 = 0;
    this->p6c = 0;
    free(this->p58);

    if (this->p4c != 0) {
        free(this->p4c);
    }
    this->p4c = 0;
    this->p50 = 0;
    this->p54 = 0;
    free(this->p40);

    if (this->p34 != 0) {
        free(this->p34);
    }
    this->p34 = 0;
    this->p38 = 0;
    this->p3c = 0;
    free(this->p28);

    if (this->p1c != 0) {
        free(this->p1c);
    }
    this->p1c = 0;
    this->p20 = 0;
    this->p24 = 0;
    free(this->p10);

    if (this->p08 != 0) {
        void** v = (void**)this->p08;
        void (*fn)(void*) = (void (*)(void*))v[0];
        fn((void*)1);
    }
}

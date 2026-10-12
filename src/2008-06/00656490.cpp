// from server: 73% by king_originala
struct S {
    unsigned int slots[79];
    float value13c;
    float value140;
    unsigned int value144;
    unsigned int value148;

    S* initializeBase();
    S* initialize();
};

S* S::initialize()
{
    initializeBase();

    slots[0] = 0x0084bdcc;
    slots[4] = 0x0084bdbc;
    slots[5] = 0x0084bdb4;
    slots[8] = 0x0084bdac;
    slots[9] = 0x0084bd9c;
    slots[17] = 0x0084bd8c;
    slots[25] = 0x0084bd7c;
    slots[33] = 0x0084bd6c;
    slots[41] = 0x0084bd5c;
    slots[49] = 0x0084bd4c;
    slots[76] = 0x0084bd44;

    value13c = *reinterpret_cast<const float*>(0x00827490);
    value140 = *reinterpret_cast<const float*>(0x008163a4);
    value144 = 0;
    value148 = 0;

    return this;
}

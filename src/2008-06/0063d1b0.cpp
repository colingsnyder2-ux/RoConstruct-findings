// from server: 67% by king_originala
extern "C" int __cdecl func_005c3a40();

struct S {
    unsigned char data[0x404];
    S* func_0063c650(int);
    S* func_0063d1b0(int);
    ~S();
};

struct ConstructionGuard {
    S* object;
    bool complete;
    ConstructionGuard(S* p) : object(p), complete(false) {}
    ~ConstructionGuard() { if (!complete) object->~S(); }
};

S* S::func_0063d1b0(int initialize)
{
    volatile int state = 0;
    if (initialize) {
        *(int*)(data + 0x134) = 0x849e6c;
        *(int*)(data + 0x400) = 0x846144;
    }

    func_0063c650(0);
    ConstructionGuard guard(this);
    *(int*)(data + 0x1c) = func_005c3a40();

    int* table = *(int**)(data + 0x134);
    *(int*)(data + 0x000) = 0x849e04;
    *(int*)(data + 0x010) = 0x849df4;
    *(int*)(data + 0x014) = 0x849dec;
    *(int*)(data + 0x020) = 0x849de4;
    *(int*)(data + 0x024) = 0x849dd4;
    *(int*)(data + 0x044) = 0x849dc4;
    *(int*)(data + 0x064) = 0x849db4;
    *(int*)(data + 0x084) = 0x849da4;
    *(int*)(data + 0x0a4) = 0x849d94;
    *(int*)(data + 0x0c4) = 0x849d84;
    *(int*)(data + 0x130) = 0x849d78;
    *(int*)(data + 0x1a0) = 0x849d68;
    *(int*)(data + 0x1c0) = 0x849d5c;
    *(int*)(data + 0x1cc) = 0x849d44;

    *(int*)(data + 0x134 + table[1]) = 0x849d38;
    *(int*)(data + 0x134 + (*(int**)(data + 0x134))[2]) = 0x849d30;
    *(int*)(data + 0x134 + (*(int**)(data + 0x134))[3]) = 0x849d14;

    int offset = (*(int**)(data + 0x134))[1];
    *(int*)(data + 0x130 + offset) = offset - 0x2b8;
    offset = (*(int**)(data + 0x134))[2];
    *(int*)(data + 0x130 + offset) = offset - 0x2c0;
    offset = (*(int**)(data + 0x134))[3];
    *(int*)(data + 0x130 + offset) = offset - 0x2c8;

    guard.complete = true;
    return this;
}

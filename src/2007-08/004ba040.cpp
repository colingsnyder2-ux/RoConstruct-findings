// from server: 81% by colin
struct RakPeer {
    bool checkSomething();
    void writeBits(const void* data, int bits, int flag);
    void sendSomething(int a, int b, int c);
};

void RakPeer::sendSomething(int a, int b, int c) {
    if (checkSomething()) {
        int v = a;
        writeBits(&v, 0x20, 1);
        unsigned short s = (unsigned short)v;
        writeBits(&s, 0x10, 1);
    }
    unsigned short t = (unsigned short)c;
    writeBits(&t, 0x10, 1);
}

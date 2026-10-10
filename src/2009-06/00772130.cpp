// from server: 54% by colin
struct CXTPPrintOptions {
    unsigned char pad0[0x20];
    int field20;
    int field24;
    int field28;
    int field2c;
    virtual int vfunc();
    void getRect(int* out);
};

void CXTPPrintOptions::getRect(int* out)
{
    if (vfunc() == 0) {
        out[0] = field20;
        out[1] = field24;
        out[2] = field28;
        out[3] = field2c;
    } else {
        out[0] = field20 * 0xfe / 0x3e80;
        out[1] = field24 * 0xfe / 0x3e80;
        out[2] = field28 * 0xfe / 0x3e80;
        out[3] = field2c * 0xfe / 0x3e80;
    }
}

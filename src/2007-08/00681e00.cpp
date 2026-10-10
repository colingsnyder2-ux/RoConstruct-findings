// from server: 54% by colin
struct CXTPReportViewPrintOptions {
    char pad0[0x20];
    int field20;
    int field24;
    int field28;
    int field2C;
    int GetFlag();
    void GetRect(int* out);
};

void CXTPReportViewPrintOptions::GetRect(int* out) {
    if (GetFlag() == 0) {
        out[0] = field20;
        out[1] = field24;
        out[2] = field28;
        out[3] = field2C;
    } else {
        out[0] = field20 * 0xFE / 0x3E8;
        out[1] = field24 * 0xFE / 0x3E8;
        out[2] = field28 * 0xFE / 0x3E8;
        out[3] = field2C * 0xFE / 0x3E8;
    }
}

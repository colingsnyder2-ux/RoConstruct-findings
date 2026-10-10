// from server: 74% by colin
struct CXTPControlComboBoxPopupBar {
    char pad_0[0x98];
    int field_98;
    int sub_643c80(int* a, int b, int c, int d, int e);
};

extern "C" int __stdcall sub_6713d0(int* a);

int CXTPControlComboBoxPopupBar::sub_643c80(int* a, int b, int c, int d, int e) {
    int local;
    *(unsigned short*)a = 0;
    int result = sub_6713d0(&local);
    if (result == 0) {
        *(unsigned short*)a = 3;
        int v = field_98;
        if (v == 0) {
            *(int*)((char*)a + 8) = 2;
            return 0;
        }
        int t = v - 2;
        unsigned int neg = (unsigned int)(-(int)t);
        int sbb = (int)(neg > (unsigned int)t ? 0xffffffff : 0);
        int r = (sbb & 0xb) + 0xb;
        *(int*)((char*)a + 8) = r;
        return 0;
    }
    if (result > 0) {
        *(unsigned short*)a = 3;
        *(int*)((char*)a + 8) = 0xc;
        return 0;
    }
    return (int)0x80070057;
}

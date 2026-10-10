// from server: 58% by colin
struct CKeyHelper {
    int field0;
    unsigned char* field4;
    void sub_6A4380(int, int, int);
    void sub_6A48C0(int);
};

extern "C" {
    int __stdcall sub_77D558(int);
    int __stdcall sub_77D568(int);
    int __stdcall sub_77DCC8(int);
    int __stdcall sub_77D92C(int, int);
    int __stdcall sub_77D434(int, int);
    int __stdcall sub_77DDBC(int);
}

void CKeyHelper::sub_6A48C0(int param) {
    int local;
    sub_77D558(param);
    if (field4 != 0) {
        if (*(unsigned short*)(field4 + 2) != 3) {
            if ((*field4 & 8) != 0) {
                sub_6A4380(param, 0x11, 0);
            }
            if ((*field4 & 4) != 0) {
                sub_6A4380(param, 0x10, 0);
            }
            if ((*field4 & 0x10) != 0) {
                sub_6A4380(param, 0x12, 0);
            }
        }
        unsigned short ax = *(unsigned short*)(field4 + 2);
        if (ax != 0) {
            if ((*field4 & 1) != 0) {
                sub_6A4380(param, ax, 1);
                return;
            }
            if (ax != 0x1b) return;
            if (ax == 9) return;
            sub_77D568(field4[2]);
            return;
        }
        if (sub_77DCC8(param) > 0) {
            int n = sub_77DCC8(param) - 1;
            int p = sub_77D92C(param, n);
            local = 0;
            sub_77D434(param, p);
            sub_77DDBC((int)&local);
        }
    }
}

// from server: 30% by colin
struct CXTCaptionButtonTheme {
    bool sub_60B600(void* arg);
    void sub_60B310(void* a, void* b, void* c);
    void sub_60B4C0(void* a, void* b);
    void sub_60B420(void* a, void* b);
    void sub_60B590(void* a);
};

bool CXTCaptionButtonTheme::sub_60B600(void* arg) {
    int* p = (int*)arg;
    int* v8 = (int*)p[2];
    int* v12 = (int*)p[3];
    int* esi = (int*)v8[0x64 / 4];
    int* edi = (int*)v12[0x64 / 4];
    int* edx;
    if (edi[2] != (int)esi) {
        edx = v8;
    } else {
        int t = 0;
        if (esi[2] != (int)edi) {
            t = 1;
        }
        t = t - 1;
        edx = (int*)(t & (int)v12);
    }
    int* eax;
    if (edx == v8) {
        eax = v12;
    } else {
        eax = v8;
    }
    void* local;
    this->sub_60B310(&local, eax, eax);
    int* edi2 = (int*)local;
    if (edi2 == 0) {
        return false;
    }
    int* eax2 = (int*)local;
    int* esi2 = (int*)eax2[2];
    if (edi2 == esi2) {
        esi2 = (int*)eax2[3];
    }
    this->sub_60B4C0(esi2, p);
    this->sub_60B420(esi2, edi2);
    this->sub_60B590(esi2);
    return true;
}

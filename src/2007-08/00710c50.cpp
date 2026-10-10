// from server: 49% by colin
// roc 2007-08 00710c50  unit: CXTPOffice2007Image  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00710c50

extern "C" {
    void __stdcall sub_77dd74(void*);
    void __stdcall sub_77ddb8(void*);
    int  __stdcall sub_77dcd0(void*);
    void __stdcall sub_77d434(void*, void*);
    void __stdcall sub_77e3e4(void*, int, int);
    void __stdcall sub_77ddbc(void*);
}

struct CXTPOffice2007Image {
    void sub_710950(void*);
    void sub_710c50(void* a, void* b);
};

void CXTPOffice2007Image::sub_710c50(void* a, void* b) {
    char buf1[8];
    char buf2[8];
    char buf3[8];
    void* p;

    *(void**)buf1 = 0;
    sub_77dd74(&buf3);
    sub_77ddb8(&buf3);
    sub_710950(buf1);
    if (!sub_77dcd0(buf1)) {
        sub_77d434(buf1, &buf3);
    }
    sub_77e3e4(&buf3, 0x2e, 0x5f);
    sub_77e3e4(&buf3, 0x5c, 0x5f);
    p = *(void**)buf2;
    sub_77dd74(&buf3);
    sub_77ddbc(buf1);
    sub_77ddbc(&buf3);
}

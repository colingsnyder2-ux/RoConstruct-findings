// from server: 34% by colin
// roc 2008-06 007adfb0  unit: RBX::RenderNew::TextureProxy  size: 454 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007adfb0

struct S {
    char pad0[0x14];
    unsigned int len;
    char pad1[0x4];
    char* ptr;
    char pad2[0x4];
    void __cdecl load(const char* a, const char* b);
};

extern "C" {
    void* __stdcall sub_802458(const char*);
    void* __stdcall sub_8023e4(void*, const char*, int);
    void* __stdcall sub_8023e0(void*, int, int, void*);
    void* __stdcall sub_802498(void*, int, const char*, int);
    void  __stdcall sub_802468(void*);
    int   __stdcall sub_50edb0(void*);
    void  __stdcall sub_569620(void*);
    void* __stdcall sub_804c4c(void*, void*, void*);
    void* __stdcall sub_8023e8();
}

void S::load(const char* a, const char* b) {
    char buf1[0x1c];
    char buf2[0x1c];
    char buf3[0x1c];
    char buf4[0x1c];
    int i;
    char found;
    for (i = 0; i < 0xd; i++) {
        const char* s = *(const char**)((char*)this + i * 4);
        int n = 0;
        while (s[n]) n++;
        sub_802458((const char*)0x81ca8c);
        sub_8023e4(buf2, s, n);
        sub_8023e0(buf3, this->len - n - 1, this->len - n - 1, buf2);
        found = (sub_802498(buf3, 0, s, n) != 0);
        sub_802468(buf3);
        sub_802468(buf2);
        sub_802468(buf1);
        if (found) break;
    }
    if (found) {
        sub_802458((const char*)0x8163c4);
        sub_804c4c((void*)0, this, buf3);
        sub_802468(buf3);
    } else {
        if (sub_50edb0(this) != 9) {
            sub_569620(buf4);
        }
    }
}

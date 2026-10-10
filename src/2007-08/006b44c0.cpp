// from server: 66% by colin
struct CXTPControlGallery {
    void sub_6b3610();
    void func(int* out);
};

void CXTPControlGallery::func(int* out) {
    if (*(int*)((char*)this + 0x88) == 0) {
        out[0] = 0;
        out[1] = 0;
        out[2] = 0;
        out[3] = 0;
        return;
    }

    int v1 = *(int*)((char*)this - 0xb4);
    int v2 = *(int*)((char*)this - 0xb8);
    int v3 = *(int*)((char*)this - 0x178);
    int v4 = *(int*)((char*)this - 0xb0);
    int v5 = *(int*)((char*)this - 0xac);

    int (*fn)(void*) = *(int(**)(void*))((char*)v3 + 0x8c);
    int r = fn((char*)this - 0x178);

    int (*fn2)(void*) = *(int(**)(void*))((char*)this);
    int e;
    if (r != 0) {
        e = *(int*)((char*)fn2(this) + 0x1c);
    } else {
        e = *(int*)((char*)fn2(this) + 0x10);
    }

    int a = v4 - e;

    if (*(int*)((char*)this + 0x8c) != 0) {
        v2++;
        v5--;
        v4--;
        a--;
    }

    int r2 = ((int(*)(void*))0x6b3610)((char*)this - 0x178);
    if (r2 != 0) {
        v5 -= 2;
    }

    out[0] = a;
    out[1] = v2;
    out[2] = v4;
    out[3] = v5;
}

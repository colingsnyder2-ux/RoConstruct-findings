// from server: 76% by colin
extern "C" __declspec(dllimport) unsigned int __stdcall SetTimer(void*, unsigned int, unsigned int, void*);

struct CXTPControlGallery {
    int sub_6B66B0(int, int, int);
    void sub_6B7220();
    void* sub_6B3580();
    void sub_6B3D90(void*, int);
    void* sub_6B67C0(void*, int);
    void sub_63C4A0(int);
    void sub_6B7D80(int, int);
};

void CXTPControlGallery::sub_6B7D80(int a2, int a3) {
    int v4 = this->sub_6B66B0(a2, a3, 0);
    if (v4 == -1) {
        if (*(int*)((char*)this + 0x1f4) != 0)
            return;
        if (a2 != -1)
            goto label_7dcd;
        if (a3 != -1)
            goto label_7dcd;
        if (*(int*)((char*)this + 0x1e4) == -1)
            goto label_7dcd;
        this->sub_6B7220();
        return;
    }
label_7dcd:
    if (v4 == *(int*)((char*)this + 0x1e4) && *(int*)((char*)this + 0x1e8) == 0 && *(int*)((char*)this + 0x1f4) == 0)
        return;
    int old = *(int*)((char*)this + 0x1e4);
    *(int*)((char*)this + 0x1e4) = v4;
    *(int*)((char*)this + 0x1e8) = 0;
    *(int*)((char*)this + 0x1f4) = 0;
    *(int*)((char*)this + 0x1ec) = 0;
    void* p = this->sub_6B3580();
    if (p != 0 && *(int*)((char*)p + 0x2c) != 0) {
        if (old != -1) {
            void* q = this->sub_6B67C0((char*)this + 0x10, old);
            this->sub_6B3D90(q, 1);
        }
        int v = *(int*)((char*)this + 0x1e4);
        if (v != -1) {
            void* q = this->sub_6B67C0((char*)this + 0x10, v);
            this->sub_6B3D90(q, 0);
        } else {
            this->sub_6B3D90(0, 1);
        }
    } else {
        this->sub_6B3D90(0, 1);
    }
    if (*(int*)((char*)this + 0x218) == 0) {
        if (*(int*)((char*)this + 0x1e4) != -1) {
            void* h = *(void**)((char*)this + 0xfc);
            SetTimer(*(void**)((char*)h + 0x20), 0x1b65f, 0xc8, 0);
        }
        if (*(int*)((char*)this + 0x218) == 0)
            goto label_7e93;
    }
    this->sub_63C4A0(0x1013);
label_7e93:
    if (*(int*)((char*)this + 0x1e4) == -1) {
        if (*(int*)((char*)this + 0x218) != 0) {
            *(int*)((char*)this + 0x218) = 0;
            this->sub_63C4A0(0x1011);
        }
    }
}

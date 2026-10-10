// from server: 51% by colin
// roc 2007-08 006e3030  unit: CXTPDockingPaneTabbedContainer  size: 583 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e3030

struct CXTPDockingPaneTabbedContainer {
    void* vtable;
    char pad[0x1c];
    void* field20;
    char pad2[0x30];
    void* field54;
    char pad3[0x50];
    void* fielda8;
    char pad4[0x54];
    void* field100;
    int field104;
    char pad5[0x98];
    int field1a0;
    int field1a4;
    void* field1a8;
    char pad6[4];

    int method(int, int, int);
    void sub_6e0b90();
    int sub_6e14a0(int, int);
    int sub_6e17d0(int, int);
    int sub_6e1eb0(int);
    int sub_6e1f80(int);
    int sub_6e0540(int, int, int, int);
    int sub_6ebae0(int, int, int, int);
    int sub_6ff7c0(int, int, int, int);
    int sub_6febf0(int, int, int);
    int sub_6c8c50(int, int, int);
    int sub_6c8da0(int, int);
    int sub_66e000();
    int sub_6301c0(int);
};

extern "C" {
    int __stdcall ClientToScreen(void*, void*);
    int __stdcall InvalidateRect(void*, const void*, int);
    void* __stdcall SetCapture(void*);
}

int CXTPDockingPaneTabbedContainer::method(int a, int b, int c)
{
    int result = this->sub_6e17d0(b, c);
    if (result != 0) {
        this->sub_6e0b90();
        if (this->field1a0 != 0) {
            if (this->sub_6e1eb0(result) != 0)
                return 0;
        }
        if (this->sub_6ebae0(result, b, c, 1) == 0)
            return 0;
        if (this->field1a0 == 0)
            return 0;
        int (*vt0x150)(int);
        vt0x150 = *(int (**)(int))((char*)this->vtable + 0x150);
        vt0x150(result);
        return 0;
    }
    int (*vt0x144)(void);
    vt0x144 = *(int (**)(void))((char*)this->vtable + 0x144);
    if (vt0x144() != 0) {
        if (this->sub_6ff7c0((int)this->field20, b, c, 1) != 0)
            return 0;
    }
    int r = this->sub_6e14a0(b, c);
    if (r == -2) {
        int (*vt0x1c)(void);
        vt0x1c = *(int (**)(void))((char*)this->field54 + 0x1c);
        if (vt0x1c() != 0)
            return 0;
        int pt[2];
        ClientToScreen(this->field20, pt);
        int (*vt0x148)(int, int);
        vt0x148 = *(int (**)(int, int))((char*)this->vtable + 0x148);
        vt0x148(pt[0], pt[1]);
        return 0;
    }
    if (r < 0)
        return 0;
    int ebp = this->sub_6e1f80(r);
    int eax = this->sub_6e0540(0x11, ebp, 0, 0);
    if (this->sub_66e000() != 0) {
        int (*vt0x13c)(int, int, int);
        vt0x13c = *(int (**)(int, int, int))((char*)this->vtable + 0x13c);
        vt0x13c(ebp, 1, 0);
        this->sub_6febf0((int)this->field20, b, c);
        InvalidateRect(this->field20, 0, 0);
        return 0;
    }
    this->sub_6c8c50(0, -1, 0);
    int i = 0;
    while (i < this->field104) {
        int* p;
        if (i >= 0 && i < this->field104)
            p = (int*)((char*)this->field100 + i * 4);
        else
            p = 0;
        int v0 = *(int*)((char*)p + 0x44);
        int v1 = *(int*)((char*)p + 0x48);
        int v2 = *(int*)((char*)p + 0x4c);
        int v3 = *(int*)((char*)p + 0x50);
        int rect[4];
        rect[0] = v0;
        rect[1] = v1;
        rect[2] = v2;
        rect[3] = v3;
        this->sub_6c8da0(*(int*)((char*)this->field1a8 + 8), (int)rect);
        i++;
    }
    int (*vt0x13c2)(int, int, int);
    vt0x13c2 = *(int (**)(int, int, int))((char*)this->vtable + 0x13c);
    this->field1a4 = ebp;
    vt0x13c2(ebp, 1, 0);
    this->sub_6febf0((int)this->field20, b, c);
    SetCapture(this->field20);
    this->sub_6301c0((int)this->field20);
    InvalidateRect(this->field20, 0, 0);
    return 0;
}

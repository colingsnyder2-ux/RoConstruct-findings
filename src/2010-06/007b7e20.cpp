// from server: 40% by atomic.potato
// roc 2008-06 007b7e20  unit: CPatchedControlComboBox  size: 485 bytes

struct CComboBox;
struct CXTPControl;

struct CComboBox {
    void* vftable;
    char pad[0x1c];
    void* field20;
};

struct CXTPControlComboBox {
    char pad0[0x100];
    void* field100;
    char pad104[0x70];
    void* field174;
    char pad178[0xc];
    void* field184;
    char pad188[0xc];
    void* field194;
    char pad198[0x18];
    void* field1b0;
    char pad1b4[0x1c];
    void* field1d0;

    void sub_7b4100(void*);
    void sub_7b4fe0(void*);
    void sub_7b5040(void*);
    void sub_7b6af0(void*);
    void sub_7b6c30();
    void sub_7b7b10(int);
    void sub_7ba710(int, int);
    void sub_7bb200();
    void sub_7b7e20(int);
};

extern "C" {
    void __stdcall sub_9ecdec();
    void __stdcall sub_9eceb0();
    void __stdcall sub_9eceb4();
    void __stdcall sub_9ecee8();
    void __stdcall sub_9ecef0();
    void __stdcall sub_9ec580();
}

void CXTPControlComboBox::sub_7b7e20(int arg)
{
    char buf1[8];
    char buf2[8];
    char buf3[8];
    char buf4[8];
    char flag;

    sub_7b4100(buf1);
    flag = 1;
    sub_9ecdec();
    if (*(int*)((char*)this + 0x184) == 0) goto fail;
    if (*(int*)(*(int*)((char*)this + 0x184) + 0x20) == 0) goto fail;

    sub_7b4fe0(buf2);
    sub_7b4100(buf3);
    sub_9eceb0();
    sub_9eceb4();
    flag = 1;
    if (0) goto fail;
    goto done;

fail:
    flag = 0;
done:
    sub_9ecef0();
    sub_9ecef0();
    sub_9ecef0();

    if (flag) {
        sub_9ecee8();
        sub_7b5040(buf4);
        sub_9ecef0();
    }

    sub_7b6af0(buf1);
    sub_9ec580();
    sub_9ecef0();

    *(int*)((char*)this + 0x1b0) = 1;
    sub_7b6c30();

    if (*(int*)(*(int*)((char*)this + 0x100) + 0xd4) == 0) {
        int e = arg;
        if (e == 0) {
            sub_7bb200();
            if (e == 0) goto skip;
        }
        e = *(int*)(e + 0x20);
    skip:
        *(int*)(*(int*)((char*)this + 0x100) + 0xd4) = e;
    }

    if (*(int*)((char*)this + 0x174) == 0) {
        sub_7ba710(0, 0);
    }

    (*(void(__thiscall**)(void*, int))(*(int*)this + 0x70))(this, 1);

    void* p = *(void**)((char*)this + 0x1d0);
    if (p) {
        sub_7b7b10(1);
    }
}

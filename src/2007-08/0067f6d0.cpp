// from server: 42% by colin
// roc 2007-08 0067f6d0  unit: CXTPControlSelector  size: 293 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f6d0

extern "C" {
    int __stdcall GetObjectA(void*, int, void*);
    void* __stdcall GetStockObject(int);
    int __cdecl _mbsicmp(const unsigned char*, const unsigned char*);
}

extern void* __stdcall sub_77D09C(int, int, void*);
extern void* __stdcall sub_77D0CC(void*);
extern void __stdcall sub_77DDB8(void*, const char*);
extern void* __stdcall sub_77DD98(void*);
extern void __stdcall sub_77DD6C(void*, const void*);
extern int __stdcall sub_77E71C(void*, const char*);

extern void __cdecl sub_630B8C(void*, int, int);
extern void __cdecl sub_630A1E(void);
extern void* __cdecl sub_671140(void);
extern char __cdecl sub_6711A0(void*);
extern int __cdecl sub_67F650(const char*);

extern const char str_7CEAFC[];
extern const char str_7CEB04[];
extern const char str_7A0FD4[];

struct CXTPControlSelector {
    void* f6d0(void*);
};

void* CXTPControlSelector::f6d0(void* arg)
{
    char buf[0x3c];
    int flag;
    char bl;

    sub_630B8C(buf, 0, 0x3c);
    *(void**)(buf + 4) = arg;
    *(int*)buf = 0;

    void* hdc = sub_77D09C(0x11, 0x3c, buf);
    void* obj = sub_77D0CC(hdc);

    bl = (buf[0x17] > 2);

    if (bl) {
        void* p = sub_671140();
        if (!sub_6711A0(p)) {
            bl = 0;
        } else {
            if (sub_77E71C(buf + 0x1c, str_7CEB04) != 0) {
                bl = 0;
            }
        }
    }

    sub_77DDB8(this, str_7CEAFC);

    flag = 0;

    if (bl) {
        sub_77DD6C(this, buf + 0x1c);
    } else {
        void* p = sub_77DD98(this);
        if (sub_67F650((const char*)p) != 0) {
            if (flag != 0) {
                if (sub_67F650(str_7A0FD4) != 0) {
                    sub_77DD6C(this, str_7A0FD4);
                } else {
                    sub_77DD6C(this, buf + 0x1c);
                }
            } else {
                sub_77DD6C(this, buf + 0x1c);
            }
        } else {
            sub_77DD6C(this, buf + 0x1c);
        }
    }

    return this;
}

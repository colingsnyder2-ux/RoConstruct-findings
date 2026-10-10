// from server: 46% by colin
struct CXTPStatusBar {
    void method(int, int);
    char pad[0x9c];
    int count;
};

extern "C" int __stdcall GetWindowRect(void*, void*);
extern "C" int __stdcall OffsetRect(void*, int, int);

extern "C" void* __stdcall sub_630bb0(int);
extern "C" void __stdcall sub_630a1e();
extern "C" void* __stdcall sub_692c60(void*, int);
extern "C" int __stdcall sub_6921f0(void*);
extern "C" void __stdcall sub_692e40(void*, int, void*, int);
extern "C" void __stdcall sub_6931a0(void*);

void CXTPStatusBar::method(int a, int b) {
    if (this == 0) return;
    if (*(int*)((char*)this + 0x20) == 0) return;

    if (a != 0) {
        int rect[4];
        GetWindowRect(*(void**)((char*)this + 0x20), rect);
        rect[0] = -rect[0];
        rect[1] = -rect[1];
        OffsetRect(rect, rect[0], rect[1]);

        void** vtbl = *(void***)this;
        void (__stdcall *fn1)(void*, int*, int) = (void (__stdcall *)(void*, int*, int))vtbl[0x148/4];
        fn1(this, rect, 1);

        void (__stdcall *fn2)(void*, int*, int, int) = (void (__stdcall *)(void*, int*, int, int))vtbl[0x118/4];
        int out;
        fn2(this, &out, 0x407, 0);

        int total = rect[2] - rect[0] + rect[3];
        int extra = 0;
        int num = 0;
        int i;
        for (i = 0; i < *(int*)((char*)this + 0x9c); i++) {
            void* p = sub_692c60(this, i);
            *(int*)((char*)p + 0x54) = i;
            if (sub_6921f0(p)) {
                *(int*)((char*)p + 0x58) = 0;
                num++;
                if (*(int*)((char*)p + 0x28) & 0x8000000) {
                    extra++;
                }
                total += 0xfffffffa - *(int*)((char*)p + 0x24) - rect[3];
            }
        }

        int* arr = (int*)sub_630bb0(num * 4);
        int base = out;
        int j;
        int* slot = arr;
        for (j = 0; j < *(int*)((char*)this + 0x9c); j++) {
            void* p = sub_692c60(this, j);
            if (sub_6921f0(p)) {
                base += *(int*)((char*)p + 0x24) + 6;
                if ((*(int*)((char*)p + 0x28) & 0x8000000) && total > 0) {
                    int d = total / extra;
                    extra--;
                    base += d;
                    total -= d;
                }
                *slot = base;
                slot++;
                base += rect[3];
            }
        }

        void (__stdcall *fn3)(void*, int, int*) = (void (__stdcall *)(void*, int, int*))vtbl[0x118/4];
        fn3(this, 0x404, arr);
        sub_6931a0(this);
    }

    if (b != 0) {
        int k;
        for (k = 0; k < *(int*)((char*)this + 0x9c); k++) {
            void* p = sub_692c60(this, k);
            if (sub_6921f0(p)) {
                if (*(unsigned char*)((char*)p + 0x2c) & 1) {
                    sub_692e40(this, k, (char*)p + 0x30, 1);
                }
            }
        }
    }
}

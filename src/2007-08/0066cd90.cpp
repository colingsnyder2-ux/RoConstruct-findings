// from server: 62% by colin
struct CXTPToolBar {
    struct PAVCToolBarInfo {
        int f0;
        int f1;
        int f2;
        int f3;
        int f4;
        int f5;
        int f6;
        int f7;
        int f8;
        int f9;
        int f10;
        int f11;
        int f12;
        int f13;
        int f14;
        int f15;
        int f16;
        int f17;
        int f18;
        int f19;
        int f20;
        int f21;
        int f22;
        int f23;
        int f24;
        int f25;
        int f26;
        int f27;
        int f28;
        int f29;
        int f30;
        int f31;
        int f32;
        int f33;
        int f34;
        int f35;
        int f36;
        int f37;
        int f38;
        int f39;
        int f40;
    };

    void Process(PAVCToolBarInfo* info);
};

extern "C" int __stdcall sub_6329A0(int);
extern "C" int __stdcall sub_631DE0(int);
extern "C" int __stdcall sub_66ABB0(int);
extern "C" void __stdcall sub_62FF20();

void CXTPToolBar::Process(PAVCToolBarInfo* info)
{
    int i = 0;
    if (info->f3 <= 0)
        return;
    do {
        if (i < 0 || i >= info->f3)
            sub_62FF20();
        int* p = (int*)info->f2;
        int item = p[i];
        int v = sub_6329A0(*(int*)item);
        *(int*)(item + 0x38) = v;
        if (v != 0) {
            if (*(int*)(item + 8) != 0) {
                sub_631DE0(v);
            } else {
                int ecx = *(int*)((char*)this + 0xa0);
                int* vt = *(int**)v;
                int (*fn)(int, int) = (int (*)(int, int))*(int*)((char*)vt + 0x1f4);
                fn(ecx, 0);
            }
            sub_66ABB0(item);
        }
        i++;
    } while (i < info->f3);
}

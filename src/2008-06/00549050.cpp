// from server: 22% by atomic.potato





extern "C" void* __stdcall func_006a17af(const char*);
extern "C" void __stdcall func_005187c0(int*, int, int);
extern "C" void __stdcall func_0054c290(int*);
extern "C" void __stdcall func_0047ff20(int*, int);
extern "C" int __stdcall func_00442cd0(int*);
extern "C" int* __stdcall func_00518b80(int*, int, int*);
extern "C" double __stdcall func_00510720(int*);
extern "C" unsigned char* __stdcall func_0054c2b0(int*, int);
extern "C" int __stdcall func_0054bf70(int*);
extern "C" void __stdcall func_00500690(int*, int*, int*, int*);
extern "C" int* __stdcall func_0054c030(int*, int);

extern int g_973994;
extern int g_973988;

int func_00549050(int self, int a, int b, int c, int d, unsigned char e) {
    int local_18;
    int local_1c = 0;
    int local_20 = 0;
    int local_24;
    int local_30;
    int local_74;
    int local_78;
    int local_7c;
    int local_ac;

    func_005187c0(&local_18, a, b);

    if (!(g_973994 & 1)) {
        g_973994 |= 1;
        func_0054c290(&g_973988);
        func_006a17af("X");
    }

    func_0047ff20(&g_973988, func_00442cd0((int*)(self + 0x24)));

    for (local_1c = 0; local_1c < func_00442cd0((int*)(self + 0x24)); local_1c++) {
        double v = func_00510720(func_00518b80((int*)(self + 0x24), local_1c, &local_18));
        if (v < 0.0) {
            local_ac = 1;
        } else {
            local_ac = 0;
        }
        *func_0054c2b0(&g_973988, local_1c) = (unsigned char)local_ac;
    }

    if (e) {
        for (local_20 = 0; local_20 < func_0054bf70(&g_973988); local_20++) {
            if (*func_0054c2b0(&g_973988, local_20)) {
                continue;
            }
            local_24 = func_00442cd0((int*)c);
            local_74 = local_24 + 2;
            local_78 = local_24 + 1;
            local_7c = local_24;
            func_00500690((int*)d, &local_7c, &local_78, &local_74);
            local_30 = (int)func_0054c030((int*)(self + 0x30), local_20);
            func_00518b80((int*)(self + 0x3c), *(int*)local_30, &local_18);
        }
    }

    return 0;
}

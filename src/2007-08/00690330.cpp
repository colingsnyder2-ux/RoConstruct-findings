// from server: 62% by colin
struct CXTSplitterWnd {
    int method();
};

extern "C" int __cdecl func_0063096a(int);
extern "C" int __cdecl func_0062ff4a(int);
extern "C" int __cdecl func_00630652(int, int);
extern "C" int __cdecl func_006305b0(int, int);
extern "C" int __cdecl func_00738ad2(int, int);

int CXTSplitterWnd::method()
{
    int saved;
    int i;
    int j;
    int k;
    int idx;
    int val;

    if (*(int*)((char*)this + 0x84) == *(int*)((char*)this + 0x5c) &&
        *(int*)((char*)this + 0xf4) == -1)
        return 0;

    idx = *(int*)((char*)this + 0x84);
    saved = *(int*)((char*)this + 0xf4);
    *(int*)((char*)this + 0xf4) = -1;
    val = *(int*)(*(int*)((char*)this + 0x90) + idx * 12 + 8);
    *(int*)((char*)this + 0x84) = idx + 1;

    if (*(int*)((char*)this + 0x80) > 0) {
        i = 0;
        j = 0;
        do {
            k = j;
            if (*(int*)((char*)this + 0xf8) != -1 &&
                *(int*)((char*)this + 0xf8) <= i)
                k = j + 0x10;
            func_0063096a(*(int*)((char*)this + 0x84) + k + 0xe900);
            func_0062ff4a(8);
            for (j = *(int*)((char*)this + 0x84) - 2; j >= saved; j--) {
                func_00630652(j, 0);
                func_00738ad2(func_006305b0(j + 1, 0), 0);
            }
            func_00738ad2(func_006305b0(saved, 0), 0);
            j += 0x10;
            i++;
        } while (i < *(int*)((char*)this + 0x80));
    }

    if (*(int*)((char*)this + 0xf8) != -1) {
        int t = (*(int*)((char*)this + 0xf8) + 0xe90) * 16 + *(int*)((char*)this + 0x84);
        int r = func_0063096a(t);
        if (r != 0)
            func_00738ad2(r, (*(int*)((char*)this + 0x58) + 0xe90) * 16 + saved);
    }

    for (k = saved + 1; k < *(int*)((char*)this + 0x84); k++) {
        int* p = (int*)(*(int*)((char*)this + 0x90) + k * 12);
        p[1] = p[-1];
    }

    *(int*)(*(int*)((char*)this + 0x90) + saved * 12 + 4) = val;

    return (*(int (__thiscall**)(CXTSplitterWnd*))(*(int*)this + 0x148))(this);
}

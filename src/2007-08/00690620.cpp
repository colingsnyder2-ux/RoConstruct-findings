// from server: 64% by colin
struct CXTSplitterWnd {
    int field_0;
    char pad_4[0x54];
    int field_58;
    int field_5c;
    char pad_60[0x20];
    int field_80;
    int field_84;
    char pad_88[0xc];
    int field_94;
    char pad_98[0x5c];
    int field_f4;
    int field_f8;

    void func_00690620();
};

extern "C" int __stdcall sub_62ff4a(int, int);
extern "C" int __stdcall sub_6305b0(int, int, int);
extern "C" int __stdcall sub_630652(int, int, int);
extern "C" int __stdcall sub_63096a(int, int);
extern "C" int __stdcall sub_738ad2(int, int);

void CXTSplitterWnd::func_00690620()
{
    int saved;
    int i;
    int j;
    int k;
    int v;

    if (field_80 == field_58 && field_f8 == -1)
        return;

    saved = *(int*)((char*)this + 0x94 + (field_80 * 3 + 2) * 4);
    v = field_f8;
    field_f8 = -1;
    field_80 = field_80 + 1;

    for (i = 0; i < field_84; i++) {
        int a;
        if (field_f4 != -1) {
            if (field_f4 > i)
                a = i + 1;
            else
                a = i;
        } else {
            a = i;
        }
        int arg = ((field_80 + 0xe90) << 4) + a;
        int r = sub_63096a((int)this, arg);
        sub_62ff4a(r, 8);

        for (j = field_80 - 2; j >= v; j--) {
            int x = sub_630652((int)this, j, 0);
            int y = sub_6305b0((int)this, j + 1, 0);
            sub_738ad2(x, y);
        }
        int z = sub_6305b0((int)this, v, 0);
        sub_738ad2(saved, z);
    }

    if (field_f4 != -1) {
        int arg2 = ((field_80 + 0xe90) << 4) + field_f4;
        int r2 = sub_63096a((int)this, arg2);
        if (r2 != 0) {
            int src = ((v + 0xe90) << 4) + field_5c;
            sub_738ad2(r2, src);
        }
    }

    for (k = v + 1; k < field_80; k++) {
        int* p = (int*)((char*)this + 0x94 + k * 12);
        p[1] = p[-1];
    }

    *(int*)((char*)this + 0x94 + v * 12 + 4) = saved;

    (*(void(__thiscall**)(CXTSplitterWnd*))(*(int*)this + 0x148))(this);
}

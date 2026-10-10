// from server: 78% by colin
struct CDataModelPropGrid {
    void sub_432470(int *param);
};

extern "C" void __cdecl sub_63023E();
extern "C" int *__cdecl sub_40F060(int *out);
extern "C" void __cdecl sub_444DC0();

void CDataModelPropGrid::sub_432470(int *param) {
    sub_63023E();
    if (*(unsigned char *)((char *)this + 0xe0) != 0) {
        param[4] = 0;
        param[5] = 0;
    }
    if (*(unsigned char *)((char *)this + 0xe1) == 0 &&
        *(unsigned char *)((char *)this + 0xe0) == 0 &&
        *(unsigned char *)((char *)this + 0xec) != 0) {
        int local[2];
        sub_40F060(local);
        sub_444DC0();
        int v1 = (short)local[0];
        int v2 = (short)local[1];
        int rect[4];
        rect[0] = 0;
        rect[1] = 0;
        rect[2] = v1;
        rect[3] = v2;
        void (__thiscall *fn)(void *, int *, int *) = *(void (__thiscall **)(void *, int *, int *))((*(int **)this)[0x70 / 4]);
        fn(this, rect, (int *)0);
        int w = rect[2] - rect[0];
        param[8] = w;
        param[2] = w;
        int h = rect[3] - rect[1];
        param[9] = h;
        param[3] = h;
    }
}

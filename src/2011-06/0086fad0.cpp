// from server: 50% by atomic.potato
extern "C" {
    int __stdcall GetClientRect(void*, void*);
    int __stdcall InflateRect(void*, int, int);
}

struct CXTSplitterWnd {
    char pad[0x20];
    int field_20;
    char pad2[0x38];
    int field_58;
    int field_5c;
    int field_60;
    int field_64;
    char pad3[0x14];
    int field_78;
    int field_7c;
    int field_80;
    int field_84;
    int field_88;
    int field_8c;
    int DoSomething(int, int);
};

int CXTSplitterWnd::DoSomething(int arg, int arg2) {
    int rect[4];
    int local[4];
    int tmp[4];

    int handle = ((int (__stdcall*)(int))0x9cc5b8)(arg);
    if (handle == 0) {
        return 1;
    }

    GetClientRect((void*)field_20, rect);
    InflateRect(rect, -field_78, -field_7c);

    ((void (__thiscall*)(CXTSplitterWnd*, int*))((*(int**)this)[0x194/4]))(this, local);

    if (field_8c != 0 && field_80 < field_58) {
        tmp[0] = local[3];
        tmp[1] = rect[1];
        tmp[2] = rect[2];
        tmp[3] = field_64 + local[0];
        ((void (__thiscall*)(CXTSplitterWnd*, int, int, int*))((*(int**)this)[0x154/4]))(this, handle, 0, tmp);
    }

    if (field_88 != 0 && field_84 < field_5c) {
        tmp[0] = rect[0];
        tmp[1] = field_60 + rect[0];
        tmp[2] = local[2];
        tmp[3] = rect[3];
        ((void (__thiscall*)(CXTSplitterWnd*, int, int, int*))((*(int**)this)[0x154/4]))(this, handle, 0, tmp);
    }

    ((void (__thiscall*)(CXTSplitterWnd*, int, int, int))((*(int**)this)[0x1a4/4]))(this, handle, local[3], local[2]);

    return 1;
}

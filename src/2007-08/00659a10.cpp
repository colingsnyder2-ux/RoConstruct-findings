// from server: 40% by colin
struct CXTPReportControl;

struct CRecord {
    void* vtable;
};

struct CXTPReportRecords {
    void* vtable;
};

struct CXTPReportControl {
    int __thiscall sub_659a10(void* param1, void* param2);
};

extern "C" {
    void __stdcall sub_685740(void*, void*, void*);
    void __stdcall sub_686750(void*);
    void __stdcall sub_663c50(void*);
    void __stdcall sub_661700(void*, int);
    void __stdcall sub_661cd0(void);
    void __stdcall sub_6301e4(void*);
}

int __thiscall CXTPReportControl::sub_659a10(void* param1, void* param2)
{
    void* v1;
    void* v2;
    void* v3;
    void* v4;
    int i;
    int count;
    int result;

    if (param2 == 0)
        return 0;

    sub_685740(param1, (void*)0x784980, &v1);
    sub_686750(param1);

    v2 = (*(void*(__thiscall**)(void*, void*))((*(int*)param1) + 0x70))(param1, (void*)0x7c8530);
    v3 = (void*)((int(__thiscall*)(void*))sub_663c50)(param2);
    v4 = (*(void*(__thiscall**)(void*, void*))((*(int*)v2) + 0x94))(v2, (void*)0x7c8528);

    count = (*(int(__thiscall**)(void*, void*, int))((*(int*)v4) + 4))(v4, v3, 1);

    if (count > 0) {
        for (i = 0; i < count; i++) {
            void* rec = (*(void*(__thiscall**)(void*, void*))((*(int*)v4) + 8))(v4, &result);
            void* tmp = (void*)((int(__thiscall*)(void*, int))sub_661700)(param2, 0);
            sub_661cd0();
            if ((*(int(__thiscall**)(void*, void*, void*))((*(int*)rec) + 0x64))(rec, &tmp, tmp)) {
                (*(void(__thiscall**)(void*, void*))((*(int*)tmp) + 0x60))(tmp, rec);
            }
            sub_6301e4(rec);
        }
    }

    (*(void(__thiscall**)(void*, int))(*(int*)v4))(v4, 1);
    sub_6301e4(v2);
    return 1;
}

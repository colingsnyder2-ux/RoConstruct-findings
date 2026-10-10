// from server: 27% by colin
extern "C" {
    void __stdcall func_0062ff3e(int);
    void __stdcall func_0062ff38(int, int);
    int __stdcall func_0063b230(int, int, int, int, int);
    int __stdcall func_006713d0(int);
    int __stdcall func_0067f490(int);
    int __stdcall func_006fd120(int);
    int __stdcall func_0077e124(int);
    int __stdcall func_0077ddbc(int);
}

struct CXTPRibbonControlTab {
    char pad[0x1b0];
    int field_1b0;
    int field_1b4;
    int method_00718820(int, int, int, int, int);
};

int CXTPRibbonControlTab::method_00718820(int a1, int a2, int a3, int a4, int a5)
{
    int local1 = 0;
    int local2 = 0;
    int local3 = 0;
    int local4 = 0;
    int local5 = 0;
    int local6 = 0;
    int local7 = 0;
    int local8 = 0;
    int result;

    func_0062ff3e(*(int*)((char*)this - 4));

    if (func_006713d0((int)&local1) == 0) {
        result = func_0063b230(a1, a2, a3, a4, a5);
        return result;
    }

    int idx = func_006713d0((int)&local1) - 1;
    if (idx >= 0 && idx < this->field_1b4) {
        int* p = (int*)(this->field_1b0 + idx * 4);
        if (*p != 0) {
            func_006fd120((int)&local2);
            func_0067f490((int)&local2);
            int v = func_0077e124((int)&local2);
            *(int*)a5 = v;
            func_0077ddbc((int)&local2);
            return 0;
        }
    }

    return 0x80070057;
}

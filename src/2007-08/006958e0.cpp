// from server: 53% by colin
extern "C" {
    typedef unsigned int UINT;
    typedef unsigned int UINT_PTR;
    typedef int BOOL;
    typedef void* HWND;

    __declspec(dllimport) BOOL __stdcall KillTimer(HWND, UINT_PTR);
    __declspec(dllimport) BOOL __stdcall SetRectEmpty(void*);
}

struct CXTPToolTipContext_CLunaToolTip {
    char pad_000[0x20];
    void* field_020;
    char pad_024[0xBC];
    char field_0E0[0x28];
    char field_108[0x10];
    void* field_118;
    void* field_100;
    void* field_104;
    void* field_11C;

    void func_006958e0(void* param);
};

extern void func_006952d0();
extern void func_00694360();
extern void func_0063023e();

void CXTPToolTipContext_CLunaToolTip::func_006958e0(void* param)
{
    if (param != this->field_118) {
        func_0063023e();
        return;
    }

    if (this->field_100 != 0) {
        func_006952d0();
        if (this->field_100 != 0) {
            if (this->field_100 == *(void**)((char*)this->field_100 + 0x20)) {
                if (this->field_104 == *(void**)((char*)this->field_100 + 0x24)) {
                    goto label_695928;
                }
            }
        }
        goto label_695930;
    }

    if (this->field_100 == 0) {
        func_00694360();
    }

label_695930:
    KillTimer((HWND)this->field_020, (UINT_PTR)this->field_118);
    this->field_118 = 0;
    SetRectEmpty(this->field_0E0);
    *(int*)(this->field_0E0 + 8) = 0;
    *(int*)(this->field_0E0 + 0x20) = 0;
    *(int*)(this->field_0E0 + 0x1C) = 0;
    *(int*)(this->field_0E0 + 0x24) = -1;
    SetRectEmpty(this->field_0E0 + 0xC);
    SetRectEmpty(this->field_0E0 + 0x28);

label_695979:
    func_0063023e();
    return;

label_695928:
    func_00694360();
    goto label_695930;
}

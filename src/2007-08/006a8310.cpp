// from server: 46% by colin
struct CXTPRibbonScrollableBar {
    int f(int, int, int);
};

extern "C" {
    __declspec(dllimport) short __stdcall GetKeyState(int);
    __declspec(dllimport) unsigned int __stdcall GetDoubleClickTime(void);
    __declspec(dllimport) unsigned int __stdcall GetCapture(void);
    __declspec(dllimport) unsigned int __stdcall SetCapture(unsigned int);
    __declspec(dllimport) int __stdcall ReleaseCapture(void);
    __declspec(dllimport) unsigned int __stdcall SetTimer(unsigned int, unsigned int, unsigned int, void*);
    __declspec(dllimport) int __stdcall KillTimer(unsigned int, unsigned int);
    __declspec(dllimport) int __stdcall GetMessageA(void*, void*, unsigned int, unsigned int);
    __declspec(dllimport) int __stdcall TranslateMessage(const void*);
    __declspec(dllimport) int __stdcall DispatchMessageA(const void*);
}

struct CControlGroupsScroll {
    char pad[0xa4];
    int field_a4;
    int field_a8;
    char pad2[0xfc - 0xac];
    void* field_fc;
    char pad3[0x168 - 0x100];
    int field_168;

    int f(int, int, int);
};

extern "C" int __stdcall sub_717430(void*);
extern "C" int __stdcall sub_6301c0(void*);
extern "C" int __stdcall sub_6306b2(void*);
extern "C" int __stdcall sub_63a690(void*, int);

int CControlGroupsScroll::f(int a1, int a2, int a3)
{
    int ebp = 1;
    int edi;
    int ebx;
    int local_10;
    int local_14;
    int local_18;
    int local_1c;

    if (GetKeyState(a1) >= 0)
        return 0;

    field_a8 = ebp;
    edi = sub_717430(field_fc);
    (*(void (__thiscall**)(int, int))(*((int*)edi)))(edi, field_168);

    {
        unsigned int t = GetDoubleClickTime();
        unsigned int v = t * 4;
        unsigned int q = v / 10;
        SetTimer((unsigned int)((char*)field_fc + 0x20), 0x459d, q, 0);
    }

    sub_6301c0((void*)((char*)field_fc + 0x20));

    for (;;) {
        if (field_fc == 0)
            ebx = 0;
        else
            ebx = *(int*)((char*)field_fc + 0x20);

        if (GetCapture() != ebx)
            break;

        if (((int (__thiscall*)(CControlGroupsScroll*, int))(*((int*)(*(int*)this) + 0x80)))(this, 0) == 0)
            break;

        local_1c = 0;
        local_18 = 0;
        local_14 = 0;
        local_10 = 0;
        if (GetMessageA(&local_1c, 0, 0, 0) == 0) {
            DispatchMessageA(&local_1c);
            continue;
        }

        if (local_14 == 0x113) {
            if (local_10 != 0x459d) {
                if (local_14 == 0x202)
                    break;
                TranslateMessage(&local_1c);
                DispatchMessageA(&local_1c);
                continue;
            }

            (*(void (__thiscall**)(int, int))(*((int*)edi)))(edi, field_168);

            if (ebp != 0) {
                unsigned int t = GetDoubleClickTime();
                unsigned int q = t / 10;
                SetTimer((unsigned int)((char*)field_fc + 0x20), 0x459d, q, 0);
            }
            ebp = 0;
            continue;
        }

        if (local_14 == 0x202)
            break;

        TranslateMessage(&local_1c);
        DispatchMessageA(&local_1c);
    }

    ReleaseCapture();
    KillTimer((unsigned int)((char*)field_fc + 0x20), 0x459d);

    field_a8 = 0;
    if (((int (__thiscall*)(CControlGroupsScroll*, int))(*((int*)(*(int*)this) + 0x80)))(this, 0) == 0)
        field_a4 = 0;

    sub_63a690(this, 0);
    return 0;
}

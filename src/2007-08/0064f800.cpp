// from server: 47% by colin
// roc 2007-08 0064f800  unit: CXTPCommandBar  size: 342 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064f800

struct POINT {
    long x;
    long y;
};

struct RECT {
    long left;
    long top;
    long right;
    long bottom;
};

extern "C" {
    __declspec(dllimport) int __stdcall GetCursorPos(POINT* lpPoint);
    __declspec(dllimport) int __stdcall ScreenToClient(void* hWnd, POINT* lpPoint);
    __declspec(dllimport) int __stdcall PtInRect(const RECT* lprc, POINT pt);
    __declspec(dllimport) void* __stdcall LoadCursorA(void* hInstance, const char* lpCursorName);
    __declspec(dllimport) void* __stdcall SetCursor(void* hCursor);
}

extern "C" int __cdecl sub_42f1a0(int);
extern "C" void __cdecl sub_62ff02();
extern "C" void __cdecl sub_63023e();
extern "C" int __cdecl sub_643860();
extern "C" int __cdecl sub_643a40();
extern "C" void __cdecl sub_680000();

struct CXTPCommandBar {
    int sub_643860_helper();
    int sub_643a40_helper();
    int sub_63023e_helper();
    int sub_680000_helper();
    int CheckMouseOver(int, int, int);
};

int CXTPCommandBar::CheckMouseOver(int, int, int) {
    POINT ptCursor;
    POINT ptClient;
    RECT rc;
    int nState;
    int bResult;

    if (!sub_643860())
        goto fail;

    nState = *(int*)((char*)this + 0xfc);
    if (nState != 2 && nState != 0 && nState != 3 && nState != 1)
        goto fail;

    if (*(int*)((char*)this + 0x184) == 0)
        goto fail;

    if ((*(unsigned char*)((char*)this + 0xe8) & 0x1f) == 0)
        goto fail;

    sub_680000();
    sub_643a40();
    sub_643a40();

    if (sub_643a40()) {
        ptClient.x = ptCursor.x + rc.left;
        ptClient.y = ptCursor.y + rc.top;
        rc.right += 3;
    } else {
        if (sub_42f1a0(*(int*)((char*)this + 0xfc)) == 0)
            goto skip;
        ptClient.x = ptCursor.x + rc.left;
        ptClient.y = ptCursor.y + rc.top;
    }

skip:
    GetCursorPos(&ptCursor);
    ScreenToClient(*(void**)((char*)this + 0x20), &ptCursor);
    bResult = PtInRect(&rc, ptCursor);
    if (bResult == 0)
        goto fail;

    sub_62ff02();
    SetCursor(LoadCursorA(0, (const char*)0x7f86));
    return 1;

fail:
    sub_63023e();
    return 0;
}

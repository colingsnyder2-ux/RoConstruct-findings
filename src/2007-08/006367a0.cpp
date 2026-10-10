// from server: 51% by colin
// roc 2007-08 006367a0  unit: CXTPEdit  size: 524 bytes
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp

struct CXTPEdit {
    char pad0[0x20];
    void* m_hWnd;
    int OnImeStartComposition();
};

extern "C" {
    int __stdcall PeekMessageA(void* lpMsg, void* hWnd, unsigned int wMsgFilterMin, unsigned int wMsgFilterMax, unsigned int wRemoveMsg);
    int __stdcall ClientToScreen(void* hWnd, void* lpPoint);
    int __stdcall SendMessageA(void* hWnd, unsigned int Msg, unsigned int wParam, long lParam);
    int __stdcall UpdateWindow(void* hWnd);
}

void* __stdcall sub_77ddac(void* p);
void* __stdcall sub_77d59c(void* p, unsigned int v);
void* __stdcall sub_77ddbc(void* p);
void* __stdcall sub_77edf0(void* p, void* hWnd, void* lpPoint);
void* __stdcall sub_77ec40(void* p, void* hWnd, unsigned int a, unsigned int b, unsigned int c);
void* __stdcall sub_77ecd8(void* hWnd, unsigned int a, unsigned int b, long c);
void* __stdcall sub_77ee18(void* hWnd);

void* __fastcall sub_643980(void* p);
void* __fastcall sub_633900(void* p);
void* __fastcall sub_636680(void* p, unsigned int v);
void* __fastcall sub_6301e4(void* p);
int __fastcall sub_738322(void* p);
void* __fastcall sub_677390(void* p);
void* __fastcall sub_67d2a0(void* p, unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e);
int __fastcall sub_6342d0(void* p, int a, void* b, void* c, void* d, void* e, void* f);

int CXTPEdit::OnImeStartComposition()
{
    void* pMsg[8];
    void* hWnd;
    void* pControl;
    void* pCmdBars;
    void* pEdit;
    void* pRecord;
    void* pVtbl;
    int result;

    sub_77ddac(pMsg);
    if (sub_77d59c(pMsg, 0xe123) == 0) {
        sub_77ddbc(pMsg);
        return 0;
    }

    hWnd = *(void**)((char*)this + 0x20);
    pControl = sub_643980(*(void**)((char*)hWnd + 0xfc));
    if (pControl == 0) {
        sub_77ddbc(pMsg);
        return 0;
    }

    pEdit = sub_633900(pControl);
    *(int*)((char*)pEdit + 4) -= 1;

    sub_77edf0(pMsg, hWnd, pMsg + 8);

    if (sub_77ec40(pMsg, hWnd, 0xb1, 0xb1, 0) != 0) {
        sub_77ecd8(hWnd, 0xb1, 0, -1);
    }

    pRecord = sub_677390(pControl);
    pCmdBars = sub_67d2a0(*(void**)((char*)pRecord + 0xf8), 1, 0xe123, 0, -1, 0);
    pVtbl = *(void**)pCmdBars;
    sub_636680(this, 0xe123);
    (*(void(__thiscall**)(void*, void*))(*(char**)pVtbl + 0x68))(pCmdBars, pRecord);

    pCmdBars = sub_67d2a0(*(void**)((char*)pRecord + 0xf8), 1, 0xe122, 0, -1, 0);
    pVtbl = *(void**)pCmdBars;
    sub_636680(this, 0xe122);
    (*(void(__thiscall**)(void*, void*))(*(char**)pVtbl + 0x68))(pCmdBars, pRecord);

    pCmdBars = sub_67d2a0(*(void**)((char*)pRecord + 0xf8), 1, 0xe125, 0, -1, 0);
    pVtbl = *(void**)pCmdBars;
    sub_636680(this, 0xe125);
    (*(void(__thiscall**)(void*, void*))(*(char**)pVtbl + 0x68))(pCmdBars, pRecord);

    *(int*)((char*)pRecord + 0xc0) = 0;

    result = sub_738322(*(void**)((char*)hWnd + 0xfc));
    result = sub_6342d0(pRecord, (result & 0x401000) ? 0x189 : 0x181, pMsg[8], pMsg[9], this, 0, this);
    if (result > 0) {
        (*(void(__thiscall**)(void*, int, int))(*(char**)this + 0xf0))(this, result, 0);
    }

    *(int*)((char*)pEdit + 4) += 1;
    sub_6301e4(pEdit);

    (*(void(__thiscall**)(void*, int, int))(*(char**)(*(void**)((char*)hWnd + 0xfc)) + 0x19c))(*(void**)((char*)hWnd + 0xfc), 0, 1);
    sub_77ee18(*(void**)((char*)hWnd + 0x20));

    sub_77ddbc(pMsg);
    return 1;
}

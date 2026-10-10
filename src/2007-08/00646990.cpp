// from server: 60% by colin
// roc 2007-08 00646990  unit: CXTPCommandBar  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00646990

extern "C" {
    int __stdcall SendMessageA(void*, unsigned int, unsigned int, int);
}

struct CXTPCommandBar {
    int field_0x20;
    int field_0x74;
    int field_0xa0;

    int OnSize(unsigned int nType, int cx, int cy);
};

struct CXTPCommandBarHelper {
    int field_0x60;
};

extern "C" int __fastcall sub_643980(CXTPCommandBar*);
extern "C" int __fastcall sub_646570(CXTPCommandBar*);

extern "C" {
    int (__stdcall *g_fn_77dcd0)(void*);
    int (__stdcall *g_fn_77dd98)(void*);
}

int CXTPCommandBar::OnSize(unsigned int nType, int cx, int cy) {
    CXTPCommandBar* pThis = this;
    int result;
    CXTPCommandBar* pBar = (CXTPCommandBar*)sub_643980(pThis);
    CXTPCommandBar* pBar2 = pBar;
    if (pBar2 == 0) {
        result = pBar2->field_0xa0;
    } else {
        result = sub_646570(pThis);
    }
    if (pBar2 != 0) {
        CXTPCommandBarHelper* pHelper = (CXTPCommandBarHelper*)pBar2->field_0x74;
        if (pHelper->field_0x60 != 0) {
            return 1;
        }
    }
    {
        int bResult = g_fn_77dcd0((void*)nType);
        if (bResult != 0) {
            SendMessageA((void*)result, 0x375, 0xe001, 0);
            return 1;
        }
        int wParam = g_fn_77dd98((void*)nType);
        SendMessageA((void*)result, 0x362, 0, wParam);
    }
    return 1;
}

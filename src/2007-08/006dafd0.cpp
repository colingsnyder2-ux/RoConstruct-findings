// from server: 50% by colin
struct CXTPReportControl;

struct CReportDropTarget {
    int OnDragOver(unsigned int, unsigned int, unsigned int);
};

extern "C" int __stdcall sub_6FEBF0(void*, unsigned int, unsigned int);
extern "C" int __stdcall sub_6DAE10(CReportDropTarget*, unsigned int, unsigned int);
extern "C" void __stdcall sub_63023E(CReportDropTarget*);
extern "C" void __stdcall sub_62FF20();

struct TRACKMOUSEEVENT {
    unsigned int cbSize;
    unsigned int dwFlags;
    void* hwndTrack;
    unsigned int dwHoverTime;
};

extern "C" int __stdcall _TrackMouseEvent(TRACKMOUSEEVENT*);

extern unsigned int dword_8B8894;

struct CReportControlLayout {
    char pad[0xB0];
    void* m_pItems;
};

struct CReportItemArray {
    char pad[4];
    void** m_pData;
    int m_nCount;
};

int CReportDropTarget::OnDragOver(unsigned int a, unsigned int b, unsigned int c) {
    CReportControlLayout* self = (CReportControlLayout*)this;
    CReportItemArray* arr = (CReportItemArray*)self->m_pItems;
    int i = 0;
    if (arr->m_nCount > 0) {
        do {
            if (i < 0 || i >= arr->m_nCount) {
                sub_62FF20();
            }
            sub_6FEBF0(arr->m_pData[i], a, b);
            arr = (CReportItemArray*)self->m_pItems;
            i++;
        } while (i < arr->m_nCount);
    }
    if (sub_6DAE10(this, a, b)) {
        TRACKMOUSEEVENT tme;
        tme.cbSize = 0x10;
        tme.dwFlags = 3;
        tme.hwndTrack = *(void**)((char*)this + 0x20);
        tme.dwHoverTime = dword_8B8894;
        _TrackMouseEvent(&tme);
    }
    sub_63023E(this);
    return 0;
}

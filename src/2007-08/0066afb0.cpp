// from server: 67% by colin
// roc 2007-08 0066afb0  unit: CXTPToolBar::CControlButtonExpand  size: 263 bytes
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp

struct CXTPToolBar;

struct CControlButtonExpand {
    void FillInfo(void* pInfo);
};

extern "C" void __stdcall sub_67FFA0(void* pOut, CXTPToolBar* pThis);
extern "C" void __stdcall sub_6309F4(void* pThis, void* pOut);

struct CXTPToolBar {
    void FillInfo(void* pInfo);
};

void CXTPToolBar::FillInfo(void* pInfo)
{
    char* info = (char*)pInfo;
    *(int*)(info + 0x00) = *(int*)((char*)this + 0xd4);
    *(void**)(info + 0x38) = this;

    int (__stdcall *pfn)(CXTPToolBar*) = *(int (__stdcall **)(CXTPToolBar*))((*(int*)this) + 0x160);
    *(int*)(info + 0x04) = pfn(this);

    *(int*)(info + 0x14) = *(int*)((char*)this + 0xc4);

    char local[8];
    sub_67FFA0(local, this);

    int* p180 = *(int**)((char*)this + 0x180);
    if (p180 != 0) {
        sub_6309F4(p180, local);
    }

    int* src;
    if (*(int*)((char*)this + 0x20) != 0) {
        src = (int*)local;
    } else {
        src = (int*)(*(int*)((char*)this + 0x184) + 0x28);
    }
    *(int*)(info + 0x0c) = src[0];
    *(int*)(info + 0x10) = src[1];

    *(int*)(info + 0x08) = (*(int*)((char*)this + 0xfc) == 4) ? 1 : 0;

    int* p184 = *(int**)((char*)this + 0x184);
    *(int*)(info + 0x18) = *(int*)((char*)p184 + 0x14);
    *(int*)(info + 0x1c) = *(int*)((char*)p184 + 0x18);
    *(int*)(info + 0x20) = *(int*)((char*)p184 + 0x1c);
    *(int*)(info + 0x24) = *(int*)((char*)p184 + 0x20);
    *(int*)(info + 0x28) = *(int*)((char*)p184 + 0x24);

    int* p184b = *(int**)((char*)this + 0x184);
    *(int*)(info + 0x30) = *(int*)((char*)p184b + 0x28);
    *(int*)(info + 0x34) = *(int*)((char*)p184b + 0x2c);

    int (__stdcall *pfn2)(CXTPToolBar*) = *(int (__stdcall **)(CXTPToolBar*))((*(int*)this) + 0x188);
    int r = pfn2(this);

    *(int*)(info + 0x3c) = r;
    *(int*)(info + 0x40) = 0;
    *(int*)(info + 0x44) = 0;
    *(int*)(info + 0x48) = 0;
    *(int*)(info + 0x4c) = 0;

    if (r != 0) {
        *(int*)(info + 0x40) = *(int*)((char*)this + 0x1d0);
        *(int*)(info + 0x44) = *(int*)((char*)this + 0x1d4);
        *(int*)(info + 0x48) = *(int*)((char*)this + 0x1d8);
        *(int*)(info + 0x4c) = *(int*)((char*)this + 0x1dc);
    }
}

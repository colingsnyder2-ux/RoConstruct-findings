// from server: 52% by colin
extern "C" void __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

extern void* __cdecl func_0062fef6(unsigned int);
extern void* __cdecl func_00699000(int);

struct CXTPPropertyGridToolTip {
    char pad[0x20];
    void* hWnd;
    char pad2[0xc0];
    void* pGrid;
    void* CreateToolTip(int, void*);
    void SetToolTip(int, void*);
};

extern void __fastcall func_0063b850(void*, int, void*);
extern void* __fastcall func_0069a040(void*, void*, int, int);
extern void __fastcall func_0069b9d0(void*, void*, void*);
extern void __fastcall func_0069bb10(void*);
extern void __fastcall func_0069d340(void*, int, int, int);

void* CXTPPropertyGridToolTip::CreateToolTip(int nIndex, void* pWnd)
{
    int idx = nIndex;
    if (idx < 0 || idx > *(int*)((char*)pGrid + 0x28))
        idx = *(int*)((char*)pGrid + 0x28);

    void* pTip = pWnd;
    if (pTip == 0) {
        void* mem = func_0062fef6(0x100);
        if (mem != 0)
            pTip = func_0069a040(mem, pWnd, 0, 0);
        else
            pTip = 0;
    }

    func_0069d340(this, 0, 0, 1);

    *(void**)((char*)pTip + 0xb4) = this;
    *(int*)((char*)pTip + 0x98) = 1;
    *(int*)((char*)pTip + 0x8c) = 0;

    func_0063b850((char*)pGrid + 0x20, idx, pTip);

    if (hWnd != 0) {
        int maxIdx = *(int*)((char*)pGrid + 0x28) - 1;
        void* result;
        if (idx >= maxIdx) {
            SendMessageA(hWnd, 0x18b, 0, 0);
            result = 0;
        } else {
            void* item = func_00699000(idx + 1);
            result = *(void**)((char*)item + 0x80);
        }
        func_0069b9d0(this, pTip, result);
    }

    func_0069bb10(this);
    return pTip;
}

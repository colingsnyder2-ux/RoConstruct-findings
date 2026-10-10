// from server: 56% by colin
struct CAutoHidePanelTabManager {
    int AddTab(void* pTab, int x, int y, int cx, int cy, int bActivate);
};

extern "C" void* __stdcall sub_6D99D0();
extern "C" void* __stdcall sub_6E0550(void* p);
extern "C" int __stdcall sub_6FD8D0(void* pThis, int a, int b, int c, int d, int e);

int CAutoHidePanelTabManager::AddTab(void* pTab, int x, int y, int cx, int cy, int bActivate)
{
    if (pTab == 0)
        return 1;

    void* p1 = sub_6D99D0();
    void* p2 = sub_6E0550((char*)p1 + 0x54);
    void* p3 = *(void**)((char*)p2 + 0xA0);
    if (*(int*)((char*)p3 + 0x24) == 0)
        return 0;

    void* p4 = *(void**)((char*)pTab + 0x40);
    int* pv = (int*)p4;
    int (*fn)(void*) = (int (*)(void*))pv[0x64 / 4];
    int result = fn(*(void**)pTab);
    if (result == 0)
        return 0;

    if (bActivate == 0)
        return 1;

    int v1 = *(int*)pTab;
    int v2 = *(int*)((char*)pTab + 4);
    sub_6FD8D0(this, x, y, x + v1, y + v2, result);
    return 1;
}

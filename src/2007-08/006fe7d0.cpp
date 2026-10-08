// from server: 81% by colin
// roc 2007-08 006fe7d0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fe7d0
//
// 006fe7d0  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 006fe7d3  33c0                 xor eax, eax
// 006fe7d5  85d2                 test edx, edx
// 006fe7d7  7e2b                 jle 0x6fe804
// 006fe7d9  8da42400000000       lea esp, [esp]
// 006fe7e0  85c0                 test eax, eax
// 006fe7e2  7c11                 jl 0x6fe7f5
// 006fe7e4  3bc2                 cmp eax, edx
// 006fe7e6  7d0d                 jge 0x6fe7f5
// 006fe7e8  3b415c               cmp eax, dword ptr [ecx + 0x5c]
// 006fe7eb  7d1e                 jge 0x6fe80b
// 006fe7ed  8b5158               mov edx, dword ptr [ecx + 0x58]
// 006fe7f0  8b1482               mov edx, dword ptr [edx + eax*4]
// 006fe7f3  eb02                 jmp 0x6fe7f7
// 006fe7f5  33d2                 xor edx, edx
// 006fe7f7  89422c               mov dword ptr [edx + 0x2c], eax
// 006fe7fa  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 006fe7fd  83c001               add eax, 1
// 006fe800  3bc2                 cmp eax, edx
// 006fe802  7cdc                 jl 0x6fe7e0
// 006fe804  8b01                 mov eax, dword ptr [ecx]
// 006fe806  8b5008               mov edx, dword ptr [eax + 8]
// 006fe809  ffe2                 jmp edx
// 006fe80b  e91017f3ff           jmp 0x62ff20

struct CXTPDockingPaneAutoHidePanel_CAutoHidePanelTabManager {
    void func_006fe7d0();
};

void CXTPDockingPaneAutoHidePanel_CAutoHidePanelTabManager::func_006fe7d0()
{
    int count = *(int*)((char*)this + 0x5c);
    int i = 0;
    while (i < count) {
        int* item;
        if (i >= 0 && i < count) {
            if (i >= *(int*)((char*)this + 0x5c)) {
                extern void func_0062ff20();
                func_0062ff20();
                return;
            }
            item = *(int**)(*(int*)((char*)this + 0x58) + i * 4);
        } else {
            item = 0;
        }
        *(int*)((char*)item + 0x2c) = i;
        count = *(int*)((char*)this + 0x5c);
        i++;
    }
    void** vtbl = *(void***)this;
    void (*fn)() = (void (*)())vtbl[2];
    fn();
}

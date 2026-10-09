// from server: 57% by colin
// roc 2007-08 006fe940  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fe940
//
// 006fe940  8b542404             mov edx, dword ptr [esp + 4]
// 006fe944  56                   push esi
// 006fe945  57                   push edi
// 006fe946  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006fe94a  8bf1                 mov esi, ecx
// 006fe94c  8d642400             lea esp, [esp]
// 006fe950  03d7                 add edx, edi
// 006fe952  7828                 js 0x6fe97c
// 006fe954  3b565c               cmp edx, dword ptr [esi + 0x5c]
// 006fe957  7d23                 jge 0x6fe97c
// 006fe959  8b4658               mov eax, dword ptr [esi + 0x58]
// 006fe95c  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 006fe95f  85c9                 test ecx, ecx
// 006fe961  7419                 je 0x6fe97c
// 006fe963  e88838f9ff           call 0x6921f0
// 006fe968  85c0                 test eax, eax
// 006fe96a  74e4                 je 0x6fe950
// 006fe96c  e8bf6efaff           call 0x6a5830
// 006fe971  85c0                 test eax, eax
// 006fe973  74db                 je 0x6fe950
// 006fe975  5f                   pop edi
// 006fe976  8bc1                 mov eax, ecx
// 006fe978  5e                   pop esi
// 006fe979  c20800               ret 8
// 006fe97c  5f                   pop edi
// 006fe97d  33c0                 xor eax, eax
// 006fe97f  5e                   pop esi
// 006fe980  c20800               ret 8

struct CAutoHidePanelTabManager {
    char pad[0x58];
    int* items;
    int count;
    int find(int start, int delta);
};

extern "C" int __fastcall sub_6921F0(int);
extern "C" int __fastcall sub_6A5830(int);

int CAutoHidePanelTabManager::find(int start, int delta) {
    int idx = start;
    for (;;) {
        idx += delta;
        if (idx < 0) break;
        if (idx >= count) break;
        int item = items[idx];
        if (item == 0) break;
        if (sub_6921F0(item) == 0) continue;
        if (sub_6A5830(item) == 0) continue;
        return item;
    }
    return 0;
}

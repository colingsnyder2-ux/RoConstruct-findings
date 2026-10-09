// from server: 74% by colin
// roc 2007-08 006dcaf0  unit: PAUHWND__::?$CMap  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dcaf0
//
// 006dcaf0  53                   push ebx
// 006dcaf1  55                   push ebp
// 006dcaf2  56                   push esi
// 006dcaf3  8bd9                 mov ebx, ecx
// 006dcaf5  33f6                 xor esi, esi
// 006dcaf7  39b3f0000000         cmp dword ptr [ebx + 0xf0], esi
// 006dcafd  57                   push edi
// 006dcafe  7e35                 jle 0x6dcb35
// 006dcb00  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006dcb04  85f6                 test esi, esi
// 006dcb06  7c3f                 jl 0x6dcb47
// 006dcb08  3bb3f0000000         cmp esi, dword ptr [ebx + 0xf0]
// 006dcb0e  7d37                 jge 0x6dcb47
// 006dcb10  8b83ec000000         mov eax, dword ptr [ebx + 0xec]
// 006dcb16  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006dcb1a  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 006dcb1d  55                   push ebp
// 006dcb1e  51                   push ecx
// 006dcb1f  57                   push edi
// 006dcb20  ff1594ed7700         call dword ptr [0x77ed94]
// 006dcb26  85c0                 test eax, eax
// 006dcb28  7514                 jne 0x6dcb3e
// 006dcb2a  83c601               add esi, 1
// 006dcb2d  3bb3f0000000         cmp esi, dword ptr [ebx + 0xf0]
// 006dcb33  7ccf                 jl 0x6dcb04
// 006dcb35  5f                   pop edi
// 006dcb36  5e                   pop esi
// 006dcb37  5d                   pop ebp
// 006dcb38  33c0                 xor eax, eax
// 006dcb3a  5b                   pop ebx
// 006dcb3b  c20800               ret 8
// 006dcb3e  8bc7                 mov eax, edi
// 006dcb40  5f                   pop edi
// 006dcb41  5e                   pop esi
// 006dcb42  5d                   pop ebp
// 006dcb43  5b                   pop ebx
// 006dcb44  c20800               ret 8
// 006dcb47  e8d433f5ff           call 0x62ff20

struct HWND__;

struct CMap {
    char pad[0xec];
    HWND__** items;
    int count;
    HWND__* find(int x, int y);
};

extern "C" int __stdcall PtInRect(const void* rect, int x, int y);

HWND__* CMap::find(int x, int y) {
    int i = 0;
    if (count > 0) {
        do {
            if (i < 0 || i >= count) {
                break;
            }
            HWND__* h = items[i];
            if (PtInRect(h, x, y)) {
                return h;
            }
            ++i;
        } while (i < count);
    }
    return 0;
}

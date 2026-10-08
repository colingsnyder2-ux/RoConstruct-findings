// from server: 59% by colin
// roc 2007-08 006a8780  unit: CXTPRibbonBarControlQuickAccessPopup  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a8780
//
// 006a8780  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 006a8786  56                   push esi
// 006a8787  e8b4b2f9ff           call 0x643a40
// 006a878c  8bb0fc000000         mov esi, dword ptr [eax + 0xfc]
// 006a8792  8bce                 mov ecx, esi
// 006a8794  6bc90d               imul ecx, ecx, 0xd
// 006a8797  b8e9a28b2e           mov eax, 0x2e8ba2e9
// 006a879c  f7e9                 imul ecx
// 006a879e  8b442408             mov eax, dword ptr [esp + 8]
// 006a87a2  c1fa02               sar edx, 2
// 006a87a5  8bca                 mov ecx, edx
// 006a87a7  c1e91f               shr ecx, 0x1f
// 006a87aa  03ca                 add ecx, edx
// 006a87ac  897004               mov dword ptr [eax + 4], esi
// 006a87af  8908                 mov dword ptr [eax], ecx
// 006a87b1  5e                   pop esi
// 006a87b2  c20800               ret 8

struct CXTPRibbonBarControlQuickAccessPopup {
    char pad[0xfc];
    int field_fc;

    void GetSomething(int* out);
};

struct Inner {
    char pad[0xfc];
    int field_fc;
};

extern "C" Inner* __stdcall get_inner(int);

void CXTPRibbonBarControlQuickAccessPopup::GetSomething(int* out) {
    Inner* p = get_inner(this->field_fc);
    int v = p->field_fc;
    int q = v * 13;
    int hi = (int)((long long)q * 0x2e8ba2e9 >> 32);
    int r = (hi >> 2) + ((unsigned)hi >> 31);
    out[1] = v;
    out[0] = r;
}

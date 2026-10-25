// from server: 100% by colin
// roc 2008-06 006e9ef0  unit: CXTPControlColorSelector  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e9ef0
//
// 006e9ef0  8b442408             mov eax, dword ptr [esp + 8]
// 006e9ef4  56                   push esi
// 006e9ef5  8bf1                 mov esi, ecx
// 006e9ef7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e9efb  50                   push eax
// 006e9efc  51                   push ecx
// 006e9efd  8bce                 mov ecx, esi
// 006e9eff  e8ecfdffff           call 0x6e9cf0
// 006e9f04  83f8ff               cmp eax, -1
// 006e9f07  7408                 je 0x6e9f11
// 006e9f09  50                   push eax
// 006e9f0a  8bce                 mov ecx, esi
// 006e9f0c  e86ff4ffff           call 0x6e9380
// 006e9f11  5e                   pop esi
// 006e9f12  c20800               ret 8

struct CXTPControlColorSelector {
    int GetItem(int, int);
    void SetSelectedItem(int);
    void SetSelectedItem(int, int);
};

void CXTPControlColorSelector::SetSelectedItem(int a, int b) {
    int r = GetItem(a, b);
    if (r != -1) {
        SetSelectedItem(r);
    }
}

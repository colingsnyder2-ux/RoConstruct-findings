// from server: 100% by colin
// roc 2007-08 00673050  unit: CXTPControlColorSelector  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00673050
//
// 00673050  8b442408             mov eax, dword ptr [esp + 8]
// 00673054  56                   push esi
// 00673055  8bf1                 mov esi, ecx
// 00673057  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0067305b  50                   push eax
// 0067305c  51                   push ecx
// 0067305d  8bce                 mov ecx, esi
// 0067305f  e8ecfdffff           call 0x672e50
// 00673064  83f8ff               cmp eax, -1
// 00673067  7408                 je 0x673071
// 00673069  50                   push eax
// 0067306a  8bce                 mov ecx, esi
// 0067306c  e8eff3ffff           call 0x672460
// 00673071  5e                   pop esi
// 00673072  c20800               ret 8

struct CXTPControlColorSelector {
    int sub_672E50(int, int);
    void sub_672460(int);
    void func(int, int);
};

void CXTPControlColorSelector::func(int a, int b) {
    int r = sub_672E50(a, b);
    if (r != -1) {
        sub_672460(r);
    }
}

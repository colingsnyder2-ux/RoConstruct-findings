// from server: 100% by tester
// roc 2008-06 0044a2c0  unit: CRbxPlayDocTemplate  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044a2c0
//
// 0044a2c0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0044a2c3  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0044a2c6  8b11                 mov edx, dword ptr [ecx]
// 0044a2c8  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0044a2ce  6a01                 push 1
// 0044a2d0  6a00                 push 0
// 0044a2d2  ffd0                 call eax
// 0044a2d4  c3                   ret 

struct CBrowserDocManager {
    char pad[0x58];
    void* field_58;
    void method();
};

void CBrowserDocManager::method()
{
    void* p = field_58;
    void* q = *(void**)((char*)p + 0x20);
    void** vtbl = *(void***)q;
    void (__stdcall *fn)(int, int) = (void (__stdcall *)(int, int))vtbl[0x88 / 4];
    fn(0, 1);
}

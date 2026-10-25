// from server: 100% by atomic.potato
// roc 2010-06 00824a90  unit: CXTPControlGallery  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00824a90
//
// 00824a90  56                   push esi
// 00824a91  8bf1                 mov esi, ecx
// 00824a93  e828fbffff           call 0x8245c0
// 00824a98  85c0                 test eax, eax
// 00824a9a  7415                 je 0x824ab1
// 00824a9c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00824aa0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00824aa4  50                   push eax
// 00824aa5  51                   push ecx
// 00824aa6  8bce                 mov ecx, esi
// 00824aa8  e803a8fcff           call 0x7ef2b0
// 00824aad  5e                   pop esi
// 00824aae  c20800               ret 8
// 00824ab1  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00824ab7  8bb6c0000000         mov esi, dword ptr [esi + 0xc0]
// 00824abd  8b542408             mov edx, dword ptr [esp + 8]
// 00824ac1  50                   push eax
// 00824ac2  8d4eff               lea ecx, [esi - 1]
// 00824ac5  51                   push ecx
// 00824ac6  50                   push eax
// 00824ac7  51                   push ecx
// 00824ac8  52                   push edx
// 00824ac9  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 00824acf  5e                   pop esi
// 00824ad0  c20800               ret 8

typedef int (__stdcall *SetRectFn)(void*, int, int, int, int);
extern SetRectFn SetRectPtr;

struct CXTPControlGallery {
    char m_pad[0xc0];
    int m_fieldC0;
    int m_fieldC4;
    int Check();
    void Method(void* p, int v);
    void Target(void* p, int v);
};

void CXTPControlGallery::Target(void* p, int v) {
    if (this->Check()) {
        this->Method(p, v);
    } else {
        SetRectPtr(p, m_fieldC0 - 1, m_fieldC4, m_fieldC0 - 1, m_fieldC4);
    }
}

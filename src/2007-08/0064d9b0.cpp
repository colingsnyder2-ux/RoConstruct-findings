// from server: 100% by colin
// roc 2007-08 0064d9b0  unit: CXTPImageManager  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064d9b0
//
// 0064d9b0  56                   push esi
// 0064d9b1  57                   push edi
// 0064d9b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0064d9b6  57                   push edi
// 0064d9b7  8bf1                 mov esi, ecx
// 0064d9b9  e882f1ffff           call 0x64cb40
// 0064d9be  85c0                 test eax, eax
// 0064d9c0  7413                 je 0x64d9d5
// 0064d9c2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0064d9c6  6a01                 push 1
// 0064d9c8  51                   push ecx
// 0064d9c9  8bc8                 mov ecx, eax
// 0064d9cb  e870f0ffff           call 0x64ca40
// 0064d9d0  5f                   pop edi
// 0064d9d1  5e                   pop esi
// 0064d9d2  c20800               ret 8
// 0064d9d5  57                   push edi
// 0064d9d6  8bce                 mov ecx, esi
// 0064d9d8  e8d3edffff           call 0x64c7b0
// 0064d9dd  85c0                 test eax, eax
// 0064d9df  740d                 je 0x64d9ee
// 0064d9e1  57                   push edi
// 0064d9e2  8bc8                 mov ecx, eax
// 0064d9e4  e897f3ffff           call 0x64cd80
// 0064d9e9  5f                   pop edi
// 0064d9ea  5e                   pop esi
// 0064d9eb  c20800               ret 8
// 0064d9ee  5f                   pop edi
// 0064d9ef  33c0                 xor eax, eax
// 0064d9f1  5e                   pop esi
// 0064d9f2  c20800               ret 8

struct CXTPImageManager {
    void* findImage(int);
    void* findImage2(int);
    void* addImage(int, int);
    void* getImage(int);
    void* setImage(int, int);
};

void* CXTPImageManager::setImage(int a, int b) {
    void* p = findImage(a);
    if (p) {
        return ((CXTPImageManager*)p)->addImage(b, 1);
    }
    void* q = findImage2(a);
    if (q) {
        return ((CXTPImageManager*)q)->getImage(a);
    }
    return 0;
}

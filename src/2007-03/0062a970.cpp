// roc 2007-03 0062a970  unit: seg_00620000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062a970
//
// 0062a970  56                   push esi
// 0062a971  57                   push edi
// 0062a972  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0062a976  57                   push edi
// 0062a977  8bf1                 mov esi, ecx
// 0062a979  e852f0ffff           call 0x6299d0
// 0062a97e  85c0                 test eax, eax
// 0062a980  7413                 je 0x62a995
// 0062a982  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0062a986  6a01                 push 1
// 0062a988  51                   push ecx
// 0062a989  8bc8                 mov ecx, eax
// 0062a98b  e840efffff           call 0x6298d0
// 0062a990  5f                   pop edi
// 0062a991  5e                   pop esi
// 0062a992  c20800               ret 8
// 0062a995  57                   push edi
// 0062a996  8bce                 mov ecx, esi
// 0062a998  e833ebffff           call 0x6294d0
// 0062a99d  85c0                 test eax, eax
// 0062a99f  740d                 je 0x62a9ae
// 0062a9a1  57                   push edi
// 0062a9a2  8bc8                 mov ecx, eax
// 0062a9a4  e887f3ffff           call 0x629d30
// 0062a9a9  5f                   pop edi
// 0062a9aa  5e                   pop esi
// 0062a9ab  c20800               ret 8
// 0062a9ae  5f                   pop edi
// 0062a9af  33c0                 xor eax, eax
// 0062a9b1  5e                   pop esi
// 0062a9b2  c20800               ret 8
// copied from an identical function in another client (function ?setImage@CXTPImageManager@ns_ROCX000037@@QAEPAXHH@Z)

namespace ns_ROCX000037 {
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
}

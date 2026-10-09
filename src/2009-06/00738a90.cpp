// roc 2009-06 00738a90  unit: CXTPImageManagerIcon  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00738a90
//
// 00738a90  56                   push esi
// 00738a91  57                   push edi
// 00738a92  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00738a96  57                   push edi
// 00738a97  8bf1                 mov esi, ecx
// 00738a99  e822d9ffff           call 0x7363c0
// 00738a9e  85c0                 test eax, eax
// 00738aa0  7413                 je 0x738ab5
// 00738aa2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00738aa6  6a01                 push 1
// 00738aa8  51                   push ecx
// 00738aa9  8bc8                 mov ecx, eax
// 00738aab  e820d8ffff           call 0x7362d0
// 00738ab0  5f                   pop edi
// 00738ab1  5e                   pop esi
// 00738ab2  c20800               ret 8
// 00738ab5  57                   push edi
// 00738ab6  8bce                 mov ecx, esi
// 00738ab8  e853cdffff           call 0x735810
// 00738abd  85c0                 test eax, eax
// 00738abf  740d                 je 0x738ace
// 00738ac1  57                   push edi
// 00738ac2  8bc8                 mov ecx, eax
// 00738ac4  e887deffff           call 0x736950
// 00738ac9  5f                   pop edi
// 00738aca  5e                   pop esi
// 00738acb  c20800               ret 8
// 00738ace  5f                   pop edi
// 00738acf  33c0                 xor eax, eax
// 00738ad1  5e                   pop esi
// 00738ad2  c20800               ret 8
// copied from an identical function in another client (function ?setImage@CXTPImageManager@ns_ROCX000033@@QAEPAXHH@Z)

namespace ns_ROCX000033 {
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

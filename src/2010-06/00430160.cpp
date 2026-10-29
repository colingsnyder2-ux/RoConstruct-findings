// roc 2010-06 00430160  unit: CDeclarationView  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00430160
//
// 00430160  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 00430166  85c9                 test ecx, ecx
// 00430168  741a                 je 0x430184
// 0043016a  8b442404             mov eax, dword ptr [esp + 4]
// 0043016e  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00430171  52                   push edx
// 00430172  e8e9fbffff           call 0x42fd60
// 00430177  8b442408             mov eax, dword ptr [esp + 8]
// 0043017b  c70000000000         mov dword ptr [eax], 0
// 00430181  c20800               ret 8
// 00430184  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00430188  c70100000000         mov dword ptr [ecx], 0
// 0043018e  c20800               ret 8
// copied from an identical function in another client (function ?f@CDeclarationView@ns_ROCX000007@@QAEXPAXPAPAX@Z)

namespace ns_ROCX000007 {
// from server: 100% by atomic.potato
struct CDeclarationView
{
    char padding[0xb0];
    void *fieldB0;
    void f(void *, void **);
};

struct Helper
{
    void f(void *);
};

void CDeclarationView::f(void *arg1, void **arg2)
{
    if (fieldB0 != 0)
        ((Helper *)fieldB0)->f(*(void **)((char *)arg1 + 0x5c));
    *arg2 = 0;
}
}
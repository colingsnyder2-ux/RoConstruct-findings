// roc 2009-06 0042eb40  unit: CDeclarationView  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042eb40
//
// 0042eb40  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 0042eb46  85c9                 test ecx, ecx
// 0042eb48  741a                 je 0x42eb64
// 0042eb4a  8b442404             mov eax, dword ptr [esp + 4]
// 0042eb4e  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0042eb51  52                   push edx
// 0042eb52  e8e9fbffff           call 0x42e740
// 0042eb57  8b442408             mov eax, dword ptr [esp + 8]
// 0042eb5b  c70000000000         mov dword ptr [eax], 0
// 0042eb61  c20800               ret 8
// 0042eb64  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042eb68  c70100000000         mov dword ptr [ecx], 0
// 0042eb6e  c20800               ret 8
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

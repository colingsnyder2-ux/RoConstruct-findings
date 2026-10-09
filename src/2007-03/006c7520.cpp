// roc 2007-03 006c7520  unit: seg_006c0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c7520
//
// 006c7520  56                   push esi
// 006c7521  8bf1                 mov esi, ecx
// 006c7523  8b06                 mov eax, dword ptr [esi]
// 006c7525  8b5038               mov edx, dword ptr [eax + 0x38]
// 006c7528  6a00                 push 0
// 006c752a  ffd2                 call edx
// 006c752c  8b06                 mov eax, dword ptr [esi]
// 006c752e  8b5028               mov edx, dword ptr [eax + 0x28]
// 006c7531  8bce                 mov ecx, esi
// 006c7533  ffd2                 call edx
// 006c7535  5e                   pop esi
// 006c7536  c20400               ret 4
// copied from an identical function in another client (function ?f@CXTPDockingPaneMiniWnd@ns_ROCX00007a@@QAEXH@Z)

namespace ns_ROCX00007a {
struct CXTPDockingPaneMiniWnd {
    void f(int);
};

void CXTPDockingPaneMiniWnd::f(int) {
    (*(void (__thiscall **)(void *, int))(*((int *)this) + 0x38))(this, 0);
    (*(void (__thiscall **)(void *))(*((int *)this) + 0x28))(this);
}
}

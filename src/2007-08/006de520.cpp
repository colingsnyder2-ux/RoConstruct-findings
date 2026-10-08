// from server: 100% by colin
// roc 2007-08 006de520  unit: CXTPDockingPaneMiniWnd  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006de520
//
// 006de520  56                   push esi
// 006de521  8bf1                 mov esi, ecx
// 006de523  8b06                 mov eax, dword ptr [esi]
// 006de525  8b5038               mov edx, dword ptr [eax + 0x38]
// 006de528  6a00                 push 0
// 006de52a  ffd2                 call edx
// 006de52c  8b06                 mov eax, dword ptr [esi]
// 006de52e  8b5028               mov edx, dword ptr [eax + 0x28]
// 006de531  8bce                 mov ecx, esi
// 006de533  ffd2                 call edx
// 006de535  5e                   pop esi
// 006de536  c20400               ret 4

struct CXTPDockingPaneMiniWnd {
    void f(int);
};

void CXTPDockingPaneMiniWnd::f(int) {
    (*(void (__thiscall **)(void *, int))(*((int *)this) + 0x38))(this, 0);
    (*(void (__thiscall **)(void *))(*((int *)this) + 0x28))(this);
}

// from server: 100% by tester
// roc 2008-06 0056a760  unit: RBX::VInstance::?$NonFactoryProduct  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056a760
//
// 0056a760  8bc1                 mov eax, ecx
// 0056a762  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056a766  8b11                 mov edx, dword ptr [ecx]
// 0056a768  8910                 mov dword ptr [eax], edx
// 0056a76a  8b4904               mov ecx, dword ptr [ecx + 4]
// 0056a76d  894804               mov dword ptr [eax + 4], ecx
// 0056a770  85c9                 test ecx, ecx
// 0056a772  740c                 je 0x56a780
// 0056a774  83c104               add ecx, 4
// 0056a777  ba01000000           mov edx, 1
// 0056a77c  f00fc111             lock xadd dword ptr [ecx], edx
// 0056a780  8b08                 mov ecx, dword ptr [eax]
// 0056a782  ff01                 inc dword ptr [ecx]
// 0056a784  c20400               ret 4

#include <intrin.h>
struct Cnt { void* vt; long use; void add() { _InterlockedIncrement(&use); } };
struct Obj { int rc; };
struct SP {
    Obj* px; Cnt* pn;
    SP(const SP& o);
};
SP::SP(const SP& o) {
    px = o.px;
    pn = o.pn;
    if (pn) pn->add();
    ++px->rc;
}

// roc 2011-06 004321f0  unit: VCMDIFrameWnd::?$CXTPCommandBarsSiteBase  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004321f0
//
// 004321f0  8b542404             mov edx, dword ptr [esp + 4]
// 004321f4  8bc1                 mov eax, ecx
// 004321f6  8b08                 mov ecx, dword ptr [eax]
// 004321f8  8910                 mov dword ptr [eax], edx
// 004321fa  85c9                 test ecx, ecx
// 004321fc  740f                 je 0x43220d
// 004321fe  8b01                 mov eax, dword ptr [ecx]
// 00432200  8b5004               mov edx, dword ptr [eax + 4]
// 00432203  c744240401000000     mov dword ptr [esp + 4], 1
// 0043220b  ffe2                 jmp edx
// 0043220d  c20400               ret 4
// copied from an identical function in another client (function ?replace@CWrapperView@ns_ROCX000015@@QAEXPAUObject@2@@Z)

namespace ns_ROCX000015 {
struct Object {
    virtual void first();
    virtual void destroy(unsigned int);
};

struct CWrapperView {
    Object *object;
    void replace(Object *);
};

void CWrapperView::replace(Object *value)
{
    Object *old = object;
    object = value;
    if (old)
        old->destroy(1);
}
}

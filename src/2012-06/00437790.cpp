// roc 2012-06 00437790  unit: VCMDIFrameWnd::?$CXTPCommandBarsSiteBase  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00437790
//
// 00437790  8b542404             mov edx, dword ptr [esp + 4]
// 00437794  8bc1                 mov eax, ecx
// 00437796  8b08                 mov ecx, dword ptr [eax]
// 00437798  8910                 mov dword ptr [eax], edx
// 0043779a  85c9                 test ecx, ecx
// 0043779c  740f                 je 0x4377ad
// 0043779e  8b01                 mov eax, dword ptr [ecx]
// 004377a0  8b5004               mov edx, dword ptr [eax + 4]
// 004377a3  c744240401000000     mov dword ptr [esp + 4], 1
// 004377ab  ffe2                 jmp edx
// 004377ad  c20400               ret 4
// copied from an identical function in another client (function ?Set@CWrapperView@ns_ROCX000006@@QAEXPAX@Z)

namespace ns_ROCX000006 {
// from server: 100% by atomic.potato
struct CWrapperView
{
    void* value;
    void Set(void* value);
};

void CWrapperView::Set(void* value)
{
    void* old = this->value;
    this->value = value;
    if (old)
    {
        typedef void (__thiscall *Fn)(void*, int);
        Fn fn = *(Fn *)((char *)*(void **)old + 4);
        fn(old, 1);
    }
}
}
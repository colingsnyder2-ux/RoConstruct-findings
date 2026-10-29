// roc 2010-06 0042a7d0  unit: CWrapperView  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042a7d0
//
// 0042a7d0  8b542404             mov edx, dword ptr [esp + 4]
// 0042a7d4  8bc1                 mov eax, ecx
// 0042a7d6  8b08                 mov ecx, dword ptr [eax]
// 0042a7d8  8910                 mov dword ptr [eax], edx
// 0042a7da  85c9                 test ecx, ecx
// 0042a7dc  740f                 je 0x42a7ed
// 0042a7de  8b01                 mov eax, dword ptr [ecx]
// 0042a7e0  8b5004               mov edx, dword ptr [eax + 4]
// 0042a7e3  c744240401000000     mov dword ptr [esp + 4], 1
// 0042a7eb  ffe2                 jmp edx
// 0042a7ed  c20400               ret 4
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
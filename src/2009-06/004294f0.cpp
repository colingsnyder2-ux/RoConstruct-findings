// roc 2009-06 004294f0  unit: CWrapperView  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004294f0
//
// 004294f0  8b542404             mov edx, dword ptr [esp + 4]
// 004294f4  8bc1                 mov eax, ecx
// 004294f6  8b08                 mov ecx, dword ptr [eax]
// 004294f8  8910                 mov dword ptr [eax], edx
// 004294fa  85c9                 test ecx, ecx
// 004294fc  740f                 je 0x42950d
// 004294fe  8b01                 mov eax, dword ptr [ecx]
// 00429500  8b5004               mov edx, dword ptr [eax + 4]
// 00429503  c744240401000000     mov dword ptr [esp + 4], 1
// 0042950b  ffe2                 jmp edx
// 0042950d  c20400               ret 4
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

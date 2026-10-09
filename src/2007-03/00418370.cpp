// roc 2007-03 00418370  unit: seg_00410000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00418370
//
// 00418370  85c9                 test ecx, ecx
// 00418372  740f                 je 0x418383
// 00418374  8b01                 mov eax, dword ptr [ecx]
// 00418376  8b5004               mov edx, dword ptr [eax + 4]
// 00418379  c744240401000000     mov dword ptr [esp + 4], 1
// 00418381  ffe2                 jmp edx
// 00418383  c20400               ret 4
// copied from an identical function in another client (function ?execute@Marshaller@ns_ROCX00001d@@QAEXH@Z)

namespace ns_ROCX00001d {
struct Marshaller
{
    void execute(int job);
};

void Marshaller::execute(int job)
{
    if (this)
    {
        void (Marshaller::*p)(int) = *(void (Marshaller::**)(int))this;
        p = *(void (Marshaller::**)(int))(*(int*)this + 4);
        (this->*p)(1);
    }
}
}

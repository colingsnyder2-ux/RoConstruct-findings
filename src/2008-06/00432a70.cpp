// roc 2008-06 00432a70  unit: Marshaller  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00432a70
//
// 00432a70  85c9                 test ecx, ecx
// 00432a72  740f                 je 0x432a83
// 00432a74  8b01                 mov eax, dword ptr [ecx]
// 00432a76  8b5004               mov edx, dword ptr [eax + 4]
// 00432a79  c744240401000000     mov dword ptr [esp + 4], 1
// 00432a81  ffe2                 jmp edx
// 00432a83  c20400               ret 4
// copied from an identical function in another client (function ?execute@Marshaller@ns_ROCX000002@@QAEXH@Z)

namespace ns_ROCX000002 {
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

// roc 2011-06 004216e0  unit: RBX::FunctionMarshaller  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004216e0
//
// 004216e0  85c9                 test ecx, ecx
// 004216e2  740f                 je 0x4216f3
// 004216e4  8b01                 mov eax, dword ptr [ecx]
// 004216e6  8b5004               mov edx, dword ptr [eax + 4]
// 004216e9  c744240401000000     mov dword ptr [esp + 4], 1
// 004216f1  ffe2                 jmp edx
// 004216f3  c20400               ret 4
// copied from an identical function in another client (function ?execute@Marshaller@ns_ROCX000000@@QAEXH@Z)

namespace ns_ROCX000000 {
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

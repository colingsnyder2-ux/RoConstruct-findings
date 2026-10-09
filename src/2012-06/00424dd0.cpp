// roc 2012-06 00424dd0  unit: RBX::FunctionMarshaller  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00424dd0
//
// 00424dd0  85c9                 test ecx, ecx
// 00424dd2  740f                 je 0x424de3
// 00424dd4  8b01                 mov eax, dword ptr [ecx]
// 00424dd6  8b5004               mov edx, dword ptr [eax + 4]
// 00424dd9  c744240401000000     mov dword ptr [esp + 4], 1
// 00424de1  ffe2                 jmp edx
// 00424de3  c20400               ret 4
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

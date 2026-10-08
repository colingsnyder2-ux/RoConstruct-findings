// from server: 100% by colin
// roc 2007-08 00433270  unit: Marshaller  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00433270
//
// 00433270  85c9                 test ecx, ecx
// 00433272  740f                 je 0x433283
// 00433274  8b01                 mov eax, dword ptr [ecx]
// 00433276  8b5004               mov edx, dword ptr [eax + 4]
// 00433279  c744240401000000     mov dword ptr [esp + 4], 1
// 00433281  ffe2                 jmp edx
// 00433283  c20400               ret 4

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

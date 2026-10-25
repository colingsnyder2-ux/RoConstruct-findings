// from server: 100% by king_originala
// roc 2008-06 0064d060  unit: RBX::SimJobStage  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064d060
//
// 0064d060  53                   push ebx
// 0064d061  56                   push esi
// 0064d062  57                   push edi
// 0064d063  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0064d067  8bf1                 mov esi, ecx
// 0064d069  56                   push esi
// 0064d06a  8bcf                 mov ecx, edi
// 0064d06c  e8bf87ffff           call 0x645830
// 0064d071  8b06                 mov eax, dword ptr [esi]
// 0064d073  8b500c               mov edx, dword ptr [eax + 0xc]
// 0064d076  8b1f                 mov ebx, dword ptr [edi]
// 0064d078  8bce                 mov ecx, esi
// 0064d07a  ffd2                 call edx
// 0064d07c  50                   push eax
// 0064d07d  8b4304               mov eax, dword ptr [ebx + 4]
// 0064d080  8bcf                 mov ecx, edi
// 0064d082  ffd0                 call eax
// 0064d084  5f                   pop edi
// 0064d085  5e                   pop esi
// 0064d086  5b                   pop ebx
// 0064d087  c20400               ret 4

struct Receiver {
    virtual void slot0();
    virtual void submit(int value);
    int m_x;
    void f(int a1);
};

struct S {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual int value();
    void f(Receiver *receiver);
};

void S::f(Receiver *receiver)
{
    receiver->f((int)this);
    receiver->submit(value());
}

// from server: 100% by king_originala
// roc 2008-06 0064a510  unit: RBX::CleanStage  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064a510
//
// 0064a510  53                   push ebx
// 0064a511  56                   push esi
// 0064a512  57                   push edi
// 0064a513  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0064a517  8bf1                 mov esi, ecx
// 0064a519  8b4f04               mov ecx, dword ptr [edi + 4]
// 0064a51c  8b01                 mov eax, dword ptr [ecx]
// 0064a51e  8b5004               mov edx, dword ptr [eax + 4]
// 0064a521  ffd2                 call edx
// 0064a523  8bd8                 mov ebx, eax
// 0064a525  8b06                 mov eax, dword ptr [esi]
// 0064a527  8b5004               mov edx, dword ptr [eax + 4]
// 0064a52a  8bce                 mov ecx, esi
// 0064a52c  ffd2                 call edx
// 0064a52e  3bd8                 cmp ebx, eax
// 0064a530  7e0b                 jle 0x64a53d
// 0064a532  8b4e08               mov ecx, dword ptr [esi + 8]
// 0064a535  8b01                 mov eax, dword ptr [ecx]
// 0064a537  8b5014               mov edx, dword ptr [eax + 0x14]
// 0064a53a  57                   push edi
// 0064a53b  ffd2                 call edx
// 0064a53d  56                   push esi
// 0064a53e  8bcf                 mov ecx, edi
// 0064a540  e8dbb2ffff           call 0x645820
// 0064a545  5f                   pop edi
// 0064a546  5e                   pop esi
// 0064a547  5b                   pop ebx
// 0064a548  c20400               ret 4

struct Stage;

struct S_func_00645820 {
    char pad0[4];
    int m_x;
    void f(int a1);
};

struct Receiver {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void process(S_func_00645820*);
};

struct Stage {
    virtual void slot0();
    virtual int getValue();
    int pad4;
    Receiver* receiver;
    void f(S_func_00645820* arg);
};

void Stage::f(S_func_00645820* arg)
{
    int value = reinterpret_cast<Stage*>(arg->m_x)->getValue();
    if (value > getValue())
        receiver->process(arg);
    arg->f(reinterpret_cast<int>(this));
}

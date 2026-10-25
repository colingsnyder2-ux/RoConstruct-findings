// from server: 100% by king_originala
// roc 2008-06 0064ca00  unit: RBX::SleepStage  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064ca00
//
// 0064ca00  8a44240c             mov al, byte ptr [esp + 0xc]
// 0064ca04  53                   push ebx
// 0064ca05  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0064ca09  56                   push esi
// 0064ca0a  8bf1                 mov esi, ecx
// 0064ca0c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0064ca10  57                   push edi
// 0064ca11  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0064ca15  898edc000000         mov dword ptr [esi + 0xdc], ecx
// 0064ca1b  8886d8000000         mov byte ptr [esi + 0xd8], al
// 0064ca21  8bce                 mov ecx, esi
// 0064ca23  84db                 test bl, bl
// 0064ca25  7407                 je 0x64ca2e
// 0064ca27  e824feffff           call 0x64c850
// 0064ca2c  eb06                 jmp 0x64ca34
// 0064ca2e  57                   push edi
// 0064ca2f  e86cfeffff           call 0x64c8a0
// 0064ca34  0fb686d8000000       movzx eax, byte ptr [esi + 0xd8]
// 0064ca3b  8b4e08               mov ecx, dword ptr [esi + 8]
// 0064ca3e  8b11                 mov edx, dword ptr [ecx]
// 0064ca40  8b5208               mov edx, dword ptr [edx + 8]
// 0064ca43  53                   push ebx
// 0064ca44  50                   push eax
// 0064ca45  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0064ca4b  50                   push eax
// 0064ca4c  57                   push edi
// 0064ca4d  ffd2                 call edx
// 0064ca4f  5f                   pop edi
// 0064ca50  5e                   pop esi
// 0064ca51  5b                   pop ebx
// 0064ca52  c21000               ret 0x10

struct Base {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void set(int index, int value, bool enabled, bool reset) = 0;
};

struct SleepStage {
    char pad0[8];
    Base* base;
    char pad1[204];
    bool enabled;
    char pad2[3];
    int value;

    void reset();
    void update(int index);
    void set(int index, int newValue, bool newEnabled, bool doReset);
};

void SleepStage::set(int index, int newValue, bool newEnabled, bool doReset)
{
    enabled = newEnabled;
    value = newValue;
    if (doReset)
        reset();
    else
        update(index);
    base->set(index, value, enabled, doReset);
}

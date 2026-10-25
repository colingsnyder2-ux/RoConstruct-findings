// from server: 100% by king_originala
// roc 2008-06 00642270  unit: RBX::VerbWidget  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00642270
//
// 00642270  56                   push esi
// 00642271  8bf1                 mov esi, ecx
// 00642273  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 0064227a  742a                 je 0x6422a6
// 0064227c  8b8e48010000         mov ecx, dword ptr [esi + 0x148]
// 00642282  8b01                 mov eax, dword ptr [ecx]
// 00642284  8b5008               mov edx, dword ptr [eax + 8]
// 00642287  ffd2                 call edx
// 00642289  84c0                 test al, al
// 0064228b  7419                 je 0x6422a6
// 0064228d  8b8e48010000         mov ecx, dword ptr [esi + 0x148]
// 00642293  8b542408             mov edx, dword ptr [esp + 8]
// 00642297  8b01                 mov eax, dword ptr [ecx]
// 00642299  8b5214               mov edx, dword ptr [edx + 0x14]
// 0064229c  5e                   pop esi
// 0064229d  89542404             mov dword ptr [esp + 4], edx
// 006422a1  8b4010               mov eax, dword ptr [eax + 0x10]
// 006422a4  ffe0                 jmp eax
// 006422a6  5e                   pop esi
// 006422a7  c20400               ret 4

struct Action {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual bool enabled() = 0;
    virtual void slot3() = 0;
    virtual void execute(void*) = 0;
};

struct Argument {
    char padding[0x14];
    void* value;
};

struct VerbWidget {
    char padding[0x148];
    Action* action;
    void invoke(Argument*);
};

void VerbWidget::invoke(Argument* argument)
{
    if (action && action->enabled())
        action->execute(argument->value);
}

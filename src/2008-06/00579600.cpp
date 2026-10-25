// from server: 100% by king_originala
// roc 2008-06 00579600  unit: RBX::VDataModel::?$BoundFuncDesc  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00579600
//
// 00579600  6aff                 push -1
// 00579602  6809097d00           push 0x7d0909
// 00579607  64a100000000         mov eax, dword ptr fs:[0]
// 0057960d  50                   push eax
// 0057960e  64892500000000       mov dword ptr fs:[0], esp
// 00579615  51                   push ecx
// 00579616  8b442430             mov eax, dword ptr [esp + 0x30]
// 0057961a  56                   push esi
// 0057961b  8bf1                 mov esi, ecx
// 0057961d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00579621  50                   push eax
// 00579622  51                   push ecx
// 00579623  8974240c             mov dword ptr [esp + 0xc], esi
// 00579627  e894f2ffff           call 0x5788c0
// 0057962c  50                   push eax
// 0057962d  8bce                 mov ecx, esi
// 0057962f  e85cc10100           call 0x595790
// 00579634  8b542418             mov edx, dword ptr [esp + 0x18]
// 00579638  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057963c  8d4e40               lea ecx, [esi + 0x40]
// 0057963f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00579647  c70680008300         mov dword ptr [esi], 0x830080
// 0057964d  895638               mov dword ptr [esi + 0x38], edx
// 00579650  89463c               mov dword ptr [esi + 0x3c], eax
// 00579653  e868b40100           call 0x594ac0
// 00579658  8d4e48               lea ecx, [esi + 0x48]
// 0057965b  c644241001           mov byte ptr [esp + 0x10], 1
// 00579660  e85bb40100           call 0x594ac0
// 00579665  c644241002           mov byte ptr [esp + 0x10], 2
// 0057966a  e8c135ffff           call 0x56cc30
// 0057966f  6a08                 push 8
// 00579671  894650               mov dword ptr [esi + 0x50], eax
// 00579674  e8a7721200           call 0x6a0920
// 00579679  83c404               add esp, 4
// 0057967c  85c0                 test eax, eax
// 0057967e  740f                 je 0x57968f
// 00579680  8a4c2430             mov cl, byte ptr [esp + 0x30]
// 00579684  c70084ba8000         mov dword ptr [eax], 0x80ba84
// 0057968a  884804               mov byte ptr [eax + 4], cl
// 0057968d  eb02                 jmp 0x579691
// 0057968f  33c0                 xor eax, eax
// 00579691  894654               mov dword ptr [esi + 0x54], eax
// 00579694  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00579698  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057969c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005796a0  52                   push edx
// 005796a1  50                   push eax
// 005796a2  51                   push ecx
// 005796a3  8bce                 mov ecx, esi
// 005796a5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005796aa  e8b1bdffff           call 0x575460
// 005796af  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005796b3  8bc6                 mov eax, esi
// 005796b5  5e                   pop esi
// 005796b6  64890d00000000       mov dword ptr fs:[0], ecx
// 005796bd  83c410               add esp, 0x10
// 005796c0  c22000               ret 0x20

extern "C" void* __cdecl getDescriptor();
extern "C" void* __cdecl getValueType();

void* __cdecl operator new(unsigned int);

struct Base {
    char storage[52];
    Base(void*, const char*, int);
    virtual ~Base();
};

struct Value {
    void* type;
    void* data;
    Value();
    ~Value();
};

struct Flag {
    bool value;
    Flag(bool);
    virtual ~Flag();
};

inline Flag::Flag(bool enabled) : value(enabled) {}

struct FlagOwner {
    Flag* pointer;
    FlagOwner(Flag*);
    ~FlagOwner();
};

inline FlagOwner::FlagOwner(Flag* p) : pointer(p) {}

struct S : Base {
    void* first;
    void* second;
    Value value1;
    Value value2;
    void* type;
    FlagOwner flag;

    S(void*, void*, const char*, const char*, void*, void*, bool, int);
    virtual ~S();
    void set(const char*, void*, void*);
};

S::S(void* a, void* b, const char* name, const char* text,
     void* c, void* d, bool enabled, int options)
    : Base(getDescriptor(), name, options),
      first(a),
      second(b),
      value1(),
      value2(),
      type(getValueType()),
      flag(new Flag(enabled))
{
    set(text, c, d);
}

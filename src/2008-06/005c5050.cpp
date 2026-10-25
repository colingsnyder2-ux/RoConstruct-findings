// from server: 100% by king_originala
// roc 2008-06 005c5050  unit: RBX::VVisit::?$BoundFuncDesc  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c5050
//
// 005c5050  6aff                 push -1
// 005c5052  689ee37c00           push 0x7ce39e
// 005c5057  64a100000000         mov eax, dword ptr fs:[0]
// 005c505d  50                   push eax
// 005c505e  64892500000000       mov dword ptr fs:[0], esp
// 005c5065  51                   push ecx
// 005c5066  8b442428             mov eax, dword ptr [esp + 0x28]
// 005c506a  56                   push esi
// 005c506b  8bf1                 mov esi, ecx
// 005c506d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005c5071  50                   push eax
// 005c5072  51                   push ecx
// 005c5073  8974240c             mov dword ptr [esp + 0xc], esi
// 005c5077  e844b5ffff           call 0x5c05c0
// 005c507c  50                   push eax
// 005c507d  8bce                 mov ecx, esi
// 005c507f  e80c07fdff           call 0x595790
// 005c5084  8b542418             mov edx, dword ptr [esp + 0x18]
// 005c5088  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005c508c  8d4e40               lea ecx, [esi + 0x40]
// 005c508f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c5097  c706e88e8300         mov dword ptr [esi], 0x838ee8
// 005c509d  895638               mov dword ptr [esi + 0x38], edx
// 005c50a0  89463c               mov dword ptr [esi + 0x3c], eax
// 005c50a3  e818fafcff           call 0x594ac0
// 005c50a8  8d4e48               lea ecx, [esi + 0x48]
// 005c50ab  c644241001           mov byte ptr [esp + 0x10], 1
// 005c50b0  e80bfafcff           call 0x594ac0
// 005c50b5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005c50b9  8b542424             mov edx, dword ptr [esp + 0x24]
// 005c50bd  51                   push ecx
// 005c50be  52                   push edx
// 005c50bf  8bce                 mov ecx, esi
// 005c50c1  c644241802           mov byte ptr [esp + 0x18], 2
// 005c50c6  e8e5f3ffff           call 0x5c44b0
// 005c50cb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c50cf  8bc6                 mov eax, esi
// 005c50d1  5e                   pop esi
// 005c50d2  64890d00000000       mov dword ptr fs:[0], ecx
// 005c50d9  83c410               add esp, 0x10
// 005c50dc  c21800               ret 0x18

extern "C" void* __cdecl getDescriptor();

struct Base {
    unsigned char storage[52];
    Base(void*, const char*, int);
    virtual ~Base();
};

struct Value {
    unsigned int data[2];
    Value();
    ~Value();
};

struct S : Base {
    unsigned int functionLow;
    unsigned int functionHigh;
    Value first;
    Value second;

    S(unsigned int, unsigned int, const char*, const char*, const char*, int);
    virtual ~S();
    void initialize(const char*, const char*);
};

S::S(unsigned int low, unsigned int high, const char* name,
     const char* firstName, const char* secondName, int attributes)
    : Base(getDescriptor(), name, attributes),
      functionLow(low),
      functionHigh(high),
      first(),
      second()
{
    initialize(firstName, secondName);
}

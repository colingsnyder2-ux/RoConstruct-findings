// from server: 100% by king_originala
// roc 2008-06 005da4e0  unit: RBX::VHumanoid::?$SignalDesc  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005da4e0
//
// 005da4e0  6aff                 push -1
// 005da4e2  6868e37c00           push 0x7ce368
// 005da4e7  64a100000000         mov eax, dword ptr fs:[0]
// 005da4ed  50                   push eax
// 005da4ee  64892500000000       mov dword ptr fs:[0], esp
// 005da4f5  51                   push ecx
// 005da4f6  56                   push esi
// 005da4f7  8bf1                 mov esi, ecx
// 005da4f9  57                   push edi
// 005da4fa  89742408             mov dword ptr [esp + 8], esi
// 005da4fe  e83d9afaff           call 0x583f40
// 005da503  8bf8                 mov edi, eax
// 005da505  e85663feff           call 0x5c0860
// 005da50a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005da50e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005da512  51                   push ecx
// 005da513  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005da517  52                   push edx
// 005da518  51                   push ecx
// 005da519  57                   push edi
// 005da51a  50                   push eax
// 005da51b  8bce                 mov ecx, esi
// 005da51d  e82e21f9ff           call 0x56c650
// 005da522  8b542430             mov edx, dword ptr [esp + 0x30]
// 005da526  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005da52a  83ec0c               sub esp, 0xc
// 005da52d  8bc4                 mov eax, esp
// 005da52f  8910                 mov dword ptr [eax], edx
// 005da531  8b542444             mov edx, dword ptr [esp + 0x44]
// 005da535  894804               mov dword ptr [eax + 4], ecx
// 005da538  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005da53c  895008               mov dword ptr [eax + 8], edx
// 005da53f  8b542434             mov edx, dword ptr [esp + 0x34]
// 005da543  83ec0c               sub esp, 0xc
// 005da546  8bc4                 mov eax, esp
// 005da548  8908                 mov dword ptr [eax], ecx
// 005da54a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005da54e  895004               mov dword ptr [eax + 4], edx
// 005da551  8d542454             lea edx, [esp + 0x54]
// 005da555  52                   push edx
// 005da556  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005da55e  c706e4d58300         mov dword ptr [esi], 0x83d5e4
// 005da564  c74618dcd58300       mov dword ptr [esi + 0x18], 0x83d5dc
// 005da56b  894808               mov dword ptr [eax + 8], ecx
// 005da56e  e89ddbffff           call 0x5d8110
// 005da573  8b08                 mov ecx, dword ptr [eax]
// 005da575  c70000000000         mov dword ptr [eax], 0
// 005da57b  8b442458             mov eax, dword ptr [esp + 0x58]
// 005da57f  83c41c               add esp, 0x1c
// 005da582  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005da585  85c0                 test eax, eax
// 005da587  7409                 je 0x5da592
// 005da589  50                   push eax
// 005da58a  e8eb600c00           call 0x6a067a
// 005da58f  83c404               add esp, 4
// 005da592  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005da596  5f                   pop edi
// 005da597  8bc6                 mov eax, esi
// 005da599  64890d00000000       mov dword ptr fs:[0], ecx
// 005da5a0  5e                   pop esi
// 005da5a1  83c410               add esp, 0x10
// 005da5a4  c22400               ret 0x24

struct Triple {
    unsigned int a, b, c;
};

struct Token {
    void *p;
};

void __cdecl operator delete(void *);

struct Owner {
    void *p;

    ~Owner() { if (p) operator delete(p); }

    void *release() {
        void *value = p;
        p = 0;
        return value;
    }
};

extern Token __cdecl getModel();
extern Token __cdecl getSettings();
extern Owner __cdecl makeOwner(Triple, Triple);

struct Base {
    unsigned int data[5];

    Base(Token, Token, unsigned int, unsigned int, unsigned int);
    virtual ~Base();
};

struct __declspec(novtable) Interface {
    virtual void invoke();
};

struct SignalDesc : Base, Interface {
    void *owner;

    SignalDesc(unsigned int, unsigned int, Triple, Triple, unsigned int);
    virtual ~SignalDesc();
    virtual void invoke();
};

SignalDesc::SignalDesc(unsigned int a, unsigned int b,
                       Triple first, Triple second, unsigned int flags)
    : Base(getSettings(), getModel(), a, b, flags),
      owner(makeOwner(first, second).release())
{
}

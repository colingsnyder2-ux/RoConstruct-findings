// from server: 68% by king_originala
// from server: 56% by king_originala
// roc 2008-06 006426f0  unit: RBX::VWidget::?$NonFactoryProduct  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006426f0
//
// 006426f0  51                   push ecx
// 006426f1  53                   push ebx
// 006426f2  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006426f6  56                   push esi
// 006426f7  83ec20               sub esp, 0x20
// 006426fa  8bf4                 mov esi, esp
// 006426fc  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00642704  89642428             mov dword ptr [esp + 0x28], esp
// 00642708  57                   push edi
// 00642709  8bce                 mov ecx, esi
// 0064270b  ff155c248000         call dword ptr [0x80245c]
// 00642711  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00642714  89461c               mov dword ptr [esi + 0x1c], eax
// 00642717  8b0d744d9700         mov ecx, dword ptr [0x974d74]
// 0064271d  e88efdf1ff           call 0x5624b0
// 00642722  84c0                 test al, al
// 00642724  7415                 je 0x64273b
// 00642726  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0064272a  57                   push edi
// 0064272b  51                   push ecx
// 0064272c  53                   push ebx
// 0064272d  e8fe550300           call 0x677d30
// 00642732  83c40c               add esp, 0xc
// 00642735  8bc3                 mov eax, ebx
// 00642737  5e                   pop esi
// 00642738  5b                   pop ebx
// 00642739  59                   pop ecx
// 0064273a  c3                   ret 
// 0064273b  5e                   pop esi
// 0064273c  c70300000000         mov dword ptr [ebx], 0
// 00642742  8bc3                 mov eax, ebx
// 00642744  5b                   pop ebx
// 00642745  59                   pop ecx
// 00642746  c3                   ret 

struct Text {
    unsigned char data[28];
    Text(const Text&);
    ~Text();
};

extern Text* (__thiscall *copyText)(Text*, const Text*);

inline Text::Text(const Text& other) {
    copyText(this, &other);
}

struct Argument {
    Text text;
    unsigned value;
};

struct Context {
    bool check(Argument argument);
};

extern Context* context;

struct Result {
    unsigned value;
    Result() : value(0) {}
    ~Result();
};
extern Result __cdecl buildResult(unsigned, const Argument*);
static __declspec(noinline) Result reconstruct(unsigned value, const Argument* argument) {
    if (context->check(*argument))
        return buildResult(value, argument);
    return Result();
}
Result invoke(unsigned value, const Argument* argument) { return reconstruct(value, argument); }

// roc 2012-06 00459330  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00459330
//
// 00459330  6aff                 push -1
// 00459332  6888f1a900           push 0xa9f188
// 00459337  64a100000000         mov eax, dword ptr fs:[0]
// 0045933d  50                   push eax
// 0045933e  64892500000000       mov dword ptr fs:[0], esp
// 00459345  51                   push ecx
// 00459346  56                   push esi
// 00459347  8bf1                 mov esi, ecx
// 00459349  83ec1c               sub esp, 0x1c
// 0045934c  8d442440             lea eax, [esp + 0x40]
// 00459350  89642420             mov dword ptr [esp + 0x20], esp
// 00459354  8bcc                 mov ecx, esp
// 00459356  50                   push eax
// 00459357  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0045935f  ff154426b200         call dword ptr [0xb22644]
// 00459365  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00459369  8b542438             mov edx, dword ptr [esp + 0x38]
// 0045936d  8b442434             mov eax, dword ptr [esp + 0x34]
// 00459371  51                   push ecx
// 00459372  52                   push edx
// 00459373  50                   push eax
// 00459374  8bce                 mov ecx, esi
// 00459376  e845ffffff           call 0x4592c0
// 0045937b  8d4c2424             lea ecx, [esp + 0x24]
// 0045937f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00459387  ff153c26b200         call dword ptr [0xb2263c]
// 0045938d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00459391  8bc6                 mov eax, esi
// 00459393  64890d00000000       mov dword ptr fs:[0], ecx
// 0045939a  5e                   pop esi
// 0045939b  83c410               add esp, 0x10
// 0045939e  c22800               ret 0x28
// copied from an identical function in another client (function ?f@S@@QAEPAU1@HHHUString@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct String
{
    char data[28];
    String(const String&);
    ~String();
};

extern void (__thiscall *stringCopy)(String*, const String&);
extern void (__thiscall *stringDestroy)(String*);

__forceinline String::String(const String& value)
{
    stringCopy(this, value);
}

__forceinline String::~String()
{
    stringDestroy(this);
}

struct S
{
    S* f(int, int, int, String);
    void g(int, int, int, String);
};

S* S::f(int a, int b, int c, String value)
{
    g(a, b, c, value);
    return this;
}
// from server: 100% by king_originala
// roc 2008-06 004d9610  unit: RBX::ViewNew::VRenderSurfaceTypes::?$Table  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d9610
//
// 004d9610  6aff                 push -1
// 004d9612  686ea87c00           push 0x7ca86e
// 004d9617  64a100000000         mov eax, dword ptr fs:[0]
// 004d961d  50                   push eax
// 004d961e  64892500000000       mov dword ptr fs:[0], esp
// 004d9625  51                   push ecx
// 004d9626  56                   push esi
// 004d9627  8bf1                 mov esi, ecx
// 004d9629  c70600000000         mov dword ptr [esi], 0
// 004d962f  89742404             mov dword ptr [esp + 4], esi
// 004d9633  c7460400000000       mov dword ptr [esi + 4], 0
// 004d963a  8b442418             mov eax, dword ptr [esp + 0x18]
// 004d963e  8b4804               mov ecx, dword ptr [eax + 4]
// 004d9641  8b10                 mov edx, dword ptr [eax]
// 004d9643  6a00                 push 0
// 004d9645  51                   push ecx
// 004d9646  52                   push edx
// 004d9647  8d4e08               lea ecx, [esi + 8]
// 004d964a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004d9652  e8a9f0ffff           call 0x4d8700
// 004d9657  6a28                 push 0x28
// 004d9659  c644241401           mov byte ptr [esp + 0x14], 1
// 004d965e  e8bd721c00           call 0x6a0920
// 004d9663  83c404               add esp, 4
// 004d9666  89442418             mov dword ptr [esp + 0x18], eax
// 004d966a  c644241002           mov byte ptr [esp + 0x10], 2
// 004d966f  85c0                 test eax, eax
// 004d9671  7409                 je 0x4d967c
// 004d9673  8bc8                 mov ecx, eax
// 004d9675  e8c616f4ff           call 0x41ad40
// 004d967a  eb02                 jmp 0x4d967e
// 004d967c  33c0                 xor eax, eax
// 004d967e  50                   push eax
// 004d967f  8bce                 mov ecx, esi
// 004d9681  c644241401           mov byte ptr [esp + 0x14], 1
// 004d9686  e8651af4ff           call 0x41b0f0
// 004d968b  8bce                 mov ecx, esi
// 004d968d  e8aec10b00           call 0x595840
// 004d9692  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d9696  8bc6                 mov eax, esi
// 004d9698  5e                   pop esi
// 004d9699  64890d00000000       mov dword ptr fs:[0], ecx
// 004d96a0  83c410               add esp, 0x10
// 004d96a3  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct State
{
    unsigned char storage[0x28];
    State();
};

struct Count
{
    int value;
    Count();
    ~Count();
};

inline Count::Count() : value(0)
{
}

struct Member
{
    Member(int, int, int);
    ~Member();
};

struct Arguments
{
    int first;
    int second;
};

struct Table
{
    int first;
    Count second;
    Member member;
    Table(const Arguments&);
    void set(State*);
    void finish();
};

Table::Table(const Arguments& args)
    : first(0), second(), member(args.first, args.second, 0)
{
    set(new State);
    finish();
}

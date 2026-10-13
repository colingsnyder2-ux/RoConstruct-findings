// from server: 100% by colin
// roc 2008-06 004dbaa0  unit: RBX::ViewNew::ViewRbxGfx  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004dbaa0
//
// 004dbaa0  6aff                 push -1
// 004dbaa2  686ea87c00           push 0x7ca86e
// 004dbaa7  64a100000000         mov eax, dword ptr fs:[0]
// 004dbaad  50                   push eax
// 004dbaae  64892500000000       mov dword ptr fs:[0], esp
// 004dbab5  51                   push ecx
// 004dbab6  56                   push esi
// 004dbab7  8bf1                 mov esi, ecx
// 004dbab9  c70600000000         mov dword ptr [esi], 0
// 004dbabf  89742404             mov dword ptr [esp + 4], esi
// 004dbac3  c7460400000000       mov dword ptr [esi + 4], 0
// 004dbaca  8b442418             mov eax, dword ptr [esp + 0x18]
// 004dbace  8b4804               mov ecx, dword ptr [eax + 4]
// 004dbad1  8b10                 mov edx, dword ptr [eax]
// 004dbad3  6a00                 push 0
// 004dbad5  51                   push ecx
// 004dbad6  52                   push edx
// 004dbad7  8d4e08               lea ecx, [esi + 8]
// 004dbada  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004dbae2  e8f9feffff           call 0x4db9e0
// 004dbae7  6a28                 push 0x28
// 004dbae9  c644241401           mov byte ptr [esp + 0x14], 1
// 004dbaee  e82d4e1c00           call 0x6a0920
// 004dbaf3  83c404               add esp, 4
// 004dbaf6  89442418             mov dword ptr [esp + 0x18], eax
// 004dbafa  c644241002           mov byte ptr [esp + 0x10], 2
// 004dbaff  85c0                 test eax, eax
// 004dbb01  7409                 je 0x4dbb0c
// 004dbb03  8bc8                 mov ecx, eax
// 004dbb05  e836f2f3ff           call 0x41ad40
// 004dbb0a  eb02                 jmp 0x4dbb0e
// 004dbb0c  33c0                 xor eax, eax
// 004dbb0e  50                   push eax
// 004dbb0f  8bce                 mov ecx, esi
// 004dbb11  c644241401           mov byte ptr [esp + 0x14], 1
// 004dbb16  e8d5f5f3ff           call 0x41b0f0
// 004dbb1b  8bce                 mov ecx, esi
// 004dbb1d  e81e9d0b00           call 0x595840
// 004dbb22  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004dbb26  8bc6                 mov eax, esi
// 004dbb28  5e                   pop esi
// 004dbb29  64890d00000000       mov dword ptr fs:[0], ecx
// 004dbb30  83c410               add esp, 0x10
// 004dbb33  c20400               ret 4

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

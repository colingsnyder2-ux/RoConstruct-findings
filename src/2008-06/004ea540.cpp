// from server: 100% by colin
// roc 2008-06 004ea540  unit: RBX::ViewNew::Part  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ea540
//
// 004ea540  6aff                 push -1
// 004ea542  686ea87c00           push 0x7ca86e
// 004ea547  64a100000000         mov eax, dword ptr fs:[0]
// 004ea54d  50                   push eax
// 004ea54e  64892500000000       mov dword ptr fs:[0], esp
// 004ea555  51                   push ecx
// 004ea556  56                   push esi
// 004ea557  8bf1                 mov esi, ecx
// 004ea559  c70600000000         mov dword ptr [esi], 0
// 004ea55f  89742404             mov dword ptr [esp + 4], esi
// 004ea563  c7460400000000       mov dword ptr [esi + 4], 0
// 004ea56a  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ea56e  8b4804               mov ecx, dword ptr [eax + 4]
// 004ea571  8b10                 mov edx, dword ptr [eax]
// 004ea573  6a00                 push 0
// 004ea575  51                   push ecx
// 004ea576  52                   push edx
// 004ea577  8d4e08               lea ecx, [esi + 8]
// 004ea57a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004ea582  e8b9f9ffff           call 0x4e9f40
// 004ea587  6a28                 push 0x28
// 004ea589  c644241401           mov byte ptr [esp + 0x14], 1
// 004ea58e  e88d631b00           call 0x6a0920
// 004ea593  83c404               add esp, 4
// 004ea596  89442418             mov dword ptr [esp + 0x18], eax
// 004ea59a  c644241002           mov byte ptr [esp + 0x10], 2
// 004ea59f  85c0                 test eax, eax
// 004ea5a1  7409                 je 0x4ea5ac
// 004ea5a3  8bc8                 mov ecx, eax
// 004ea5a5  e89607f3ff           call 0x41ad40
// 004ea5aa  eb02                 jmp 0x4ea5ae
// 004ea5ac  33c0                 xor eax, eax
// 004ea5ae  50                   push eax
// 004ea5af  8bce                 mov ecx, esi
// 004ea5b1  c644241401           mov byte ptr [esp + 0x14], 1
// 004ea5b6  e8350bf3ff           call 0x41b0f0
// 004ea5bb  8bce                 mov ecx, esi
// 004ea5bd  e87eb20a00           call 0x595840
// 004ea5c2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ea5c6  8bc6                 mov eax, esi
// 004ea5c8  5e                   pop esi
// 004ea5c9  64890d00000000       mov dword ptr fs:[0], ecx
// 004ea5d0  83c410               add esp, 0x10
// 004ea5d3  c20400               ret 4

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

// from server: 100% by colin
// roc 2008-06 004dbb40  unit: RBX::ViewNew::ViewRbxGfx  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004dbb40
//
// 004dbb40  6aff                 push -1
// 004dbb42  686ea87c00           push 0x7ca86e
// 004dbb47  64a100000000         mov eax, dword ptr fs:[0]
// 004dbb4d  50                   push eax
// 004dbb4e  64892500000000       mov dword ptr fs:[0], esp
// 004dbb55  51                   push ecx
// 004dbb56  56                   push esi
// 004dbb57  8bf1                 mov esi, ecx
// 004dbb59  c70600000000         mov dword ptr [esi], 0
// 004dbb5f  89742404             mov dword ptr [esp + 4], esi
// 004dbb63  c7460400000000       mov dword ptr [esi + 4], 0
// 004dbb6a  8b442418             mov eax, dword ptr [esp + 0x18]
// 004dbb6e  8b4804               mov ecx, dword ptr [eax + 4]
// 004dbb71  8b10                 mov edx, dword ptr [eax]
// 004dbb73  6a00                 push 0
// 004dbb75  51                   push ecx
// 004dbb76  52                   push edx
// 004dbb77  8d4e08               lea ecx, [esi + 8]
// 004dbb7a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004dbb82  e8b9feffff           call 0x4dba40
// 004dbb87  6a28                 push 0x28
// 004dbb89  c644241401           mov byte ptr [esp + 0x14], 1
// 004dbb8e  e88d4d1c00           call 0x6a0920
// 004dbb93  83c404               add esp, 4
// 004dbb96  89442418             mov dword ptr [esp + 0x18], eax
// 004dbb9a  c644241002           mov byte ptr [esp + 0x10], 2
// 004dbb9f  85c0                 test eax, eax
// 004dbba1  7409                 je 0x4dbbac
// 004dbba3  8bc8                 mov ecx, eax
// 004dbba5  e896f1f3ff           call 0x41ad40
// 004dbbaa  eb02                 jmp 0x4dbbae
// 004dbbac  33c0                 xor eax, eax
// 004dbbae  50                   push eax
// 004dbbaf  8bce                 mov ecx, esi
// 004dbbb1  c644241401           mov byte ptr [esp + 0x14], 1
// 004dbbb6  e835f5f3ff           call 0x41b0f0
// 004dbbbb  8bce                 mov ecx, esi
// 004dbbbd  e87e9c0b00           call 0x595840
// 004dbbc2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004dbbc6  8bc6                 mov eax, esi
// 004dbbc8  5e                   pop esi
// 004dbbc9  64890d00000000       mov dword ptr fs:[0], ecx
// 004dbbd0  83c410               add esp, 0x10
// 004dbbd3  c20400               ret 4

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

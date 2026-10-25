// from server: 100% by king_originala
// roc 2008-06 004d96b0  unit: RBX::ViewNew::VRenderSurfaceTypes::?$Table  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d96b0
//
// 004d96b0  6aff                 push -1
// 004d96b2  686ea87c00           push 0x7ca86e
// 004d96b7  64a100000000         mov eax, dword ptr fs:[0]
// 004d96bd  50                   push eax
// 004d96be  64892500000000       mov dword ptr fs:[0], esp
// 004d96c5  51                   push ecx
// 004d96c6  56                   push esi
// 004d96c7  8bf1                 mov esi, ecx
// 004d96c9  c70600000000         mov dword ptr [esi], 0
// 004d96cf  89742404             mov dword ptr [esp + 4], esi
// 004d96d3  c7460400000000       mov dword ptr [esi + 4], 0
// 004d96da  8b442418             mov eax, dword ptr [esp + 0x18]
// 004d96de  8b4804               mov ecx, dword ptr [eax + 4]
// 004d96e1  8b10                 mov edx, dword ptr [eax]
// 004d96e3  6a00                 push 0
// 004d96e5  51                   push ecx
// 004d96e6  52                   push edx
// 004d96e7  8d4e08               lea ecx, [esi + 8]
// 004d96ea  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004d96f2  e869f0ffff           call 0x4d8760
// 004d96f7  6a28                 push 0x28
// 004d96f9  c644241401           mov byte ptr [esp + 0x14], 1
// 004d96fe  e81d721c00           call 0x6a0920
// 004d9703  83c404               add esp, 4
// 004d9706  89442418             mov dword ptr [esp + 0x18], eax
// 004d970a  c644241002           mov byte ptr [esp + 0x10], 2
// 004d970f  85c0                 test eax, eax
// 004d9711  7409                 je 0x4d971c
// 004d9713  8bc8                 mov ecx, eax
// 004d9715  e82616f4ff           call 0x41ad40
// 004d971a  eb02                 jmp 0x4d971e
// 004d971c  33c0                 xor eax, eax
// 004d971e  50                   push eax
// 004d971f  8bce                 mov ecx, esi
// 004d9721  c644241401           mov byte ptr [esp + 0x14], 1
// 004d9726  e8c519f4ff           call 0x41b0f0
// 004d972b  8bce                 mov ecx, esi
// 004d972d  e80ec10b00           call 0x595840
// 004d9732  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d9736  8bc6                 mov eax, esi
// 004d9738  5e                   pop esi
// 004d9739  64890d00000000       mov dword ptr fs:[0], ecx
// 004d9740  83c410               add esp, 0x10
// 004d9743  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Arguments
{
    int first;
    int second;
};

struct Owner
{
    void* second;

    Owner();
    ~Owner();
};

inline Owner::Owner() : second(0) {}

struct Function
{
    Function(int, int, int);
    ~Function();
};

struct Object
{
    unsigned char storage[0x28];

    Object();
};

struct Table
{
    void* first;
    Owner owner;
    Function function;

    Table(const Arguments&);
    void assign(Object*);
    void finish();
};

Table::Table(const Arguments& args)
    : first(0), owner(), function(args.first, args.second, 0)
{
    assign(new Object);
    finish();
}

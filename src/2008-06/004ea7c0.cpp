// from server: 100% by king_originala
// roc 2008-06 004ea7c0  unit: RBX::ViewNew::Part  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ea7c0
//
// 004ea7c0  6aff                 push -1
// 004ea7c2  686ea87c00           push 0x7ca86e
// 004ea7c7  64a100000000         mov eax, dword ptr fs:[0]
// 004ea7cd  50                   push eax
// 004ea7ce  64892500000000       mov dword ptr fs:[0], esp
// 004ea7d5  51                   push ecx
// 004ea7d6  56                   push esi
// 004ea7d7  8bf1                 mov esi, ecx
// 004ea7d9  c70600000000         mov dword ptr [esi], 0
// 004ea7df  89742404             mov dword ptr [esp + 4], esi
// 004ea7e3  c7460400000000       mov dword ptr [esi + 4], 0
// 004ea7ea  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ea7ee  8b4804               mov ecx, dword ptr [eax + 4]
// 004ea7f1  8b10                 mov edx, dword ptr [eax]
// 004ea7f3  6a00                 push 0
// 004ea7f5  51                   push ecx
// 004ea7f6  52                   push edx
// 004ea7f7  8d4e08               lea ecx, [esi + 8]
// 004ea7fa  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004ea802  e8d9f6ffff           call 0x4e9ee0
// 004ea807  6a28                 push 0x28
// 004ea809  c644241401           mov byte ptr [esp + 0x14], 1
// 004ea80e  e80d611b00           call 0x6a0920
// 004ea813  83c404               add esp, 4
// 004ea816  89442418             mov dword ptr [esp + 0x18], eax
// 004ea81a  c644241002           mov byte ptr [esp + 0x10], 2
// 004ea81f  85c0                 test eax, eax
// 004ea821  7409                 je 0x4ea82c
// 004ea823  8bc8                 mov ecx, eax
// 004ea825  e81605f3ff           call 0x41ad40
// 004ea82a  eb02                 jmp 0x4ea82e
// 004ea82c  33c0                 xor eax, eax
// 004ea82e  50                   push eax
// 004ea82f  8bce                 mov ecx, esi
// 004ea831  c644241401           mov byte ptr [esp + 0x14], 1
// 004ea836  e8b508f3ff           call 0x41b0f0
// 004ea83b  8bce                 mov ecx, esi
// 004ea83d  e8feaf0a00           call 0x595840
// 004ea842  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ea846  8bc6                 mov eax, esi
// 004ea848  5e                   pop esi
// 004ea849  64890d00000000       mov dword ptr fs:[0], ecx
// 004ea850  83c410               add esp, 0x10
// 004ea853  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Pair {
    int first;
    int second;
};

struct Object {
    char storage[40];
    Object();
};

struct Counter {
    int value;
    Counter();
    ~Counter();
};

struct Texture {
    Texture(int, int, int);
    ~Texture();
};

struct S {
    int first;
    Counter second;
    Texture texture;
    S(const Pair&);
    void set(Object*);
    void finish();
};

inline Counter::Counter() : value(0)
{
}

S::S(const Pair& value)
    : first(0), second(), texture(value.first, value.second, 0)
{
    set(new Object);
    finish();
}

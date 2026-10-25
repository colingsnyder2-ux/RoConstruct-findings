// from server: 100% by king_originala
// roc 2008-06 004eaa40  unit: RBX::ViewNew::Part  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004eaa40
//
// 004eaa40  6aff                 push -1
// 004eaa42  686ea87c00           push 0x7ca86e
// 004eaa47  64a100000000         mov eax, dword ptr fs:[0]
// 004eaa4d  50                   push eax
// 004eaa4e  64892500000000       mov dword ptr fs:[0], esp
// 004eaa55  51                   push ecx
// 004eaa56  56                   push esi
// 004eaa57  8bf1                 mov esi, ecx
// 004eaa59  c70600000000         mov dword ptr [esi], 0
// 004eaa5f  89742404             mov dword ptr [esp + 4], esi
// 004eaa63  c7460400000000       mov dword ptr [esi + 4], 0
// 004eaa6a  8b442418             mov eax, dword ptr [esp + 0x18]
// 004eaa6e  8b4804               mov ecx, dword ptr [eax + 4]
// 004eaa71  8b10                 mov edx, dword ptr [eax]
// 004eaa73  6a00                 push 0
// 004eaa75  51                   push ecx
// 004eaa76  52                   push edx
// 004eaa77  8d4e08               lea ecx, [esi + 8]
// 004eaa7a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004eaa82  e8f9f8ffff           call 0x4ea380
// 004eaa87  6a28                 push 0x28
// 004eaa89  c644241401           mov byte ptr [esp + 0x14], 1
// 004eaa8e  e88d5e1b00           call 0x6a0920
// 004eaa93  83c404               add esp, 4
// 004eaa96  89442418             mov dword ptr [esp + 0x18], eax
// 004eaa9a  c644241002           mov byte ptr [esp + 0x10], 2
// 004eaa9f  85c0                 test eax, eax
// 004eaaa1  7409                 je 0x4eaaac
// 004eaaa3  8bc8                 mov ecx, eax
// 004eaaa5  e89602f3ff           call 0x41ad40
// 004eaaaa  eb02                 jmp 0x4eaaae
// 004eaaac  33c0                 xor eax, eax
// 004eaaae  50                   push eax
// 004eaaaf  8bce                 mov ecx, esi
// 004eaab1  c644241401           mov byte ptr [esp + 0x14], 1
// 004eaab6  e83506f3ff           call 0x41b0f0
// 004eaabb  8bce                 mov ecx, esi
// 004eaabd  e87ead0a00           call 0x595840
// 004eaac2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004eaac6  8bc6                 mov eax, esi
// 004eaac8  5e                   pop esi
// 004eaac9  64890d00000000       mov dword ptr fs:[0], ecx
// 004eaad0  83c410               add esp, 0x10
// 004eaad3  c20400               ret 4

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

inline Counter::Counter() : value(0)
{
}

struct Texture {
    int storage[3];
    Texture(int, int, int);
    ~Texture();
};

struct Part {
    int first;
    Counter second;
    Texture texture;

    Part(const Pair&);
    void set(Object*);
    void finish();
};

Part::Part(const Pair& value)
    : first(0), second(), texture(value.first, value.second, 0)
{
    set(new Object);
    finish();
}

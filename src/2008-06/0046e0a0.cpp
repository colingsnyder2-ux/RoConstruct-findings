// from server: 100% by king_originala
// roc 2008-06 0046e0a0  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046e0a0
//
// 0046e0a0  55                   push ebp
// 0046e0a1  8bec                 mov ebp, esp
// 0046e0a3  6aff                 push -1
// 0046e0a5  68013e7c00           push 0x7c3e01
// 0046e0aa  64a100000000         mov eax, dword ptr fs:[0]
// 0046e0b0  50                   push eax
// 0046e0b1  64892500000000       mov dword ptr fs:[0], esp
// 0046e0b8  83ec0c               sub esp, 0xc
// 0046e0bb  53                   push ebx
// 0046e0bc  56                   push esi
// 0046e0bd  8b7510               mov esi, dword ptr [ebp + 0x10]
// 0046e0c0  57                   push edi
// 0046e0c1  8b7d08               mov edi, dword ptr [ebp + 8]
// 0046e0c4  33db                 xor ebx, ebx
// 0046e0c6  8965f0               mov dword ptr [ebp - 0x10], esp
// 0046e0c9  8975ec               mov dword ptr [ebp - 0x14], esi
// 0046e0cc  895dfc               mov dword ptr [ebp - 4], ebx
// 0046e0cf  90                   nop 
// 0046e0d0  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 0046e0d3  7445                 je 0x46e11a
// 0046e0d5  897508               mov dword ptr [ebp + 8], esi
// 0046e0d8  8975e8               mov dword ptr [ebp - 0x18], esi
// 0046e0db  c645fc01             mov byte ptr [ebp - 4], 1
// 0046e0df  3bf3                 cmp esi, ebx
// 0046e0e1  7408                 je 0x46e0eb
// 0046e0e3  57                   push edi
// 0046e0e4  8bce                 mov ecx, esi
// 0046e0e6  e8c5fdffff           call 0x46deb0
// 0046e0eb  83c640               add esi, 0x40
// 0046e0ee  885dfc               mov byte ptr [ebp - 4], bl
// 0046e0f1  897510               mov dword ptr [ebp + 0x10], esi
// 0046e0f4  83c740               add edi, 0x40
// 0046e0f7  ebd7                 jmp 0x46e0d0

typedef unsigned int size_t;

inline void* operator new(size_t, void* p) { return p; }
inline void operator delete(void*, void*) {}

struct Element {
    unsigned char data[64];
    Element(const Element&);
    ~Element();
};

Element* __cdecl copy_elements(Element* first, Element* last, Element* destination)
{
    Element* start = destination;
    try {
        for (; first != last; ++destination, ++first) {
            void* storage = destination;
            new (storage) Element(*first);
        }
        return destination;
    }
    catch (...) {
        for (; start != destination; ++start)
            start->~Element();
        throw;
    }
}

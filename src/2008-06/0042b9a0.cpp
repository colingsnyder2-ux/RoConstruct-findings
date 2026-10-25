// from server: 100% by king_originala
// roc 2008-06 0042b9a0  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b9a0
//
// 0042b9a0  6aff                 push -1
// 0042b9a2  686ea87c00           push 0x7ca86e
// 0042b9a7  64a100000000         mov eax, dword ptr fs:[0]
// 0042b9ad  50                   push eax
// 0042b9ae  64892500000000       mov dword ptr fs:[0], esp
// 0042b9b5  51                   push ecx
// 0042b9b6  56                   push esi
// 0042b9b7  8bf1                 mov esi, ecx
// 0042b9b9  c70600000000         mov dword ptr [esi], 0
// 0042b9bf  89742404             mov dword ptr [esp + 4], esi
// 0042b9c3  c7460400000000       mov dword ptr [esi + 4], 0
// 0042b9ca  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0042b9ce  8b11                 mov edx, dword ptr [ecx]
// 0042b9d0  6a00                 push 0
// 0042b9d2  83ec0c               sub esp, 0xc
// 0042b9d5  8bc4                 mov eax, esp
// 0042b9d7  8910                 mov dword ptr [eax], edx
// 0042b9d9  8b5104               mov edx, dword ptr [ecx + 4]
// 0042b9dc  8b4908               mov ecx, dword ptr [ecx + 8]
// 0042b9df  895004               mov dword ptr [eax + 4], edx
// 0042b9e2  894808               mov dword ptr [eax + 8], ecx
// 0042b9e5  8d4e08               lea ecx, [esi + 8]
// 0042b9e8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0042b9f0  e80bfeffff           call 0x42b800
// 0042b9f5  6a28                 push 0x28
// 0042b9f7  c644241401           mov byte ptr [esp + 0x14], 1
// 0042b9fc  e81f4f2700           call 0x6a0920
// 0042ba01  83c404               add esp, 4
// 0042ba04  89442418             mov dword ptr [esp + 0x18], eax
// 0042ba08  c644241002           mov byte ptr [esp + 0x10], 2
// 0042ba0d  85c0                 test eax, eax
// 0042ba0f  7409                 je 0x42ba1a
// 0042ba11  8bc8                 mov ecx, eax
// 0042ba13  e828f3feff           call 0x41ad40
// 0042ba18  eb02                 jmp 0x42ba1c
// 0042ba1a  33c0                 xor eax, eax
// 0042ba1c  50                   push eax
// 0042ba1d  8bce                 mov ecx, esi
// 0042ba1f  c644241401           mov byte ptr [esp + 0x14], 1
// 0042ba24  e8c7f6feff           call 0x41b0f0
// 0042ba29  8bce                 mov ecx, esi
// 0042ba2b  e8109e1600           call 0x595840
// 0042ba30  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042ba34  8bc6                 mov eax, esi
// 0042ba36  64890d00000000       mov dword ptr fs:[0], ecx
// 0042ba3d  5e                   pop esi
// 0042ba3e  83c410               add esp, 0x10
// 0042ba41  c20400               ret 4

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Triple {
    unsigned int a, b, c;
};

struct Base {
    unsigned int reserved;

    Base();
    ~Base();
};

inline Base::Base() : reserved(0) {}

struct EventHandler {
    void* state;
    unsigned int reserved;
    Triple payload;

    EventHandler(Triple value, unsigned int unused);
    ~EventHandler();
};

struct Object {
    char storage[40];

    Object();
};

struct Holder {
    void* state;
    Base base;
    EventHandler handler;

    Holder(const Triple& value);
    void set(Object* object);
    void finish();
};

Holder::Holder(const Triple& value)
    : state(0), base(), handler(value, 0) {
    set(new Object);
    finish();
}

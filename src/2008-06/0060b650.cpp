// from server: 78% by colin
// from server: 75% by king_originala
// roc 2008-06 0060b650  unit: RBX::Feature::W4InOut::?$EnumDesc  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060b650
//
// 0060b650  6aff                 push -1
// 0060b652  686ea87c00           push 0x7ca86e
// 0060b657  64a100000000         mov eax, dword ptr fs:[0]
// 0060b65d  50                   push eax
// 0060b65e  64892500000000       mov dword ptr fs:[0], esp
// 0060b665  51                   push ecx
// 0060b666  53                   push ebx
// 0060b667  56                   push esi
// 0060b668  8bf1                 mov esi, ecx
// 0060b66a  c70600000000         mov dword ptr [esi], 0
// 0060b670  89742408             mov dword ptr [esp + 8], esi
// 0060b674  c7460400000000       mov dword ptr [esi + 4], 0
// 0060b67b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0060b67f  8b1a                 mov ebx, dword ptr [edx]
// 0060b681  6a00                 push 0
// 0060b683  83ec10               sub esp, 0x10
// 0060b686  8bc4                 mov eax, esp
// 0060b688  8918                 mov dword ptr [eax], ebx
// 0060b68a  8b5a04               mov ebx, dword ptr [edx + 4]
// 0060b68d  895804               mov dword ptr [eax + 4], ebx
// 0060b690  8b5a08               mov ebx, dword ptr [edx + 8]
// 0060b693  8b520c               mov edx, dword ptr [edx + 0xc]
// 0060b696  895808               mov dword ptr [eax + 8], ebx
// 0060b699  8d4e08               lea ecx, [esi + 8]
// 0060b69c  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0060b6a4  89500c               mov dword ptr [eax + 0xc], edx
// 0060b6a7  e8b4f5ffff           call 0x60ac60
// 0060b6ac  b301                 mov bl, 1
// 0060b6ae  6a28                 push 0x28
// 0060b6b0  885c2418             mov byte ptr [esp + 0x18], bl
// 0060b6b4  e867520900           call 0x6a0920
// 0060b6b9  83c404               add esp, 4
// 0060b6bc  8944241c             mov dword ptr [esp + 0x1c], eax
// 0060b6c0  c644241402           mov byte ptr [esp + 0x14], 2
// 0060b6c5  85c0                 test eax, eax
// 0060b6c7  7409                 je 0x60b6d2
// 0060b6c9  8bc8                 mov ecx, eax
// 0060b6cb  e870f6e0ff           call 0x41ad40
// 0060b6d0  eb02                 jmp 0x60b6d4
// 0060b6d2  33c0                 xor eax, eax
// 0060b6d4  50                   push eax
// 0060b6d5  8bce                 mov ecx, esi
// 0060b6d7  885c2418             mov byte ptr [esp + 0x18], bl
// 0060b6db  e810fae0ff           call 0x41b0f0
// 0060b6e0  8bce                 mov ecx, esi
// 0060b6e2  e859a1f8ff           call 0x595840
// 0060b6e7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060b6eb  8bc6                 mov eax, esi
// 0060b6ed  5e                   pop esi
// 0060b6ee  64890d00000000       mov dword ptr fs:[0], ecx
// 0060b6f5  5b                   pop ebx
// 0060b6f6  83c410               add esp, 0x10
// 0060b6f9  c20400               ret 4

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Value {
    unsigned int words[4];
};

struct Object {
    unsigned char storage[40];
    Object();
};

struct __declspec(dllimport) Control {
    void* pointer;

    Control();
    ~Control();
};

struct Member {
    Member(Value, int);
    ~Member();
};

struct S {
    void* pointer;
    Control control;
    Member member;

    S(const Value&);
    void attach(Object*);
    void initialize();
};

S::S(const Value& value) : pointer(0), member(value, 0)
{
    attach(new Object);
    initialize();
}

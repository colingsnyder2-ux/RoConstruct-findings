// from server: 100% by king_originala
// roc 2008-06 00629a70  unit: RBX::ClickDetector  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00629a70
//
// 00629a70  51                   push ecx
// 00629a71  56                   push esi
// 00629a72  8bf1                 mov esi, ecx
// 00629a74  56                   push esi
// 00629a75  e856fee5ff           call 0x4898d0
// 00629a7a  83c404               add esp, 4
// 00629a7d  85c0                 test eax, eax
// 00629a7f  7436                 je 0x629ab7
// 00629a81  6a01                 push 1
// 00629a83  56                   push esi
// 00629a84  e827c4e6ff           call 0x495eb0
// 00629a89  83c408               add esp, 8
// 00629a8c  84c0                 test al, al
// 00629a8e  7427                 je 0x629ab7
// 00629a90  85f6                 test esi, esi
// 00629a92  7405                 je 0x629a99
// 00629a94  8d4614               lea eax, [esi + 0x14]
// 00629a97  eb02                 jmp 0x629a9b
// 00629a99  33c0                 xor eax, eax
// 00629a9b  50                   push eax
// 00629a9c  b980bf9700           mov ecx, 0x97bf80
// 00629aa1  e87a1bf4ff           call 0x56b620
// 00629aa6  85c0                 test eax, eax
// 00629aa8  740d                 je 0x629ab7
// 00629aaa  8d4c2407             lea ecx, [esp + 7]
// 00629aae  51                   push ecx
// 00629aaf  8d4810               lea ecx, [eax + 0x10]
// 00629ab2  e899bee8ff           call 0x4b5950
// 00629ab7  5e                   pop esi
// 00629ab8  59                   pop ecx
// 00629ab9  c20400               ret 4

struct S;
struct Subobject;

extern "C" void* __cdecl check_object(S*);
extern "C" bool __cdecl check_enabled(S*, int);

struct Event {
    void notify(char*);
};

struct Result {
    char pad[16];
    Event event;
};

struct Registry {
    Result* find(Subobject*);
};

extern Registry registry;

struct Subobject {
    char data;
};

struct S {
    char pad[20];
    Subobject subobject;
    void f(int);
};

void S::f(int)
{
    char token;
    if (check_object(this) && check_enabled(this, 1)) {
        Result* result = registry.find(this ? &subobject : 0);
        if (result)
            result->event.notify(&token);
    }
}

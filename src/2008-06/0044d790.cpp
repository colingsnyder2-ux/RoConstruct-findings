// from server: 100% by king_originala
// roc 2008-06 0044d790  unit: CRobloxApp  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044d790
//
// 0044d790  6aff                 push -1
// 0044d792  6868f57b00           push 0x7bf568
// 0044d797  64a100000000         mov eax, dword ptr fs:[0]
// 0044d79d  50                   push eax
// 0044d79e  64892500000000       mov dword ptr fs:[0], esp
// 0044d7a5  51                   push ecx
// 0044d7a6  53                   push ebx
// 0044d7a7  56                   push esi
// 0044d7a8  57                   push edi
// 0044d7a9  8bf1                 mov esi, ecx
// 0044d7ab  6a01                 push 1
// 0044d7ad  8d4c2410             lea ecx, [esp + 0x10]
// 0044d7b1  e85ae4fdff           call 0x42bc10
// 0044d7b6  8bce                 mov ecx, esi
// 0044d7b8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0044d7c0  e86f3b2500           call 0x6a1334
// 0044d7c5  8bd8                 mov ebx, eax
// 0044d7c7  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0044d7cf  e8dce3fdff           call 0x42bbb0
// 0044d7d4  8bf0                 mov esi, eax
// 0044d7d6  8bce                 mov ecx, esi
// 0044d7d8  e8939d1500           call 0x5a7570
// 0044d7dd  8bf8                 mov edi, eax
// 0044d7df  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044d7e3  3bf8                 cmp edi, eax
// 0044d7e5  7414                 je 0x44d7fb
// 0044d7e7  50                   push eax
// 0044d7e8  8bce                 mov ecx, esi
// 0044d7ea  e8c19e1500           call 0x5a76b0
// 0044d7ef  85ff                 test edi, edi
// 0044d7f1  7408                 je 0x44d7fb
// 0044d7f3  57                   push edi
// 0044d7f4  8bce                 mov ecx, esi
// 0044d7f6  e8f5971500           call 0x5a6ff0
// 0044d7fb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0044d7ff  5f                   pop edi
// 0044d800  5e                   pop esi
// 0044d801  8bc3                 mov eax, ebx
// 0044d803  5b                   pop ebx
// 0044d804  64890d00000000       mov dword ptr fs:[0], ecx
// 0044d80b  83c410               add esp, 0x10
// 0044d80e  c3                   ret 

struct ThreadState {
    void* get();
    void set(void*);
    void cleanup(void*);
};

ThreadState* threadState();

struct Guard {
    void* previous;
    Guard(int);
    ~Guard();
};

inline Guard::~Guard()
{
    ThreadState* state = threadState();
    void* current = state->get();
    if (current != previous) {
        state->set(previous);
        if (current)
            state->cleanup(current);
    }
}

struct CRobloxApp {
    int operation();
    int f();
};

int CRobloxApp::f()
{
    Guard guard(1);
    return operation();
}

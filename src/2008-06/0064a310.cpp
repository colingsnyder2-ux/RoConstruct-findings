// from server: 100% by king_originala
// roc 2008-06 0064a310  unit: RBX::Ball  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064a310
//
// 0064a310  6aff                 push -1
// 0064a312  683bf47b00           push 0x7bf43b
// 0064a317  64a100000000         mov eax, dword ptr fs:[0]
// 0064a31d  50                   push eax
// 0064a31e  64892500000000       mov dword ptr fs:[0], esp
// 0064a325  51                   push ecx
// 0064a326  56                   push esi
// 0064a327  57                   push edi
// 0064a328  6a50                 push 0x50
// 0064a32a  8bf1                 mov esi, ecx
// 0064a32c  e8ef650500           call 0x6a0920
// 0064a331  83c404               add esp, 4
// 0064a334  89442408             mov dword ptr [esp + 8], eax
// 0064a338  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0064a33c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0064a344  85c0                 test eax, eax
// 0064a346  740b                 je 0x64a353
// 0064a348  57                   push edi
// 0064a349  56                   push esi
// 0064a34a  8bc8                 mov ecx, eax
// 0064a34c  e81fe10100           call 0x668470
// 0064a351  eb02                 jmp 0x64a355
// 0064a353  33c0                 xor eax, eax
// 0064a355  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0064a359  894e04               mov dword ptr [esi + 4], ecx
// 0064a35c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064a360  897e0c               mov dword ptr [esi + 0xc], edi
// 0064a363  894608               mov dword ptr [esi + 8], eax
// 0064a366  c7065cb08400         mov dword ptr [esi], 0x84b05c
// 0064a36c  5f                   pop edi
// 0064a36d  8bc6                 mov eax, esi
// 0064a36f  5e                   pop esi
// 0064a370  64890d00000000       mov dword ptr fs:[0], ecx
// 0064a377  83c410               add esp, 0x10
// 0064a37a  c20800               ret 8

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern const int ballTable[];

struct Ball;

struct State {
    char storage[0x50];
    State(Ball*, int);
};

struct Ball {
    const int* table;
    int first;
    State* state;
    int second;

    Ball* initialize(int, int);
};

Ball* Ball::initialize(int a, int b)
{
    State* p = new State(this, b);
    first = a;
    second = b;
    state = p;
    table = ballTable;
    return this;
}

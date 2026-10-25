// from server: 100% by king_originala
// roc 2008-06 004cd420  unit: RBX::Network::RoundRobinPhysicsSender  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cd420
//
// 004cd420  6aff                 push -1
// 004cd422  68fb997c00           push 0x7c99fb
// 004cd427  64a100000000         mov eax, dword ptr fs:[0]
// 004cd42d  50                   push eax
// 004cd42e  64892500000000       mov dword ptr fs:[0], esp
// 004cd435  81ec3c010000         sub esp, 0x13c
// 004cd43b  56                   push esi
// 004cd43c  8bf1                 mov esi, ecx
// 004cd43e  8b4604               mov eax, dword ptr [esi + 4]
// 004cd441  8b88502d0000         mov ecx, dword ptr [eax + 0x2d50]
// 004cd447  51                   push ecx
// 004cd448  56                   push esi
// 004cd449  8d4c2414             lea ecx, [esp + 0x14]
// 004cd44d  e8eee8ffff           call 0x4cbd40
// 004cd452  8b5604               mov edx, dword ptr [esi + 4]
// 004cd455  52                   push edx
// 004cd456  c784244c01000000000000 mov dword ptr [esp + 0x14c], 0
// 004cd461  e8ea49fcff           call 0x491e50
// 004cd466  83c404               add esp, 4
// 004cd469  85c0                 test eax, eax
// 004cd46b  745f                 je 0x4cd4cc
// 004cd46d  8b88e4020000         mov ecx, dword ptr [eax + 0x2e4]
// 004cd473  53                   push ebx
// 004cd474  57                   push edi
// 004cd475  e836bf1100           call 0x5e93b0
// 004cd47a  8bce                 mov ecx, esi
// 004cd47c  8bd8                 mov ebx, eax
// 004cd47e  e8bdcbffff           call 0x4ca040
// 004cd483  8bf8                 mov edi, eax
// 004cd485  85ff                 test edi, edi
// 004cd487  7430                 je 0x4cd4b9
// 004cd489  e882af0300           call 0x508410
// 004cd48e  dd54240c             fst qword ptr [esp + 0xc]
// 004cd492  dd4610               fld qword ptr [esi + 0x10]
// 004cd495  dc0538698200         fadd qword ptr [0x826938]
// 004cd49b  ded9                 fcompp 
// 004cd49d  dfe0                 fnstsw ax
// 004cd49f  f6c405               test ah, 5
// 004cd4a2  7a13                 jp 0x4cd4b7
// 004cd4a4  57                   push edi
// 004cd4a5  8d4c2418             lea ecx, [esp + 0x18]
// 004cd4a9  e882d7ffff           call 0x4cac30
// 004cd4ae  dd44240c             fld qword ptr [esp + 0xc]
// 004cd4b2  dd5e10               fstp qword ptr [esi + 0x10]
// 004cd4b5  eb02                 jmp 0x4cd4b9
// 004cd4b7  33ff                 xor edi, edi
// 004cd4b9  57                   push edi
// 004cd4ba  83c608               add esi, 8
// 004cd4bd  56                   push esi
// 004cd4be  8d44241c             lea eax, [esp + 0x1c]
// 004cd4c2  50                   push eax
// 004cd4c3  8bcb                 mov ecx, ebx
// 004cd4c5  e806e6ffff           call 0x4cbad0
// 004cd4ca  5f                   pop edi
// 004cd4cb  5b                   pop ebx
// 004cd4cc  8bb4243c010000       mov esi, dword ptr [esp + 0x13c]
// 004cd4d3  8d4c240c             lea ecx, [esp + 0xc]
// 004cd4d7  c7842448010000ffffffff mov dword ptr [esp + 0x148], 0xffffffff
// 004cd4e2  e889c5ffff           call 0x4c9a70
// 004cd4e7  8b8c2440010000       mov ecx, dword ptr [esp + 0x140]
// 004cd4ee  8bc6                 mov eax, esi
// 004cd4f0  5e                   pop esi
// 004cd4f1  64890d00000000       mov dword ptr fs:[0], ecx
// 004cd4f8  81c448010000         add esp, 0x148
// 004cd4fe  c20400               ret 4

struct S;
struct Sender;

struct Context
{
    char padding[0x2d50];
    int value;
};

struct Manager
{
    Sender* getSender();
};

struct ServiceProvider
{
    char padding[0x2e4];
    Manager* manager;
};

ServiceProvider* __cdecl func_00491e50(Context*);
double __cdecl sub_508410();
extern const double interval;

struct Receiver
{
    char storage[0x130];
    int result;

    Receiver(S*, int);
    ~Receiver();
    void update(void*);
};

struct Sender
{
    void send(Receiver*, int*, void*);
};

struct S
{
    void* vtable;
    Context* context;
    int state;
    int reserved;
    double lastTime;

    void* sub_4ca040();
    int sub_4cd420(int);
};

int S::sub_4cd420(int)
{
    Receiver receiver(this, context->value);
    ServiceProvider* provider = func_00491e50(context);
    if (provider)
    {
        Sender* sender = provider->manager->getSender();
        void* value = sub_4ca040();
        if (value)
        {
            double now = sub_508410();
            if (now > lastTime + interval)
            {
                receiver.update(value);
                lastTime = now;
            }
            else
            {
                value = 0;
            }
        }
        sender->send(&receiver, &state, value);
    }
    return receiver.result;
}

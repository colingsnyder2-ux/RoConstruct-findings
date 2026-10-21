// from server: 95% by EspClaude
// from server: 74% by king_originala
// roc 2008-06 006194a0  unit: RBX::Flag  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006194a0
//
// 006194a0  51                   push ecx
// 006194a1  53                   push ebx
// 006194a2  55                   push ebp
// 006194a3  56                   push esi
// 006194a4  57                   push edi
// 006194a5  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006194a9  8bf1                 mov esi, ecx
// 006194ab  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006194af  85ff                 test edi, edi
// 006194b1  7576                 jne 0x619529
// 006194b3  85c9                 test ecx, ecx
// 006194b5  7407                 je 0x6194be
// 006194b7  e8648be7ff           call 0x492020
// 006194bc  eb02                 jmp 0x6194c0
// 006194be  33c0                 xor eax, eax
// 006194c0  dd05d06f8200         fld qword ptr [0x826fd0]
// 006194c6  83ec28               sub esp, 0x28
// 006194c9  89642438             mov dword ptr [esp + 0x38], esp
// 006194cd  dd5c2420             fstp qword ptr [esp + 0x20]
// 006194d1  8bdc                 mov ebx, esp
// 006194d3  6a00                 push 0
// 006194d5  83ec18               sub esp, 0x18
// 006194d8  89642454             mov dword ptr [esp + 0x54], esp
// 006194dc  8bec                 mov ebp, esp
// 006194de  83ec08               sub esp, 8
// 006194e1  898688020000         mov dword ptr [esi + 0x288], eax
// 006194e7  8bc4                 mov eax, esp
// 006194e9  8964245c             mov dword ptr [esp + 0x5c], esp
// 006194ed  56                   push esi
// 006194ee  50                   push eax
// 006194ef  bf708f6100           mov edi, 0x618f70
// 006194f4  e847f5ffff           call 0x618a40
// 006194f9  51                   push ecx
// 006194fa  8bc4                 mov eax, esp
// 006194fc  33c9                 xor ecx, ecx
// 006194fe  8938                 mov dword ptr [eax], edi
// 00619500  894804               mov dword ptr [eax + 4], ecx
// 00619503  55                   push ebp
// 00619504  894808               mov dword ptr [eax + 8], ecx
// 00619507  e8a4f6ffff           call 0x618bb0
// 0061950c  83c418               add esp, 0x18
// 0061950f  8bcb                 mov ecx, ebx
// 00619511  e8aaf9ffff           call 0x618ec0
// 00619516  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 0061951c  e8efd8fbff           call 0x5d6e10
// 00619521  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00619525  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00619529  85c9                 test ecx, ecx
// 0061952b  7578                 jne 0x6195a5
// 0061952d  8d8e74020000         lea ecx, [esi + 0x274]
// 00619533  e8f8bcf7ff           call 0x595230
// 00619538  85ff                 test edi, edi
// 0061953a  7409                 je 0x619545
// 0061953c  8bcf                 mov ecx, edi
// 0061953e  e8ad9be3ff           call 0x4530f0
// 00619543  eb02                 jmp 0x619547
// 00619545  33c0                 xor eax, eax
// 00619547  83b8b401000001       cmp dword ptr [eax + 0x1b4], 1
// 0061954e  7555                 jne 0x6195a5
// 00619550  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 00619556  85c0                 test eax, eax
// 00619558  744b                 je 0x6195a5
// 0061955a  6a00                 push 0
// 0061955c  6840be9400           push 0x94be40
// 00619561  687c909200           push 0x92907c
// 00619566  6a00                 push 0
// 00619568  50                   push eax
// 00619569  e858820800           call 0x6a17c6
// 0061956e  8bf8                 mov edi, eax
// 00619570  83c414               add esp, 0x14
// 00619573  8bcf                 mov ecx, edi
// 00619575  e8e641feff           call 0x5fd760
// 0061957a  56                   push esi
// 0061957b  e8d0feffff           call 0x619450
// 00619580  83c404               add esp, 4
// 00619583  8bf0                 mov esi, eax
// 00619585  57                   push edi
// 00619586  8bce                 mov ecx, esi
// 00619588  e8332a0100           call 0x62bfc0
// 0061958d  85c0                 test eax, eax
// 0061958f  7514                 jne 0x6195a5
// 00619591  57                   push edi
// 00619592  8bce                 mov ecx, esi
// 00619594  e8472d0100           call 0x62c2e0
// 00619599  85c0                 test eax, eax
// 0061959b  7408                 je 0x6195a5
// 0061959d  57                   push edi
// 0061959e  8bc8                 mov ecx, eax
// 006195a0  e81b280100           call 0x62bdc0
// 006195a5  5f                   pop edi
// 006195a6  5e                   pop esi
// 006195a7  5d                   pop ebp
// 006195a8  5b                   pop ebx
// 006195a9  59                   pop ecx
// 006195aa  c20800               ret 8

struct S;
struct Flag;
struct Manager;
struct Link;

struct Pair {
    void* object;
    void* control;
    Pair(const Pair&);
};

struct FunctionPointer {
    void (__cdecl *entry)();
    int adjustment;
    int index;

    FunctionPointer(void (__cdecl *)());
};

inline FunctionPointer::FunctionPointer(void (__cdecl *p)())
    : entry(p), adjustment(0), index(0)
{
}

struct Binding {
    unsigned char data[24];
    Binding(const Binding&);
};

struct Callback {
    unsigned char data[32];
    Callback(Binding, int);
    Callback(const Callback&);
    ~Callback() {}
};

struct Handler {
    void submit(Callback, double);
};

struct Instance {
    unsigned char padding[0x1b4];
    int state;
    Handler* getHandler();
    Instance* getInstance();
};

struct Connection {
    unsigned char data[20];
    void disconnect();
};

struct Flag {
    void prepare();
};

struct Link {
    void attach(Flag*);
};

struct Manager {
    int contains(Flag*);
    Link* find(Flag*);
};

struct S {
    unsigned char padding[0x268];
    Instance* instance;
    unsigned char gap[8];
    Connection connection;
    Handler* handler;

    void update(Instance*, Instance*);
};

extern const double delay;
extern unsigned char instanceType[];
extern unsigned char flagType[];

extern void __cdecl callbackEntry();
extern Pair __cdecl makePair(S*);
extern Binding __cdecl makeBinding(FunctionPointer, Pair);
extern Manager* __cdecl getManager(S*);
extern void* __cdecl castObject(void*, int, void*, void*, int);

void S::update(Instance* previous, Instance* current)
{
    if (!previous) {
        handler = current ? current->getHandler() : 0;
        handler->submit(
            Callback(makeBinding(FunctionPointer(callbackEntry), makePair(this)), 0),
            delay);
    }

    if (!current) {
        connection.disconnect();

        Instance* object = previous ? previous->getInstance() : 0;
        if (object->state == 1 && instance) {
            Flag* flag = static_cast<Flag*>(
                castObject(instance, 0, instanceType, flagType, 0));

            flag->prepare();

            Manager* manager = getManager(this);
            if (!manager->contains(flag)) {
                Link* link = manager->find(flag);
                if (link)
                    link->attach(flag);
            }
        }
    }
}

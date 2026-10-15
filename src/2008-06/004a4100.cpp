// from server: 100% by colin
// roc 2008-06 004a4100  unit: RBX::Network::Server  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a4100
//
// 004a4100  64a100000000         mov eax, dword ptr fs:[0]
// 004a4106  6aff                 push -1
// 004a4108  68a87d7c00           push 0x7c7da8
// 004a410d  50                   push eax
// 004a410e  64892500000000       mov dword ptr fs:[0], esp
// 004a4115  83ec48               sub esp, 0x48
// 004a4118  53                   push ebx
// 004a4119  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 004a411d  56                   push esi
// 004a411e  57                   push edi
// 004a411f  8bf1                 mov esi, ecx
// 004a4121  85db                 test ebx, ebx
// 004a4123  7451                 je 0x4a4176
// 004a4125  8b8e48010000         mov ecx, dword ptr [esi + 0x148]
// 004a412b  8dbe48010000         lea edi, [esi + 0x148]
// 004a4131  6a00                 push 0
// 004a4133  e8d823ffff           call 0x496510
// 004a4138  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 004a413e  8b01                 mov eax, dword ptr [ecx]
// 004a4140  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004a4143  ffd2                 call edx
// 004a4145  84c0                 test al, al
// 004a4147  7414                 je 0x4a415d
// 004a4149  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 004a414f  8b01                 mov eax, dword ptr [ecx]
// 004a4151  8b5028               mov edx, dword ptr [eax + 0x28]
// 004a4154  6a00                 push 0
// 004a4156  68e8030000           push 0x3e8
// 004a415b  ffd2                 call edx
// 004a415d  8bce                 mov ecx, esi
// 004a415f  e86c6e0b00           call 0x55afd0
// 004a4164  8bcf                 mov ecx, edi
// 004a4166  e8152dfbff           call 0x456e80
// 004a416b  8d8e50010000         lea ecx, [esi + 0x150]
// 004a4171  e8ba100f00           call 0x595230
// 004a4176  8b7c2468             mov edi, dword ptr [esp + 0x68]
// 004a417a  57                   push edi
// 004a417b  53                   push ebx
// 004a417c  8bce                 mov ecx, esi
// 004a417e  e87d150100           call 0x4b5700
// 004a4183  85ff                 test edi, edi
// 004a4185  0f841c010000         je 0x4a42a7
// 004a418b  8bcf                 mov ecx, edi
// 004a418d  e87ee5f6ff           call 0x412710
// 004a4192  50                   push eax
// 004a4193  8d442410             lea eax, [esp + 0x10]
// 004a4197  50                   push eax
// 004a4198  e8a3481700           call 0x618a40
// 004a419d  83c408               add esp, 8
// 004a41a0  8b08                 mov ecx, dword ptr [eax]
// 004a41a2  83c004               add eax, 4
// 004a41a5  898e48010000         mov dword ptr [esi + 0x148], ecx
// 004a41ab  50                   push eax
// 004a41ac  8d8e4c010000         lea ecx, [esi + 0x14c]
// 004a41b2  c744246000000000     mov dword ptr [esp + 0x60], 0
// 004a41ba  e8f1e3f5ff           call 0x4025b0
// 004a41bf  8b442410             mov eax, dword ptr [esp + 0x10]
// 004a41c3  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 004a41cb  85c0                 test eax, eax
// 004a41cd  742c                 je 0x4a41fb
// 004a41cf  8bd8                 mov ebx, eax
// 004a41d1  83c004               add eax, 4
// 004a41d4  83caff               or edx, 0xffffffff
// 004a41d7  f00fc110             lock xadd dword ptr [eax], edx
// 004a41db  751e                 jne 0x4a41fb
// 004a41dd  8b03                 mov eax, dword ptr [ebx]
// 004a41df  8b5004               mov edx, dword ptr [eax + 4]
// 004a41e2  8bcb                 mov ecx, ebx
// 004a41e4  ffd2                 call edx
// 004a41e6  8d4308               lea eax, [ebx + 8]
// 004a41e9  83c9ff               or ecx, 0xffffffff
// 004a41ec  f00fc108             lock xadd dword ptr [eax], ecx
// 004a41f0  7509                 jne 0x4a41fb
// 004a41f2  8b13                 mov edx, dword ptr [ebx]
// 004a41f4  8b4208               mov eax, dword ptr [edx + 8]
// 004a41f7  8bcb                 mov ecx, ebx
// 004a41f9  ffd0                 call eax
// 004a41fb  8b9e48010000         mov ebx, dword ptr [esi + 0x148]
// 004a4201  8bce                 mov ecx, esi
// 004a4203  e828581600           call 0x609a30
// 004a4208  50                   push eax
// 004a4209  8bcb                 mov ecx, ebx
// 004a420b  e80023ffff           call 0x496510
// 004a4210  b8d0314a00           mov eax, 0x4a31d0
// 004a4215  8bd0                 mov edx, eax
// 004a4217  83ec10               sub esp, 0x10
// 004a421a  8bc4                 mov eax, esp
// 004a421c  33c9                 xor ecx, ecx
// 004a421e  8910                 mov dword ptr [eax], edx
// 004a4220  894804               mov dword ptr [eax + 4], ecx
// 004a4223  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004a4227  897008               mov dword ptr [eax + 8], esi
// 004a422a  89480c               mov dword ptr [eax + 0xc], ecx
// 004a422d  8bcf                 mov ecx, edi
// 004a422f  e8ace5ffff           call 0x4a27e0
// 004a4234  33c9                 xor ecx, ecx
// 004a4236  8d54240c             lea edx, [esp + 0xc]
// 004a423a  b8d0314a00           mov eax, 0x4a31d0
// 004a423f  894c2410             mov dword ptr [esp + 0x10], ecx
// 004a4243  52                   push edx
// 004a4244  8d4c2430             lea ecx, [esp + 0x30]
// 004a4248  89442410             mov dword ptr [esp + 0x10], eax
// 004a424c  89742418             mov dword ptr [esp + 0x18], esi
// 004a4250  e8cbfdffff           call 0x4a4020
// 004a4255  6a0a                 push 0xa
// 004a4257  8d4c2430             lea ecx, [esp + 0x30]
// 004a425b  51                   push ecx
// 004a425c  8d4714               lea eax, [edi + 0x14]
// 004a425f  50                   push eax
// 004a4260  8d542428             lea edx, [esp + 0x28]
// 004a4264  bb01000000           mov ebx, 1
// 004a4269  52                   push edx
// 004a426a  b9403e9700           mov ecx, 0x973e40
// 004a426f  895c246c             mov dword ptr [esp + 0x6c], ebx
// 004a4273  e8c8f0ffff           call 0x4a3340
// 004a4278  50                   push eax
// 004a4279  8d8e50010000         lea ecx, [esi + 0x150]
// 004a427f  c644246002           mov byte ptr [esp + 0x60], 2
// 004a4284  e8b7120f00           call 0x595540
// 004a4289  8d4c241c             lea ecx, [esp + 0x1c]
// 004a428d  885c245c             mov byte ptr [esp + 0x5c], bl
// 004a4291  e8da100f00           call 0x595370
// 004a4296  8d4c242c             lea ecx, [esp + 0x2c]
// 004a429a  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 004a42a2  e869b4ffff           call 0x49f710
// 004a42a7  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004a42ab  5f                   pop edi
// 004a42ac  5e                   pop esi
// 004a42ad  64890d00000000       mov dword ptr fs:[0], ecx
// 004a42b4  5b                   pop ebx
// 004a42b5  83c454               add esp, 0x54
// 004a42b8  c20800               ret 8

// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
#pragma pointers_to_members(full_generality, multiple_inheritance)

struct RefCount {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Ref {
    RefCount* count;
    void assign(const Ref&);
};

struct Endpoint {
    void setOwner(void*);
};

struct Shared {
    Endpoint* pointer;
    Ref reference;
    ~Shared();
    Shared& operator=(const Shared&);
    void clear();
};

inline Shared::~Shared()
{
    if (reference.count) {
        RefCount* p = reference.count;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

inline Shared& Shared::operator=(const Shared& other)
{
    pointer = other.pointer;
    reference.assign(other.reference);
    return *this;
}

struct Transport {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void stop(int, int);
    virtual bool active();
};

struct Server;

struct Binding {
    void (Server::*method)();
    Server* object;
    int unused;
    Binding(void (Server::* const&)(), Server*);
};

inline Binding::Binding(void (Server::* const& m)(), Server* s)
    : method(m), object(s)
{
}

struct Function {
    unsigned char storage[40];
    Function(const Binding&);
    ~Function();
};

struct Connection {
    unsigned char storage[16];
    ~Connection();
};

struct ConnectionHolder {
    unsigned char storage[16];
    void clear();
    void assign(const Connection&);
};

struct Peer {
    unsigned char prefix[20];
    unsigned char signal;
    void* getEndpoint();
    void registerCallback(Binding);
};

struct Manager {
    Connection connect(void*, const Function&, int);
};

extern Manager manager;
Shared __cdecl makeShared(void*);

struct Server {
    unsigned char prefix[320];
    Transport* transport;
    unsigned long reserved;
    Shared endpoint;
    ConnectionHolder connection;

    void change(Peer*, Peer*);
    void baseChange(Peer*, Peer*);
    void detach();
    void* owner();
    void callback();
};

void Server::change(Peer* oldPeer, Peer* newPeer)
{
    if (oldPeer) {
        endpoint.pointer->setOwner(0);
        if (transport->active())
            transport->stop(1000, 0);
        detach();
        endpoint.clear();
        connection.clear();
    }

    baseChange(oldPeer, newPeer);

    if (newPeer) {
        endpoint = makeShared(newPeer->getEndpoint());

        Endpoint* current = endpoint.pointer;
        current->setOwner(owner());

        newPeer->registerCallback(Binding(&Server::callback, this));

        Function function(Binding(&Server::callback, this));
        void* signal = &newPeer->signal;
        connection.assign(
            manager.connect(signal, function, 10));
    }
}

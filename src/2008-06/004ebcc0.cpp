// from server: 92% by colin
// from server: 90% by king_originala
// roc 2008-06 004ebcc0  unit: RBX::ViewNew::Part  size: 425 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ebcc0
//
// 004ebcc0  6aff                 push -1
// 004ebcc2  685eaa7c00           push 0x7caa5e
// 004ebcc7  64a100000000         mov eax, dword ptr fs:[0]
// 004ebccd  50                   push eax
// 004ebcce  64892500000000       mov dword ptr fs:[0], esp
// 004ebcd5  83ec4c               sub esp, 0x4c
// 004ebcd8  d9ee                 fldz 
// 004ebcda  53                   push ebx
// 004ebcdb  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 004ebcdf  55                   push ebp
// 004ebce0  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 004ebce4  56                   push esi
// 004ebce5  57                   push edi
// 004ebce6  53                   push ebx
// 004ebce7  55                   push ebp
// 004ebce8  8bf1                 mov esi, ecx
// 004ebcea  51                   push ecx
// 004ebceb  d91c24               fstp dword ptr [esp]
// 004ebcee  8974241c             mov dword ptr [esp + 0x1c], esi
// 004ebcf2  e8e9edffff           call 0x4eaae0
// 004ebcf7  33c9                 xor ecx, ecx
// 004ebcf9  8dbedc000000         lea edi, [esi + 0xdc]
// 004ebcff  c706946f8200         mov dword ptr [esi], 0x826f94
// 004ebd05  c786d8000000886f8200 mov dword ptr [esi + 0xd8], 0x826f88
// 004ebd0f  894f04               mov dword ptr [edi + 4], ecx
// 004ebd12  894f08               mov dword ptr [edi + 8], ecx
// 004ebd15  894c2464             mov dword ptr [esp + 0x64], ecx
// 004ebd19  884f0c               mov byte ptr [edi + 0xc], cl
// 004ebd1c  884f10               mov byte ptr [edi + 0x10], cl
// 004ebd1f  8b4500               mov eax, dword ptr [ebp]
// 004ebd22  c644246401           mov byte ptr [esp + 0x64], 1
// 004ebd27  3988c8010000         cmp dword ptr [eax + 0x1c8], ecx
// 004ebd2d  756d                 jne 0x4ebd9c
// 004ebd2f  8d4604               lea eax, [esi + 4]
// 004ebd32  50                   push eax
// 004ebd33  89742474             mov dword ptr [esp + 0x74], esi
// 004ebd37  ff15b0218000         call dword ptr [0x8021b0]
// 004ebd3d  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004ebd40  8b01                 mov eax, dword ptr [ecx]
// 004ebd42  8b4010               mov eax, dword ptr [eax + 0x10]
// 004ebd45  6a01                 push 1
// 004ebd47  8d542474             lea edx, [esp + 0x74]
// 004ebd4b  52                   push edx
// 004ebd4c  c644246c02           mov byte ptr [esp + 0x6c], 2
// 004ebd51  ffd0                 call eax
// 004ebd53  8b442470             mov eax, dword ptr [esp + 0x70]
// 004ebd57  c644246401           mov byte ptr [esp + 0x64], 1
// 004ebd5c  85c0                 test eax, eax
// 004ebd5e  7427                 je 0x4ebd87
// 004ebd60  83c004               add eax, 4
// 004ebd63  50                   push eax
// 004ebd64  ff15ac218000         call dword ptr [0x8021ac]
// 004ebd6a  85c0                 test eax, eax
// 004ebd6c  7519                 jne 0x4ebd87
// 004ebd6e  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 004ebd72  e819f0f6ff           call 0x45ad90
// 004ebd77  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 004ebd7b  85c9                 test ecx, ecx
// 004ebd7d  7408                 je 0x4ebd87
// 004ebd7f  8b11                 mov edx, dword ptr [ecx]
// 004ebd81  8b02                 mov eax, dword ptr [edx]
// 004ebd83  6a01                 push 1
// 004ebd85  ffd0                 call eax
// 004ebd87  d94614               fld dword ptr [esi + 0x14]
// 004ebd8a  d9e8                 fld1 
// 004ebd8c  ded9                 fcompp 
// 004ebd8e  dfe0                 fnstsw ax
// 004ebd90  f6c441               test ah, 0x41
// 004ebd93  7522                 jne 0x4ebdb7
// 004ebd95  d9ee                 fldz 
// 004ebd97  d95e14               fstp dword ptr [esi + 0x14]
// 004ebd9a  eb1b                 jmp 0x4ebdb7
// 004ebd9c  d94614               fld dword ptr [esi + 0x14]
// 004ebd9f  d905ac9b8100         fld dword ptr [0x819bac]
// 004ebda5  d8d1                 fcom st(1)
// 004ebda7  dfe0                 fnstsw ax
// 004ebda9  ddd9                 fstp st(1)
// 004ebdab  f6c441               test ah, 0x41
// 004ebdae  7505                 jne 0x4ebdb5
// 004ebdb0  d95e14               fstp dword ptr [esi + 0x14]
// 004ebdb3  eb02                 jmp 0x4ebdb7
// 004ebdb5  ddd8                 fstp st(0)
// 004ebdb7  8b4500               mov eax, dword ptr [ebp]
// 004ebdba  85c0                 test eax, eax
// 004ebdbc  7412                 je 0x4ebdd0
// 004ebdbe  8d8ed8000000         lea ecx, [esi + 0xd8]
// 004ebdc4  51                   push ecx
// 004ebdc5  8d88a0010000         lea ecx, [eax + 0x1a0]
// 004ebdcb  e8d05af3ff           call 0x4218a0
// 004ebdd0  33c9                 xor ecx, ecx
// 004ebdd2  894c2418             mov dword ptr [esp + 0x18], ecx
// 004ebdd6  8d4c2414             lea ecx, [esp + 0x14]
// 004ebdda  b8a0734e00           mov eax, 0x4e73a0
// 004ebddf  51                   push ecx
// 004ebde0  8d4c2438             lea ecx, [esp + 0x38]
// 004ebde4  89442418             mov dword ptr [esp + 0x18], eax
// 004ebde8  89742420             mov dword ptr [esp + 0x20], esi
// 004ebdec  e89fe6ffff           call 0x4ea490
// 004ebdf1  8b6d00               mov ebp, dword ptr [ebp]
// 004ebdf4  b303                 mov bl, 3
// 004ebdf6  885c2464             mov byte ptr [esp + 0x64], bl
// 004ebdfa  85ed                 test ebp, ebp
// 004ebdfc  7405                 je 0x4ebe03
// 004ebdfe  8d4514               lea eax, [ebp + 0x14]
// 004ebe01  eb02                 jmp 0x4ebe05
// 004ebe03  33c0                 xor eax, eax
// 004ebe05  6a0a                 push 0xa
// 004ebe07  8d542438             lea edx, [esp + 0x38]
// 004ebe0b  52                   push edx
// 004ebe0c  50                   push eax
// 004ebe0d  8d442430             lea eax, [esp + 0x30]
// 004ebe11  50                   push eax
// 004ebe12  b9d4619700           mov ecx, 0x9761d4
// 004ebe17  e804d2ffff           call 0x4e9020
// 004ebe1c  50                   push eax
// 004ebe1d  8bcf                 mov ecx, edi
// 004ebe1f  c644246804           mov byte ptr [esp + 0x68], 4
// 004ebe24  e817970a00           call 0x595540
// 004ebe29  8d4c2424             lea ecx, [esp + 0x24]
// 004ebe2d  885c2464             mov byte ptr [esp + 0x64], bl
// 004ebe31  e83a950a00           call 0x595370
// 004ebe36  8d4c2434             lea ecx, [esp + 0x34]
// 004ebe3a  c644246401           mov byte ptr [esp + 0x64], 1
// 004ebe3f  e8cc38fbff           call 0x49f710
// 004ebe44  8bce                 mov ecx, esi
// 004ebe46  e8f5a8ffff           call 0x4e6740
// 004ebe4b  8bce                 mov ecx, esi
// 004ebe4d  e85eaaffff           call 0x4e68b0
// 004ebe52  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 004ebe56  5f                   pop edi
// 004ebe57  8bc6                 mov eax, esi
// 004ebe59  5e                   pop esi
// 004ebe5a  5d                   pop ebp
// 004ebe5b  5b                   pop ebx
// 004ebe5c  64890d00000000       mov dword ptr fs:[0], ecx
// 004ebe63  83c458               add esp, 0x58
// 004ebe66  c20800               ret 8

extern "C" {
extern long (__stdcall *InterlockedIncrement)(long*);
extern long (__stdcall *InterlockedDecrement)(long*);
}

extern const float minimumValue;

struct Model;
struct Services;
struct Part;
struct Callback;

struct __declspec(novtable) Listener {
    virtual void notify() = 0;
};

struct ListenerList {
    void attach(Listener*);
};

struct Model {
    char prefix[0x14];
    char event;
    char padding[0x18b];
    ListenerList listeners;
    char listenerPadding[0x24];
    int mode;
};

struct Reference {
    Part* value;
    Reference(Part*);
    ~Reference();
};

struct Service {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void slot3() = 0;
    virtual void insert(const Reference&, int) = 0;
};

struct Services {
    void* unused;
    Service* service;
};

struct ModelReference {
    Model* value;
};

struct ConnectionResult {
    char storage[16];
    ~ConnectionResult();
};

struct Connection {
    int unused;
    void* first;
    void* second;
    bool flag;
    char padding[3];
    bool otherFlag;
    char trailing[3];

    Connection()
        : first(0), second(0), flag(false), otherFlag(false) {}
    ~Connection();
    Connection& operator=(const ConnectionResult&);
};

struct Function {
    char storage[40];
    Function(const Callback&);
    ~Function();
};

struct Dispatcher {
    ConnectionResult connect(void*, const Function&, int);
};

extern Dispatcher dispatcher;

struct Base {
    virtual ~Base();
    long references;
    char prefix[12];
    float value;
    char remaining[0xc0];

    Base(float, const ModelReference&, const Services&);
    void release();
};

struct Part : Base, Listener {
    Connection connection;

    Part(const ModelReference&, const Services&);
    virtual void notify();
    void callback();
    void update();
    void finish();
};

struct Callback {
    void (Part::*method)();
    Part* object;
};

inline Reference::Reference(Part* p) : value(p)
{
    InterlockedIncrement(&p->references);
}

inline Reference::~Reference()
{
    if (value && InterlockedDecrement(&value->references) == 0) {
        value->release();
        if (value)
            delete value;
    }
}

Part::Part(const ModelReference& model, const Services& services)
    : Base(0.0f, model, services), connection()
{
    if (0 == model.value->mode) {
        services.service->insert(Reference(this), 1);
        if (1.0 > value)
            value = 0.0f;
    } else {
        if (minimumValue > value)
            value = minimumValue;
    }

    if (model.value)
        model.value->listeners.attach(this);

    Callback callbackData;
    callbackData.method = &Part::callback;
    callbackData.object = this;

    {
        Function function(callbackData);
        connection = dispatcher.connect(
            model.value ? &model.value->event : 0, function, 10);
    }

    update();
    finish();
}

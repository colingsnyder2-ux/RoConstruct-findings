// from server: 75% by colin
// from server: 72% by king_originala
// roc 2008-06 005813f0  unit: RBX::TrackCameraCommand  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005813f0
//
// 005813f0  64a100000000         mov eax, dword ptr fs:[0]
// 005813f6  6aff                 push -1
// 005813f8  6868917d00           push 0x7d9168
// 005813fd  50                   push eax
// 005813fe  64892500000000       mov dword ptr fs:[0], esp
// 00581405  83ec08               sub esp, 8
// 00581408  56                   push esi
// 00581409  8bf1                 mov esi, ecx
// 0058140b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0058140e  57                   push edi
// 0058140f  85c9                 test ecx, ecx
// 00581411  7407                 je 0x58141a
// 00581413  e8983fe9ff           call 0x4153b0
// 00581418  eb02                 jmp 0x58141c
// 0058141a  33c0                 xor eax, eax
// 0058141c  8d4c2408             lea ecx, [esp + 8]
// 00581420  51                   push ecx
// 00581421  8bc8                 mov ecx, eax
// 00581423  e8f827e9ff           call 0x413c20
// 00581428  8b00                 mov eax, dword ptr [eax]
// 0058142a  6a00                 push 0
// 0058142c  681c7f9400           push 0x947f1c
// 00581431  687c909200           push 0x92907c
// 00581436  6a00                 push 0
// 00581438  50                   push eax
// 00581439  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00581441  e880031200           call 0x6a17c6
// 00581446  8bf8                 mov edi, eax
// 00581448  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058144c  83c414               add esp, 0x14
// 0058144f  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00581457  85c0                 test eax, eax
// 00581459  742e                 je 0x581489
// 0058145b  53                   push ebx
// 0058145c  8bd8                 mov ebx, eax
// 0058145e  83c004               add eax, 4
// 00581461  83caff               or edx, 0xffffffff
// 00581464  f00fc110             lock xadd dword ptr [eax], edx
// 00581468  751e                 jne 0x581488
// 0058146a  8b03                 mov eax, dword ptr [ebx]
// 0058146c  8b5004               mov edx, dword ptr [eax + 4]
// 0058146f  8bcb                 mov ecx, ebx
// 00581471  ffd2                 call edx
// 00581473  8d4308               lea eax, [ebx + 8]
// 00581476  83c9ff               or ecx, 0xffffffff
// 00581479  f00fc108             lock xadd dword ptr [eax], ecx
// 0058147d  7509                 jne 0x581488
// 0058147f  8b13                 mov edx, dword ptr [ebx]
// 00581481  8b4208               mov eax, dword ptr [edx + 8]
// 00581484  8bcb                 mov ecx, ebx
// 00581486  ffd0                 call eax
// 00581488  5b                   pop ebx
// 00581489  85ff                 test edi, edi
// 0058148b  7439                 je 0x5814c6
// 0058148d  8b460c               mov eax, dword ptr [esi + 0xc]
// 00581490  8b9088020000         mov edx, dword ptr [eax + 0x288]
// 00581496  8d8888020000         lea ecx, [eax + 0x288]
// 0058149c  8b4204               mov eax, dword ptr [edx + 4]
// 0058149f  57                   push edi
// 005814a0  ffd0                 call eax
// 005814a2  8bc8                 mov ecx, eax
// 005814a4  e867c90400           call 0x5cde10
// 005814a9  8b460c               mov eax, dword ptr [esi + 0xc]
// 005814ac  8b9088020000         mov edx, dword ptr [eax + 0x288]
// 005814b2  8d8888020000         lea ecx, [eax + 0x288]
// 005814b8  8b4204               mov eax, dword ptr [edx + 4]
// 005814bb  6a03                 push 3
// 005814bd  ffd0                 call eax
// 005814bf  8bc8                 mov ecx, eax
// 005814c1  e80ac90400           call 0x5cddd0
// 005814c6  8b4604               mov eax, dword ptr [esi + 4]
// 005814c9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005814cc  83c004               add eax, 4
// 005814cf  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005814d3  5f                   pop edi
// 005814d4  5e                   pop esi
// 005814d5  7205                 jb 0x5814dc
// 005814d7  8b4004               mov eax, dword ptr [eax + 4]
// 005814da  eb03                 jmp 0x5814df
// 005814dc  83c004               add eax, 4
// 005814df  51                   push ecx
// 005814e0  50                   push eax
// 005814e1  e8dab00000           call 0x58c5c0
// 005814e6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005814ea  8b11                 mov edx, dword ptr [ecx]
// 005814ec  8b02                 mov eax, dword ptr [edx]
// 005814ee  83c408               add esp, 8
// 005814f1  6a01                 push 1
// 005814f3  ffd0                 call eax
// 005814f5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005814f9  64890d00000000       mov dword ptr fs:[0], ecx
// 00581500  83c414               add esp, 0x14
// 00581503  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Instance {
    virtual void unused();
};

struct PVInstance : Instance {
};

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct SharedInstance {
    Instance* pointer;
    Control* control;
    ~SharedInstance();
};

__forceinline SharedInstance::~SharedInstance()
{
    if (control) {
        if (_InterlockedDecrement(&control->strong) == 0) {
            control->dispose();
            if (_InterlockedDecrement(&control->weak) == 0)
                control->destroy();
        }
    }
}

struct InstanceHolder {
    SharedInstance getInstance();
};

struct Link {
    InstanceHolder* get();
};

struct Cam {
    void setSubject(PVInstance*);
    void setCameraType(int);
};

struct CameraProvider {
    virtual void unused();
    virtual Cam* getCamera();
};

struct Owner {
    char padding[0x288];
    CameraProvider provider;
};

struct Name {
    char padding[4];
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned length;
    unsigned capacity;
};

struct Argument {
    virtual void destroy(int);
};

extern void __cdecl handle(const char*, Owner*);

struct TrackCameraCommand {
    char padding0[4];
    Name* name;
    char padding8[4];
    Owner* owner;
    char padding10[16];
    Link* link;
    void execute(Argument*);
};

void TrackCameraCommand::execute(Argument* argument)
{
    PVInstance* subject =
        dynamic_cast<PVInstance*>((link ? link->get() : 0)->getInstance().pointer);

    if (subject) {
        owner->provider.getCamera()->setSubject(subject);
        owner->provider.getCamera()->setCameraType(3);
    }

    handle(name->capacity < 16 ? name->buffer : name->pointer, owner);
    argument->destroy(1);
}

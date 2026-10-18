// from server: 82% by colin
// from server: 70% by king_originala
// roc 2008-06 00445020  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 437 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445020
//
// 00445020  6aff                 push -1
// 00445022  68420e7c00           push 0x7c0e42
// 00445027  64a100000000         mov eax, dword ptr fs:[0]
// 0044502d  50                   push eax
// 0044502e  64892500000000       mov dword ptr fs:[0], esp
// 00445035  83ec14               sub esp, 0x14
// 00445038  53                   push ebx
// 00445039  56                   push esi
// 0044503a  57                   push edi
// 0044503b  33ff                 xor edi, edi
// 0044503d  bb01000000           mov ebx, 1
// 00445042  897c2414             mov dword ptr [esp + 0x14], edi
// 00445046  841da4d29600         test byte ptr [0x96d2a4], bl
// 0044504c  751f                 jne 0x44506d
// 0044504e  091da4d29600         or dword ptr [0x96d2a4], ebx
// 00445054  68a0aa7f00           push 0x7faaa0
// 00445059  893d9cd29600         mov dword ptr [0x96d29c], edi
// 0044505f  893da0d29600         mov dword ptr [0x96d2a0], edi
// 00445065  e845c72500           call 0x6a17af
// 0044506a  83c404               add esp, 4
// 0044506d  393d9cd29600         cmp dword ptr [0x96d29c], edi
// 00445073  0f8524010000         jne 0x44519d
// 00445079  8d442418             lea eax, [esp + 0x18]
// 0044507d  50                   push eax
// 0044507e  e89d62fcff           call 0x40b320
// 00445083  83c404               add esp, 4
// 00445086  8b08                 mov ecx, dword ptr [eax]
// 00445088  83c004               add eax, 4
// 0044508b  890d9cd29600         mov dword ptr [0x96d29c], ecx
// 00445091  50                   push eax
// 00445092  b9a0d29600           mov ecx, 0x96d2a0
// 00445097  897c242c             mov dword ptr [esp + 0x2c], edi
// 0044509b  e810d5fbff           call 0x4025b0
// 004450a0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004450a4  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004450ac  3bf7                 cmp esi, edi
// 004450ae  742a                 je 0x4450da
// 004450b0  8d5604               lea edx, [esi + 4]
// 004450b3  83c8ff               or eax, 0xffffffff
// 004450b6  f00fc102             lock xadd dword ptr [edx], eax
// 004450ba  751e                 jne 0x4450da
// 004450bc  8b16                 mov edx, dword ptr [esi]
// 004450be  8b4204               mov eax, dword ptr [edx + 4]
// 004450c1  8bce                 mov ecx, esi
// 004450c3  ffd0                 call eax
// 004450c5  8d4e08               lea ecx, [esi + 8]
// 004450c8  83caff               or edx, 0xffffffff
// 004450cb  f00fc111             lock xadd dword ptr [ecx], edx
// 004450cf  7509                 jne 0x4450da
// 004450d1  8b06                 mov eax, dword ptr [esi]
// 004450d3  8b5008               mov edx, dword ptr [eax + 8]
// 004450d6  8bce                 mov ecx, esi
// 004450d8  ffd2                 call edx
// 004450da  8d4c2410             lea ecx, [esp + 0x10]
// 004450de  ff15043f8000         call dword ptr [0x803f04]
// 004450e4  895c2428             mov dword ptr [esp + 0x28], ebx
// 004450e8  e839b82500           call 0x6a0926
// 004450ed  8b4004               mov eax, dword ptr [eax + 4]
// 004450f0  8b5044               mov edx, dword ptr [eax + 0x44]
// 004450f3  8d4c2410             lea ecx, [esp + 0x10]
// 004450f7  51                   push ecx
// 004450f8  52                   push edx
// 004450f9  e840b82500           call 0x6a093e
// 004450fe  8d4c2410             lea ecx, [esp + 0x10]
// 00445102  ff15e03e8000         call dword ptr [0x803ee0]
// 00445108  50                   push eax
// 00445109  8d4c2410             lea ecx, [esp + 0x10]
// 0044510d  ff15103f8000         call dword ptr [0x803f10]
// 00445113  8d4c240c             lea ecx, [esp + 0xc]
// 00445117  c644242802           mov byte ptr [esp + 0x28], 2
// 0044511c  ff15e02f8000         call dword ptr [0x802fe0]
// 00445122  50                   push eax
// 00445123  8d4c2410             lea ecx, [esp + 0x10]
// 00445127  ff1584338000         call dword ptr [0x803384]
// 0044512d  50                   push eax
// 0044512e  ff15202b8000         call dword ptr [0x802b20]
// 00445134  6aff                 push -1
// 00445136  8d4c2410             lea ecx, [esp + 0x10]
// 0044513a  ff1580338000         call dword ptr [0x803380]
// 00445140  683c5b8100           push 0x815b3c
// 00445145  8d442410             lea eax, [esp + 0x10]
// 00445149  50                   push eax
// 0044514a  8d4c241c             lea ecx, [esp + 0x1c]
// 0044514e  51                   push ecx
// 0044514f  e80c90fcff           call 0x40e160
// 00445154  83c40c               add esp, 0xc
// 00445157  8bc8                 mov ecx, eax
// 00445159  c644242803           mov byte ptr [esp + 0x28], 3
// 0044515e  ff15e03e8000         call dword ptr [0x803ee0]
// 00445164  83ec1c               sub esp, 0x1c
// 00445167  8bcc                 mov ecx, esp
// 00445169  89642434             mov dword ptr [esp + 0x34], esp
// 0044516d  50                   push eax
// 0044516e  ff1558248000         call dword ptr [0x802458]
// 00445174  8b0d9cd29600         mov ecx, dword ptr [0x96d29c]
// 0044517a  e851fcffff           call 0x444dd0
// 0044517f  8d4c2414             lea ecx, [esp + 0x14]
// 00445183  ff15143f8000         call dword ptr [0x803f14]
// 00445189  8d4c240c             lea ecx, [esp + 0xc]
// 0044518d  ff15143f8000         call dword ptr [0x803f14]
// 00445193  8d4c2410             lea ecx, [esp + 0x10]
// 00445197  ff15143f8000         call dword ptr [0x803f14]
// 0044519d  8b442430             mov eax, dword ptr [esp + 0x30]
// 004451a1  8b159cd29600         mov edx, dword ptr [0x96d29c]
// 004451a7  8910                 mov dword ptr [eax], edx
// 004451a9  8b0da0d29600         mov ecx, dword ptr [0x96d2a0]
// 004451af  894804               mov dword ptr [eax + 4], ecx
// 004451b2  8b0da0d29600         mov ecx, dword ptr [0x96d2a0]
// 004451b8  3bcf                 cmp ecx, edi
// 004451ba  7407                 je 0x4451c3
// 004451bc  83c104               add ecx, 4
// 004451bf  f00fc119             lock xadd dword ptr [ecx], ebx
// 004451c3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004451c7  5f                   pop edi
// 004451c8  5e                   pop esi
// 004451c9  64890d00000000       mov dword ptr fs:[0], ecx
// 004451d0  5b                   pop ebx
// 004451d1  83c420               add esp, 0x20
// 004451d4  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCount {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct RefHandle {
    RefCount* p;
    RefHandle& operator=(const RefHandle&);
};

struct CString;
extern void (__thiscall *stringConstruct)(CString*);
extern void (__thiscall *stringConstructText)(CString*, const char*);
extern void (__thiscall *stringDestroy)(CString*);
extern const char* (__thiscall *stringText)(const CString*);
extern int (__thiscall *stringLength)(const CString*);
extern char* (__thiscall *stringBuffer)(CString*, int);
extern void (__thiscall *stringRelease)(CString*, int);
extern int (__stdcall *PathRemoveFileSpecA)(char*);

struct CString {
    void* data;
    CString();
    CString(const char*);
    __declspec(dllimport) ~CString() throw();
    const char* text() const;
    int length() const;
    char* buffer(int);
    void release(int);
};

inline CString::CString() { stringConstruct(this); }
inline CString::CString(const char* s) { stringConstructText(this, s); }
inline const char* CString::text() const { return stringText(this); }
inline int CString::length() const { return stringLength(this); }
inline char* CString::buffer(int n) { return stringBuffer(this, n); }
inline void CString::release(int n) { stringRelease(this, n); }

struct StringValue;
extern void (__thiscall *valueConstruct)(StringValue*, const char*);

struct StringValue {
    unsigned char data[28];
    StringValue(const char*);
};

inline StringValue::StringValue(const char* s) {
    valueConstruct(this, s);
}

struct Metadata {
    void load(StringValue);
};

struct Shared {
    Metadata* object;
    RefHandle reference;
    Shared();
    Shared(const Shared&);
    ~Shared() throw();
    Shared& operator=(const Shared&);
};

inline Shared::Shared() {
    object = 0;
    reference.p = 0;
}

inline Shared::Shared(const Shared& s) {
    object = s.object;
    reference.p = s.reference.p;
    if (s.reference.p)
        _InterlockedExchangeAdd(&s.reference.p->strong, 1);
}

inline Shared::~Shared() throw() {
    RefCount* p = reference.p;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

inline Shared& Shared::operator=(const Shared& s) {
    object = s.object;
    reference = s.reference;
    return *this;
}

struct ModuleState {
    unsigned char padding[68];
    void* module;
};

struct RuntimeState {
    unsigned char padding[4];
    ModuleState* state;
};

extern RuntimeState* __cdecl runtimeState();
extern void __stdcall moduleFileName(void*, CString*);
extern Shared __cdecl createMetadata();
extern CString __cdecl operator+(const CString&, const char*);

Shared __cdecl getMetadata()
{
    static Shared cached;

    if (!cached.object) {
        cached = createMetadata();

        CString filename;
        moduleFileName(runtimeState()->state->module, &filename);
        CString directory(filename.text());
        PathRemoveFileSpecA(directory.buffer(directory.length()));
        directory.release(-1);
        cached.object->load((directory + "\\ReflectionMetadata.xml").text());
    }

    return cached;
}

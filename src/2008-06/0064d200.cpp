// from server: 100% by king_originala
// roc 2008-06 0064d200  unit: RBX::SimJobStage  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064d200
//
// 0064d200  64a100000000         mov eax, dword ptr fs:[0]
// 0064d206  6aff                 push -1
// 0064d208  683beb7d00           push 0x7deb3b
// 0064d20d  50                   push eax
// 0064d20e  64892500000000       mov dword ptr fs:[0], esp
// 0064d215  53                   push ebx
// 0064d216  56                   push esi
// 0064d217  57                   push edi
// 0064d218  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0064d21c  8bf1                 mov esi, ecx
// 0064d21e  56                   push esi
// 0064d21f  8bcf                 mov ecx, edi
// 0064d221  e80a86ffff           call 0x645830
// 0064d226  8b06                 mov eax, dword ptr [esi]
// 0064d228  8b500c               mov edx, dword ptr [eax + 0xc]
// 0064d22b  8b1f                 mov ebx, dword ptr [edi]
// 0064d22d  8bce                 mov ecx, esi
// 0064d22f  ffd2                 call edx
// 0064d231  50                   push eax
// 0064d232  8b4304               mov eax, dword ptr [ebx + 4]
// 0064d235  8bcf                 mov ecx, edi
// 0064d237  ffd0                 call eax
// 0064d239  8bcf                 mov ecx, edi
// 0064d23b  e8208ff9ff           call 0x5e6160
// 0064d240  8b16                 mov edx, dword ptr [esi]
// 0064d242  50                   push eax
// 0064d243  8b420c               mov eax, dword ptr [edx + 0xc]
// 0064d246  8bce                 mov ecx, esi
// 0064d248  ffd0                 call eax
// 0064d24a  8bc8                 mov ecx, eax
// 0064d24c  e88fdefaff           call 0x5fb0e0
// 0064d251  6a28                 push 0x28
// 0064d253  e8c8360500           call 0x6a0920
// 0064d258  83c404               add esp, 4
// 0064d25b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0064d25f  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0064d267  85c0                 test eax, eax
// 0064d269  740a                 je 0x64d275
// 0064d26b  57                   push edi
// 0064d26c  8bc8                 mov ecx, eax
// 0064d26e  e86d7ff9ff           call 0x5e51e0
// 0064d273  eb02                 jmp 0x64d277
// 0064d275  33c0                 xor eax, eax
// 0064d277  50                   push eax
// 0064d278  8bce                 mov ecx, esi
// 0064d27a  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0064d282  e869feffff           call 0x64d0f0
// 0064d287  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064d28b  5f                   pop edi
// 0064d28c  5e                   pop esi
// 0064d28d  64890d00000000       mov dword ptr fs:[0], ecx
// 0064d294  5b                   pop ebx
// 0064d295  83c40c               add esp, 0xc
// 0064d298  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Context {
    void f(int);
};

struct SimJob {
    SimJob(int);
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
    int field24;
};

struct Job {
    virtual void slot0();
    virtual void set(Context*);
    void bind(int);
    int value();
};

struct Stage {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual Context* context();
    void setJob(SimJob*);
    void f(Job*);
};

void Stage::f(Job* job)
{
    job->bind((int)this);
    job->set(context());
    context()->f(job->value());
    setJob(new SimJob((int)job));
}

// from server: 74% by colin
// from server: 72% by king_originala
// roc 2008-06 004b6530  unit: RBX::Network::Replicator::ReplicatorStatsItem  size: 352 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b6530
//
// 004b6530  51                   push ecx
// 004b6531  53                   push ebx
// 004b6532  8bd9                 mov ebx, ecx
// 004b6534  8b8368010000         mov eax, dword ptr [ebx + 0x168]
// 004b653a  83b8502d000000       cmp dword ptr [eax + 0x2d50], 0
// 004b6541  0f8446010000         je 0x4b668d
// 004b6547  56                   push esi
// 004b6548  8bf0                 mov esi, eax
// 004b654a  8b86582d0000         mov eax, dword ptr [esi + 0x2d58]
// 004b6550  8b8e542d0000         mov ecx, dword ptr [esi + 0x2d54]
// 004b6556  57                   push edi
// 004b6557  8bbe502d0000         mov edi, dword ptr [esi + 0x2d50]
// 004b655d  8b17                 mov edx, dword ptr [edi]
// 004b655f  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 004b6565  50                   push eax
// 004b6566  51                   push ecx
// 004b6567  8bcf                 mov ecx, edi
// 004b6569  ffd2                 call edx
// 004b656b  8b8e582d0000         mov ecx, dword ptr [esi + 0x2d58]
// 004b6571  8b96542d0000         mov edx, dword ptr [esi + 0x2d54]
// 004b6577  50                   push eax
// 004b6578  8b07                 mov eax, dword ptr [edi]
// 004b657a  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 004b6580  51                   push ecx
// 004b6581  52                   push edx
// 004b6582  8bcf                 mov ecx, edi
// 004b6584  ffd0                 call eax
// 004b6586  8b8e542d0000         mov ecx, dword ptr [esi + 0x2d54]
// 004b658c  8b17                 mov edx, dword ptr [edi]
// 004b658e  8b9290000000         mov edx, dword ptr [edx + 0x90]
// 004b6594  50                   push eax
// 004b6595  8b86582d0000         mov eax, dword ptr [esi + 0x2d58]
// 004b659b  50                   push eax
// 004b659c  51                   push ecx
// 004b659d  8bcf                 mov ecx, edi
// 004b659f  ffd2                 call edx
// 004b65a1  8b8e582d0000         mov ecx, dword ptr [esi + 0x2d58]
// 004b65a7  8b96542d0000         mov edx, dword ptr [esi + 0x2d54]
// 004b65ad  50                   push eax
// 004b65ae  8b07                 mov eax, dword ptr [edi]
// 004b65b0  8b8090000000         mov eax, dword ptr [eax + 0x90]
// 004b65b6  6808508200           push 0x825008
// 004b65bb  51                   push ecx
// 004b65bc  52                   push edx
// 004b65bd  8bcf                 mov ecx, edi
// 004b65bf  ffd0                 call eax
// 004b65c1  8b8b60010000         mov ecx, dword ptr [ebx + 0x160]
// 004b65c7  8944241c             mov dword ptr [esp + 0x1c], eax
// 004b65cb  db44241c             fild dword ptr [esp + 0x1c]
// 004b65cf  83ec08               sub esp, 8
// 004b65d2  dd1c24               fstp qword ptr [esp]
// 004b65d5  51                   push ecx
// 004b65d6  e845291100           call 0x5c8f20
// 004b65db  8b9368010000         mov edx, dword ptr [ebx + 0x168]
// 004b65e1  8b82702b0000         mov eax, dword ptr [edx + 0x2b70]
// 004b65e7  83c41c               add esp, 0x1c
// 004b65ea  8d4c240c             lea ecx, [esp + 0xc]
// 004b65ee  51                   push ecx
// 004b65ef  8b8b58010000         mov ecx, dword ptr [ebx + 0x158]
// 004b65f5  89442410             mov dword ptr [esp + 0x10], eax
// 004b65f9  e8422b1100           call 0x5c9140
// 004b65fe  8b8370010000         mov eax, dword ptr [ebx + 0x170]
// 004b6604  8b505c               mov edx, dword ptr [eax + 0x5c]
// 004b6607  db405c               fild dword ptr [eax + 0x5c]
// 004b660a  85d2                 test edx, edx
// 004b660c  7d06                 jge 0x4b6614
// 004b660e  d80578978100         fadd dword ptr [0x819778]
// 004b6614  8b4078               mov eax, dword ptr [eax + 0x78]
// 004b6617  8944240c             mov dword ptr [esp + 0xc], eax
// 004b661b  db44240c             fild dword ptr [esp + 0xc]
// 004b661f  85c0                 test eax, eax
// 004b6621  7d06                 jge 0x4b6629
// 004b6623  d80578978100         fadd dword ptr [0x819778]
// 004b6629  def9                 fdivp st(1)
// 004b662b  8b8b5c010000         mov ecx, dword ptr [ebx + 0x15c]
// 004b6631  83ec08               sub esp, 8
// 004b6634  dd05887a8100         fld qword ptr [0x817a88]
// 004b663a  d8c9                 fmul st(1)
// 004b663c  dd1c24               fstp qword ptr [esp]
// 004b663f  6800508200           push 0x825000
// 004b6644  83ec08               sub esp, 8
// 004b6647  dd1c24               fstp qword ptr [esp]
// 004b664a  51                   push ecx
// 004b664b  e8d0281100           call 0x5c8f20
// 004b6650  8b8374010000         mov eax, dword ptr [ebx + 0x174]
// 004b6656  83c418               add esp, 0x18
// 004b6659  5f                   pop edi
// 004b665a  5e                   pop esi
// 004b665b  85c0                 test eax, eax
// 004b665d  7420                 je 0x4b667f
// 004b665f  8d0cc500000000       lea ecx, [eax*8]
// 004b6666  8b8378010000         mov eax, dword ptr [ebx + 0x178]
// 004b666c  33d2                 xor edx, edx
// 004b666e  f7f1                 div ecx
// 004b6670  8b8b64010000         mov ecx, dword ptr [ebx + 0x164]
// 004b6676  50                   push eax
// 004b6677  e824281100           call 0x5c8ea0
// 004b667c  5b                   pop ebx
// 004b667d  59                   pop ecx
// 004b667e  c3                   ret 
// 004b667f  8b8b64010000         mov ecx, dword ptr [ebx + 0x164]
// 004b6685  33c0                 xor eax, eax
// 004b6687  50                   push eax
// 004b6688  e813281100           call 0x5c8ea0
// 004b668d  5b                   pop ebx
// 004b668e  59                   pop ecx
// 004b668f  c3                   ret 
#include <intrin.h>

struct Peer {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual int average(unsigned int, unsigned int);
    virtual int current(unsigned int, unsigned int);
    virtual int best(unsigned int, unsigned int);
};

struct Connection {
    char padding0[0x2b70];
    unsigned int value;
    char padding1[0x1dc];
    Peer *peer;
    unsigned int argument1;
    unsigned int argument2;
};

struct Counters {
    char padding0[0x5c];
    unsigned int numerator;
    char padding1[0x18];
    unsigned int denominator;
};

struct Value {
    void setValue(const unsigned int *);
    void setValue(unsigned int);
};

extern void __cdecl report(Value *, double, const char *, ...);

struct StatsItem {
    char padding0[0x158];
    Value *first;
    Value *percentage;
    Value *latency;
    Value *rate;
    Connection *connection;
    char padding1[4];
    Counters *counters;
    unsigned int divisor;
    unsigned int total;

    void update();
};

void StatsItem::update()
{
    if (connection->peer) {
        Connection *c = connection;
        Peer *p = c->peer;

        report(latency,
               (double)p->current(c->argument1, c->argument2),
               "%d avg:%d best:%d",
               p->current(c->argument1, c->argument2),
               p->average(c->argument1, c->argument2),
               p->best(c->argument1, c->argument2));

        unsigned int value = connection->value;
        _ReadWriteBarrier();
        first->setValue(&value);

        double numerator = (double)counters->numerator;
        value = counters->denominator;
        double ratio = numerator / (double)value;
        report(percentage, ratio, "%.1g%%", ratio * 100.0);

        rate->setValue(divisor ? total / (divisor * 8) : 0u);
    }
}

// from server: 66% by colin
// roc 2007-08 00604300  unit: RBX::SleepStage  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00604300
//
// 00604300  53                   push ebx
// 00604301  56                   push esi
// 00604302  57                   push edi
// 00604303  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00604307  8bf1                 mov esi, ecx
// 00604309  8b4f04               mov ecx, dword ptr [edi + 4]
// 0060430c  8b01                 mov eax, dword ptr [ecx]
// 0060430e  8b5004               mov edx, dword ptr [eax + 4]
// 00604311  ffd2                 call edx
// 00604313  8bd8                 mov ebx, eax
// 00604315  8b06                 mov eax, dword ptr [esi]
// 00604317  8b5004               mov edx, dword ptr [eax + 4]
// 0060431a  8bce                 mov ecx, esi
// 0060431c  ffd2                 call edx
// 0060431e  3bd8                 cmp ebx, eax
// 00604320  7c15                 jl 0x604337
// 00604322  8bcf                 mov ecx, edi
// 00604324  e897ecfaff           call 0x5b2fc0
// 00604329  85c0                 test eax, eax
// 0060432b  740a                 je 0x604337
// 0060432d  6a08                 push 8
// 0060432f  57                   push edi
// 00604330  8bce                 mov ecx, esi
// 00604332  e859fcffff           call 0x603f90
// 00604337  5f                   pop edi
// 00604338  5e                   pop esi
// 00604339  5b                   pop ebx
// 0060433a  c20400               ret 4

struct SleepStage {
    void stepSleepStage(void*);
};

struct Other {
    virtual int getSomething();
};

struct Arg {
    char pad0[4];
    Other* m_other;
};

extern "C" int __stdcall func_005b2fc0(void*);
extern "C" void __stdcall func_00603f90(void*, int);

void SleepStage::stepSleepStage(void* a)
{
    Arg* arg = (Arg*)a;
    int ebx = arg->m_other->getSomething();
    int eax = ((Other*)this)->getSomething();
    if (ebx < eax)
        return;
    if (func_005b2fc0(arg) == 0)
        return;
    func_00603f90(this, 8);
}

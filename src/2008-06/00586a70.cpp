// from server: 100% by king_originala
// roc 2008-06 00586a70  unit: RBX::Script  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00586a70
//
// 00586a70  8b442404             mov eax, dword ptr [esp + 4]
// 00586a74  53                   push ebx
// 00586a75  56                   push esi
// 00586a76  57                   push edi
// 00586a77  50                   push eax
// 00586a78  8bf1                 mov esi, ecx
// 00586a7a  e84142fdff           call 0x55acc0
// 00586a7f  8bbe04010000         mov edi, dword ptr [esi + 0x104]
// 00586a85  33db                 xor ebx, ebx
// 00586a87  85ff                 test edi, edi
// 00586a89  7439                 je 0x586ac4
// 00586a8b  eb03                 jmp 0x586a90
// 00586a8d  8d4900               lea ecx, [ecx]
// 00586a90  6a00                 push 0
// 00586a92  68b48c9400           push 0x948cb4
// 00586a97  687c909200           push 0x92907c
// 00586a9c  6a00                 push 0
// 00586a9e  57                   push edi
// 00586a9f  e822ad1100           call 0x6a17c6
// 00586aa4  83c414               add esp, 0x14
// 00586aa7  85c0                 test eax, eax
// 00586aa9  740f                 je 0x586aba
// 00586aab  8b10                 mov edx, dword ptr [eax]
// 00586aad  8bc8                 mov ecx, eax
// 00586aaf  8b02                 mov eax, dword ptr [edx]
// 00586ab1  56                   push esi
// 00586ab2  ffd0                 call eax
// 00586ab4  8bd8                 mov ebx, eax
// 00586ab6  85db                 test ebx, ebx
// 00586ab8  750a                 jne 0x586ac4
// 00586aba  8bbf04010000         mov edi, dword ptr [edi + 0x104]
// 00586ac0  85ff                 test edi, edi
// 00586ac2  75cc                 jne 0x586a90
// 00586ac4  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00586aca  3bd9                 cmp ebx, ecx
// 00586acc  743c                 je 0x586b0a
// 00586ace  85c9                 test ecx, ecx
// 00586ad0  7408                 je 0x586ada
// 00586ad2  8b11                 mov edx, dword ptr [ecx]
// 00586ad4  8b4208               mov eax, dword ptr [edx + 8]
// 00586ad7  56                   push esi
// 00586ad8  ffd0                 call eax
// 00586ada  56                   push esi
// 00586adb  899e5c010000         mov dword ptr [esi + 0x15c], ebx
// 00586ae1  e82afeffff           call 0x586910
// 00586ae6  8bf8                 mov edi, eax
// 00586ae8  83c404               add esp, 4
// 00586aeb  85ff                 test edi, edi
// 00586aed  741b                 je 0x586b0a
// 00586aef  56                   push esi
// 00586af0  8bcf                 mov ecx, edi
// 00586af2  e839650200           call 0x5ad030
// 00586af7  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00586afd  85c9                 test ecx, ecx
// 00586aff  7409                 je 0x586b0a
// 00586b01  8b11                 mov edx, dword ptr [ecx]
// 00586b03  8b4204               mov eax, dword ptr [edx + 4]
// 00586b06  57                   push edi
// 00586b07  56                   push esi
// 00586b08  ffd0                 call eax
// 00586b0a  5f                   pop edi
// 00586b0b  5e                   pop esi
// 00586b0c  5b                   pop ebx
// 00586b0d  c20400               ret 4

namespace RBX {
class Script;
class ServiceProvider;

class Instance {
public:
    virtual ~Instance();
    char pad[0x100];
    Instance* next;

    void setParent(Instance*);
};

class IScriptOwner {
public:
    virtual IScriptOwner* getOwner(Script*) = 0;
    virtual void attach(Script*, ServiceProvider*) = 0;
    virtual void detach(Script*) = 0;
};

class ServiceProvider : public Instance {
public:
    void registerScript(Script*);
};

class Script : public Instance {
public:
    char gap[0x54];
    IScriptOwner* owner;

    void f(Instance*);
};
}

RBX::ServiceProvider* func_00586910(RBX::Instance*);

void RBX::Script::f(Instance* parent)
{
    Instance::setParent(parent);

    Instance* p = next;
    IScriptOwner* found = 0;
    while (p) {
        IScriptOwner* candidate = dynamic_cast<IScriptOwner*>(p);
        if (candidate) {
            found = candidate->getOwner(this);
            if (found)
                break;
        }
        p = p->next;
    }

    if (found != owner) {
        if (owner)
            owner->detach(this);

        owner = found;
        ServiceProvider* provider = func_00586910(this);
        if (provider) {
            provider->registerScript(this);
            if (owner)
                owner->attach(this, provider);
        }
    }
}

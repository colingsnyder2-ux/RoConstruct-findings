// from server: 99% by Espeon
// roc 2008-06 004b44c0  unit: RBX::Network::VPeer::?$BoundFuncDesc  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b44c0
//
// 004b44c0  6aff                 push -1
// 004b44c2  6818887c00           push 0x7c8818
// 004b44c7  64a100000000         mov eax, dword ptr fs:[0]
// 004b44cd  50                   push eax
// 004b44ce  64892500000000       mov dword ptr fs:[0], esp
// 004b44d5  83ec18               sub esp, 0x18
// 004b44d8  56                   push esi
// 004b44d9  57                   push edi
// 004b44da  8bf9                 mov edi, ecx
// 004b44dc  8b442430             mov eax, dword ptr [esp + 0x30]
// 004b44e0  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004b44e4  8b542438             mov edx, dword ptr [esp + 0x38]
// 004b44e8  89442408             mov dword ptr [esp + 8], eax
// 004b44ec  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 004b44f0  89442414             mov dword ptr [esp + 0x14], eax
// 004b44f4  8b442440             mov eax, dword ptr [esp + 0x40]
// 004b44f8  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004b4500  894c240c             mov dword ptr [esp + 0xc], ecx
// 004b4504  89542410             mov dword ptr [esp + 0x10], edx
// 004b4508  89442418             mov dword ptr [esp + 0x18], eax
// 004b450c  85c0                 test eax, eax
// 004b450e  740c                 je 0x4b451c
// 004b4510  83c004               add eax, 4
// 004b4513  b901000000           mov ecx, 1
// 004b4518  f00fc108             lock xadd dword ptr [eax], ecx
// 004b451c  8d542408             lea edx, [esp + 8]
// 004b4520  52                   push edx
// 004b4521  8bcf                 mov ecx, edi
// 004b4523  c70700000000         mov dword ptr [edi], 0
// 004b4529  e842f0ffff           call 0x4b3570
// 004b452e  8b742418             mov esi, dword ptr [esp + 0x18]
// 004b4532  85f6                 test esi, esi
// 004b4534  742a                 je 0x4b4560
// 004b4536  8d4604               lea eax, [esi + 4]
// 004b4539  83c9ff               or ecx, 0xffffffff
// 004b453c  f00fc108             lock xadd dword ptr [eax], ecx
// 004b4540  751e                 jne 0x4b4560
// 004b4542  8b16                 mov edx, dword ptr [esi]
// 004b4544  8b4204               mov eax, dword ptr [edx + 4]
// 004b4547  8bce                 mov ecx, esi
// 004b4549  ffd0                 call eax
// 004b454b  8d4e08               lea ecx, [esi + 8]
// 004b454e  83caff               or edx, 0xffffffff
// 004b4551  f00fc111             lock xadd dword ptr [ecx], edx
// 004b4555  7509                 jne 0x4b4560
// 004b4557  8b06                 mov eax, dword ptr [esi]
// 004b4559  8b5008               mov edx, dword ptr [eax + 8]
// 004b455c  8bce                 mov ecx, esi
// 004b455e  ffd2                 call edx
// 004b4560  8b742440             mov esi, dword ptr [esp + 0x40]
// 004b4564  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004b456c  85f6                 test esi, esi
// 004b456e  742a                 je 0x4b459a
// 004b4570  8d4604               lea eax, [esi + 4]
// 004b4573  83c9ff               or ecx, 0xffffffff
// 004b4576  f00fc108             lock xadd dword ptr [eax], ecx
// 004b457a  751e                 jne 0x4b459a
// 004b457c  8b16                 mov edx, dword ptr [esi]
// 004b457e  8b4204               mov eax, dword ptr [edx + 4]
// 004b4581  8bce                 mov ecx, esi
// 004b4583  ffd0                 call eax
// 004b4585  8d4e08               lea ecx, [esi + 8]
// 004b4588  83caff               or edx, 0xffffffff
// 004b458b  f00fc111             lock xadd dword ptr [ecx], edx
// 004b458f  7509                 jne 0x4b459a
// 004b4591  8b06                 mov eax, dword ptr [esi]
// 004b4593  8b5008               mov edx, dword ptr [eax + 8]
// 004b4596  8bce                 mov ecx, esi
// 004b4598  ffd2                 call edx
// 004b459a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004b459e  8bc7                 mov eax, edi
// 004b45a0  5f                   pop edi
// 004b45a1  64890d00000000       mov dword ptr fs:[0], ecx
// 004b45a8  5e                   pop esi
// 004b45a9  83c424               add esp, 0x24
// 004b45ac  c21c00               ret 0x1c

// from server: 97% by colin
// from server: 81% by king_originala
// roc 2008-06 004b44c0  unit: RBX::Network::VPeer::?$BoundFuncDesc  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b44c0
//
// 004b44c0  6aff                 push -1
// 004b44c2  6818887c00           push 0x7c8818
// 004b44c7  64a100000000         mov eax, dword ptr fs:[0]
// 004b44cd  50                   push eax
// 004b44ce  64892500000000       mov dword ptr fs:[0], esp
// 004b44d5  83ec18               sub esp, 0x18
// 004b44d8  56                   push esi
// 004b44d9  57                   push edi
// 004b44da  8bf9                 mov edi, ecx
// 004b44dc  8b442430             mov eax, dword ptr [esp + 0x30]
// 004b44e0  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004b44e4  8b542438             mov edx, dword ptr [esp + 0x38]
// 004b44e8  89442408             mov dword ptr [esp + 8], eax
// 004b44ec  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 004b44f0  89442414             mov dword ptr [esp + 0x14], eax
// 004b44f4  8b442440             mov eax, dword ptr [esp + 0x40]
// 004b44f8  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004b4500  894c240c             mov dword ptr [esp + 0xc], ecx
// 004b4504  89542410             mov dword ptr [esp + 0x10], edx
// 004b4508  89442418             mov dword ptr [esp + 0x18], eax
// 004b450c  85c0                 test eax, eax
// 004b450e  740c                 je 0x4b451c
// 004b4510  83c004               add eax, 4
// 004b4513  b901000000           mov ecx, 1
// 004b4518  f00fc108             lock xadd dword ptr [eax], ecx
// 004b451c  8d542408             lea edx, [esp + 8]
// 004b4520  52                   push edx
// 004b4521  8bcf                 mov ecx, edi
// 004b4523  c70700000000         mov dword ptr [edi], 0
// 004b4529  e842f0ffff           call 0x4b3570
// 004b452e  8b742418             mov esi, dword ptr [esp + 0x18]
// 004b4532  85f6                 test esi, esi
// 004b4534  742a                 je 0x4b4560
// 004b4536  8d4604               lea eax, [esi + 4]
// 004b4539  83c9ff               or ecx, 0xffffffff
// 004b453c  f00fc108             lock xadd dword ptr [eax], ecx
// 004b4540  751e                 jne 0x4b4560
// 004b4542  8b16                 mov edx, dword ptr [esi]
// 004b4544  8b4204               mov eax, dword ptr [edx + 4]
// 004b4547  8bce                 mov ecx, esi
// 004b4549  ffd0                 call eax
// 004b454b  8d4e08               lea ecx, [esi + 8]
// 004b454e  83caff               or edx, 0xffffffff
// 004b4551  f00fc111             lock xadd dword ptr [ecx], edx
// 004b4555  7509                 jne 0x4b4560
// 004b4557  8b06                 mov eax, dword ptr [esi]
// 004b4559  8b5008               mov edx, dword ptr [eax + 8]
// 004b455c  8bce                 mov ecx, esi
// 004b455e  ffd2                 call edx
// 004b4560  8b742440             mov esi, dword ptr [esp + 0x40]
// 004b4564  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004b456c  85f6                 test esi, esi
// 004b456e  742a                 je 0x4b459a
// 004b4570  8d4604               lea eax, [esi + 4]
// 004b4573  83c9ff               or ecx, 0xffffffff
// 004b4576  f00fc108             lock xadd dword ptr [eax], ecx
// 004b457a  751e                 jne 0x4b459a
// 004b457c  8b16                 mov edx, dword ptr [esi]
// 004b457e  8b4204               mov eax, dword ptr [edx + 4]
// 004b4581  8bce                 mov ecx, esi
// 004b4583  ffd0                 call eax
// 004b4585  8d4e08               lea ecx, [esi + 8]
// 004b4588  83caff               or edx, 0xffffffff
// 004b458b  f00fc111             lock xadd dword ptr [ecx], edx
// 004b458f  7509                 jne 0x4b459a
// 004b4591  8b06                 mov eax, dword ptr [esi]
// 004b4593  8b5008               mov edx, dword ptr [eax + 8]
// 004b4596  8bce                 mov ecx, esi
// 004b4598  ffd2                 call edx
// 004b459a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004b459e  8bc7                 mov eax, edi
// 004b45a0  5f                   pop edi
// 004b45a1  64890d00000000       mov dword ptr fs:[0], ecx
// 004b45a8  5e                   pop esi
// 004b45a9  83c424               add esp, 0x24
// 004b45ac  c21c00               ret 0x1c

extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
    void release();
};

inline void Control::release() {
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0) destroy();
    }
}

struct Payload
{
    unsigned int first;
    unsigned int second;
    unsigned int third;
    void* object;
    Control* control;
    unsigned int reserved;
};

struct Argument
{
    unsigned int first;
    unsigned int second;
    unsigned int third;
    void* object;
    Control* control;

    ~Argument();
};

inline Argument::~Argument()
{
    Control* p = control;
    if (p)
    {
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct S
{
    unsigned int tag;

    void func_004b3570(Payload*);
    S* func_004b44c0(Argument argument, unsigned int, unsigned int);
};

S* S::func_004b44c0(Argument argument, unsigned int, unsigned int)
{
    Payload value;
    value.first = argument.first;
    value.second = argument.second;
    value.third = argument.third;
    value.object = argument.object;
    value.control = argument.control;

    if (value.control)
        _InterlockedIncrement(&value.control->strong);

    tag = 0;
    func_004b3570(&value);

    if (value.control)
        value.control->release();

    return this;
}

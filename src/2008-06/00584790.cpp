// from server: 45% by colin
// from server: 44% by colin
// roc 2008-06 00584790  unit: G3D::VCoordinateFrame::?$TypedPropertyDescriptor  size: 421 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00584790
//
// 00584790  6aff                 push -1
// 00584792  68d6117d00           push 0x7d11d6
// 00584797  64a100000000         mov eax, dword ptr fs:[0]
// 0058479d  50                   push eax
// 0058479e  64892500000000       mov dword ptr fs:[0], esp
// 005847a5  51                   push ecx
// 005847a6  53                   push ebx
// 005847a7  55                   push ebp
// 005847a8  56                   push esi
// 005847a9  57                   push edi
// 005847aa  8bf1                 mov esi, ecx
// 005847ac  89742410             mov dword ptr [esp + 0x10], esi
// 005847b0  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005847b6  c706c40d8300         mov dword ptr [esi], 0x830dc4
// 005847bc  c74610b80d8300       mov dword ptr [esi + 0x10], 0x830db8
// 005847c3  c74614b00d8300       mov dword ptr [esi + 0x14], 0x830db0
// 005847ca  c74620a80d8300       mov dword ptr [esi + 0x20], 0x830da8
// 005847d1  c74624980d8300       mov dword ptr [esi + 0x24], 0x830d98
// 005847d8  c74644880d8300       mov dword ptr [esi + 0x44], 0x830d88
// 005847df  c74664780d8300       mov dword ptr [esi + 0x64], 0x830d78
// 005847e6  c78684000000680d8300 mov dword ptr [esi + 0x84], 0x830d68
// 005847f0  c786a4000000580d8300 mov dword ptr [esi + 0xa4], 0x830d58
// 005847fa  c786c4000000480d8300 mov dword ptr [esi + 0xc4], 0x830d48
// 00584804  c786300100003c0d8300 mov dword ptr [esi + 0x130], 0x830d3c
// 0058480e  c786a0010000240d8300 mov dword ptr [esi + 0x1a0], 0x830d24
// 00584818  8b4804               mov ecx, dword ptr [eax + 4]
// 0058481b  c7843134010000180d8300 mov dword ptr [ecx + esi + 0x134], 0x830d18
// 00584826  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0058482c  8b4208               mov eax, dword ptr [edx + 8]
// 0058482f  c7843034010000100d8300 mov dword ptr [eax + esi + 0x134], 0x830d10
// 0058483a  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 00584840  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00584843  8daea0010000         lea ebp, [esi + 0x1a0]
// 00584849  c7843234010000f40c8300 mov dword ptr [edx + esi + 0x134], 0x830cf4
// 00584854  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0058485a  8b4004               mov eax, dword ptr [eax + 4]
// 0058485d  8d88a8feffff         lea ecx, [eax - 0x158]
// 00584863  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 0058486a  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 00584870  8b4208               mov eax, dword ptr [edx + 8]
// 00584873  8d88a0feffff         lea ecx, [eax - 0x160]
// 00584879  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 00584880  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 00584886  8b420c               mov eax, dword ptr [edx + 0xc]
// 00584889  8d8898feffff         lea ecx, [eax - 0x168]
// 0058488f  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 00584896  8b86f8010000         mov eax, dword ptr [esi + 0x1f8]
// 0058489c  33db                 xor ebx, ebx
// 0058489e  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 005848a6  3bc3                 cmp eax, ebx
// 005848a8  7409                 je 0x5848b3
// 005848aa  50                   push eax
// 005848ab  e8cabd1100           call 0x6a067a
// 005848b0  83c404               add esp, 4
// 005848b3  8b86ec010000         mov eax, dword ptr [esi + 0x1ec]
// 005848b9  50                   push eax
// 005848ba  899ef8010000         mov dword ptr [esi + 0x1f8], ebx
// 005848c0  899efc010000         mov dword ptr [esi + 0x1fc], ebx
// 005848c6  899e00020000         mov dword ptr [esi + 0x200], ebx
// 005848cc  e8a9bd1100           call 0x6a067a
// 005848d1  8bbee8010000         mov edi, dword ptr [esi + 0x1e8]
// 005848d7  83c404               add esp, 4
// 005848da  3bfb                 cmp edi, ebx
// 005848dc  742a                 je 0x584908
// 005848de  8d5704               lea edx, [edi + 4]
// 005848e1  83c8ff               or eax, 0xffffffff
// 005848e4  f00fc102             lock xadd dword ptr [edx], eax
// 005848e8  751e                 jne 0x584908
// 005848ea  8b17                 mov edx, dword ptr [edi]
// 005848ec  8b4204               mov eax, dword ptr [edx + 4]
// 005848ef  8bcf                 mov ecx, edi
// 005848f1  ffd0                 call eax
// 005848f3  8d4f08               lea ecx, [edi + 8]
// 005848f6  83caff               or edx, 0xffffffff
// 005848f9  f00fc111             lock xadd dword ptr [ecx], edx
// 005848fd  7509                 jne 0x584908
// 005848ff  8b07                 mov eax, dword ptr [edi]
// 00584901  8b5008               mov edx, dword ptr [eax + 8]
// 00584904  8bcf                 mov ecx, edi
// 00584906  ffd2                 call edx
// 00584908  8bcd                 mov ecx, ebp
// 0058490a  885c241c             mov byte ptr [esp + 0x1c], bl
// 0058490e  e8fd8aefff           call 0x47d410
// 00584913  8bce                 mov ecx, esi
// 00584915  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0058491d  e88eecffff           call 0x5835b0
// 00584922  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00584926  5f                   pop edi
// 00584927  5e                   pop esi
// 00584928  5d                   pop ebp
// 00584929  5b                   pop ebx
// 0058492a  64890d00000000       mov dword ptr fs:[0], ecx
// 00584931  83c410               add esp, 0x10
// 00584934  c3                   ret 
#include <intrin.h>

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakRefCount;
    virtual void destroy();
    virtual void destroyWeak();
};

struct Sub {
    void* vptr;
};

struct Base {
    unsigned long words[77];
    int* table;
    void f();
    void cleanup();
};

void func_0047d410();

struct Target {
    char pad0[0x10];
    void* vptr10;
    char pad14[0x0c];
    void* vptr20;
    void* vptr24;
    char pad28[0x1c];
    void* vptr44;
    char pad48[0x1c];
    void* vptr64;
    char pad68[0x1c];
    void* vptr84;
    char pad88[0x1c];
    void* vptrA4;
    char padA8[0x1c];
    void* vptrC4;
    char padC8[0x68];
    void* vptr130;
    void* vptr134;
    char pad138[0x68];
    void* vptr1A0;
    char pad1A4[0x44];
    RefCounted* ref1E8;
    void* ptr1EC;
    char pad1F0[0x08];
    void* ptr1F8;
    void* ptr1FC;
    void* ptr200;

    void destroy();
};

void Target::destroy()
{
    vptr10 = (void*)0x830db8;
    _ReadWriteBarrier();
    vptr20 = (void*)0x830da8;
    vptr24 = (void*)0x830d98;
    vptr44 = (void*)0x830d88;
    vptr64 = (void*)0x830d78;
    vptr84 = (void*)0x830d68;
    vptrA4 = (void*)0x830d58;
    vptrC4 = (void*)0x830d48;
    vptr130 = (void*)0x830d3c;
    vptr1A0 = (void*)0x830d24;

    void** p134 = (void**)vptr134;
    void* a = p134[1];
    *(void**)((char*)a + (unsigned long)this + 0x134) = (void*)0x830d18;
    void* b = p134[2];
    *(void**)((char*)b + (unsigned long)this + 0x134) = (void*)0x830d10;
    void* c = p134[3];
    *(void**)((char*)c + (unsigned long)this + 0x134) = (void*)0x830cf4;

    void* a2 = p134[1];
    *(void**)((char*)a2 + (unsigned long)this + 0x130) = (char*)a2 - 0x158;
    void* b2 = p134[2];
    *(void**)((char*)b2 + (unsigned long)this + 0x130) = (char*)b2 - 0x160;
    void* c2 = p134[3];
    *(void**)((char*)c2 + (unsigned long)this + 0x130) = (char*)c2 - 0x168;

    if (ptr1F8) {
        ((Base*)ptr1F8)->cleanup();
    }
    ptr1F8 = 0;
    ptr1FC = 0;
    ptr200 = 0;
    ((Base*)ptr1EC)->cleanup();

    RefCounted* r = ref1E8;
    if (r) {
        if (_InterlockedExchangeAdd(&r->refCount, -1) == 1) {
            r->destroy();
            if (_InterlockedExchangeAdd(&r->weakRefCount, -1) == 1) {
                r->destroyWeak();
            }
        }
    }

    func_0047d410();
    ((Base*)this)->f();
}

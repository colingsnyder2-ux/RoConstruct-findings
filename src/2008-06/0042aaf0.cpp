// from server: 100% by colin
// roc 2008-06 0042aaf0  unit: boost::detail::H::?$sp_counted_impl_p  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042aaf0
//
// 0042aaf0  6aff                 push -1
// 0042aaf2  68abfd7b00           push 0x7bfdab
// 0042aaf7  64a100000000         mov eax, dword ptr fs:[0]
// 0042aafd  50                   push eax
// 0042aafe  64892500000000       mov dword ptr fs:[0], esp
// 0042ab05  51                   push ecx
// 0042ab06  53                   push ebx
// 0042ab07  55                   push ebp
// 0042ab08  8be9                 mov ebp, ecx
// 0042ab0a  56                   push esi
// 0042ab0b  8b742420             mov esi, dword ptr [esp + 0x20]
// 0042ab0f  8d5d04               lea ebx, [ebp + 4]
// 0042ab12  56                   push esi
// 0042ab13  8bcb                 mov ecx, ebx
// 0042ab15  896c2410             mov dword ptr [esp + 0x10], ebp
// 0042ab19  897500               mov dword ptr [ebp], esi
// 0042ab1c  e80ffbffff           call 0x42a630
// 0042ab21  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0042ab29  85f6                 test esi, esi
// 0042ab2b  7450                 je 0x42ab7d
// 0042ab2d  57                   push edi
// 0042ab2e  8d7e04               lea edi, [esi + 4]
// 0042ab31  85ff                 test edi, edi
// 0042ab33  7431                 je 0x42ab66
// 0042ab35  8937                 mov dword ptr [edi], esi
// 0042ab37  8b33                 mov esi, dword ptr [ebx]
// 0042ab39  85f6                 test esi, esi
// 0042ab3b  740c                 je 0x42ab49
// 0042ab3d  8d4608               lea eax, [esi + 8]
// 0042ab40  b901000000           mov ecx, 1
// 0042ab45  f00fc108             lock xadd dword ptr [eax], ecx
// 0042ab49  8b4f04               mov ecx, dword ptr [edi + 4]
// 0042ab4c  85c9                 test ecx, ecx
// 0042ab4e  7413                 je 0x42ab63
// 0042ab50  8d5108               lea edx, [ecx + 8]
// 0042ab53  83c8ff               or eax, 0xffffffff
// 0042ab56  f00fc102             lock xadd dword ptr [edx], eax
// 0042ab5a  7507                 jne 0x42ab63
// 0042ab5c  8b11                 mov edx, dword ptr [ecx]
// 0042ab5e  8b4208               mov eax, dword ptr [edx + 8]
// 0042ab61  ffd0                 call eax
// 0042ab63  897704               mov dword ptr [edi + 4], esi
// 0042ab66  5f                   pop edi
// 0042ab67  5e                   pop esi
// 0042ab68  8bc5                 mov eax, ebp
// 0042ab6a  5d                   pop ebp
// 0042ab6b  5b                   pop ebx
// 0042ab6c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042ab70  64890d00000000       mov dword ptr fs:[0], ecx
// 0042ab77  83c410               add esp, 0x10
// 0042ab7a  c20400               ret 4
// 0042ab7d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0042ab81  5e                   pop esi
// 0042ab82  8bc5                 mov eax, ebp
// 0042ab84  5d                   pop ebp
// 0042ab85  5b                   pop ebx
// 0042ab86  64890d00000000       mov dword ptr fs:[0], ecx
// 0042ab8d  83c410               add esp, 0x10
// 0042ab90  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)


struct Object;

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    long strong;
    long weak;
    Object* object;
};

struct Weak {
    Object* object;
    Control* control;
};

struct Object {
    virtual ~Object();
    Weak weak;
};

struct Count {
    Control* control;
    Count(Object*);
    ~Count();
};

struct S {
    Object* object;
    Count count;
    S(Object*);
};

S::S(Object* p) : object(p), count(p)
{
    if (p) {
        Weak* w = &p->weak;
        if (w) {
            w->object = p;
            Control* c = count.control;
            if (c)
                _InterlockedIncrement(&c->weak);

            Control* old = w->control;
            if (old && _InterlockedDecrement(&old->weak) == 0)
                old->destroy();

            w->control = c;
        }
    }
}

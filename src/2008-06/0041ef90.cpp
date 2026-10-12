// from server: 71% by king_originala
// roc 2008-06 0041ef90  unit: RBX::VSpecialShape::?$FactoryProduct::Creator  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041ef90
//
// 0041ef90  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0041ef93  83ec08               sub esp, 8
// 0041ef96  85c9                 test ecx, ecx
// 0041ef98  7407                 je 0x41efa1
// 0041ef9a  e81164ffff           call 0x4153b0
// 0041ef9f  eb02                 jmp 0x41efa3
// 0041efa1  33c0                 xor eax, eax
// 0041efa3  8b8854010000         mov ecx, dword ptr [eax + 0x154]
// 0041efa9  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0041efac  2b510c               sub edx, dword ptr [ecx + 0xc]
// 0041efaf  57                   push edi
// 0041efb0  83e2f8               and edx, 0xfffffff8
// 0041efb3  83fa08               cmp edx, 8
// 0041efb6  757f                 jne 0x41f037
// 0041efb8  56                   push esi
// 0041efb9  8d4c2408             lea ecx, [esp + 8]
// 0041efbd  51                   push ecx
// 0041efbe  8bc8                 mov ecx, eax
// 0041efc0  e85b4cffff           call 0x413c20
// 0041efc5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041efc9  8b38                 mov edi, dword ptr [eax]
// 0041efcb  85f6                 test esi, esi
// 0041efcd  742a                 je 0x41eff9
// 0041efcf  8d5604               lea edx, [esi + 4]
// 0041efd2  83c8ff               or eax, 0xffffffff
// 0041efd5  f00fc102             lock xadd dword ptr [edx], eax
// 0041efd9  751e                 jne 0x41eff9
// 0041efdb  8b16                 mov edx, dword ptr [esi]
// 0041efdd  8b4204               mov eax, dword ptr [edx + 4]
// 0041efe0  8bce                 mov ecx, esi
// 0041efe2  ffd0                 call eax
// 0041efe4  8d4e08               lea ecx, [esi + 8]
// 0041efe7  83caff               or edx, 0xffffffff
// 0041efea  f00fc111             lock xadd dword ptr [ecx], edx
// 0041efee  7509                 jne 0x41eff9
// 0041eff0  8b06                 mov eax, dword ptr [esi]
// 0041eff2  8b5008               mov edx, dword ptr [eax + 8]
// 0041eff5  8bce                 mov ecx, esi
// 0041eff7  ffd2                 call edx
// 0041eff9  6a00                 push 0
// 0041effb  6850dd9200           push 0x92dd50
// 0041f000  687c909200           push 0x92907c
// 0041f005  6a00                 push 0
// 0041f007  57                   push edi
// 0041f008  e8b9272800           call 0x6a17c6
// 0041f00d  83c414               add esp, 0x14
// 0041f010  5e                   pop esi
// 0041f011  85c0                 test eax, eax
// 0041f013  7407                 je 0x41f01c
// 0041f015  8bc7                 mov eax, edi
// 0041f017  5f                   pop edi
// 0041f018  83c408               add esp, 8
// 0041f01b  c3                   ret 
// 0041f01c  6a00                 push 0
// 0041f01e  6830dd9200           push 0x92dd30
// 0041f023  687c909200           push 0x92907c
// 0041f028  6a00                 push 0
// 0041f02a  57                   push edi
// 0041f02b  e896272800           call 0x6a17c6
// 0041f030  83c414               add esp, 0x14
// 0041f033  85c0                 test eax, eax
// 0041f035  75de                 jne 0x41f015
// 0041f037  33c0                 xor eax, eax
// 0041f039  5f                   pop edi
// 0041f03a  83c408               add esp, 8
// 0041f03d  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Instance;

struct Pair {
    Instance* object;
    Control* control;
};

struct Range {
    char padding[12];
    char* begin;
    char* end;
};

struct Instance {
    virtual void unused();
    char padding[0x150];
    Range* range;
    Pair* first(Pair*);
};

struct SpecialShape : Instance {};
struct PartInstance : Instance {};

struct Owner {
    Instance* resolve();
};

struct S {
    char padding[0x20];
    Owner* owner;
    Instance* f();
};

Instance* S::f()
{
    Instance* instance = owner ? owner->resolve() : 0;
    Range* range = instance->range;

    if ((static_cast<unsigned>(range->end - range->begin) & ~7u) == 8) {
        Instance* object;
        {
            Pair temporary;
            Pair* result = instance->first(&temporary);
            Control* control = temporary.control;
            object = result->object;

            if (control &&
                _InterlockedExchangeAdd(&control->strong, -1) == 1) {
                control->dispose();
                if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
                    control->destroy();
            }
        }

        if (dynamic_cast<SpecialShape*>(object))
            return object;
        if (dynamic_cast<PartInstance*>(object))
            return object;
    }

    return 0;
}

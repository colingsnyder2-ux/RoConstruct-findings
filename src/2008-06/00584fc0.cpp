// from server: 83% by colin
// from server: 81% by king_originala
// roc 2008-06 00584fc0  unit: RBX::ModelInstance  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00584fc0
//
// 00584fc0  83ec08               sub esp, 8
// 00584fc3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00584fc7  56                   push esi
// 00584fc8  6a00                 push 0
// 00584fca  6808699300           push 0x936908
// 00584fcf  687c909200           push 0x92907c
// 00584fd4  6a00                 push 0
// 00584fd6  50                   push eax
// 00584fd7  8bf1                 mov esi, ecx
// 00584fd9  e8e8c71100           call 0x6a17c6
// 00584fde  8bd0                 mov edx, eax
// 00584fe0  83c414               add esp, 0x14
// 00584fe3  89542410             mov dword ptr [esp + 0x10], edx
// 00584fe7  85d2                 test edx, edx
// 00584fe9  7459                 je 0x585044
// 00584feb  53                   push ebx
// 00584fec  8b9efc010000         mov ebx, dword ptr [esi + 0x1fc]
// 00584ff2  55                   push ebp
// 00584ff3  8b2d90288000         mov ebp, dword ptr [0x802890]
// 00584ff9  399ef8010000         cmp dword ptr [esi + 0x1f8], ebx
// 00584fff  57                   push edi
// 00585000  8dbeec010000         lea edi, [esi + 0x1ec]
// 00585006  7606                 jbe 0x58500e
// 00585008  ffd5                 call ebp
// 0058500a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0058500e  8b770c               mov esi, dword ptr [edi + 0xc]
// 00585011  3b7710               cmp esi, dword ptr [edi + 0x10]
// 00585014  7606                 jbe 0x58501c
// 00585016  ffd5                 call ebp
// 00585018  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0058501c  8b0f                 mov ecx, dword ptr [edi]
// 0058501e  89742414             mov dword ptr [esp + 0x14], esi
// 00585022  8bc6                 mov eax, esi
// 00585024  3bf3                 cmp esi, ebx
// 00585026  740b                 je 0x585033
// 00585028  3910                 cmp dword ptr [eax], edx
// 0058502a  7407                 je 0x585033
// 0058502c  83c004               add eax, 4
// 0058502f  3bc3                 cmp eax, ebx
// 00585031  75f5                 jne 0x585028
// 00585033  50                   push eax
// 00585034  51                   push ecx
// 00585035  8d4c2418             lea ecx, [esp + 0x18]
// 00585039  51                   push ecx
// 0058503a  8bcf                 mov ecx, edi
// 0058503c  e8ef47edff           call 0x459830
// 00585041  5f                   pop edi
// 00585042  5d                   pop ebp
// 00585043  5b                   pop ebx
// 00585044  5e                   pop esi
// 00585045  83c408               add esp, 8
// 00585048  c20400               ret 4
#include <intrin.h>

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern unsigned char instanceType;
extern unsigned char modifierType;
extern void (__cdecl *invalidParameter)();

struct Iterator {
    void* owner;
    void** position;
};

struct ModifierVector {
    void* owner;
    unsigned char reserved[8];
    void** first;
    void** last;
    void** limit;

    Iterator erase(Iterator position);
};

inline Iterator findModifier(Iterator first, Iterator last, void* const& value)
{
    while (first.position != last.position && *first.position != value)
        ++first.position;
    return first;
}

struct ModelInstance {
    unsigned char reserved[0x1ec];
    ModifierVector modifiers;

    void removeModifier(void* instance);
};

void ModelInstance::removeModifier(void* instance)
{
    instance = __RTDynamicCast(instance, 0, &instanceType, &modifierType, 0);

    if (instance) {
        void** last = modifiers.last;
        _ReadWriteBarrier();
        void (__cdecl *invalid)() = invalidParameter;
        ModifierVector* vector = &modifiers;

        if (vector->first > last)
            invalid();

        Iterator end;
        end.owner = vector->owner;
        end.position = last;

        void** first = vector->first;
        if (first > vector->last)
            invalid();

        Iterator begin;
        begin.owner = vector->owner;
        begin.position = first;

        vector->erase(findModifier(begin, end, instance));
    }
}

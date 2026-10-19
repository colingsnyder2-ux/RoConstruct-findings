// from server: 71% by colin
// from server: 69% by king_originala
// roc 2008-06 005acd70  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005acd70
//
// 005acd70  83ec0c               sub esp, 0xc
// 005acd73  53                   push ebx
// 005acd74  55                   push ebp
// 005acd75  8b2d90288000         mov ebp, dword ptr [0x802890]
// 005acd7b  56                   push esi
// 005acd7c  8bf1                 mov esi, ecx
// 005acd7e  33db                 xor ebx, ebx
// 005acd80  57                   push edi
// 005acd81  8b4610               mov eax, dword ptr [esi + 0x10]
// 005acd84  2b460c               sub eax, dword ptr [esi + 0xc]
// 005acd87  8b15e46b9700         mov edx, dword ptr [0x976be4]
// 005acd8d  c1f802               sar eax, 2
// 005acd90  f6c201               test dl, 1
// 005acd93  7520                 jne 0x5acdb5
// 005acd95  8b3d801a9700         mov edi, dword ptr [0x971a80]
// 005acd9b  83ca01               or edx, 1
// 005acd9e  8bcf                 mov ecx, edi
// 005acda0  47                   inc edi
// 005acda1  8915e46b9700         mov dword ptr [0x976be4], edx
// 005acda7  890de06b9700         mov dword ptr [0x976be0], ecx
// 005acdad  893d801a9700         mov dword ptr [0x971a80], edi
// 005acdb3  eb06                 jmp 0x5acdbb
// 005acdb5  8b0de06b9700         mov ecx, dword ptr [0x976be0]
// 005acdbb  3bc1                 cmp eax, ecx
// 005acdbd  774f                 ja 0x5ace0e
// 005acdbf  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005acdc2  895c2410             mov dword ptr [esp + 0x10], ebx
// 005acdc6  3bcb                 cmp ecx, ebx
// 005acdc8  7504                 jne 0x5acdce
// 005acdca  33c0                 xor eax, eax
// 005acdcc  eb08                 jmp 0x5acdd6
// 005acdce  8b4614               mov eax, dword ptr [esi + 0x14]
// 005acdd1  2bc1                 sub eax, ecx
// 005acdd3  c1f802               sar eax, 2
// 005acdd6  8b7e10               mov edi, dword ptr [esi + 0x10]
// 005acdd9  8bd7                 mov edx, edi
// 005acddb  2bd1                 sub edx, ecx
// 005acddd  c1fa02               sar edx, 2
// 005acde0  3bd0                 cmp edx, eax
// 005acde2  730a                 jae 0x5acdee
// 005acde4  891f                 mov dword ptr [edi], ebx
// 005acde6  83c704               add edi, 4
// 005acde9  897e10               mov dword ptr [esi + 0x10], edi
// 005acdec  eb93                 jmp 0x5acd81
// 005acdee  3bcf                 cmp ecx, edi
// 005acdf0  7602                 jbe 0x5acdf4
// 005acdf2  ffd5                 call ebp
// 005acdf4  8b06                 mov eax, dword ptr [esi]
// 005acdf6  8d4c2410             lea ecx, [esp + 0x10]
// 005acdfa  51                   push ecx
// 005acdfb  57                   push edi
// 005acdfc  50                   push eax
// 005acdfd  8d542420             lea edx, [esp + 0x20]
// 005ace01  52                   push edx
// 005ace02  8bce                 mov ecx, esi
// 005ace04  e857aef1ff           call 0x4c7c60
// 005ace09  e973ffffff           jmp 0x5acd81
// 005ace0e  f6c201               test dl, 1
// 005ace11  751c                 jne 0x5ace2f
// 005ace13  a1801a9700           mov eax, dword ptr [0x971a80]
// 005ace18  83ca01               or edx, 1
// 005ace1b  8bc8                 mov ecx, eax
// 005ace1d  40                   inc eax
// 005ace1e  8915e46b9700         mov dword ptr [0x976be4], edx
// 005ace24  890de06b9700         mov dword ptr [0x976be0], ecx
// 005ace2a  a3801a9700           mov dword ptr [0x971a80], eax
// 005ace2f  8b4610               mov eax, dword ptr [esi + 0x10]
// 005ace32  2b460c               sub eax, dword ptr [esi + 0xc]
// 005ace35  8bf9                 mov edi, ecx
// 005ace37  c1f802               sar eax, 2
// 005ace3a  3bc8                 cmp ecx, eax
// 005ace3c  7202                 jb 0x5ace40
// 005ace3e  ffd5                 call ebp
// 005ace40  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005ace43  8d34b9               lea esi, [ecx + edi*4]
// 005ace46  5f                   pop edi
// 005ace47  391e                 cmp dword ptr [esi], ebx
// 005ace49  752a                 jne 0x5ace75
// 005ace4b  6a0c                 push 0xc
// 005ace4d  e8ce3a0f00           call 0x6a0920
// 005ace52  83c404               add esp, 4
// 005ace55  3bc3                 cmp eax, ebx
// 005ace57  7418                 je 0x5ace71
// 005ace59  c70050458300         mov dword ptr [eax], 0x834550
// 005ace5f  895804               mov dword ptr [eax + 4], ebx
// 005ace62  895808               mov dword ptr [eax + 8], ebx
// 005ace65  8906                 mov dword ptr [esi], eax
// 005ace67  5e                   pop esi
// 005ace68  5d                   pop ebp
// 005ace69  83c004               add eax, 4
// 005ace6c  5b                   pop ebx
// 005ace6d  83c40c               add esp, 0xc
// 005ace70  c3                   ret 
// 005ace71  33c0                 xor eax, eax
// 005ace73  8906                 mov dword ptr [esi], eax
// 005ace75  8b06                 mov eax, dword ptr [esi]
// 005ace77  5e                   pop esi
// 005ace78  5d                   pop ebp
// 005ace79  83c004               add eax, 4
// 005ace7c  5b                   pop ebx
// 005ace7d  83c40c               add esp, 0xc
// 005ace80  c3                   ret 
#include <intrin.h>

extern unsigned int counter;
extern unsigned int index_value;
extern unsigned int index_guard;
extern void *holder_vtable[];
extern "C" void (__cdecl *_invalid_parameter_noinfo)();
void *__cdecl operator new(unsigned int);

struct Holder {
    void **vtable;
    unsigned int first;
    unsigned int second;
};

struct Iterator {
    void *owner;
    Holder **position;
};

struct S {
    void *owner;
    unsigned int reserved[2];
    Holder **begin;
    Holder **end;
    Holder **limit;

    Iterator insert(Iterator position, Holder *const &value);
    unsigned int *f();
};

unsigned int *S::f()
{
    void (__cdecl *invalid)() = _invalid_parameter_noinfo;

    for (;;) {
        unsigned int size = static_cast<unsigned int>(end - begin);
        if (!(index_guard & 1)) {
            index_guard |= 1;
            _ReadWriteBarrier();
            index_value = counter++;
        }
        if (size > index_value)
            break;

        Holder *value = 0;
        unsigned int capacity;
        if (!begin)
            capacity = 0;
        else
            capacity = static_cast<unsigned int>(limit - begin);

        Holder **position = end;
        if (static_cast<unsigned int>(position - begin) < capacity) {
            *position = value;
            end = position + 1;
        } else {
            if (begin > position)
                invalid();
            Iterator where;
            where.owner = owner;
            where.position = position;
            insert(where, value);
        }
    }

    if (!(index_guard & 1)) {
        index_guard |= 1;
        index_value = counter++;
    }

    unsigned int index = index_value;
    if (index >= static_cast<unsigned int>(end - begin))
        invalid();

    Holder **slot = begin + index;
    if (!*slot) {
        Holder *value = new Holder;
        if (value) {
            value->vtable = holder_vtable;
            value->first = 0;
            value->second = 0;
            *slot = value;
            return &value->first;
        }
        *slot = 0;
    }
    return &(*slot)->first;
}

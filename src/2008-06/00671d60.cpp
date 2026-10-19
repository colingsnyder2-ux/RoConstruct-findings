// from server: 71% by colin
// from server: 69% by king_originala
// roc 2008-06 00671d60  unit: RBX::AdornRbxGfx  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00671d60
//
// 00671d60  6aff                 push -1
// 00671d62  683bf47b00           push 0x7bf43b
// 00671d67  64a100000000         mov eax, dword ptr fs:[0]
// 00671d6d  50                   push eax
// 00671d6e  64892500000000       mov dword ptr fs:[0], esp
// 00671d75  51                   push ecx
// 00671d76  56                   push esi
// 00671d77  8bf1                 mov esi, ecx
// 00671d79  8b4658               mov eax, dword ptr [esi + 0x58]
// 00671d7c  2b4654               sub eax, dword ptr [esi + 0x54]
// 00671d7f  57                   push edi
// 00671d80  a9fcffffff           test eax, 0xfffffffc
// 00671d85  743e                 je 0x671dc5
// 00671d87  8b7e58               mov edi, dword ptr [esi + 0x58]
// 00671d8a  2b7e54               sub edi, dword ptr [esi + 0x54]
// 00671d8d  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00671d90  2b4e54               sub ecx, dword ptr [esi + 0x54]
// 00671d93  c1ff02               sar edi, 2
// 00671d96  4f                   dec edi
// 00671d97  c1f902               sar ecx, 2
// 00671d9a  3bf9                 cmp edi, ecx
// 00671d9c  7206                 jb 0x671da4
// 00671d9e  ff1590288000         call dword ptr [0x802890]
// 00671da4  8b4658               mov eax, dword ptr [esi + 0x58]
// 00671da7  8b5654               mov edx, dword ptr [esi + 0x54]
// 00671daa  8b3cba               mov edi, dword ptr [edx + edi*4]
// 00671dad  8bc8                 mov ecx, eax
// 00671daf  2bca                 sub ecx, edx
// 00671db1  897c2408             mov dword ptr [esp + 8], edi
// 00671db5  f7c1fcffffff         test ecx, 0xfffffffc
// 00671dbb  743f                 je 0x671dfc
// 00671dbd  83c0fc               add eax, -4
// 00671dc0  894658               mov dword ptr [esi + 0x58], eax
// 00671dc3  eb37                 jmp 0x671dfc
// 00671dc5  685c010000           push 0x15c
// 00671dca  e851eb0200           call 0x6a0920
// 00671dcf  83c404               add esp, 4
// 00671dd2  89442408             mov dword ptr [esp + 8], eax
// 00671dd6  33ff                 xor edi, edi
// 00671dd8  897c2414             mov dword ptr [esp + 0x14], edi
// 00671ddc  3bc7                 cmp eax, edi
// 00671dde  7410                 je 0x671df0
// 00671de0  8b8e98000000         mov ecx, dword ptr [esi + 0x98]
// 00671de6  51                   push ecx
// 00671de7  8bc8                 mov ecx, eax
// 00671de9  e872380100           call 0x685660
// 00671dee  8bf8                 mov edi, eax
// 00671df0  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00671df8  897c2408             mov dword ptr [esp + 8], edi
// 00671dfc  8d542408             lea edx, [esp + 8]
// 00671e00  52                   push edx
// 00671e01  8d4e60               lea ecx, [esi + 0x60]
// 00671e04  e897f5daff           call 0x4213a0
// 00671e09  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00671e0d  8bc7                 mov eax, edi
// 00671e0f  5f                   pop edi
// 00671e10  5e                   pop esi
// 00671e11  64890d00000000       mov dword ptr fs:[0], ecx
// 00671e18  83c410               add esp, 0x10
// 00671e1b  c3                   ret 
#include <intrin.h>

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);
extern "C" void (__cdecl* invalid_parameter)();

struct Object {
    char storage[0x15c];
    Object(void* context);
};

struct Collection {
    char storage[0x38];
    void push_back(Object* const& value);
};

struct S {
    char padding[0x54];
    Object** first;
    Object** last;
    Object** limit;
    Collection active;
    void* context;

    unsigned int size() const;
    Object* acquire();
};

inline unsigned int S::size() const
{
    Object** end = *(Object** const volatile*)&last;
    Object** begin = *(Object** const volatile*)&first;
    return (unsigned int)(end - begin);
}

Object* S::acquire()
{
    Object* value;
    if (size() != 0) {
        unsigned int index = size() - 1;
        if (index >= size())
            invalid_parameter();
        value = first[index];
        if ((unsigned int)(last - first) != 0)
            --last;
    } else {
        value = new Object(context);
    }

    Object* copy = value;
    _ReadWriteBarrier();
    active.push_back(copy);
    return value;
}

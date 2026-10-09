// from server: 20% by colin
// roc 2007-08 00727c80  unit: boost::thread_resource_error  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00727c80
//
// 00727c80  6aff                 push -1
// 00727c82  682bb97600           push 0x76b92b
// 00727c87  64a100000000         mov eax, dword ptr fs:[0]
// 00727c8d  50                   push eax
// 00727c8e  51                   push ecx
// 00727c8f  56                   push esi
// 00727c90  a188518b00           mov eax, dword ptr [0x8b5188]
// 00727c95  33c4                 xor eax, esp
// 00727c97  50                   push eax
// 00727c98  8d44240c             lea eax, [esp + 0xc]
// 00727c9c  64a300000000         mov dword ptr fs:[0], eax
// 00727ca2  8bf1                 mov esi, ecx
// 00727ca4  89742408             mov dword ptr [esp + 8], esi
// 00727ca8  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00727cab  804e0402             or byte ptr [esi + 4], 2
// 00727caf  85c9                 test ecx, ecx
// 00727cb1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00727cb9  7408                 je 0x727cc3
// 00727cbb  8b01                 mov eax, dword ptr [ecx]
// 00727cbd  8b10                 mov edx, dword ptr [eax]
// 00727cbf  6a01                 push 1
// 00727cc1  ffd2                 call edx
// 00727cc3  8d4e08               lea ecx, [esi + 8]
// 00727cc6  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00727cce  e80dffffff           call 0x727be0
// 00727cd3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00727cd7  64890d00000000       mov dword ptr fs:[0], ecx
// 00727cde  59                   pop ecx
// 00727cdf  5e                   pop esi
// 00727ce0  83c410               add esp, 0x10
// 00727ce3  c3                   ret 

struct ThreadResourceError {
    char pad0[4];
    unsigned char flags;
    char pad5[3];
    char pad8[0x28];
    void* obj30;
    void destroy();
};

void ThreadResourceError::destroy()
{
    if (obj30) {
        void** vt = *(void***)obj30;
        void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
        fn(obj30, 1);
    }
    obj30 = 0;
    *(unsigned char*)((char*)this + 4) |= 2;
    *(int*)((char*)this + 0x30) = 0;
}

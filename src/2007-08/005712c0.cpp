// from server: 42% by colin
// roc 2007-08 005712c0  unit: RBX::Reflection::ClassDescriptor  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005712c0
//
// 005712c0  6aff                 push -1
// 005712c2  68684e7500           push 0x754e68
// 005712c7  64a100000000         mov eax, dword ptr fs:[0]
// 005712cd  50                   push eax
// 005712ce  64892500000000       mov dword ptr fs:[0], esp
// 005712d5  51                   push ecx
// 005712d6  56                   push esi
// 005712d7  8bf1                 mov esi, ecx
// 005712d9  89742404             mov dword ptr [esp + 4], esi
// 005712dd  8d4e0c               lea ecx, [esi + 0xc]
// 005712e0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005712e8  ff15ace67700         call dword ptr [0x77e6ac]
// 005712ee  833e00               cmp dword ptr [esi], 0
// 005712f1  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005712f9  7410                 je 0x57130b
// 005712fb  8b4604               mov eax, dword ptr [esi + 4]
// 005712fe  8b0e                 mov ecx, dword ptr [esi]
// 00571300  6a01                 push 1
// 00571302  50                   push eax
// 00571303  ffd1                 call ecx
// 00571305  83c408               add esp, 8
// 00571308  894604               mov dword ptr [esi + 4], eax
// 0057130b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057130f  c7460800000000       mov dword ptr [esi + 8], 0
// 00571316  c70600000000         mov dword ptr [esi], 0
// 0057131c  5e                   pop esi
// 0057131d  64890d00000000       mov dword ptr fs:[0], ecx
// 00571324  83c410               add esp, 0x10
// 00571327  c3                   ret 

struct Descriptor {
    int* isReplicable;
    int* isOutdated;
    void* stringField;
    void dtor();
};

extern "C" void __stdcall sub_77E6AC();
extern "C" void __stdcall sub_754E68();

void Descriptor::dtor()
{
    sub_77E6AC();
    if (isReplicable) {
        int* p = isReplicable;
        int* q = isOutdated;
        int (*fn)(int*, int) = (int (*)(int*, int))p;
        fn(q, 1);
        isOutdated = (int*)fn;
    }
    isOutdated = 0;
    isReplicable = 0;
}

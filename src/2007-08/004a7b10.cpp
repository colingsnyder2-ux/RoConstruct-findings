// from server: 96% by colin
// roc 2007-08 004a7b10  unit: RBX::Network::Replicator::ChangePropertyItem  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a7b10
//
// 004a7b10  6a18                 push 0x18
// 004a7b12  e8df831800           call 0x62fef6
// 004a7b17  83c404               add esp, 4
// 004a7b1a  85c0                 test eax, eax
// 004a7b1c  743e                 je 0x4a7b5c
// 004a7b1e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a7b22  8b542408             mov edx, dword ptr [esp + 8]
// 004a7b26  8908                 mov dword ptr [eax], ecx
// 004a7b28  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a7b2c  894808               mov dword ptr [eax + 8], ecx
// 004a7b2f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a7b33  895004               mov dword ptr [eax + 4], edx
// 004a7b36  8b11                 mov edx, dword ptr [ecx]
// 004a7b38  89500c               mov dword ptr [eax + 0xc], edx
// 004a7b3b  8b4904               mov ecx, dword ptr [ecx + 4]
// 004a7b3e  85c9                 test ecx, ecx
// 004a7b40  894810               mov dword ptr [eax + 0x10], ecx
// 004a7b43  740c                 je 0x4a7b51
// 004a7b45  83c108               add ecx, 8
// 004a7b48  ba01000000           mov edx, 1
// 004a7b4d  f00fc111             lock xadd dword ptr [ecx], edx
// 004a7b51  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 004a7b55  884814               mov byte ptr [eax + 0x14], cl
// 004a7b58  c6401500             mov byte ptr [eax + 0x15], 0
// 004a7b5c  c21400               ret 0x14

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ChangePropertyItem {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    char field14;
    char field15;
};

extern "C" void* __cdecl operator_new(unsigned int);

ChangePropertyItem* __stdcall MakeChangePropertyItem(int a, int b, int c, int* d, char e)
{
    ChangePropertyItem* p = (ChangePropertyItem*)operator_new(0x18);
    if (p != 0) {
        p->field0 = a;
        p->field4 = b;
        p->field8 = c;
        p->fieldC = d[0];
        int ref = d[1];
        p->field10 = ref;
        if (ref != 0) {
            _InterlockedExchangeAdd((volatile long*)(ref + 8), 1);
        }
        p->field14 = e;
        p->field15 = 0;
    }
    return p;
}

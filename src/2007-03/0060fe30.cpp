// roc 2007-03 0060fe30  unit: seg_00600000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0060fe30
//
// 0060fe30  56                   push esi
// 0060fe31  57                   push edi
// 0060fe32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0060fe36  8b4728               mov eax, dword ptr [edi + 0x28]
// 0060fe39  85c0                 test eax, eax
// 0060fe3b  8bf1                 mov esi, ecx
// 0060fe3d  7410                 je 0x60fe4f
// 0060fe3f  90                   nop 
// 0060fe40  50                   push eax
// 0060fe41  8bce                 mov ecx, esi
// 0060fe43  e898fdffff           call 0x60fbe0
// 0060fe48  8b4728               mov eax, dword ptr [edi + 0x28]
// 0060fe4b  85c0                 test eax, eax
// 0060fe4d  75f1                 jne 0x60fe40
// 0060fe4f  5f                   pop edi
// 0060fe50  5e                   pop esi
// 0060fe51  c20400               ret 4
// copied from an identical function in another client (function ?func@VMotorFeature@ns_ROCX00001a@@QAEXPAX@Z)

namespace ns_ROCX00001a {
struct VMotorFeature {
    void removeAll();
    void sub_5de6c0(void*);
    void func(void*);
};

void VMotorFeature::func(void* a) {
    void* p = *(void**)((char*)a + 0x28);
    if (p != 0) {
        do {
            sub_5de6c0(p);
            p = *(void**)((char*)a + 0x28);
        } while (p != 0);
    }
}
}

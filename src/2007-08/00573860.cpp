// from server: 49% by colin
// roc 2007-08 00573860  unit: RBX::PartInstance  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573860
//
// 00573860  83ec08               sub esp, 8
// 00573863  85c9                 test ecx, ecx
// 00573865  7405                 je 0x57386c
// 00573867  8d4104               lea eax, [ecx + 4]
// 0057386a  eb02                 jmp 0x57386e
// 0057386c  33c0                 xor eax, eax
// 0057386e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00573872  89442404             mov dword ptr [esp + 4], eax
// 00573876  8d0424               lea eax, [esp]
// 00573879  50                   push eax
// 0057387a  c744240458298c00     mov dword ptr [esp + 4], 0x8c2958
// 00573882  e8f90fffff           call 0x564880
// 00573887  83c408               add esp, 8
// 0057388a  c20400               ret 4

struct PartInstance;

struct DescribedBase {
    void constructFrom(PartInstance* p);
};

struct PartInstance {
    char pad[4];
    DescribedBase base;
};

struct Helper {
    void* field0;
    void* field4;
};

extern "C" void __stdcall sub_564880(Helper* h, PartInstance* p);

struct PartInstanceCtor {
    void construct(PartInstance* p);
};

void PartInstanceCtor::construct(PartInstance* p) {
    Helper h;
    h.field0 = 0;
    h.field4 = (void*)0x8c2958;
    sub_564880(&h, p);
}

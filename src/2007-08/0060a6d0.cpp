// from server: 26% by colin
// roc 2007-08 0060a6d0  unit: RBX::MultiJoint  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060a6d0
//
// 0060a6d0  6aff                 push -1
// 0060a6d2  68188b7500           push 0x758b18
// 0060a6d7  64a100000000         mov eax, dword ptr fs:[0]
// 0060a6dd  50                   push eax
// 0060a6de  64892500000000       mov dword ptr fs:[0], esp
// 0060a6e5  51                   push ecx
// 0060a6e6  56                   push esi
// 0060a6e7  8bf1                 mov esi, ecx
// 0060a6e9  89742404             mov dword ptr [esp + 4], esi
// 0060a6ed  c70604617b00         mov dword ptr [esi], 0x7b6104
// 0060a6f3  8d4e18               lea ecx, [esi + 0x18]
// 0060a6f6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0060a6fe  e8dd57f3ff           call 0x53fee0
// 0060a703  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060a707  c706a85e7b00         mov dword ptr [esi], 0x7b5ea8
// 0060a70d  5e                   pop esi
// 0060a70e  64890d00000000       mov dword ptr fs:[0], ecx
// 0060a715  83c410               add esp, 0x10
// 0060a718  c3                   ret 

struct Joint {
    void* vtable;
    void construct();
};

struct MultiJoint : Joint {
    int numConnector;
    void* point[8];
    void construct();
};

void __stdcall sub_53FEE0(void*);

void MultiJoint::construct() {
    this->vtable = (void*)0x7b6104;
    sub_53FEE0((char*)this + 0x18);
    this->vtable = (void*)0x7b5ea8;
}

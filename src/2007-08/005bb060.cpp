// from server: 60% by colin
// roc 2007-08 005bb060  unit: RBX::VModelInstance::?$FactoryProduct  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bb060
//
// 005bb060  6a00                 push 0
// 005bb062  b001                 mov al, 1
// 005bb064  88812c010000         mov byte ptr [ecx + 0x12c], al
// 005bb06a  68c08f8900           push 0x898fc0
// 005bb06f  8881f9000000         mov byte ptr [ecx + 0xf9], al
// 005bb075  684c1f8800           push 0x881f4c
// 005bb07a  888111010000         mov byte ptr [ecx + 0x111], al
// 005bb080  8b81bc000000         mov eax, dword ptr [ecx + 0xbc]
// 005bb086  6a00                 push 0
// 005bb088  50                   push eax
// 005bb089  e8a85c0700           call 0x630d36
// 005bb08e  83c414               add esp, 0x14
// 005bb091  85c0                 test eax, eax
// 005bb093  7409                 je 0x5bb09e
// 005bb095  8b10                 mov edx, dword ptr [eax]
// 005bb097  8bc8                 mov ecx, eax
// 005bb099  8b424c               mov eax, dword ptr [edx + 0x4c]
// 005bb09c  ffe0                 jmp eax
// 005bb09e  c3                   ret 

struct RBX_Instance {
    char pad[0xbc];
    void* field_bc;
    char pad2[0xf9 - 0xc0];
    unsigned char field_f9;
    char pad3[0x111 - 0xfa];
    unsigned char field_111;
    char pad4[0x12c - 0x112];
    unsigned char field_12c;
};

extern "C" void* __cdecl sub_00630d36(void*, void*, int, void*, int);

void RBX_Instance_005bb060(RBX_Instance* self)
{
    self->field_12c = 1;
    self->field_f9 = 1;
    self->field_111 = 1;
    void* p = sub_00630d36(self->field_bc, (void*)0x881f4c, 0, (void*)0x898fc0, 0);
    if (p) {
        void** vt = *(void***)p;
        void (*fn)(void*) = (void (*)(void*))vt[0x4c / 4];
        fn(p);
    }
}

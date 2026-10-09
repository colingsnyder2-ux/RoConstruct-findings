// from server: 100% by colin
// roc 2007-08 005da000  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005da000
//
// 005da000  8b442404             mov eax, dword ptr [esp + 4]
// 005da004  56                   push esi
// 005da005  50                   push eax
// 005da006  8bf1                 mov esi, ecx
// 005da008  e8336efdff           call 0x5b0e40
// 005da00d  c706dcbf7b00         mov dword ptr [esi], 0x7bbfdc
// 005da013  c74604d4bf7b00       mov dword ptr [esi + 4], 0x7bbfd4
// 005da01a  c74610ccbf7b00       mov dword ptr [esi + 0x10], 0x7bbfcc
// 005da021  c74614bcbf7b00       mov dword ptr [esi + 0x14], 0x7bbfbc
// 005da028  c7462cacbf7b00       mov dword ptr [esi + 0x2c], 0x7bbfac
// 005da02f  c746449cbf7b00       mov dword ptr [esi + 0x44], 0x7bbf9c
// 005da036  c7465c8cbf7b00       mov dword ptr [esi + 0x5c], 0x7bbf8c
// 005da03d  c746747cbf7b00       mov dword ptr [esi + 0x74], 0x7bbf7c
// 005da044  c7868c0000006cbf7b00 mov dword ptr [esi + 0x8c], 0x7bbf6c
// 005da04e  c786e800000054bf7b00 mov dword ptr [esi + 0xe8], 0x7bbf54
// 005da058  8bc6                 mov eax, esi
// 005da05a  5e                   pop esi
// 005da05b  c20400               ret 4

struct Base {
    void construct(int);
};

struct FactoryProduct : Base {
    char pad0[0x10];
    void* vtable_10;
    void* vtable_14;
    char pad1[0x14];
    void* vtable_2c;
    char pad2[0x14];
    void* vtable_44;
    char pad3[0x14];
    void* vtable_5c;
    char pad4[0x14];
    void* vtable_74;
    char pad5[0x14];
    void* vtable_8c;
    char pad6[0x58];
    void* vtable_e8;
    FactoryProduct(int);
};

FactoryProduct::FactoryProduct(int arg) {
    Base::construct(arg);
    *(void**)((char*)this + 0) = (void*)0x7bbfdc;
    *(void**)((char*)this + 4) = (void*)0x7bbfd4;
    vtable_10 = (void*)0x7bbfcc;
    vtable_14 = (void*)0x7bbfbc;
    vtable_2c = (void*)0x7bbfac;
    vtable_44 = (void*)0x7bbf9c;
    vtable_5c = (void*)0x7bbf8c;
    vtable_74 = (void*)0x7bbf7c;
    vtable_8c = (void*)0x7bbf6c;
    vtable_e8 = (void*)0x7bbf54;
}

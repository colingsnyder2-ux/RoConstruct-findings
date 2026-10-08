// from server: 57% by colin
// roc 2007-08 00578250  unit: RBX::VPartInstance::?$FactoryProduct  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00578250
//
// 00578250  8b442404             mov eax, dword ptr [esp + 4]
// 00578254  56                   push esi
// 00578255  8bf1                 mov esi, ecx
// 00578257  8b8ed8010000         mov ecx, dword ptr [esi + 0x1d8]
// 0057825d  3a4170               cmp al, byte ptr [ecx + 0x70]
// 00578260  7412                 je 0x578274
// 00578262  50                   push eax
// 00578263  e8a8d30300           call 0x5b5610
// 00578268  68d8278c00           push 0x8c27d8
// 0057826d  8bce                 mov ecx, esi
// 0057826f  e89cc4ecff           call 0x444710
// 00578274  5e                   pop esi
// 00578275  c20400               ret 4

struct VPartInstance {
    char pad[0x1d8];
    void* field_1d8;
    void setSomething(unsigned char value);
};

extern "C" void __stdcall sub_5B5610(unsigned char value);
extern "C" void __stdcall sub_444710(void* ptr);

void VPartInstance::setSomething(unsigned char value) {
    if (*(unsigned char*)((char*)field_1d8 + 0x70) != value) {
        sub_5B5610(value);
        sub_444710((void*)0x8c27d8);
    }
}

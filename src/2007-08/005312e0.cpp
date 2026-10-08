// from server: 95% by colin
// roc 2007-08 005312e0  unit: RBX::ModelInstance  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005312e0
//
// 005312e0  56                   push esi
// 005312e1  8bf1                 mov esi, ecx
// 005312e3  e8f8f5ffff           call 0x5308e0
// 005312e8  f644240801           test byte ptr [esp + 8], 1
// 005312ed  8b8640020000         mov eax, dword ptr [esi + 0x240]
// 005312f3  c7863c020000ac4c7a00 mov dword ptr [esi + 0x23c], 0x7a4cac
// 005312fd  8b4804               mov ecx, dword ptr [eax + 4]
// 00531300  c7843140020000a44c7a00 mov dword ptr [ecx + esi + 0x240], 0x7a4ca4
// 0053130b  740a                 je 0x531317
// 0053130d  56                   push esi
// 0053130e  ff15c4e67700         call dword ptr [0x77e6c4]
// 00531314  83c404               add esp, 4
// 00531317  8bc6                 mov eax, esi
// 00531319  5e                   pop esi
// 0053131a  c20400               ret 4

struct ModelInstance {
    char pad[0x23c];
    int field_23c;
    int field_240;
    void sub_005308E0();
    ModelInstance* sub_005312E0(int);
};

extern "C" void __cdecl free(void*);

ModelInstance* ModelInstance::sub_005312E0(int a)
{
    sub_005308E0();
    int* p = (int*)field_240;
    field_23c = 0x7a4cac;
    int v = p[1];
    *(int*)(v + (int)this + 0x240) = 0x7a4ca4;
    if (a & 1) {
        free(this);
    }
    return this;
}

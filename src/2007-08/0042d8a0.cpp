// from server: 93% by colin
// roc 2007-08 0042d8a0  unit: boost::any::_N::?$holder  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042d8a0
//
// 0042d8a0  56                   push esi
// 0042d8a1  8bf1                 mov esi, ecx
// 0042d8a3  e808001400           call 0x56d8b0
// 0042d8a8  6a08                 push 8
// 0042d8aa  8906                 mov dword ptr [esi], eax
// 0042d8ac  e845262000           call 0x62fef6
// 0042d8b1  83c404               add esp, 4
// 0042d8b4  85c0                 test eax, eax
// 0042d8b6  7418                 je 0x42d8d0
// 0042d8b8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042d8bc  c700eca57800         mov dword ptr [eax], 0x78a5ec
// 0042d8c2  d901                 fld dword ptr [ecx]
// 0042d8c4  d95804               fstp dword ptr [eax + 4]
// 0042d8c7  894604               mov dword ptr [esi + 4], eax
// 0042d8ca  8bc6                 mov eax, esi
// 0042d8cc  5e                   pop esi
// 0042d8cd  c20400               ret 4
// 0042d8d0  33c0                 xor eax, eax
// 0042d8d2  894604               mov dword ptr [esi + 4], eax
// 0042d8d5  8bc6                 mov eax, esi
// 0042d8d7  5e                   pop esi
// 0042d8d8  c20400               ret 4

extern "C" void* __cdecl sub_56D8B0();
extern "C" void* __cdecl sub_62FEF6(unsigned int);

struct Holder {
    void* field0;
    void* field4;
    Holder* construct(float* arg);
};

Holder* Holder::construct(float* arg) {
    void* p = sub_56D8B0();
    this->field0 = p;
    void* q = sub_62FEF6(8);
    if (q != 0) {
        *(void**)q = (void*)0x78A5EC;
        *(float*)((char*)q + 4) = *arg;
        this->field4 = q;
    } else {
        this->field4 = 0;
    }
    return this;
}

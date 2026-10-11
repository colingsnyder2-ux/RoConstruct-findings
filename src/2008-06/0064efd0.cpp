// from server: 100% by atomic.potato
// roc 2008-06 0064efd0  unit: RBX::KeyButton  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064efd0
//
// 0064efd0  8b442404             mov eax, dword ptr [esp + 4]
// 0064efd4  8b4004               mov eax, dword ptr [eax + 4]
// 0064efd7  8b8948010000         mov ecx, dword ptr [ecx + 0x148]
// 0064efdd  8b10                 mov edx, dword ptr [eax]
// 0064efdf  8b5218               mov edx, dword ptr [edx + 0x18]
// 0064efe2  6a01                 push 1
// 0064efe4  51                   push ecx
// 0064efe5  8bc8                 mov ecx, eax
// 0064efe7  ffd2                 call edx
// 0064efe9  c20400               ret 4

struct KeyButton {
    char pad[0x148];
    int field_148;
    void sub_64EFD0(int* arg);
};

void KeyButton::sub_64EFD0(int* arg) {
    int* p = *(int**)((char*)arg + 4);
    int v = field_148;
    void (__thiscall *fn)(int*, int, int) = *(void (__thiscall **)(int*, int, int))(*(int*)p + 0x18);
    fn(p, v, 1);
}

// from server: 100% by colin
// roc 2007-08 0061bca0  unit: RBX::KeyButton  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061bca0
//
// 0061bca0  8b442404             mov eax, dword ptr [esp + 4]
// 0061bca4  8b4004               mov eax, dword ptr [eax + 4]
// 0061bca7  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0061bcad  8b10                 mov edx, dword ptr [eax]
// 0061bcaf  8b5214               mov edx, dword ptr [edx + 0x14]
// 0061bcb2  6a00                 push 0
// 0061bcb4  51                   push ecx
// 0061bcb5  8bc8                 mov ecx, eax
// 0061bcb7  ffd2                 call edx
// 0061bcb9  c20400               ret 4

struct KeyButton {
    char pad[0x100];
    void *field_100;
    void method(void *arg);
};

void KeyButton::method(void *arg)
{
    void *p = *(void **)((char *)arg + 4);
    void **vtbl = *(void ***)p;
    void (__thiscall *fn)(void *, void *, int) = (void (__thiscall *)(void *, void *, int))vtbl[5];
    fn(p, field_100, 0);
}

// from server: 100% by colin
// roc 2007-08 0061bc80  unit: RBX::KeyButton  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061bc80
//
// 0061bc80  8b442404             mov eax, dword ptr [esp + 4]
// 0061bc84  8b4004               mov eax, dword ptr [eax + 4]
// 0061bc87  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0061bc8d  8b10                 mov edx, dword ptr [eax]
// 0061bc8f  8b5214               mov edx, dword ptr [edx + 0x14]
// 0061bc92  6a01                 push 1
// 0061bc94  51                   push ecx
// 0061bc95  8bc8                 mov ecx, eax
// 0061bc97  ffd2                 call edx
// 0061bc99  c20400               ret 4

struct KeyButton {
    char pad[0x100];
    void *field_100;
    void method(void *arg);
};

void KeyButton::method(void *arg)
{
    void *p = *(void **)((char *)arg + 4);
    void **vtbl = *(void ***)p;
    void (__thiscall *fn)(void *, void *, int) =
        (void (__thiscall *)(void *, void *, int))vtbl[5];
    fn(p, field_100, 1);
}

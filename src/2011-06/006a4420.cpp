// from server: 100% by tester
// roc 2011-06 006a4420  unit: RBX::Primitive  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a4420
//
// 006a4420  8b8904010000         mov ecx, dword ptr [ecx + 0x104]
// 006a4426  8b01                 mov eax, dword ptr [ecx]
// 006a4428  8b5018               mov edx, dword ptr [eax + 0x18]
// 006a442b  ffe2                 jmp edx

struct Primitive
{
    void get();
};

void Primitive::get()
{
    void *p = *(void **)((char *)this + 0x104);
    void **vtable = *(void ***)p;
    ((void (__thiscall *)(void *))vtable[6])(p);
}

// from server: 75% by colin
// roc 2007-08 004073f0  unit: UIEnumConnections::V?$CComEnum::?$CComObject  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004073f0
//
// 004073f0  51                   push ecx
// 004073f1  8d0424               lea eax, [esp]
// 004073f4  c70154507800         mov dword ptr [ecx], 0x785054
// 004073fa  890c24               mov dword ptr [esp], ecx
// 004073fd  50                   push eax
// 004073fe  b930ae8b00           mov ecx, 0x8bae30
// 00407403  e808360a00           call 0x4aaa10
// 00407408  59                   pop ecx
// 00407409  c3                   ret 

struct S {
    void f();
};

extern "C" void __stdcall g(void*);

void S::f() {
    void* p;
    *(int*)this = 0x785054;
    p = this;
    g(&p);
}

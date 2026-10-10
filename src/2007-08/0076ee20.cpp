// from server: 81% by colin
// roc 2007-08 0076ee20  unit: seg_00760000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076ee20
//
// 0076ee20  51                   push ecx
// 0076ee21  68acdc8b00           push 0x8bdcac
// 0076ee26  6870794800           push 0x487970
// 0076ee2b  e8f066fbff           call 0x725520
// 0076ee30  83c408               add esp, 8
// 0076ee33  e8b881d1ff           call 0x486ff0
// 0076ee38  890424               mov dword ptr [esp], eax
// 0076ee3b  8d0424               lea eax, [esp]
// 0076ee3e  50                   push eax
// 0076ee3f  e8cc85c9ff           call 0x407410
// 0076ee44  8bc8                 mov ecx, eax
// 0076ee46  e8854bccff           call 0x4339d0
// 0076ee4b  6880827700           push 0x778280
// 0076ee50  c70010e38800         mov dword ptr [eax], 0x88e310
// 0076ee56  e8c81eecff           call 0x630d23
// 0076ee5b  83c408               add esp, 8
// 0076ee5e  c3                   ret 

extern "C" void __cdecl sub_725520(const char*, const char*);
extern "C" int __cdecl sub_486ff0();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*);

struct S {
    void f();
};

void S::f() {
    sub_725520((const char*)0x8bdcac, (const char*)0x487970);
    int v = sub_486ff0();
    void* p = sub_407410(&v);
    sub_4339d0();
    *(int*)p = 0x88e310;
    sub_630d23((void*)0x778280);
}

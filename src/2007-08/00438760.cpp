// from server: 82% by colin
// roc 2007-08 00438760  unit: MVCXTPPropertyGridItem::?$XItem  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00438760
//
// 00438760  83ec28               sub esp, 0x28
// 00438763  a188518b00           mov eax, dword ptr [0x8b5188]
// 00438768  33c4                 xor eax, esp
// 0043876a  89442424             mov dword ptr [esp + 0x24], eax
// 0043876e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00438772  d900                 fld dword ptr [eax]
// 00438774  56                   push esi
// 00438775  83ec08               sub esp, 8
// 00438778  dd1c24               fstp qword ptr [esp]
// 0043877b  8d442410             lea eax, [esp + 0x10]
// 0043877f  6898d37800           push 0x78d398
// 00438784  50                   push eax
// 00438785  8bf1                 mov esi, ecx
// 00438787  ff1568e97700         call dword ptr [0x77e968]
// 0043878d  83c40c               add esp, 0xc
// 00438790  8d54240c             lea edx, [esp + 0xc]
// 00438794  8bcc                 mov ecx, esp
// 00438796  89642408             mov dword ptr [esp + 8], esp
// 0043879a  52                   push edx
// 0043879b  ff15b8dd7700         call dword ptr [0x77ddb8]
// 004387a1  8b06                 mov eax, dword ptr [esi]
// 004387a3  8b5060               mov edx, dword ptr [eax + 0x60]
// 004387a6  8bce                 mov ecx, esi
// 004387a8  ffd2                 call edx
// 004387aa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004387ae  5e                   pop esi
// 004387af  33cc                 xor ecx, esp
// 004387b1  e868821f00           call 0x630a1e
// 004387b6  83c428               add esp, 0x28
// 004387b9  c20400               ret 4

extern "C" int __cdecl sprintf(char*, const char*, ...);
extern "C" void __stdcall G1_func_0077e968();
extern "C" void __stdcall G1_func_0077ddb8(void*);
extern "C" void __cdecl G1_func_00630a1e();

struct S_func_00438760 {
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7();
    virtual void vf8();
    virtual void vf9();
    virtual void vf10();
    virtual void vf11();
    virtual void vf12();
    virtual void vf13();
    virtual void vf14();
    virtual void vf15();
    virtual void vf16();
    virtual void vf17();
    virtual void vf18();
    virtual void vf19();
    virtual void vf20();
    virtual void vf21();
    virtual void vf22();
    virtual void vf23();
    virtual void vf24();
    void f(float* p);
};

void S_func_00438760::f(float* p)
{
    char buf[36];
    sprintf(buf, "%.3g", (double)*p);
    G1_func_0077e968();
    G1_func_0077ddb8(buf);
    vf24();
    G1_func_00630a1e();
}

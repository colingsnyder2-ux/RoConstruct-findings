// from server: 83% by colin
// roc 2007-08 005758b0  unit: RBX::PartInstance  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005758b0
//
// 005758b0  8b442408             mov eax, dword ptr [esp + 8]
// 005758b4  8b542404             mov edx, dword ptr [esp + 4]
// 005758b8  50                   push eax
// 005758b9  52                   push edx
// 005758ba  81c184feffff         add ecx, 0xfffffe84
// 005758c0  e84bfcffff           call 0x575510
// 005758c5  50                   push eax
// 005758c6  e8958d0b00           call 0x62e660
// 005758cb  83c40c               add esp, 0xc
// 005758ce  c20800               ret 8

struct S {
    void f(int, int);
};

extern "C" void* __cdecl sub_00575510(void*, int, int);
extern "C" void __cdecl sub_0062e660(void*);

void S::f(int a, int b)
{
    char* p = reinterpret_cast<char*>(this) - 0x17c;
    void* r = sub_00575510(p, b, a);
    sub_0062e660(r);
}

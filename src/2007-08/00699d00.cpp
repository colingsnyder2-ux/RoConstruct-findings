// from server: 69% by colin
// roc 2007-08 00699d00  unit: CXTPPropertyGridItemConstraints  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00699d00
//
// 00699d00  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 00699d06  8b542404             mov edx, dword ptr [esp + 4]
// 00699d0a  8b4028               mov eax, dword ptr [eax + 0x28]
// 00699d0d  52                   push edx
// 00699d0e  50                   push eax
// 00699d0f  e80cf6ffff           call 0x699320
// 00699d14  c20400               ret 4

struct Inner {
    char pad[0x28];
    int value;
};

struct Outer {
    char pad[0xb8];
    Inner* inner;

    void method(int arg);
};

extern "C" void __stdcall sub_699320(int, int);

void Outer::method(int arg)
{
    sub_699320(inner->value, arg);
}

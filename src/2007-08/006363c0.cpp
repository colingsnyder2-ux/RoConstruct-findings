// from server: 75% by colin
// roc 2007-08 006363c0  unit: CXTPControlComboBoxList  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006363c0
//
// 006363c0  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 006363c3  8b01                 mov eax, dword ptr [ecx]
// 006363c5  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 006363cb  ffd2                 call edx
// 006363cd  8bc8                 mov ecx, eax
// 006363cf  e97cd30000           jmp 0x643750

struct Inner;

struct InnerVtbl
{
    char pad[0x8c];
    Inner* (__stdcall* fn8c)();
};

struct Inner
{
    InnerVtbl* vtbl;
};

struct Outer
{
    char pad[0x5c];
    Inner* inner;
    int method();
};

extern "C" int __stdcall func_00643750(Inner* p);

int Outer::method()
{
    Inner* p = inner;
    Inner* r = p->vtbl->fn8c();
    return func_00643750(r);
}

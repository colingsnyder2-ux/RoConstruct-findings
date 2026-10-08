// from server: 89% by colin
// roc 2007-08 00719460  unit: CXTPRibbonGroupPopupToolBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00719460
//
// 00719460  8b894c020000         mov ecx, dword ptr [ecx + 0x24c]
// 00719466  8b01                 mov eax, dword ptr [ecx]
// 00719468  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0071946e  56                   push esi
// 0071946f  8b742408             mov esi, dword ptr [esp + 8]
// 00719473  56                   push esi
// 00719474  ffd2                 call edx
// 00719476  8bc6                 mov eax, esi
// 00719478  5e                   pop esi
// 00719479  c20400               ret 4

struct Inner;

struct InnerVtbl
{
    char pad[0x150];
    void (__stdcall *func150)(int);
};

struct Inner
{
    InnerVtbl *vtbl;
};

struct Outer
{
    char pad[0x24c];
    Inner *inner;
    int method(int arg);
};

int Outer::method(int arg)
{
    Inner *p = this->inner;
    p->vtbl->func150(arg);
    return arg;
}

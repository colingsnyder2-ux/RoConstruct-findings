// roc 2009-12 00805820  unit: CXTPCommandBar  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00805820
//
// 00805820  56                   push esi
// 00805821  8bf1                 mov esi, ecx
// 00805823  8d863c010000         lea eax, [esi + 0x13c]
// 00805829  50                   push eax
// 0080582a  ff159cca9800         call dword ptr [0x98ca9c]
// 00805830  8b442410             mov eax, dword ptr [esp + 0x10]
// 00805834  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00805838  8b16                 mov edx, dword ptr [esi]
// 0080583a  8b9278010000         mov edx, dword ptr [edx + 0x178]
// 00805840  50                   push eax
// 00805841  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00805845  51                   push ecx
// 00805846  50                   push eax
// 00805847  8bce                 mov ecx, esi
// 00805849  ffd2                 call edx
// 0080584b  5e                   pop esi
// 0080584c  c20c00               ret 0xc
// copied from an identical function in another client (function ?m@CXTPCommandBar@@QAEXHHH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// from server: 100% by tester
struct CXTPCommandBar
{
    void m(int, int, int);
};

extern "C" int (__stdcall *SetRectEmpty)(void*);

void CXTPCommandBar::m(int a, int b, int c)
{
    SetRectEmpty((char*)this + 0x13c);
    void** vt = *(void***)this;
    void (__thiscall *fn)(CXTPCommandBar*, int, int, int) = (void (__thiscall *)(CXTPCommandBar*, int, int, int))vt[0x178 / 4];
    fn(this, a, b, c);
}
// from server: 100% by tester
// roc 2008-06 006b6170  unit: CXTPCommandBar  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b6170
//
// 006b6170  56                   push esi
// 006b6171  8bf1                 mov esi, ecx
// 006b6173  8d863c010000         lea eax, [esi + 0x13c]
// 006b6179  50                   push eax
// 006b617a  ff157c2c8000         call dword ptr [0x802c7c]
// 006b6180  8b442410             mov eax, dword ptr [esp + 0x10]
// 006b6184  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b6188  8b16                 mov edx, dword ptr [esi]
// 006b618a  8b9278010000         mov edx, dword ptr [edx + 0x178]
// 006b6190  50                   push eax
// 006b6191  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b6195  51                   push ecx
// 006b6196  50                   push eax
// 006b6197  8bce                 mov ecx, esi
// 006b6199  ffd2                 call edx
// 006b619b  5e                   pop esi
// 006b619c  c20c00               ret 0xc

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

// from server: 100% by tester
// roc 2008-06 006faee0  unit: CXTPPropertyGrid  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006faee0
//
// 006faee0  56                   push esi
// 006faee1  8bf1                 mov esi, ecx
// 006faee3  e8805dfaff           call 0x6a0c68
// 006faee8  8bce                 mov ecx, esi
// 006faeea  e8c1f4ffff           call 0x6fa3b0
// 006faeef  85c0                 test eax, eax
// 006faef1  741c                 je 0x6faf0f
// 006faef3  83782000             cmp dword ptr [eax + 0x20], 0
// 006faef7  7416                 je 0x6faf0f
// 006faef9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006faefd  8b06                 mov eax, dword ptr [esi]
// 006faeff  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006faf03  8b8058010000         mov eax, dword ptr [eax + 0x158]
// 006faf09  51                   push ecx
// 006faf0a  52                   push edx
// 006faf0b  8bce                 mov ecx, esi
// 006faf0d  ffd0                 call eax
// 006faf0f  5e                   pop esi
// 006faf10  c20c00               ret 0xc

struct CXTPPropertyGrid {
    void f(int, int, int);
    void g();
    void* h();
};

extern "C" void __stdcall func_0063023e();

void CXTPPropertyGrid::f(int a, int b, int c)
{
    func_0063023e();
    void* p = h();
    if (p != 0 && *(int*)((char*)p + 0x20) != 0) {
        void (__thiscall *fn)(CXTPPropertyGrid*, int, int) =
            *(void (__thiscall **)(CXTPPropertyGrid*, int, int))((*(char**)this) + 0x158);
        fn(this, b, c);
    }
}

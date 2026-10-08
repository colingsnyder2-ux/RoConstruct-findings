// from server: 100% by colin
// roc 2007-08 00683470  unit: CXTPPropertyGrid  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00683470
//
// 00683470  56                   push esi
// 00683471  8bf1                 mov esi, ecx
// 00683473  e8c6cdfaff           call 0x63023e
// 00683478  8bce                 mov ecx, esi
// 0068347a  e8a1f5ffff           call 0x682a20
// 0068347f  85c0                 test eax, eax
// 00683481  741c                 je 0x68349f
// 00683483  83782000             cmp dword ptr [eax + 0x20], 0
// 00683487  7416                 je 0x68349f
// 00683489  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0068348d  8b06                 mov eax, dword ptr [esi]
// 0068348f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00683493  8b8050010000         mov eax, dword ptr [eax + 0x150]
// 00683499  51                   push ecx
// 0068349a  52                   push edx
// 0068349b  8bce                 mov ecx, esi
// 0068349d  ffd0                 call eax
// 0068349f  5e                   pop esi
// 006834a0  c20c00               ret 0xc

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
            *(void (__thiscall **)(CXTPPropertyGrid*, int, int))((*(char**)this) + 0x150);
        fn(this, b, c);
    }
}

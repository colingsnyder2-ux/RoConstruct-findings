// from server: 68% by colin
// roc 2007-08 0063a660  unit: CXTPControl  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063a660
//
// 0063a660  8b442404             mov eax, dword ptr [esp + 4]
// 0063a664  83ec08               sub esp, 8
// 0063a667  6a01                 push 1
// 0063a669  51                   push ecx
// 0063a66a  50                   push eax
// 0063a66b  8d54240c             lea edx, [esp + 0xc]
// 0063a66f  52                   push edx
// 0063a670  e88bf9ffff           call 0x63a000
// 0063a675  8bc8                 mov ecx, eax
// 0063a677  e8d42d0000           call 0x63d450
// 0063a67c  83c408               add esp, 8
// 0063a67f  c20400               ret 4

struct CXTPControl
{
    void method(int a);
};

extern "C" void* __stdcall sub_63A000(void* out, int a, void* self, int one);
extern "C" void __stdcall sub_63D450(void* p);

void CXTPControl::method(int a)
{
    void* tmp;
    void* r = sub_63A000(&tmp, a, this, 1);
    sub_63D450(r);
}

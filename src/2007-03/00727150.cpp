// roc 2007-03 00727150  unit: seg_00720000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00727150
//
// 00727150  56                   push esi
// 00727151  8bf1                 mov esi, ecx
// 00727153  8b06                 mov eax, dword ptr [esi]
// 00727155  57                   push edi
// 00727156  8b3dfcd17700         mov edi, dword ptr [0x77d1fc]
// 0072715c  50                   push eax
// 0072715d  ffd7                 call edi
// 0072715f  8b4e04               mov ecx, dword ptr [esi + 4]
// 00727162  51                   push ecx
// 00727163  ffd7                 call edi
// 00727165  8b5608               mov edx, dword ptr [esi + 8]
// 00727168  52                   push edx
// 00727169  ffd7                 call edi
// 0072716b  5f                   pop edi
// 0072716c  5e                   pop esi
// 0072716d  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_00726890@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
extern "C" int (__stdcall *CloseHandle)(void*);

struct S_func_00726890 {
    void* field0;
    void* field4;
    void* field8;
    void f();
};

void S_func_00726890::f()
{
    int (__stdcall *p)(void*) = CloseHandle;
    p(field0);
    p(field4);
    p(field8);
}
}

// from server: 69% by colin
// roc 2007-08 0040a180  unit: VCApp::?$CComObject  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040a180
//
// 0040a180  56                   push esi
// 0040a181  8b742414             mov esi, dword ptr [esp + 0x14]
// 0040a185  85f6                 test esi, esi
// 0040a187  7509                 jne 0x40a192
// 0040a189  b803400080           mov eax, 0x80004003
// 0040a18e  5e                   pop esi
// 0040a18f  c21000               ret 0x10
// 0040a192  33c0                 xor eax, eax
// 0040a194  39055c178800         cmp dword ptr [0x88175c], eax
// 0040a19a  750f                 jne 0x40a1ab
// 0040a19c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040a1a0  50                   push eax
// 0040a1a1  b950178800           mov ecx, 0x881750
// 0040a1a6  e845b4ffff           call 0x4055f0
// 0040a1ab  8b0d5c178800         mov ecx, dword ptr [0x88175c]
// 0040a1b1  890e                 mov dword ptr [esi], ecx
// 0040a1b3  8b0d5c178800         mov ecx, dword ptr [0x88175c]
// 0040a1b9  85c9                 test ecx, ecx
// 0040a1bb  740a                 je 0x40a1c7
// 0040a1bd  8b11                 mov edx, dword ptr [ecx]
// 0040a1bf  8b4204               mov eax, dword ptr [edx + 4]
// 0040a1c2  51                   push ecx
// 0040a1c3  ffd0                 call eax
// 0040a1c5  33c0                 xor eax, eax
// 0040a1c7  5e                   pop esi
// 0040a1c8  c21000               ret 0x10

struct VCAppComObject {
    long __stdcall QueryInterface(void* ppv);
};

extern "C" void* __stdcall sub_4055F0(void*);

extern void* g_88175C;
extern char g_881750;

long __stdcall VCAppComObject_QueryInterface(void* ppv)
{
    if (ppv == 0)
        return (long)0x80004003;

    if (g_88175C == 0)
        sub_4055F0(&g_881750);

    *(void**)ppv = g_88175C;
    if (g_88175C != 0) {
        void** vtbl = *(void***)g_88175C;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[1];
        fn(g_88175C);
    }
    return 0;
}

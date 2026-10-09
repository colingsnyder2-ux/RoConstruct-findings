// from server: 40% by colin
// roc 2007-08 00725437  unit: CXTIconHandle  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00725437
//
// 00725437  e95bffffff           jmp 0x725397
// 0072543c  56                   push esi
// 0072543d  8bf1                 mov esi, ecx
// 0072543f  833e00               cmp dword ptr [esi], 0
// 00725442  7438                 je 0x72547c
// 00725444  53                   push ebx
// 00725445  8b5e08               mov ebx, dword ptr [esi + 8]
// 00725448  3b5e0c               cmp ebx, dword ptr [esi + 0xc]
// 0072544b  7321                 jae 0x72546e
// 0072544d  57                   push edi
// 0072544e  8b3b                 mov edi, dword ptr [ebx]
// 00725450  85ff                 test edi, edi
// 00725452  7411                 je 0x725465
// 00725454  8b4710               mov eax, dword ptr [edi + 0x10]
// 00725457  85c0                 test eax, eax
// 00725459  7406                 je 0x725461
// 0072545b  8b08                 mov ecx, dword ptr [eax]
// 0072545d  50                   push eax
// 0072545e  ff5108               call dword ptr [ecx + 8]
// 00725461  83671000             and dword ptr [edi + 0x10], 0
// 00725465  83c304               add ebx, 4
// 00725468  3b5e0c               cmp ebx, dword ptr [esi + 0xc]
// 0072546b  72e1                 jb 0x72544e
// 0072546d  5f                   pop edi
// 0072546e  8d4610               lea eax, [esi + 0x10]
// 00725471  50                   push eax
// 00725472  ff1504d37700         call dword ptr [0x77d304]
// 00725478  832600               and dword ptr [esi], 0
// 0072547b  5b                   pop ebx
// 0072547c  5e                   pop esi
// 0072547d  c3                   ret 

struct S_func_00725437 {
    int m_a;
    char pad0[4];
    int m_begin;
    int m_end;
    int m_cs[6];
    void f();
};

extern "C" void __stdcall DeleteCriticalSection(void*);

void S_func_00725437::f()
{
    if (m_a != 0) {
        int* p = (int*)m_begin;
        int* e = (int*)m_end;
        while (p < e) {
            int v = *p;
            if (v != 0) {
                int* q = *(int**)(v + 0x10);
                if (q != 0) {
                    (*(void (__stdcall**)(int*))(*(int*)q + 8))(q);
                }
                *(int*)(v + 0x10) = 0;
            }
            p++;
        }
        DeleteCriticalSection(&m_cs[0]);
        m_a = 0;
    }
}

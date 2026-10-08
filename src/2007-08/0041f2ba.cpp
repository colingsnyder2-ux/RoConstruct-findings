// from server: 54% by colin
// roc 2007-08 0041f2ba  unit: CSettingsExplorer  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f2ba
//
// 0041f2ba  83ff02               cmp edi, 2
// 0041f2bd  742f                 je 0x41f2ee
// 0041f2bf  33c0                 xor eax, eax
// 0041f2c1  85db                 test ebx, ebx
// 0041f2c3  0f94c0               sete al
// 0041f2c6  8bf0                 mov esi, eax
// 0041f2c8  85f6                 test esi, esi
// 0041f2ca  740a                 je 0x41f2d6
// 0041f2cc  ff1500d37700         call dword ptr [0x77d300]
// 0041f2d2  8bf8                 mov edi, eax
// 0041f2d4  eb02                 jmp 0x41f2d8
// 0041f2d6  33ff                 xor edi, edi
// 0041f2d8  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0041f2db  51                   push ecx
// 0041f2dc  6a00                 push 0
// 0041f2de  e8550c2100           call 0x62ff38
// 0041f2e3  85f6                 test esi, esi
// 0041f2e5  7407                 je 0x41f2ee
// 0041f2e7  57                   push edi
// 0041f2e8  ff1590d27700         call dword ptr [0x77d290]
// 0041f2ee  c3                   ret 

typedef unsigned long DWORD;

extern "C" __declspec(dllimport) DWORD __stdcall GetLastError();
extern "C" __declspec(dllimport) void __stdcall SetLastError(DWORD);

extern "C" void __stdcall sub_0062ff38(void*);

struct CSettingsExplorer {
    void f(int edi, int ebx);
};

void CSettingsExplorer::f(int edi, int ebx)
{
    if (edi == 2)
        return;

    int esi = (ebx == 0) ? 1 : 0;

    DWORD saved;
    if (esi != 0)
        saved = GetLastError();
    else
        saved = 0;

    sub_0062ff38(*(void **)((char *)this - 0x20));

    if (esi != 0)
        SetLastError(saved);
}

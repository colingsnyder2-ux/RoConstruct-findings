// from server: 50% by colin
// roc 2007-08 0041f09e  unit: CSettingsExplorer  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f09e
//
// 0041f09e  83ff02               cmp edi, 2
// 0041f0a1  742f                 je 0x41f0d2
// 0041f0a3  33c9                 xor ecx, ecx
// 0041f0a5  85db                 test ebx, ebx
// 0041f0a7  0f94c1               sete cl
// 0041f0aa  8bf1                 mov esi, ecx
// 0041f0ac  85f6                 test esi, esi
// 0041f0ae  740a                 je 0x41f0ba
// 0041f0b0  ff1500d37700         call dword ptr [0x77d300]
// 0041f0b6  8bf8                 mov edi, eax
// 0041f0b8  eb02                 jmp 0x41f0bc
// 0041f0ba  33ff                 xor edi, edi
// 0041f0bc  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 0041f0bf  52                   push edx
// 0041f0c0  6a00                 push 0
// 0041f0c2  e8710e2100           call 0x62ff38
// 0041f0c7  85f6                 test esi, esi
// 0041f0c9  7407                 je 0x41f0d2
// 0041f0cb  57                   push edi
// 0041f0cc  ff1590d27700         call dword ptr [0x77d290]
// 0041f0d2  c3                   ret 

extern "C" __declspec(dllimport) unsigned long __stdcall GetLastError();
extern "C" __declspec(dllimport) void __stdcall SetLastError(unsigned long);

extern "C" void __cdecl sub_62FF38(unsigned long);

struct CSettingsExplorer {
    void sub_41F09E();
};

void CSettingsExplorer::sub_41F09E()
{
    int edi;
    int ebx;
    int esi;

    if (edi == 2)
        return;

    esi = (ebx == 0) ? 1 : 0;

    if (esi != 0) {
        edi = (int)GetLastError();
    } else {
        edi = 0;
    }

    sub_62FF38(*(unsigned long *)((char *)this - 0x20));

    if (esi != 0) {
        SetLastError((unsigned long)edi);
    }
}

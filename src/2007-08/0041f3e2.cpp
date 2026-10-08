// from server: 43% by colin
// roc 2007-08 0041f3e2  unit: CSettingsExplorer  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f3e2
//
// 0041f3e2  83ff02               cmp edi, 2
// 0041f3e5  742f                 je 0x41f416
// 0041f3e7  33c9                 xor ecx, ecx
// 0041f3e9  85db                 test ebx, ebx
// 0041f3eb  0f94c1               sete cl
// 0041f3ee  8bf1                 mov esi, ecx
// 0041f3f0  85f6                 test esi, esi
// 0041f3f2  740a                 je 0x41f3fe
// 0041f3f4  ff1500d37700         call dword ptr [0x77d300]
// 0041f3fa  8bf8                 mov edi, eax
// 0041f3fc  eb02                 jmp 0x41f400
// 0041f3fe  33ff                 xor edi, edi
// 0041f400  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 0041f403  52                   push edx
// 0041f404  6a00                 push 0
// 0041f406  e82d0b2100           call 0x62ff38
// 0041f40b  85f6                 test esi, esi
// 0041f40d  7407                 je 0x41f416
// 0041f40f  57                   push edi
// 0041f410  ff1590d27700         call dword ptr [0x77d290]
// 0041f416  c3                   ret 

extern "C" unsigned long __stdcall GetLastError();
extern "C" void __stdcall SetLastError(unsigned long);

extern void func_0062ff38(unsigned long, unsigned long);

void func_0041f3e2(int edi, int ebx, unsigned long arg)
{
    if (edi == 2)
        return;

    int esi = (ebx == 0) ? 1 : 0;

    unsigned long saved;
    if (esi != 0) {
        saved = GetLastError();
    } else {
        saved = 0;
    }

    func_0062ff38(arg, 0);

    if (esi != 0) {
        SetLastError(saved);
    }
}

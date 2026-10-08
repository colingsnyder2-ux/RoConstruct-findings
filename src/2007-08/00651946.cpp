// from server: 51% by colin
// roc 2007-08 00651946  unit: CXTPToolBar  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00651946
//
// 00651946  83ff02               cmp edi, 2
// 00651949  742f                 je 0x65197a
// 0065194b  33c0                 xor eax, eax
// 0065194d  85db                 test ebx, ebx
// 0065194f  0f94c0               sete al
// 00651952  8bf0                 mov esi, eax
// 00651954  85f6                 test esi, esi
// 00651956  740a                 je 0x651962
// 00651958  ff1500d37700         call dword ptr [0x77d300]
// 0065195e  8bf8                 mov edi, eax
// 00651960  eb02                 jmp 0x651964
// 00651962  33ff                 xor edi, edi
// 00651964  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00651967  51                   push ecx
// 00651968  6a00                 push 0
// 0065196a  e8c9e5fdff           call 0x62ff38
// 0065196f  85f6                 test esi, esi
// 00651971  7407                 je 0x65197a
// 00651973  57                   push edi
// 00651974  ff1590d27700         call dword ptr [0x77d290]
// 0065197a  c3                   ret 

extern "C" unsigned long __stdcall GetLastError();
extern "C" void __stdcall SetLastError(unsigned long);

extern "C" void __stdcall func_0062ff38(unsigned long, unsigned long);

void func_00651946(int edi, int ebx, int ebp_minus_20)
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

    func_0062ff38(ebp_minus_20, 0);

    if (esi != 0) {
        SetLastError(saved);
    }
}

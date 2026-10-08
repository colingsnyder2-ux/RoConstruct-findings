// from server: 62% by colin
// roc 2007-08 00648d32  unit: CXTPCommandBar  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00648d32
//
// 00648d32  83ff02               cmp edi, 2
// 00648d35  742f                 je 0x648d66
// 00648d37  33c9                 xor ecx, ecx
// 00648d39  85db                 test ebx, ebx
// 00648d3b  0f94c1               sete cl
// 00648d3e  8bf1                 mov esi, ecx
// 00648d40  85f6                 test esi, esi
// 00648d42  740a                 je 0x648d4e
// 00648d44  ff1500d37700         call dword ptr [0x77d300]
// 00648d4a  8bf8                 mov edi, eax
// 00648d4c  eb02                 jmp 0x648d50
// 00648d4e  33ff                 xor edi, edi
// 00648d50  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 00648d53  52                   push edx
// 00648d54  6a00                 push 0
// 00648d56  e8dd71feff           call 0x62ff38
// 00648d5b  85f6                 test esi, esi
// 00648d5d  7407                 je 0x648d66
// 00648d5f  57                   push edi
// 00648d60  ff1590d27700         call dword ptr [0x77d290]
// 00648d66  c3                   ret 

extern "C" unsigned long __stdcall GetLastError();
extern "C" void __stdcall SetLastError(unsigned long);

extern void __cdecl func_0062ff38(unsigned long);

void __fastcall func_00648d32(int edi, int ebx, int ebp_minus_0x20)
{
    if (edi == 2)
        return;

    int esi = (ebx == 0) ? 1 : 0;

    int saved;
    if (esi != 0)
    {
        saved = (int)GetLastError();
    }
    else
    {
        saved = 0;
    }

    func_0062ff38(ebp_minus_0x20);

    if (esi != 0)
    {
        SetLastError((unsigned long)saved);
    }
}

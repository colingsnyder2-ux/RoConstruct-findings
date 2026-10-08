// from server: 52% by colin
// roc 2007-08 0041f642  unit: CSettingsExplorer  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f642
//
// 0041f642  83ff02               cmp edi, 2
// 0041f645  742f                 je 0x41f676
// 0041f647  33c9                 xor ecx, ecx
// 0041f649  85db                 test ebx, ebx
// 0041f64b  0f94c1               sete cl
// 0041f64e  8bf1                 mov esi, ecx
// 0041f650  85f6                 test esi, esi
// 0041f652  740a                 je 0x41f65e
// 0041f654  ff1500d37700         call dword ptr [0x77d300]
// 0041f65a  8bf8                 mov edi, eax
// 0041f65c  eb02                 jmp 0x41f660
// 0041f65e  33ff                 xor edi, edi
// 0041f660  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 0041f663  52                   push edx
// 0041f664  6a00                 push 0
// 0041f666  e8cd082100           call 0x62ff38
// 0041f66b  85f6                 test esi, esi
// 0041f66d  7407                 je 0x41f676
// 0041f66f  57                   push edi
// 0041f670  ff1590d27700         call dword ptr [0x77d290]
// 0041f676  c3                   ret 

extern "C" __declspec(dllimport) unsigned long __stdcall GetLastError();
extern "C" __declspec(dllimport) void __stdcall SetLastError(unsigned long);

extern "C" void __cdecl sub_62FF38(unsigned long);

void __cdecl sub_41F642(int edi, int ebx, int ebp_minus_20)
{
    if (edi != 2)
    {
        unsigned long err = 0;
        int flag = (ebx == 0) ? 1 : 0;
        if (flag)
        {
            err = GetLastError();
        }
        sub_62FF38(ebp_minus_20);
        if (flag)
        {
            SetLastError(err);
        }
    }
}

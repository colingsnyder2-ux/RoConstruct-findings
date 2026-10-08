// from server: 47% by colin
// roc 2007-08 0041f516  unit: CSettingsExplorer  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f516
//
// 0041f516  83ff02               cmp edi, 2
// 0041f519  742f                 je 0x41f54a
// 0041f51b  33d2                 xor edx, edx
// 0041f51d  85db                 test ebx, ebx
// 0041f51f  0f94c2               sete dl
// 0041f522  8bf2                 mov esi, edx
// 0041f524  85f6                 test esi, esi
// 0041f526  740a                 je 0x41f532
// 0041f528  ff1500d37700         call dword ptr [0x77d300]
// 0041f52e  8bf8                 mov edi, eax
// 0041f530  eb02                 jmp 0x41f534
// 0041f532  33ff                 xor edi, edi
// 0041f534  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 0041f537  50                   push eax
// 0041f538  6a00                 push 0
// 0041f53a  e8f9092100           call 0x62ff38
// 0041f53f  85f6                 test esi, esi
// 0041f541  7407                 je 0x41f54a
// 0041f543  57                   push edi
// 0041f544  ff1590d27700         call dword ptr [0x77d290]
// 0041f54a  c3                   ret 

extern "C" __declspec(dllimport) unsigned long __stdcall GetLastError();
extern "C" __declspec(dllimport) void __stdcall SetLastError(unsigned long);

extern "C" void __cdecl sub_62FF38(unsigned long, unsigned long);

void __cdecl sub_41F516(int edi, int ebx, int ebp_20)
{
    if (edi != 2)
    {
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
        sub_62FF38((unsigned long)ebp_20, 0);
        if (esi != 0)
        {
            SetLastError((unsigned long)saved);
        }
    }
}

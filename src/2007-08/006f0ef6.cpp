// from server: 47% by colin
// roc 2007-08 006f0ef6  unit: CXTPImageEditorPicker  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f0ef6
//
// 006f0ef6  83ff02               cmp edi, 2
// 006f0ef9  742f                 je 0x6f0f2a
// 006f0efb  33d2                 xor edx, edx
// 006f0efd  85db                 test ebx, ebx
// 006f0eff  0f94c2               sete dl
// 006f0f02  8bf2                 mov esi, edx
// 006f0f04  85f6                 test esi, esi
// 006f0f06  740a                 je 0x6f0f12
// 006f0f08  ff1500d37700         call dword ptr [0x77d300]
// 006f0f0e  8bf8                 mov edi, eax
// 006f0f10  eb02                 jmp 0x6f0f14
// 006f0f12  33ff                 xor edi, edi
// 006f0f14  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 006f0f17  50                   push eax
// 006f0f18  6a00                 push 0
// 006f0f1a  e819f0f3ff           call 0x62ff38
// 006f0f1f  85f6                 test esi, esi
// 006f0f21  7407                 je 0x6f0f2a
// 006f0f23  57                   push edi
// 006f0f24  ff1590d27700         call dword ptr [0x77d290]
// 006f0f2a  c3                   ret 

extern "C" __declspec(dllimport) unsigned long __stdcall GetLastError();
extern "C" __declspec(dllimport) void __stdcall SetLastError(unsigned long);

extern "C" void __cdecl sub_62FF38(int, int);

void __cdecl sub_6F0EF6(int edi, int ebx, int ebp_minus_20)
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
        sub_62FF38(ebp_minus_20, 0);
        if (esi != 0)
        {
            SetLastError((unsigned long)saved);
        }
    }
}

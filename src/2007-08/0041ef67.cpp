// from server: 55% by colin
// roc 2007-08 0041ef67  unit: CSettingsExplorer  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041ef67
//
// 0041ef67  83ff02               cmp edi, 2
// 0041ef6a  7430                 je 0x41ef9c
// 0041ef6c  33c0                 xor eax, eax
// 0041ef6e  83fbff               cmp ebx, -1
// 0041ef71  0f94c0               sete al
// 0041ef74  8bf0                 mov esi, eax
// 0041ef76  85f6                 test esi, esi
// 0041ef78  740a                 je 0x41ef84
// 0041ef7a  ff1500d37700         call dword ptr [0x77d300]
// 0041ef80  8bf8                 mov edi, eax
// 0041ef82  eb02                 jmp 0x41ef86
// 0041ef84  33ff                 xor edi, edi
// 0041ef86  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0041ef89  51                   push ecx
// 0041ef8a  6a00                 push 0
// 0041ef8c  e8a70f2100           call 0x62ff38
// 0041ef91  85f6                 test esi, esi
// 0041ef93  7407                 je 0x41ef9c
// 0041ef95  57                   push edi
// 0041ef96  ff1590d27700         call dword ptr [0x77d290]
// 0041ef9c  c3                   ret 

extern "C" __declspec(dllimport) unsigned long __stdcall GetLastError();
extern "C" __declspec(dllimport) void __stdcall SetLastError(unsigned long);

extern "C" void __cdecl sub_62FF38(int, int);

void __cdecl sub_41EF67(int edi, int ebx, int ebp_20)
{
    if (edi == 2)
        return;

    int esi = (ebx == -1) ? 1 : 0;

    int saved;
    if (esi) {
        saved = (int)GetLastError();
    } else {
        saved = 0;
    }

    sub_62FF38(ebp_20, 0);

    if (esi) {
        SetLastError((unsigned long)saved);
    }
}

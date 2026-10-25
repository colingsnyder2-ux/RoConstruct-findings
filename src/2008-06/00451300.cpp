// from server: 100% by king_originala
// roc 2008-06 00451300  unit: RBX::CameraTiltUpCommand  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00451300
//
// 00451300  6aff                 push -1
// 00451302  68901c7c00           push 0x7c1c90
// 00451307  64a100000000         mov eax, dword ptr fs:[0]
// 0045130d  50                   push eax
// 0045130e  64892500000000       mov dword ptr fs:[0], esp
// 00451315  83ec28               sub esp, 0x28
// 00451318  8d442438             lea eax, [esp + 0x38]
// 0045131c  89442418             mov dword ptr [esp + 0x18], eax
// 00451320  b801000000           mov eax, 1
// 00451325  8d4c2403             lea ecx, [esp + 3]
// 00451329  56                   push esi
// 0045132a  c644240700           mov byte ptr [esp + 7], 0
// 0045132f  89442420             mov dword ptr [esp + 0x20], eax
// 00451333  88442424             mov byte ptr [esp + 0x24], al
// 00451337  894c2428             mov dword ptr [esp + 0x28], ecx
// 0045133b  8d542440             lea edx, [esp + 0x40]
// 0045133f  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00451347  8954240c             mov dword ptr [esp + 0xc], edx
// 0045134b  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00451353  88442414             mov byte ptr [esp + 0x14], al
// 00451357  894c2418             mov dword ptr [esp + 0x18], ecx
// 0045135b  8b542408             mov edx, dword ptr [esp + 8]
// 0045135f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00451363  52                   push edx
// 00451364  88442438             mov byte ptr [esp + 0x38], al
// 00451368  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0045136c  50                   push eax
// 0045136d  51                   push ecx
// 0045136e  8d54244c             lea edx, [esp + 0x4c]
// 00451372  52                   push edx
// 00451373  8d44244c             lea eax, [esp + 0x4c]
// 00451377  50                   push eax
// 00451378  e893feffff           call 0x451210
// 0045137d  83c414               add esp, 0x14
// 00451380  8d4c240c             lea ecx, [esp + 0xc]
// 00451384  8bf0                 mov esi, eax
// 00451386  c644243400           mov byte ptr [esp + 0x34], 0
// 0045138b  e800feffff           call 0x451190
// 00451390  8d4c241c             lea ecx, [esp + 0x1c]
// 00451394  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0045139c  e86fc00200           call 0x47d410
// 004513a1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004513a5  8bc6                 mov eax, esi
// 004513a7  5e                   pop esi
// 004513a8  64890d00000000       mov dword ptr fs:[0], ecx
// 004513af  83c434               add esp, 0x34
// 004513b2  c3                   ret 

struct EmptyOne {};
struct EmptyTwo {};

struct GuardOne {
    int* value;
    int count;
    bool active;
    bool* flag;
    ~GuardOne();
};

struct GuardTwo {
    int* value;
    int count;
    bool active;
    bool* flag;
    ~GuardTwo();
};

int __cdecl func_00451210(int*, int*, int, EmptyOne, EmptyTwo);

int __cdecl func_00451300(int first, int second, int third)
{
    bool flag = false;
    EmptyOne tagOne;
    EmptyTwo tagTwo;
    GuardOne one = { &first, 1, true, &flag };
    GuardTwo two = { &second, 2, true, &flag };
    return func_00451210(&first, &second, third, tagOne, tagTwo);
}

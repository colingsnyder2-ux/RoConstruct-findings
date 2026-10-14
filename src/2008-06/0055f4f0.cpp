// from server: 100% by colin
// roc 2008-06 0055f4f0  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055f4f0
//
// 0055f4f0  6aff                 push -1
// 0055f4f2  68901c7c00           push 0x7c1c90
// 0055f4f7  64a100000000         mov eax, dword ptr fs:[0]
// 0055f4fd  50                   push eax
// 0055f4fe  64892500000000       mov dword ptr fs:[0], esp
// 0055f505  83ec28               sub esp, 0x28
// 0055f508  8d442438             lea eax, [esp + 0x38]
// 0055f50c  89442418             mov dword ptr [esp + 0x18], eax
// 0055f510  b801000000           mov eax, 1
// 0055f515  8d4c2403             lea ecx, [esp + 3]
// 0055f519  56                   push esi
// 0055f51a  c644240700           mov byte ptr [esp + 7], 0
// 0055f51f  89442420             mov dword ptr [esp + 0x20], eax
// 0055f523  88442424             mov byte ptr [esp + 0x24], al
// 0055f527  894c2428             mov dword ptr [esp + 0x28], ecx
// 0055f52b  8d542440             lea edx, [esp + 0x40]
// 0055f52f  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0055f537  8954240c             mov dword ptr [esp + 0xc], edx
// 0055f53b  c744241002000000     mov dword ptr [esp + 0x10], 2
// 0055f543  88442414             mov byte ptr [esp + 0x14], al
// 0055f547  894c2418             mov dword ptr [esp + 0x18], ecx
// 0055f54b  8b542408             mov edx, dword ptr [esp + 8]
// 0055f54f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0055f553  52                   push edx
// 0055f554  88442438             mov byte ptr [esp + 0x38], al
// 0055f558  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0055f55c  50                   push eax
// 0055f55d  51                   push ecx
// 0055f55e  8d54244c             lea edx, [esp + 0x4c]
// 0055f562  52                   push edx
// 0055f563  8d44244c             lea eax, [esp + 0x4c]
// 0055f567  50                   push eax
// 0055f568  e8e3f6ffff           call 0x55ec50
// 0055f56d  83c414               add esp, 0x14
// 0055f570  8d4c240c             lea ecx, [esp + 0xc]
// 0055f574  8bf0                 mov esi, eax
// 0055f576  c644243400           mov byte ptr [esp + 0x34], 0
// 0055f57b  e8101cefff           call 0x451190
// 0055f580  8d4c241c             lea ecx, [esp + 0x1c]
// 0055f584  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0055f58c  e87fdef1ff           call 0x47d410
// 0055f591  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0055f595  8bc6                 mov eax, esi
// 0055f597  5e                   pop esi
// 0055f598  64890d00000000       mov dword ptr fs:[0], ecx
// 0055f59f  83c434               add esp, 0x34
// 0055f5a2  c3                   ret 

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

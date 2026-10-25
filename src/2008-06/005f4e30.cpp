// from server: 100% by king_originala
// roc 2008-06 005f4e30  unit: boost::iostreams::Uinput::?$filtering_stream  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f4e30
//
// 005f4e30  6aff                 push -1
// 005f4e32  68c0757d00           push 0x7d75c0
// 005f4e37  64a100000000         mov eax, dword ptr fs:[0]
// 005f4e3d  50                   push eax
// 005f4e3e  64892500000000       mov dword ptr fs:[0], esp
// 005f4e45  83ec28               sub esp, 0x28
// 005f4e48  8d442438             lea eax, [esp + 0x38]
// 005f4e4c  89442418             mov dword ptr [esp + 0x18], eax
// 005f4e50  b801000000           mov eax, 1
// 005f4e55  8d4c2403             lea ecx, [esp + 3]
// 005f4e59  56                   push esi
// 005f4e5a  c644240700           mov byte ptr [esp + 7], 0
// 005f4e5f  89442420             mov dword ptr [esp + 0x20], eax
// 005f4e63  88442424             mov byte ptr [esp + 0x24], al
// 005f4e67  894c2428             mov dword ptr [esp + 0x28], ecx
// 005f4e6b  8d542440             lea edx, [esp + 0x40]
// 005f4e6f  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005f4e77  8954240c             mov dword ptr [esp + 0xc], edx
// 005f4e7b  c744241002000000     mov dword ptr [esp + 0x10], 2
// 005f4e83  88442414             mov byte ptr [esp + 0x14], al
// 005f4e87  894c2418             mov dword ptr [esp + 0x18], ecx
// 005f4e8b  8b542408             mov edx, dword ptr [esp + 8]
// 005f4e8f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005f4e93  52                   push edx
// 005f4e94  88442438             mov byte ptr [esp + 0x38], al
// 005f4e98  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005f4e9c  50                   push eax
// 005f4e9d  51                   push ecx
// 005f4e9e  8d54244c             lea edx, [esp + 0x4c]
// 005f4ea2  52                   push edx
// 005f4ea3  8d44244c             lea eax, [esp + 0x4c]
// 005f4ea7  50                   push eax
// 005f4ea8  e8b3f8ffff           call 0x5f4760
// 005f4ead  83c414               add esp, 0x14
// 005f4eb0  8d4c240c             lea ecx, [esp + 0xc]
// 005f4eb4  8bf0                 mov esi, eax
// 005f4eb6  c644243400           mov byte ptr [esp + 0x34], 0
// 005f4ebb  e85085e8ff           call 0x47d410
// 005f4ec0  8d4c241c             lea ecx, [esp + 0x1c]
// 005f4ec4  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 005f4ecc  e83f85e8ff           call 0x47d410
// 005f4ed1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005f4ed5  8bc6                 mov eax, esi
// 005f4ed7  5e                   pop esi
// 005f4ed8  64890d00000000       mov dword ptr fs:[0], ecx
// 005f4edf  83c434               add esp, 0x34
// 005f4ee2  c3                   ret 

struct Guard {
    int* value;
    int mode;
    bool active;
    bool* flag;

    Guard(int* p, int m, bool* f);
    ~Guard();
};

inline Guard::Guard(int* p, int m, bool* f)
    : value(p), mode(m), active(true), flag(f)
{
}

extern int __cdecl process(int*, int*, int, int, int);

int __cdecl function(int first, int second, int third)
{
    bool flag = false;
    volatile int empty;
    Guard firstGuard(&first, 1, &flag);
    Guard secondGuard(&second, 2, &flag);
    return process(&first, &second, third, empty, empty);
}

// from server: 100% by king_originala
// roc 2008-06 005f4d70  unit: boost::iostreams::Uinput::?$filtering_stream  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f4d70
//
// 005f4d70  6aff                 push -1
// 005f4d72  68a0757d00           push 0x7d75a0
// 005f4d77  64a100000000         mov eax, dword ptr fs:[0]
// 005f4d7d  50                   push eax
// 005f4d7e  64892500000000       mov dword ptr fs:[0], esp
// 005f4d85  83ec28               sub esp, 0x28
// 005f4d88  8d442438             lea eax, [esp + 0x38]
// 005f4d8c  89442418             mov dword ptr [esp + 0x18], eax
// 005f4d90  b801000000           mov eax, 1
// 005f4d95  8d4c2403             lea ecx, [esp + 3]
// 005f4d99  56                   push esi
// 005f4d9a  c644240700           mov byte ptr [esp + 7], 0
// 005f4d9f  89442420             mov dword ptr [esp + 0x20], eax
// 005f4da3  88442424             mov byte ptr [esp + 0x24], al
// 005f4da7  894c2428             mov dword ptr [esp + 0x28], ecx
// 005f4dab  8d542440             lea edx, [esp + 0x40]
// 005f4daf  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005f4db7  8954240c             mov dword ptr [esp + 0xc], edx
// 005f4dbb  c744241002000000     mov dword ptr [esp + 0x10], 2
// 005f4dc3  88442414             mov byte ptr [esp + 0x14], al
// 005f4dc7  894c2418             mov dword ptr [esp + 0x18], ecx
// 005f4dcb  8b542408             mov edx, dword ptr [esp + 8]
// 005f4dcf  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005f4dd3  52                   push edx
// 005f4dd4  88442438             mov byte ptr [esp + 0x38], al
// 005f4dd8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005f4ddc  50                   push eax
// 005f4ddd  51                   push ecx
// 005f4dde  8d54244c             lea edx, [esp + 0x4c]
// 005f4de2  52                   push edx
// 005f4de3  8d44244c             lea eax, [esp + 0x4c]
// 005f4de7  50                   push eax
// 005f4de8  e833f8ffff           call 0x5f4620
// 005f4ded  83c414               add esp, 0x14
// 005f4df0  8d4c240c             lea ecx, [esp + 0xc]
// 005f4df4  8bf0                 mov esi, eax
// 005f4df6  c644243400           mov byte ptr [esp + 0x34], 0
// 005f4dfb  e8e0eaffff           call 0x5f38e0
// 005f4e00  8d4c241c             lea ecx, [esp + 0x1c]
// 005f4e04  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 005f4e0c  e8ff85e8ff           call 0x47d410
// 005f4e11  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005f4e15  8bc6                 mov eax, esi
// 005f4e17  5e                   pop esi
// 005f4e18  64890d00000000       mov dword ptr fs:[0], ecx
// 005f4e1f  83c434               add esp, 0x34
// 005f4e22  c3                   ret 

struct Empty {};

struct FirstGuard
{
    int* value;
    int mode;
    bool active;
    bool* state;

    FirstGuard(int* p, bool* s)
        : value(p), mode(1), active(true), state(s) {}
    ~FirstGuard();
};

struct SecondGuard
{
    int* value;
    int mode;
    bool active;
    bool* state;

    SecondGuard(int* p, bool* s)
        : value(p), mode(2), active(true), state(s) {}
    ~SecondGuard();
};

extern int __cdecl process(int*, int*, int, Empty, Empty);

int __cdecl reconstruct(int first, int second, int third)
{
    bool state = false;
    Empty empty1;
    Empty empty2;
    FirstGuard firstGuard(&first, &state);
    SecondGuard secondGuard(&second, &state);
    return process(&first, &second, third, empty1, empty2);
}

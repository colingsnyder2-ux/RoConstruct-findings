// from server: 90% by colin
// roc 2007-08 0043e630  unit: Vector3Item  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043e630
//
// 0043e630  53                   push ebx
// 0043e631  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0043e635  56                   push esi
// 0043e636  57                   push edi
// 0043e637  53                   push ebx
// 0043e638  8bf1                 mov esi, ecx
// 0043e63a  e841eaffff           call 0x43d080
// 0043e63f  83c61c               add esi, 0x1c
// 0043e642  bf03000000           mov edi, 3
// 0043e647  833e00               cmp dword ptr [esi], 0
// 0043e64a  740f                 je 0x43e65b
// 0043e64c  8b06                 mov eax, dword ptr [esi]
// 0043e64e  8d8800010000         lea ecx, [eax + 0x100]
// 0043e654  8b01                 mov eax, dword ptr [ecx]
// 0043e656  8b10                 mov edx, dword ptr [eax]
// 0043e658  53                   push ebx
// 0043e659  ffd2                 call edx
// 0043e65b  83c604               add esi, 4
// 0043e65e  83ef01               sub edi, 1
// 0043e661  75e4                 jne 0x43e647
// 0043e663  5f                   pop edi
// 0043e664  5e                   pop esi
// 0043e665  5b                   pop ebx
// 0043e666  c20400               ret 4

struct Vector3Item {
    void sub_43D080(int);
    void sub_43E630(int);
};

void Vector3Item::sub_43E630(int arg) {
    sub_43D080(arg);
    int* p = reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x1c);
    for (int i = 3; i != 0; --i) {
        if (*p != 0) {
            int* q = reinterpret_cast<int*>(*p + 0x100);
            int* r = reinterpret_cast<int*>(*q);
            typedef void (__thiscall *Fn)(void*, int);
            Fn fn = reinterpret_cast<Fn>(r[0]);
            fn(q, arg);
        }
        ++p;
    }
}

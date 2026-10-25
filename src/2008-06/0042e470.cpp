// from server: 100% by king_originala
// roc 2008-06 0042e470  unit: MyXTPCommandBars  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042e470
//
// 0042e470  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042e474  8b542404             mov edx, dword ptr [esp + 4]
// 0042e478  56                   push esi
// 0042e479  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042e47d  57                   push edi
// 0042e47e  50                   push eax
// 0042e47f  56                   push esi
// 0042e480  52                   push edx
// 0042e481  e85a5a2700           call 0x6a3ee0
// 0042e486  8bf8                 mov edi, eax
// 0042e488  81feed030000         cmp esi, 0x3ed
// 0042e48e  750b                 jne 0x42e49b
// 0042e490  6a10                 push 0x10
// 0042e492  8bcf                 mov ecx, edi
// 0042e494  e8073a2900           call 0x6c1ea0
// 0042e499  8bc7                 mov eax, edi
// 0042e49b  5f                   pop edi
// 0042e49c  5e                   pop esi
// 0042e49d  c20c00               ret 0xc

struct Control {
    void f(int value);
};

struct Base {
    Control* f(int a1, int a2, int a3);
};

struct S : Base {
    Control* f(int a1, int a2, int a3);
};

Control* S::f(int a1, int a2, int a3)
{
    Control* result = Base::f(a1, a2, a3);
    if (a2 == 1005)
        result->f(16);
    return result;
}

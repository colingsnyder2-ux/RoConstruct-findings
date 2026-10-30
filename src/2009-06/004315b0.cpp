// roc 2009-06 004315b0  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004315b0
//
// 004315b0  8b542404             mov edx, dword ptr [esp + 4]
// 004315b4  8b01                 mov eax, dword ptr [ecx]
// 004315b6  8b12                 mov edx, dword ptr [edx]
// 004315b8  8b80e8000000         mov eax, dword ptr [eax + 0xe8]
// 004315be  89542404             mov dword ptr [esp + 4], edx
// 004315c2  ffe0                 jmp eax
// copied from an identical function in another client (function ?f@S@@QAEXPBH@Z)

// from server: 100% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
struct S;
typedef void (__thiscall *Method)(S *, int);

struct Table {
    Method unused[58];
    Method target;
};

struct S {
    Table *table;
    void f(const int *value);
};

void S::f(const int *value)
{
    return table->target(this, *value);
}
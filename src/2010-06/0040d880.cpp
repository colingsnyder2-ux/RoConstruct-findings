// roc 2010-06 0040d880  unit: CIDEBrowserView  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040d880
//
// 0040d880  51                   push ecx
// 0040d881  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 0040d887  8b08                 mov ecx, dword ptr [eax]
// 0040d889  8d1424               lea edx, [esp]
// 0040d88c  52                   push edx
// 0040d88d  50                   push eax
// 0040d88e  8b417c               mov eax, dword ptr [ecx + 0x7c]
// 0040d891  ffd0                 call eax
// 0040d893  85c0                 test eax, eax
// 0040d895  751b                 jne 0x40d8b2
// 0040d897  66833c24ff           cmp word ptr [esp], -1
// 0040d89c  7514                 jne 0x40d8b2
// 0040d89e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040d8a2  8b11                 mov edx, dword ptr [ecx]
// 0040d8a4  b801000000           mov eax, 1
// 0040d8a9  50                   push eax
// 0040d8aa  8b02                 mov eax, dword ptr [edx]
// 0040d8ac  ffd0                 call eax
// 0040d8ae  59                   pop ecx
// 0040d8af  c20400               ret 4
// 0040d8b2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040d8b6  8b11                 mov edx, dword ptr [ecx]
// 0040d8b8  33c0                 xor eax, eax
// 0040d8ba  50                   push eax
// 0040d8bb  8b02                 mov eax, dword ptr [edx]
// 0040d8bd  ffd0                 call eax
// 0040d8bf  59                   pop ecx
// 0040d8c0  c20400               ret 4
// copied from an identical function in another client (function ?invoke@CBrowserView@@QAEXPAUCallback@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Query {
    int (__stdcall **vtable)(Query*, short*);
};

struct Callback {
    virtual void invoke(int value);
};

struct CBrowserView {
    char padding[0xf0];
    Query* query;
    void invoke(Callback* callback);
};

void CBrowserView::invoke(Callback* callback) {
    short value;
    int result;
    if (query->vtable[31](query, &value) == 0 && value == -1)
        result = 1;
    else
        result = 0;
    callback->invoke(result);
}